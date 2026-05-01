/*
 * XREFs of CallerIdentity::ApiPolicyChecker::_ForEachApplicationViewByAppID__lambda_3211724b24d58107645aebd670893ef0___ @ 0x180176E00
 * Callers:
 *     ?DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPEAUHWND__@@@Z @ 0x180176B8C (-DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPE.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     CoCreateInstance_0 @ 0x180195106 (CoCreateInstance_0.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  bool v9; // si
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  _QWORD *v18; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v19; // [rsp+80h] [rbp+30h] BYREF
  __int64 v20; // [rsp+88h] [rbp+38h] BYREF

  v18 = 0LL;
  ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v18);
  Instance_0 = CoCreateInstance_0(
                 &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
                 0LL,
                 0x404u,
                 &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
                 (LPVOID *)ppv);
  if ( Instance_0 >= 0 )
  {
    v6 = v18;
    v17 = 0LL;
    v7 = *v18;
    v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v17);
    Instance_0 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, GUID *, __int64 *))(v7 + 24))(
                   v6,
                   &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
                   &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
                   v8);
    if ( Instance_0 >= 0 )
    {
      v20 = 0LL;
      Instance_0 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v17 + 40LL))(v17, a1, &v20);
      if ( Instance_0 >= 0 )
      {
        v9 = 1;
        v10 = 0;
        for ( Instance_0 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v20 + 24LL))(v20, &v19);
              Instance_0 >= 0;
              ++v10 )
        {
          if ( !v9 || v10 >= v19 )
            break;
          v16 = 0LL;
          Instance_0 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v20 + 32LL))(
                         v20,
                         v10,
                         &GUID_9ac0b5c8_1484_4c5b_9533_4134a0f97cea,
                         &v16);
          if ( Instance_0 >= 0 )
          {
            Instance_0 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 192LL))(v16, *a2);
            if ( Instance_0 >= 0 )
              v9 = *(_DWORD *)*a2 == 0;
          }
          v11 = v16;
          if ( v16 )
          {
            v16 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          }
        }
      }
      v12 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
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
  return (unsigned int)Instance_0;
}
