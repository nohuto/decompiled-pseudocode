/*
 * XREFs of ACPIDetectCouldExtensionBeInRelation @ 0x1C008DACC
 * Callers:
 *     ACPIDetectEjectDevices @ 0x1C0047D78 (ACPIDetectEjectDevices.c)
 *     ACPIDetectPdoMatch @ 0x1C008D9D8 (ACPIDetectPdoMatch.c)
 *     ACPIDetectFilterMatch @ 0x1C008DA3C (ACPIDetectFilterMatch.c)
 * Callees:
 *     ACPIGet @ 0x1C0002C00 (ACPIGet.c)
 *     ACPIDeviceHasFirmwareDependencies @ 0x1C0022174 (ACPIDeviceHasFirmwareDependencies.c)
 *     ACPIMatchHardwareId @ 0x1C008BAB8 (ACPIMatchHardwareId.c)
 *     ACPIMatchHardwareAddress @ 0x1C008DC9C (ACPIMatchHardwareAddress.c)
 */

__int64 __fastcall ACPIDetectCouldExtensionBeInRelation(__int64 *a1, _DWORD *a2, char a3, char a4, _QWORD *a5)
{
  _QWORD *v5; // r15
  __int64 result; // rax
  char v9; // si
  char v10; // r14
  int v11; // ebx
  __int64 *v12; // rcx
  __int64 v13; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING String2; // [rsp+58h] [rbp-18h] BYREF
  char v15; // [rsp+B0h] [rbp+40h] BYREF

  v5 = a5;
  result = 0LL;
  v13 = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  *a5 = 0LL;
  v9 = 0;
  v10 = 0;
  if ( a3 && (a1[1] & 0x100000000000LL) == 0 || a4 && (a1[1] & 0x200000000000LL) == 0 )
    return 3221225524LL;
  if ( a2 && *a2 )
  {
    if ( (a1[1] & 0x2000100000000000LL) != 0 )
    {
      v9 = 1;
      ACPIGet(a1, 1380204895, -1878785022, 0LL, 0, 0LL, 0LL, (__int64)&v13, 0LL);
    }
    if ( (a1[1] & 0xA00000000000LL) != 0 && !ACPIDeviceHasFirmwareDependencies((__int64)a1) )
    {
      result = ACPIGet(v12, 1145653343, 268960278, 0LL, 0, 0LL, 0LL, (__int64)&String2.Buffer, (__int64)&String2);
      if ( (int)result < 0 )
        return result;
      v10 = 1;
      String2.MaximumLength = String2.Length;
    }
    v11 = 0;
    if ( !*a2 )
      return 0LL;
    while ( 1 )
    {
      v15 = 0;
      if ( v10 )
      {
        if ( (int)ACPIMatchHardwareId(*(PDEVICE_OBJECT *)&a2[2 * v11 + 2], &String2, &v15) < 0 )
          goto LABEL_17;
        if ( v15 )
          goto LABEL_16;
      }
      if ( v9 )
      {
LABEL_16:
        if ( !v9 || (v15 = 0, (int)ACPIMatchHardwareAddress(*(PDEVICE_OBJECT *)&a2[2 * v11 + 2]) >= 0) && v15 )
        {
          *v5 = *(_QWORD *)&a2[2 * v11 + 2];
          return 0LL;
        }
      }
LABEL_17:
      if ( (unsigned int)++v11 >= *a2 )
        return 0LL;
    }
  }
  return result;
}
