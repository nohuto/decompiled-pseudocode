/*
 * XREFs of ??$CortanaExperienceManager_ShowDocked_LaunchArgs@AEAPEBG@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXAEAPEBG@Z @ 0x1800A7CA8
 * Callers:
 *     ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800A0B90 (-Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@CortanaProactiveLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18009E2C0 (-Provider@CortanaProactiveLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::CortanaExperienceManager_ShowDocked_LaunchArgs<unsigned short const * &>(
        __int64 a1,
        const WCHAR **a2)
{
  const struct _TlgProvider_t *v4; // rax
  const WCHAR *v5; // r9
  __int64 v6; // rdx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  const WCHAR *v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+5Ch] [rbp-1Ch]

  v4 = CortanaProactiveLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    v5 = &word_18021F3A8;
    LODWORD(v6) = 0;
    if ( *a2 )
    {
      v5 = *a2;
      v6 = -1LL;
      do
        ++v6;
      while ( (*a2)[v6] );
    }
    v9 = v5;
    v10 = 2 * v6 + 2;
    v11 = 0;
    LODWORD(v4) = TlgWrite(v4, &unk_18025A5BF, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 3u, &pData);
  }
  return (int)v4;
}
