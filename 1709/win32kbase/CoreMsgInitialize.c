/*
 * XREFs of CoreMsgInitialize @ 0x1C0086F68
 * Callers:
 *     DriverEntry @ 0x1C01DE690 (DriverEntry.c)
 * Callees:
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     ?Initialize@RegistrarClient@CoreMessagingK@@SAXXZ @ 0x1C0087194 (-Initialize@RegistrarClient@CoreMessagingK@@SAXXZ.c)
 *     ?Initialize@EntryLock@CoreMessagingK@@SAJXZ @ 0x1C0088AA8 (-Initialize@EntryLock@CoreMessagingK@@SAJXZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C0155D80 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 *     TraceLoggingRegisterEx @ 0x1C01C4184 (TraceLoggingRegisterEx.c)
 */

__int64 CoreMsgInitialize()
{
  const GUID *v0; // r9
  int v1; // ebx
  const GUID *v2; // r9
  int v4; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  if ( CoreMessagingK::EntryLock::s_Initialized )
    CoreMessagingK::Runtime::BugCheck(1LL, 0LL, 0LL);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C0188C40, 0LL, 0LL);
  if ( dword_1C0188C40 > 5u )
    TlgWrite((TraceLoggingHProvider)&dword_1C0188C40, &unk_1C016C145, 0LL, v0, 2u, &pData);
  v1 = CoreMessagingK::EntryLock::Initialize();
  if ( v1 >= 0 )
    CoreMessagingK::RegistrarClient::Initialize();
  v4 = v1;
  if ( dword_1C0188C40 > 5u )
  {
    v8 = 0;
    v6 = &v4;
    v7 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0188C40, &unk_1C016C11E, 0LL, v2, 3u, &pData);
  }
  return (unsigned int)v1;
}
