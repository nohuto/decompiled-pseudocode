/*
 * XREFs of ??$CortanaExperienceManager_ShowDocked_LaunchArgs@AEAPEBG@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXAEAPEBG@Z @ 0x18009E64C
 * Callers:
 *     ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800BA790 (-Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@CortanaProactiveLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180098068 (-Provider@CortanaProactiveLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::CortanaExperienceManager_ShowDocked_LaunchArgs<unsigned short const * &>(
        __int64 a1,
        void **a2)
{
  const struct _TlgProvider_t *v4; // rax
  void *v5; // r9
  __int64 v6; // rdx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  void *v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+5Ch] [rbp-1Ch]

  v4 = CortanaProactiveLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    v5 = &unk_1801C6ABC;
    LODWORD(v6) = 0;
    if ( *a2 )
    {
      v5 = *a2;
      v6 = -1LL;
      do
        ++v6;
      while ( *((_WORD *)*a2 + v6) );
    }
    v9 = v5;
    v10 = 2 * v6 + 2;
    v11 = 0;
    LODWORD(v4) = TlgWrite(v4, &unk_1801F84B1, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 3u, &pData);
  }
  return (int)v4;
}
