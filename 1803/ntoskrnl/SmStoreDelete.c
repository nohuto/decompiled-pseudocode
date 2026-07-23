/*
 * XREFs of SmStoreDelete @ 0x14079C3DC
 * Callers:
 *     SmcCacheCleanup @ 0x14079F24C (SmcCacheCleanup.c)
 *     SmcStoreDelete @ 0x14079FBE0 (SmcStoreDelete.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x1401AA900 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x14079C468 (SmStorePhysicalRequestIssue.c)
 */

NTSTATUS __fastcall SmStoreDelete(int a1, int a2)
{
  NTSTATUS result; // eax
  _QWORD SystemInformation[4]; // [rsp+30h] [rbp-20h] BYREF
  int v4; // [rsp+70h] [rbp+20h] BYREF
  int v5; // [rsp+74h] [rbp+24h]
  __int64 v6; // [rsp+78h] [rbp+28h] BYREF

  SystemInformation[0] = 0x400000001LL;
  SystemInformation[1] = &v4;
  result = 0;
  SystemInformation[2] = 8LL;
  v4 = 1;
  v5 = a2;
  if ( !a1 )
    return SmStorePhysicalRequestIssue(DeviceObject, 0, (__int64)&v6);
  if ( a1 == 1 )
    return ZwSetSystemInformation(SystemStoreInformation, SystemInformation, 0x18uLL);
  return result;
}
