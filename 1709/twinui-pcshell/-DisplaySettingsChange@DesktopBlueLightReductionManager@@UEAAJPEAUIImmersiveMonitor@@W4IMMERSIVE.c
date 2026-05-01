/*
 * XREFs of ?DisplaySettingsChange@DesktopBlueLightReductionManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180086810
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$DisplaySettingsChange@AEB_NAEA_N@DesktopBlueLightReductionManagerTelemetry@@SAXAEB_NAEA_N@Z @ 0x180086F78 (--$DisplaySettingsChange@AEB_NAEA_N@DesktopBlueLightReductionManagerTelemetry@@SAXAEB_NAEA_N@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4b7ea3d11b6265e9fdfb78b2e903649a___ @ 0x180087028 (Windows--Internal--ComTaskPool--QueueTask__lambda_4b7ea3d11b6265e9fdfb78b2e903649a___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DesktopBlueLightReductionManager::DisplaySettingsChange(__int64 a1, __int64 a2, char a3)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  const char *v7; // r9
  __int64 v8; // rbx
  int v9; // edi
  __int64 result; // rax
  int v11[2]; // [rsp+20h] [rbp-48h]
  _QWORD v12[2]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-30h] BYREF
  char v14; // [rsp+48h] [rbp-20h]
  __int64 v15; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  bool v17; // [rsp+78h] [rbp+10h] BYREF
  int v18; // [rsp+80h] [rbp+18h] BYREF

  v12[1] = -2LL;
  try
  {
    v17 = (a3 & 0x28) != 0;
    LOBYTE(v18) = 0;
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a2 + 40LL))(a2, v12);
    if ( v4 >= 0 )
      LOBYTE(v18) = 1;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD4,
        (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v4);
    DesktopBlueLightReductionManagerTelemetry::DisplaySettingsChange<bool const &,bool &>(&v17, &v18);
    if ( v17 )
    {
      v8 = a1 - 112;
      *(_QWORD *)v11 = a1 - 112;
      if ( a1 != 112 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(a1 - 112 + 172));
        v8 = a1 - 112;
      }
      v13[0] = a1 - 112;
      v13[1] = v12[0];
      v14 = v18;
      v15 = v8;
      if ( v8 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 172));
        v8 = a1 - 112;
      }
      v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_4b7ea3d11b6265e9fdfb78b2e903649a___(
             v6,
             v5,
             *(unsigned int *)(a1 + 92),
             v13);
      if ( v15 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 172), 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v15 + 40) + 64LL))(v15 + 40, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
        v8 = *(_QWORD *)v11;
      }
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xEA,
          (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v9);
      if ( v8 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 172), 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)v11 + 40LL) + 64LL))(
            *(_QWORD *)v11 + 40LL,
            1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xEE,
                           (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                           v7);
  }
  return result;
}
