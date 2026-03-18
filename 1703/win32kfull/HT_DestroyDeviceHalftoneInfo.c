/*
 * XREFs of HT_DestroyDeviceHalftoneInfo @ 0x1C010CE1C
 * Callers:
 *     ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x1C003202C (-bDisableHalftone@PDEVOBJ@@QEAAHXZ.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0032890 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     HT_DestroyDeviceHalftoneInfoWrap @ 0x1C010CE10 (HT_DestroyDeviceHalftoneInfoWrap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HT_DestroyDeviceHalftoneInfo(_DWORD *a1)
{
  if ( a1 && a1[10] == 1414021956 )
    return CleanUpDHI(a1);
  else
    return 0LL;
}
