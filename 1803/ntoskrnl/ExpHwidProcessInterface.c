/*
 * XREFs of ExpHwidProcessInterface @ 0x1405E34B0
 * Callers:
 *     sub_1405D49A0 @ 0x1405D49A0 (sub_1405D49A0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopGetDeviceInterfaces @ 0x1404901A0 (IopGetDeviceInterfaces.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 *     ExpHwidAuthenticateHardwareId @ 0x1405D415C (ExpHwidAuthenticateHardwareId.c)
 *     ExpHwidGetDeviceProperties @ 0x1405D4308 (ExpHwidGetDeviceProperties.c)
 *     ExpHwidGetDevicePropertyDataFixed @ 0x1405D444C (ExpHwidGetDevicePropertyDataFixed.c)
 *     sub_1405E366C @ 0x1405E366C (sub_1405E366C.c)
 *     sub_1407CA23C @ 0x1407CA23C (sub_1407CA23C.c)
 */

__int64 __fastcall ExpHwidProcessInterface(
        __int64 a1,
        char a2,
        int (__fastcall *a3)(__int64, UNICODE_STRING *, __int64),
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  struct _DEVICE_OBJECT *v6; // rbx
  unsigned int v7; // r13d
  int DeviceInterfaces; // eax
  WCHAR *v9; // rsi
  unsigned int v10; // r14d
  const WCHAR *v11; // r15
  unsigned __int16 Length; // di
  unsigned __int16 i; // cx
  int v14; // eax
  char v16[8]; // [rsp+30h] [rbp-50h] BYREF
  PVOID Object; // [rsp+38h] [rbp-48h] BYREF
  PCWSTR SourceString[2]; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING String1; // [rsp+50h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING String2; // [rsp+70h] [rbp-10h] BYREF

  SourceString[0] = 0LL;
  v6 = 0LL;
  Object = 0LL;
  v7 = 0;
  DeviceInterfaces = IopGetDeviceInterfaces(a1, 0LL, a2 != 0, 0, SourceString, 0LL);
  v9 = (WCHAR *)SourceString[0];
  v10 = DeviceInterfaces;
  if ( DeviceInterfaces < 0 )
  {
LABEL_17:
    v10 = 0;
  }
  else
  {
    v11 = SourceString[0];
    *(_QWORD *)&String2.Length = 0LL;
    String2.Buffer = 0LL;
    if ( *SourceString[0] )
    {
      while ( 1 )
      {
        RtlInitUnicodeString(&DestinationString, v11);
        v16[0] = -1;
        if ( a2 )
        {
          if ( ExpHwidGetDevicePropertyDataFixed(
                 0LL,
                 (__int64)&DestinationString,
                 &DEVPKEY_DeviceInterface_Enabled,
                 17,
                 1u,
                 v16) < 0 )
            goto LABEL_29;
          if ( v16[0] != -1 )
            break;
        }
        Length = _mm_cvtsi128_si32((__m128i)DestinationString);
        String1 = DestinationString;
        if ( Length >= 0xAu )
        {
          String1.Length = 8;
          for ( i = 8; i < Length; String1.Length = i )
          {
            if ( String1.Buffer[(unsigned __int64)i >> 1] == 92 )
              break;
            i += 2;
          }
        }
        if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
          goto LABEL_21;
        v14 = sub_1405E366C(&String1, a4, &Object);
        v6 = (struct _DEVICE_OBJECT *)Object;
        if ( v14 < 0 )
          goto LABEL_21;
        if ( Object )
        {
          if ( (int)ExpHwidGetDeviceProperties((PDEVICE_OBJECT)Object, a5) < 0
            || (int)ExpHwidAuthenticateHardwareId(v6, a5) < 0 )
          {
            goto LABEL_21;
          }
          ObfDereferenceObject(v6);
          v6 = 0LL;
          Object = 0LL;
          if ( a3(a6, &String1, a5) >= 0 )
            String2 = String1;
        }
LABEL_15:
        v11 += ((unsigned __int64)Length >> 1) + 1;
        if ( !*v11 )
        {
          v9 = (WCHAR *)SourceString[0];
          goto LABEL_17;
        }
      }
      if ( (int)sub_1407CA23C(&DestinationString, a5) >= 0 && v7 < 0x14 && a3(a6, 0LL, a5) >= 0 )
        ++v7;
LABEL_29:
      Length = DestinationString.Length;
LABEL_21:
      if ( v6 )
      {
        ObfDereferenceObject(v6);
        v6 = 0LL;
        Object = 0LL;
      }
      goto LABEL_15;
    }
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v10;
}
