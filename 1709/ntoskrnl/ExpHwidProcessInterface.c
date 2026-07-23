/*
 * XREFs of ExpHwidProcessInterface @ 0x14055F97C
 * Callers:
 *     sub_14054EB00 @ 0x14054EB00 (sub_14054EB00.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 *     IopGetDeviceInterfaces @ 0x140519D98 (IopGetDeviceInterfaces.c)
 *     ExpHwidAuthenticateHardwareId @ 0x14054EF30 (ExpHwidAuthenticateHardwareId.c)
 *     ExpHwidGetDeviceProperties @ 0x14054F0F0 (ExpHwidGetDeviceProperties.c)
 *     ExpHwidGetDevicePropertyDataFixed @ 0x14054F234 (ExpHwidGetDevicePropertyDataFixed.c)
 *     sub_14055FB34 @ 0x14055FB34 (sub_14055FB34.c)
 *     sub_14076275C @ 0x14076275C (sub_14076275C.c)
 */

__int64 __fastcall ExpHwidProcessInterface(
        int *a1,
        char a2,
        int (__fastcall *a3)(__int64, UNICODE_STRING *, __int64),
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  struct _DEVICE_OBJECT *v6; // rbx
  unsigned int v7; // r13d
  int DeviceInterfaces; // eax
  PVOID v9; // rsi
  unsigned int v10; // r14d
  const WCHAR *v11; // r15
  unsigned __int16 Length; // di
  unsigned __int16 i; // cx
  int v15; // eax
  char v16[8]; // [rsp+30h] [rbp-50h] BYREF
  PVOID Object; // [rsp+38h] [rbp-48h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING String1; // [rsp+50h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING String2; // [rsp+70h] [rbp-10h] BYREF

  P[0] = 0LL;
  v6 = 0LL;
  Object = 0LL;
  v7 = 0;
  DeviceInterfaces = IopGetDeviceInterfaces(a1, 0LL, a2 != 0, 0, P, 0LL);
  v9 = P[0];
  v10 = DeviceInterfaces;
  if ( DeviceInterfaces >= 0 )
  {
    v11 = (const WCHAR *)P[0];
    *(_QWORD *)&String2.Length = 0LL;
    String2.Buffer = 0LL;
    if ( !*(_WORD *)P[0] )
      goto LABEL_3;
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
      v15 = sub_14055FB34(&String1, a4, &Object);
      v6 = (struct _DEVICE_OBJECT *)Object;
      if ( v15 < 0 )
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
LABEL_18:
      v11 += ((unsigned __int64)Length >> 1) + 1;
      if ( !*v11 )
      {
        v9 = P[0];
        goto LABEL_20;
      }
    }
    if ( (int)sub_14076275C(&DestinationString, a5) >= 0 && v7 < 0x14 && a3(a6, 0LL, a5) >= 0 )
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
    goto LABEL_18;
  }
LABEL_20:
  v10 = 0;
LABEL_3:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v10;
}
