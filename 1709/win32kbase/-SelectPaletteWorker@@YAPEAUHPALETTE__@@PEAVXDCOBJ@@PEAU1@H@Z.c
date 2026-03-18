/*
 * XREFs of ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C006EDB4
 * Callers:
 *     GreSelectPalette @ 0x1C006ED50 (GreSelectPalette.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0041464 (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0041540 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1C00415E0 (-vMakeNoXlate@XEPALOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0042C5C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C006EEF8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 */

HPALETTE __fastcall SelectPaletteWorker(struct XDCOBJ *a1, HPALETTE a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct OBJECT *v9; // rbx
  __int64 v10; // rcx
  HPALETTE v11; // rdi
  __int64 v13; // r14
  int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // r8d
  PERESOURCE v19; // [rsp+20h] [rbp-28h] BYREF
  struct OBJECT *v20; // [rsp+50h] [rbp+8h] BYREF
  __int64 v21; // [rsp+68h] [rbp+20h] BYREF

  v19 = ghsemPalette;
  EngAcquireSemaphore((HSEMAPHORE)ghsemPalette);
  EPALOBJ::EPALOBJ((EPALOBJ *)&v20, a2);
  v9 = v20;
  if ( !*(_QWORD *)a1 || !v20 || (*((_DWORD *)v20 + 6) & 0x100) == 0 )
    goto LABEL_18;
  if ( !a3 )
  {
    hForePID = (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v7, v6, v8);
    hForePalette = a2;
  }
  v10 = *(_QWORD *)a1;
  v11 = *(HPALETTE *)(*(_QWORD *)a1 + 88LL);
  if ( v11 != a2 )
  {
    v21 = *(_QWORD *)(v10 + 96);
    if ( v9 == ppalDefault )
      goto LABEL_12;
    v13 = *(_QWORD *)(v10 + 48);
    if ( *((_QWORD *)v9 + 6) == v13 )
      goto LABEL_12;
    if ( !*((_DWORD *)v9 + 14) )
    {
      XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v20, v6, v8);
      *((_QWORD *)v9 + 6) = v13;
LABEL_12:
      GreAcquireHmgrSemaphore(v10, v6, v8);
      XEPALOBJ::vRemoveFromList((XEPALOBJ *)&v21, a1, v14);
      *(_QWORD *)(*(_QWORD *)a1 + 88LL) = a2;
      *(_QWORD *)(*(_QWORD *)a1 + 96LL) = v9;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 0xFu;
      v15 = *(_QWORD *)(*(_QWORD *)a1 + 512LL);
      if ( v15 && v9 != ppalDefault )
        *(_QWORD *)(v15 + 176) = a2;
      XEPALOBJ::vAddToList((XEPALOBJ *)&v20, a1);
      GreReleaseHmgrSemaphore(v17, v16, v18);
      goto LABEL_7;
    }
LABEL_18:
    v11 = 0LL;
  }
LABEL_7:
  if ( v9 )
    HmgDecrementShareReferenceCountEx(v9, 0LL);
  SEMOBJ::vUnlock(&v19);
  return v11;
}
