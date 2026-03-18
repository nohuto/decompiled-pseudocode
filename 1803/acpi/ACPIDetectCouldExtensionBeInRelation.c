/*
 * XREFs of ACPIDetectCouldExtensionBeInRelation @ 0x1C00791CC
 * Callers:
 *     ACPIDetectEjectDevices @ 0x1C0018144 (ACPIDetectEjectDevices.c)
 *     ACPIDetectFilterMatch @ 0x1C0079394 (ACPIDetectFilterMatch.c)
 *     ACPIDetectPdoMatch @ 0x1C0079420 (ACPIDetectPdoMatch.c)
 * Callees:
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     ACPIDeviceHasFirmwareDependencies @ 0x1C001202C (ACPIDeviceHasFirmwareDependencies.c)
 *     ACPIMatchHardwareAddress @ 0x1C007E4A4 (ACPIMatchHardwareAddress.c)
 *     ACPIMatchHardwareId @ 0x1C007E598 (ACPIMatchHardwareId.c)
 */

__int64 __fastcall ACPIDetectCouldExtensionBeInRelation(__int64 a1, unsigned int *a2, char a3, char a4, _QWORD *a5)
{
  __int64 result; // rax
  char v8; // r14
  char v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int i; // esi
  __int64 v13; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING String2; // [rsp+58h] [rbp-18h] BYREF

  result = 0LL;
  v13 = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  *a5 = 0LL;
  v8 = 0;
  v9 = 0;
  if ( a3 && (*(_QWORD *)(a1 + 8) & 0x100000000000LL) == 0 || a4 && (*(_QWORD *)(a1 + 8) & 0x200000000000LL) == 0 )
    return 3221225524LL;
  if ( a2 && *a2 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    if ( (v10 & 0x2000100000000000LL) != 0 )
    {
      v8 = 1;
      ACPIGet(a1, 0x5244415Fu, -1878785022, 0LL, 0, 0LL, 0LL, (__int64)&v13, 0LL);
      v10 = *(_QWORD *)(a1 + 8);
    }
    if ( (v10 & 0xA00000000000LL) != 0 && !ACPIDeviceHasFirmwareDependencies(a1) )
    {
      result = ACPIGet(v11, 0x4449485Fu, 268960278, 0LL, 0, 0LL, 0LL, (__int64)&String2.Buffer, (__int64)&String2);
      if ( (int)result < 0 )
        return result;
      v9 = 1;
      String2.MaximumLength = String2.Length;
    }
    for ( i = 0; i < *a2; ++i )
    {
      if ( !v9 || (int)ACPIMatchHardwareId(*(PDEVICE_OBJECT *)&a2[2 * i + 2], &String2) >= 0 )
      {
        if ( v8 )
          ACPIMatchHardwareAddress(*(PDEVICE_OBJECT *)&a2[2 * i + 2]);
      }
    }
    return 0LL;
  }
  return result;
}
