/*
 * XREFs of ??$ExperienceManager_OnViewDestroyed_Params@AEAU_GUID@@@ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAAXAEAU_GUID@@@Z @ 0x1800AFC60
 * Callers:
 *     ?OnViewDestroyed@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800ACA70 (-OnViewDestroyed@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@QuickConnectLoggingProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800A810C (-Provider@QuickConnectLoggingProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::ExperienceManager_OnViewDestroyed_Params<_GUID &>(
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
    LODWORD(v4) = TlgWrite(v4, &unk_1801FA11D, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 3u, &pData);
  }
  return (int)v4;
}
