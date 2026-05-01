/*
 * XREFs of ??$ExperienceManager_ShowContactCard_Guid@AEAU_GUID@@@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXAEAU_GUID@@@Z @ 0x1800C8168
 * Callers:
 *     ?ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@ApplicationModel@Windows@@URect@Foundation@6@W4Placement@Popups@UI@6@PEAUIContactCardOptions@456@ME@Z @ 0x1800C49A0 (-ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@Applicatio.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@QuickConnectLoggingProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800C0D60 (-Provider@QuickConnectLoggingProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall QuickConnectTelemetry::ExperienceManager_ShowContactCard::ExperienceManager_ShowContactCard_Guid<_GUID &>(
        __int64 a1,
        __int128 *a2)
{
  const struct _TlgProvider_t *v4; // rax
  __int128 v5; // xmm0
  __int128 v7; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  __int128 *v9; // [rsp+60h] [rbp-28h]
  int v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+6Ch] [rbp-1Ch]

  v4 = QuickConnectLoggingProvider::Provider();
  if ( *(_DWORD *)v4 > 5u
    && (*((_QWORD *)v4 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v4 + 3) & 0x200000000000LL) == *((_QWORD *)v4 + 3) )
  {
    v5 = *a2;
    v11 = 0;
    v9 = &v7;
    v7 = v5;
    v10 = 16;
    LODWORD(v4) = TlgWrite(v4, &unk_18025C263, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 3u, &pData);
  }
  return (int)v4;
}
