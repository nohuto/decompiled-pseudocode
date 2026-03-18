/*
 * XREFs of ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C0042464
 * Callers:
 *     GreSelectPalette @ 0x1C0042400 (GreSelectPalette.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0037A88 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037AD0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0037B60 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00425A4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0059C78 (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0059D48 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1C0059DF0 (-vMakeNoXlate@XEPALOBJ@@QEAAXXZ.c)
 */

HPALETTE __fastcall SelectPaletteWorker(struct XDCOBJ *a1, HPALETTE a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rcx
  HPALETTE v11; // rdi
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rcx
  HSEMAPHORE v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  v16 = ghsemPalette;
  EngAcquireSemaphore(ghsemPalette);
  EPALOBJ::EPALOBJ((EPALOBJ *)&v17, a2);
  v9 = v17;
  if ( !*(_QWORD *)a1 || !v17 || (*(_DWORD *)(v17 + 24) & 0x100) == 0 )
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
    v18 = *(_QWORD *)(v10 + 96);
    if ( (PVOID)v9 == WPP_MAIN_CB.Reserved )
      goto LABEL_12;
    v13 = *(_QWORD *)(v10 + 48);
    if ( *(_QWORD *)(v9 + 48) == v13 )
      goto LABEL_12;
    if ( !*(_DWORD *)(v9 + 56) )
    {
      XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v17);
      *(_QWORD *)(v9 + 48) = v13;
LABEL_12:
      GreAcquireHmgrSemaphore(v10, v6, v8);
      XEPALOBJ::vRemoveFromList((XEPALOBJ *)&v18, a1);
      *(_QWORD *)(*(_QWORD *)a1 + 88LL) = a2;
      *(_QWORD *)(*(_QWORD *)a1 + 96LL) = v9;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 0xFu;
      v14 = *(_QWORD *)(*(_QWORD *)a1 + 512LL);
      if ( v14 && (PVOID)v9 != WPP_MAIN_CB.Reserved )
        *(_QWORD *)(v14 + 176) = a2;
      XEPALOBJ::vAddToList((XEPALOBJ *)&v17, a1);
      GreReleaseHmgrSemaphore(v15);
      goto LABEL_7;
    }
LABEL_18:
    v11 = 0LL;
  }
LABEL_7:
  if ( v9 )
    HmgDecrementShareReferenceCount(v9);
  SEMOBJ::vUnlock((PERESOURCE *)&v16);
  return v11;
}
