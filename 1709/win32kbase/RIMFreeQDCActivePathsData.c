/*
 * XREFs of RIMFreeQDCActivePathsData @ 0x1C000EDD0
 * Callers:
 *     RIMOnDisplayStateChange @ 0x1C000C8F8 (RIMOnDisplayStateChange.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C000F028 (RIMCreatePointerDeviceInfo.c)
 *     ?_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ @ 0x1C0061350 (-_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ.c)
 *     RIMGetQDCActivePathsData @ 0x1C006436C (RIMGetQDCActivePathsData.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C01015C0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFindMonitorForDigitizer @ 0x1C0105F10 (RIMFindMonitorForDigitizer.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0108964 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

__int64 __fastcall RIMFreeQDCActivePathsData(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v4 = a1[1];
    if ( v4 )
      Win32FreePool(v4, a2, a3);
    result = 0LL;
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return result;
}
