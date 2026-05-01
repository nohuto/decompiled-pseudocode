/*
 * XREFs of ?Close@CJumpViewExperienceManager@@UEAAJXZ @ 0x1800BD360
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CJumpViewExperienceManager::Close(CJumpViewExperienceManager *this)
{
  __int64 *v2; // rsi
  __int64 v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 90) )
  {
    v2 = (__int64 *)*((_QWORD *)this + 39);
    if ( v2 )
    {
      v11 = 0LL;
      v3 = *v2;
      v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v11);
      if ( (*(int (__fastcall **)(__int64 *, GUID *, GUID *, __int64 *))(v3 + 24))(
             v2,
             &IID_IActiveZBandNotificationForMonitorService,
             &GUID_0f019ffe_0388_4dcf_a2e2_f059a60a5704,
             v4) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 32LL))(v11, *((unsigned int *)this + 90));
      *((_DWORD *)this + 90) = 0;
      v5 = v11;
      if ( v11 )
      {
        v11 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
    }
  }
  if ( *((_DWORD *)this + 88) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 42) + 32LL))(*((_QWORD *)this + 42));
    *((_DWORD *)this + 88) = 0;
    v6 = *((_QWORD *)this + 42);
    if ( v6 )
    {
      *((_QWORD *)this + 42) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  if ( *((_DWORD *)this + 89) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 43) + 32LL))(*((_QWORD *)this + 43));
    *((_DWORD *)this + 89) = 0;
    v7 = *((_QWORD *)this + 43);
    if ( v7 )
    {
      *((_QWORD *)this + 43) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  v8 = *((_QWORD *)this + 40);
  if ( v8 )
  {
    *((_QWORD *)this + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 39);
  if ( v9 )
  {
    *((_QWORD *)this + 39) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return 0LL;
}
