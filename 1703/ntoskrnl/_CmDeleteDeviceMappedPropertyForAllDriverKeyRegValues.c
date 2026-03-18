/*
 * XREFs of _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x14073EEB8
 * Callers:
 *     _CmDeleteDeviceRegKeyWorker @ 0x14073AC6C (_CmDeleteDeviceRegKeyWorker.c)
 * Callees:
 *     _PnpSetObjectProperty @ 0x1404DDABC (_PnpSetObjectProperty.c)
 */

__int64 __fastcall CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues(__int64 *a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v5; // rdi

  v3 = (__int64 *)&off_14074D050;
  v5 = 13LL;
  do
  {
    PnpSetObjectProperty(a1, a2, 1u, 0LL, 0LL, *v3, 0, 0LL, 0, 0);
    v3 += 4;
    --v5;
  }
  while ( v5 );
  return 0LL;
}
