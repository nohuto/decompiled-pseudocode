/*
 * XREFs of DxEngSyncPaletteTableWithDevice @ 0x1C0251744
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0041C50 (NtGdiDdDDICreateDCFromMemory.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002B684 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C003ED08 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C0251684 (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 */

__int64 __fastcall DxEngSyncPaletteTableWithDevice(HPALETTE a1, __int64 a2)
{
  unsigned int v3; // esi
  _BYTE v5[88]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v6; // [rsp+88h] [rbp+10h] BYREF
  __int64 v7; // [rsp+90h] [rbp+18h] BYREF
  __int64 v8; // [rsp+98h] [rbp+20h] BYREF

  v7 = a2;
  v3 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v6, a1);
  if ( a2 )
  {
    if ( !v6 )
      return v3;
    v8 = *(_QWORD *)(a2 + 48);
    GreAcquireSemaphore(v8);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v5, (struct PDEVOBJ *)&v7);
    v7 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    XEPALOBJ::apalColorSet((XEPALOBJ *)&v6, *(struct PALETTE **)(a2 + 1824));
    v3 = 1;
    SEMOBJ::vUnlock((SEMOBJ *)&v7);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v5);
    SEMOBJ::vUnlock((SEMOBJ *)&v8);
  }
  if ( v6 )
    DEC_SHARE_REF_CNT(v6);
  return v3;
}
