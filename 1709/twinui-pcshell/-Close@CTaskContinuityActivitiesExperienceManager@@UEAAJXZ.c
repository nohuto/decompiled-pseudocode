/*
 * XREFs of ?Close@CTaskContinuityActivitiesExperienceManager@@UEAAJXZ @ 0x1800AB4E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTaskContinuityActivitiesExperienceManager::Close(CTaskContinuityActivitiesExperienceManager *this)
{
  __int64 *v2; // rsi
  __int64 v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 64) )
  {
    v2 = (__int64 *)*((_QWORD *)this + 33);
    if ( v2 )
    {
      v8 = 0LL;
      v3 = *v2;
      v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v8);
      if ( (*(int (__fastcall **)(__int64 *, GUID *, GUID *, __int64 *))(v3 + 24))(
             v2,
             &IID_IActiveZBandNotificationForMonitorService,
             &GUID_0f019ffe_0388_4dcf_a2e2_f059a60a5704,
             v4) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 32LL))(v8, *((unsigned int *)this + 64));
      *((_DWORD *)this + 64) = 0;
      v5 = v8;
      if ( v8 )
      {
        v8 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
    }
  }
  v6 = *((_QWORD *)this + 6);
  if ( v6 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return 0LL;
}
