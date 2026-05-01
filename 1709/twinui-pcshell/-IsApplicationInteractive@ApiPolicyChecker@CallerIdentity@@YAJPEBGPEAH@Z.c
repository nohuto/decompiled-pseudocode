/*
 * XREFs of ?IsApplicationInteractive@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1801C2594
 * Callers:
 *     ?DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPEAUHWND__@@@Z @ 0x1801C26C4 (-DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPE.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?FindAllApplicationsByAppID@CallerIdentity@@YAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1801C1204 (-FindAllApplicationsByAppID@CallerIdentity@@YAJPEBGPEAPEAUIObjectArray@@@Z.c)
 *     ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1801C23E4 (-IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CallerIdentity::ApiPolicyChecker::IsApplicationInteractive(
        struct IUnknown *this,
        unsigned __int16 *a2,
        struct IObjectArray **a3)
{
  int AllApplicationsByAppID; // ebx
  int *v6; // r8
  bool v7; // r15
  unsigned int v8; // r14d
  __int64 *v9; // rbx
  __int64 v10; // rdi
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rcx
  unsigned int v15; // [rsp+78h] [rbp+48h] BYREF
  __int64 *v16; // [rsp+80h] [rbp+50h] BYREF
  __int64 v17; // [rsp+88h] [rbp+58h] BYREF

  *(_DWORD *)a2 = 0;
  v16 = 0LL;
  AllApplicationsByAppID = CallerIdentity::FindAllApplicationsByAppID(this, (const unsigned __int16 *)&v16, a3);
  if ( AllApplicationsByAppID >= 0 )
  {
    v7 = 1;
    v8 = 0;
    for ( AllApplicationsByAppID = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v16 + 24))(v16, &v15);
          AllApplicationsByAppID >= 0;
          ++v8 )
    {
      if ( !v7 || v8 >= v15 )
        break;
      v9 = v16;
      v17 = 0LL;
      v10 = *v16;
      v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v17);
      AllApplicationsByAppID = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v10 + 32))(
                                 v9,
                                 v8,
                                 &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                                 v11);
      if ( AllApplicationsByAppID >= 0 )
      {
        AllApplicationsByAppID = (*(__int64 (__fastcall **)(__int64, unsigned __int16 *))(*(_QWORD *)v17 + 168LL))(
                                   v17,
                                   a2);
        if ( AllApplicationsByAppID >= 0 )
          v7 = *(_DWORD *)a2 == 0;
      }
      v12 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
  }
  v13 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v13 + 16))(v13);
  }
  if ( AllApplicationsByAppID >= 0
    && !*(_DWORD *)a2
    && (int)CallerIdentity::ApiPolicyChecker::IsAppBeingDebugged(
              (CallerIdentity::ApiPolicyChecker *)this,
              (unsigned __int16 *)&v15,
              v6) >= 0 )
  {
    *(_DWORD *)a2 = v15;
  }
  return (unsigned int)AllApplicationsByAppID;
}
