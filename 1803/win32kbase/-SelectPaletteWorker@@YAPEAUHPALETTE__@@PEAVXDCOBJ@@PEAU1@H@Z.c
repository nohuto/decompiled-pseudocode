/*
 * XREFs of ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C003F7FC
 * Callers:
 *     GreSelectPalette @ 0x1C003F790 (GreSelectPalette.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00334E0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00335D0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0033650 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C003E2BC (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C003E398 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1C003E440 (-vMakeNoXlate@XEPALOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C003F93C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 */

HPALETTE __fastcall SelectPaletteWorker(struct XDCOBJ *a1, HPALETTE a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // r8d
  _QWORD *v9; // r9
  struct OBJECT *v10; // rbx
  HPALETTE v11; // rdi
  __int64 v13; // r14
  int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // r8d
  struct _ERESOURCE *v19; // [rsp+20h] [rbp-28h] BYREF
  struct OBJECT *v20; // [rsp+50h] [rbp+8h] BYREF
  __int64 v21; // [rsp+68h] [rbp+20h] BYREF

  v19 = (struct _ERESOURCE *)ghsemPalette;
  EngAcquireSemaphore(ghsemPalette);
  EPALOBJ::EPALOBJ((EPALOBJ *)&v20, a2);
  v9 = *(_QWORD **)a1;
  v10 = v20;
  if ( !*(_QWORD *)a1 || !v20 || (*((_DWORD *)v20 + 6) & 0x100) == 0 )
    goto LABEL_18;
  if ( !a3 )
  {
    hForePID = (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v7);
    hForePalette = a2;
    v9 = *(_QWORD **)a1;
  }
  v11 = (HPALETTE)v9[11];
  if ( v11 != a2 )
  {
    v21 = v9[12];
    if ( v10 == ppalDefault )
      goto LABEL_12;
    v13 = v9[6];
    if ( *((_QWORD *)v10 + 6) == v13 )
      goto LABEL_12;
    if ( !*((_DWORD *)v10 + 14) )
    {
      XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v20);
      *((_QWORD *)v10 + 6) = v13;
LABEL_12:
      GreAcquireHmgrSemaphore(v7, v6, v8);
      XEPALOBJ::vRemoveFromList((XEPALOBJ *)&v21, a1, v14);
      *(_QWORD *)(*(_QWORD *)a1 + 88LL) = a2;
      *(_QWORD *)(*(_QWORD *)a1 + 96LL) = v10;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 0xFu;
      v15 = *(_QWORD *)(*(_QWORD *)a1 + 504LL);
      if ( v15 && v10 != ppalDefault )
        *(_QWORD *)(v15 + 176) = a2;
      XEPALOBJ::vAddToList((XEPALOBJ *)&v20, a1);
      GreReleaseHmgrSemaphore(v17, v16, v18);
      goto LABEL_7;
    }
LABEL_18:
    v11 = 0LL;
  }
LABEL_7:
  if ( v10 )
    HmgDecrementShareReferenceCountEx(v10, 0LL);
  SEMOBJ::vUnlock(&v19, v6, v8);
  return v11;
}
