/*
 * XREFs of CoreMsgUninitialize @ 0x1C00761E0
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0075CD0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CoreMsgUninitialize(__int64 a1, __int64 a2, __int64 a3, const GUID *a4)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  NTSTATUS result; // eax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( CoreMessagingK::EntryLock::s_Initialized )
  {
    if ( dword_1C0188C40 > 5u )
      TlgWrite((TraceLoggingHProvider)&dword_1C0188C40, &unk_1C016C0FC, 0LL, a4, 2u, &pData);
    v4 = CoreMessagingK::BufferCache::s_FreeList;
    CoreMessagingK::BufferCache::s_FreeList = 0LL;
    if ( v4 )
    {
      do
      {
        v5 = (_QWORD *)v4[1];
        ExFreePoolWithTag(v4, 0x43424D43u);
        v4 = v5;
      }
      while ( v5 );
    }
    if ( CoreMessagingK::ServerPorts::s_CallbackRegistration )
    {
      ExUnregisterCallback(CoreMessagingK::ServerPorts::s_CallbackRegistration);
      CoreMessagingK::ServerPorts::s_CallbackRegistration = 0LL;
      ObfDereferenceObject(CoreMessagingK::ServerPorts::s_CallbackObject);
      CoreMessagingK::ServerPorts::s_CallbackObject = 0LL;
    }
    if ( CoreMessagingK::RegistrarClient::s_Port )
    {
      ZwClose(CoreMessagingK::RegistrarClient::s_Port);
      CoreMessagingK::RegistrarClient::s_Port = 0LL;
    }
    if ( Mutex )
    {
      ExFreePoolWithTag(Mutex, 0x4C454D43u);
      Mutex = 0LL;
    }
    CoreMessagingK::EntryLock::s_Initialized = 0;
    if ( dword_1C0188C40 > 5u )
      TlgWrite((TraceLoggingHProvider)&dword_1C0188C40, &unk_1C016C0DB, 0LL, a4, 2u, &pData);
    result = EtwUnregister(qword_1C0188C60);
    qword_1C0188C60 = 0LL;
    dword_1C0188C40 = 0;
  }
  return result;
}
