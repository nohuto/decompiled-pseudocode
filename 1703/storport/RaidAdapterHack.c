/*
 * XREFs of RaidAdapterHack @ 0x1C0019CA0
 * Callers:
 *     RaDriverAddDevice @ 0x1C0019B00 (RaDriverAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     WPP_SF_D @ 0x1C00307A4 (WPP_SF_D.c)
 *     PortRegistryWriteDeviceKey @ 0x1C005E5BC (PortRegistryWriteDeviceKey.c)
 *     RaDeleteBus @ 0x1C0060774 (RaDeleteBus.c)
 *     RaInitializeBus @ 0x1C00607B0 (RaInitializeBus.c)
 */

__int64 __fastcall RaidAdapterHack(__int64 a1)
{
  __int64 result; // rax
  int v3; // eax
  int v4; // [rsp+30h] [rbp-79h] BYREF
  struct _UNICODE_STRING v5; // [rsp+38h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v7[16]; // [rsp+60h] [rbp-49h] BYREF
  __int64 v8; // [rsp+70h] [rbp-39h]
  unsigned int (__fastcall *v9)(__int64, __int64, _WORD *); // [rsp+A0h] [rbp-9h]
  _WORD v10[32]; // [rsp+B0h] [rbp+7h] BYREF

  v4 = 0;
  memset(v10, 0, sizeof(v10));
  result = RaInitializeBus(v7, *(_QWORD *)(a1 + 24));
  if ( (int)result >= 0 )
  {
    if ( v9(v8, 4LL, v10) >= 0xF )
    {
      if ( v10[0] == 5197 )
      {
        if ( v10[1] != 5632 && (unsigned __int16)(v10[1] + 22528) > 1u )
          return RaDeleteBus(v7);
        RtlInitUnicodeString(&DestinationString, L"Interrupt Management\\MessageSignaledInterruptProperties");
        RtlInitUnicodeString(&v5, L"MSISupported");
        v3 = PortRegistryWriteDeviceKey(
               *(_QWORD *)(a1 + 32),
               (unsigned int)&DestinationString,
               (unsigned int)&v5,
               4,
               (__int64)&v4,
               4);
        if ( v3 < 0
          && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          WPP_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            67LL,
            &WPP_43677b6b8a68310e2fabd5fd066069ea_Traceguids,
            (unsigned int)v3);
        }
      }
      if ( v10[0] == 4318 )
        *(_BYTE *)(a1 + 5452) = 1;
    }
    return RaDeleteBus(v7);
  }
  return result;
}
