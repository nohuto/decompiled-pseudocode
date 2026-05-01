/*
 * XREFs of CallerIdentity::ApiPolicyChecker::_ForEachApplicationViewByAppID__lambda_3211724b24d58107645aebd670893ef0___ @ 0x1801C2A90
 * Callers:
 *     ?DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPEAUHWND__@@@Z @ 0x1801C26C4 (-DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPE.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     CoCreateInstance_0 @ 0x1801E31BB (CoCreateInstance_0.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CallerIdentity::ApiPolicyChecker::_ForEachApplicationViewByAppID__lambda_3211724b24d58107645aebd670893ef0___(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *ppv; // rax
  HRESULT Instance_0; // ebx
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 *v8; // rax
  bool v9; // r14
  unsigned int v10; // esi
  __int64 *v11; // rbx
  __int64 v12; // rdi
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  _QWORD *v21; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v22; // [rsp+90h] [rbp+40h] BYREF
  __int64 *v23; // [rsp+98h] [rbp+48h] BYREF

  v21 = 0LL;
  ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v21);
  Instance_0 = CoCreateInstance_0(
                 &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
                 0LL,
                 0x404u,
                 &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
                 (LPVOID *)ppv);
  if ( Instance_0 >= 0 )
  {
    v6 = v21;
    v20 = 0LL;
    v7 = *v21;
    v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v20);
    Instance_0 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, GUID *, __int64 *))(v7 + 24))(
                   v6,
                   &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
                   &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
                   v8);
    if ( Instance_0 >= 0 )
    {
      v23 = 0LL;
      Instance_0 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 **))(*(_QWORD *)v20 + 40LL))(v20, a1, &v23);
      if ( Instance_0 >= 0 )
      {
        v9 = 1;
        v10 = 0;
        for ( Instance_0 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v23 + 24))(v23, &v22);
              Instance_0 >= 0;
              ++v10 )
        {
          if ( !v9 || v10 >= v22 )
            break;
          v11 = v23;
          v19 = 0LL;
          v12 = *v23;
          v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v19);
          Instance_0 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v12 + 32))(
                         v11,
                         v10,
                         &GUID_9ac0b5c8_1484_4c5b_9533_4134a0f97cea,
                         v13);
          if ( Instance_0 >= 0 )
          {
            Instance_0 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 192LL))(v19, *a2);
            if ( Instance_0 >= 0 )
              v9 = *(_DWORD *)*a2 == 0;
          }
          v14 = v19;
          if ( v19 )
          {
            v19 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          }
        }
      }
      v15 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64 *))(*v15 + 16))(v15);
      }
    }
    v16 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  v17 = (__int64)v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return (unsigned int)Instance_0;
}
