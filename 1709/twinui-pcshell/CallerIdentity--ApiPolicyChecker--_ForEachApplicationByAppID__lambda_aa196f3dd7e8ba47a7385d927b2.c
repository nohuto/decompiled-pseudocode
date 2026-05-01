/*
 * XREFs of CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_aa196f3dd7e8ba47a7385d927b222f3d___ @ 0x1801C2C60
 * Callers:
 *     ?ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity@@YAJPEBG@Z @ 0x1801C27E4 (-ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?FindAllApplicationsByAppID@CallerIdentity@@YAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1801C1204 (-FindAllApplicationsByAppID@CallerIdentity@@YAJPEBGPEAPEAUIObjectArray@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_aa196f3dd7e8ba47a7385d927b222f3d___(
        struct IUnknown *a1,
        __int64 a2,
        struct IObjectArray **a3)
{
  int AllApplicationsByAppID; // ebx
  char v5; // r14
  unsigned int v6; // esi
  __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 *v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 *v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v18; // [rsp+38h] [rbp-18h] BYREF
  HWND hWnd[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+90h] [rbp+40h] BYREF
  __int64 *v21; // [rsp+98h] [rbp+48h] BYREF

  v21 = 0LL;
  AllApplicationsByAppID = CallerIdentity::FindAllApplicationsByAppID(a1, (const unsigned __int16 *)&v21, a3);
  if ( AllApplicationsByAppID >= 0 )
  {
    v5 = 1;
    v6 = 0;
    for ( AllApplicationsByAppID = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v21 + 24))(v21, &v20);
          AllApplicationsByAppID >= 0;
          ++v6 )
    {
      if ( !v5 || v6 >= v20 )
        break;
      v7 = v21;
      v18 = 0LL;
      v8 = *v21;
      v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v18);
      AllApplicationsByAppID = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v8 + 32))(
                                 v7,
                                 v6,
                                 &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                                 v9);
      if ( AllApplicationsByAppID >= 0 )
      {
        v10 = v18;
        v17 = 0LL;
        v11 = *v18;
        v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v17);
        AllApplicationsByAppID = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, GUID *, __int64 *))(v11 + 24))(
                                   v10,
                                   0LL,
                                   &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                                   v12);
        if ( AllApplicationsByAppID >= 0 )
        {
          AllApplicationsByAppID = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v17 + 32LL))(v17, hWnd);
          if ( AllApplicationsByAppID >= 0 )
          {
            **(_BYTE **)(a2 + 8) = GetPropW(hWnd[0], L"PROP_APPWINDOW_BLOCK_UNTRUSTED_LAUNCHES") != 0LL;
            v5 = **(_BYTE **)(a2 + 8);
          }
        }
        v13 = v17;
        if ( v17 )
        {
          v17 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
      v14 = (__int64)v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
  }
  v15 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v15 + 16))(v15);
  }
  return (unsigned int)AllApplicationsByAppID;
}
