/*
 * XREFs of GreGetDCDpiScaleValue @ 0x1C0082CD4
 * Callers:
 *     BitBltSysBmp @ 0x1C0082AFC (BitBltSysBmp.c)
 *     NtGdiGetDCDpiScaleValue @ 0x1C0082CC0 (NtGdiGetDCDpiScaleValue.c)
 *     NtGdiCreateDIBSection @ 0x1C0099DE0 (NtGdiCreateDIBSection.c)
 *     GreCreateDIBitmapReal @ 0x1C009A300 (GreCreateDIBitmapReal.c)
 *     FixHDCBITSBmpEx @ 0x1C0112F44 (FixHDCBITSBmpEx.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 */

__int64 __fastcall GreGetDCDpiScaleValue(HDC a1)
{
  __int64 v1; // rcx
  DC *v2; // rbx
  unsigned int v3; // edi
  int v4; // eax
  __int64 v5; // rbx
  DC *v7; // [rsp+20h] [rbp-10h] BYREF
  int v8; // [rsp+28h] [rbp-8h]
  unsigned int v9; // [rsp+2Ch] [rbp-4h]
  unsigned int v10; // [rsp+48h] [rbp+18h] BYREF

  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  XDCOBJ::vLock(&v7, a1);
  v2 = v7;
  v3 = 1;
  if ( v7 )
  {
    v4 = *((_DWORD *)v7 + 134);
    if ( (v4 & 1) != 0 && (v4 & 2) == 0 && (unsigned int)bFToL(v1, &v10, 6LL) )
      v3 = v10;
    if ( v2 )
    {
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v7);
      v10 = 0;
      v5 = *(_QWORD *)v7;
      HmgDecrementExclusiveReferenceCountEx(v7, v9, &v10);
      if ( v10 )
        bDeleteDCInternalEx(v5, 0LL);
    }
  }
  return v3;
}
