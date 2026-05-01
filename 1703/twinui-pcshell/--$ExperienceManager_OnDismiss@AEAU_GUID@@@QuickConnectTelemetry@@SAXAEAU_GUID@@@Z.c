/*
 * XREFs of ??$ExperienceManager_OnDismiss@AEAU_GUID@@@QuickConnectTelemetry@@SAXAEAU_GUID@@@Z @ 0x1800AF978
 * Callers:
 *     ?OnDismiss@CQuickConnectExperienceManager@@UEAAJXZ @ 0x1800AC690 (-OnDismiss@CQuickConnectExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@QuickConnectLoggingProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800A810C (-Provider@QuickConnectLoggingProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall QuickConnectTelemetry::ExperienceManager_OnDismiss<_GUID &>(__int128 *a1)
{
  const struct _TlgProvider_t *v2; // rax
  __int128 v3; // xmm0
  __int128 v5; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  __int128 *v7; // [rsp+60h] [rbp-28h]
  int v8; // [rsp+68h] [rbp-20h]
  int v9; // [rsp+6Ch] [rbp-1Ch]

  v2 = QuickConnectLoggingProvider::Provider();
  if ( *(_DWORD *)v2 > 5u
    && (*((_QWORD *)v2 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v2 + 3) & 0x200000000000LL) == *((_QWORD *)v2 + 3) )
  {
    v3 = *a1;
    v9 = 0;
    v7 = &v5;
    v5 = v3;
    v8 = 16;
    LODWORD(v2) = TlgWrite(v2, &unk_1801FA1F5, 0LL, 0LL, 3u, &pData);
  }
  return (int)v2;
}
