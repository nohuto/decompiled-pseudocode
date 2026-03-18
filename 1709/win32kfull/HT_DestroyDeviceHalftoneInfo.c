/*
 * XREFs of HT_DestroyDeviceHalftoneInfo @ 0x1C0116804
 * Callers:
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C003DDC0 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x1C003E8A8 (-bDisableHalftone@PDEVOBJ@@QEAAHXZ.c)
 *     HT_DestroyDeviceHalftoneInfoWrap @ 0x1C01167F0 (HT_DestroyDeviceHalftoneInfoWrap.c)
 * Callees:
 *     CleanUpDHI @ 0x1C011682C (CleanUpDHI.c)
 */

__int64 __fastcall HT_DestroyDeviceHalftoneInfo(_DWORD *a1)
{
  if ( a1 && a1[10] == 1414021956 )
    return CleanUpDHI(a1);
  else
    return 0LL;
}
