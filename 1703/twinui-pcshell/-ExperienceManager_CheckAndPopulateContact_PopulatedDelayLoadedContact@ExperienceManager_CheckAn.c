/*
 * XREFs of ?ExperienceManager_CheckAndPopulateContact_PopulatedDelayLoadedContact@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAAXXZ @ 0x1800AB5F8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5aad080f89fc0f806acb3154381eca88___::Run @ 0x1800B09D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5aad080f89fc0f806acb3154381eca88___--Run.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@QuickConnectLoggingProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800A810C (-Provider@QuickConnectLoggingProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

void __fastcall QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::ExperienceManager_CheckAndPopulateContact_PopulatedDelayLoadedContact(
        QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *this)
{
  const struct _TlgProvider_t *v2; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v2 = QuickConnectLoggingProvider::Provider();
  if ( *(_DWORD *)v2 > 5u
    && (*((_QWORD *)v2 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v2 + 3) & 0x200000000000LL) == *((_QWORD *)v2 + 3) )
  {
    TlgWrite(v2, &unk_1801FA6A6, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 2u, &pData);
  }
}
