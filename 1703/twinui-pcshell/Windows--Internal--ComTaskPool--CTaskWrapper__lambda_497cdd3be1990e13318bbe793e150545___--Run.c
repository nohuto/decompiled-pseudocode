/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_497cdd3be1990e13318bbe793e150545___::Run @ 0x18002FB20
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_497cdd3be1990e13318bbe793e150545___::Run(
        __int64 a1)
{
  __int64 result; // rax
  unsigned int i; // r14d
  unsigned int j; // esi
  __int64 *v5; // rdi
  __int64 v6; // rbx
  __int64 *v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v15[4]; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v16; // [rsp+90h] [rbp+38h] BYREF
  unsigned int v17; // [rsp+98h] [rbp+40h] BYREF
  _QWORD *v18; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+50h] BYREF

  v15[1] = -2LL;
  result = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 24) + 24LL))(
             *(_QWORD *)(a1 + 24),
             &v17);
  for ( i = 0; i < v17; ++i )
  {
    v14 = 0LL;
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**(_QWORD **)(a1 + 24) + 32LL))(
               *(_QWORD *)(a1 + 24),
               i,
               &GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7,
               &v14);
    if ( (int)result >= 0 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 16) + 24LL))(
                 *(_QWORD *)(a1 + 16),
                 &v16);
      for ( j = 0; j < v16; ++j )
      {
        v18 = 0LL;
        v5 = *(__int64 **)(a1 + 16);
        v6 = *v5;
        v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v18);
        result = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v6 + 32))(
                   v5,
                   j,
                   &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                   v7);
        if ( (int)result >= 0 )
        {
          v19 = 0LL;
          v8 = v18;
          v9 = *v18;
          v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v19);
          result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, GUID *, __int64 *))(v9 + 24))(
                     v8,
                     0LL,
                     &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                     v10);
          if ( (int)result >= 0 )
          {
            (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v19 + 32LL))(v19, v15);
            result = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
                       v14,
                       v18,
                       *(unsigned int *)(a1 + 32),
                       v15[0]);
          }
          v11 = v19;
          if ( v19 )
          {
            v19 = 0LL;
            result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          }
        }
        v12 = (__int64)v18;
        if ( v18 )
        {
          v18 = 0LL;
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    v13 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  return result;
}
