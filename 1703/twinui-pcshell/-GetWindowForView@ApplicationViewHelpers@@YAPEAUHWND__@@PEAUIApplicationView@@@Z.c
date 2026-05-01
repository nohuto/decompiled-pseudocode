/*
 * XREFs of ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18017F5E8
 * Callers:
 *     ?QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ @ 0x18007CEB0 (-QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewHelpers::GetWindowForView(
        int (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IApplicationView *a2)
{
  int (__fastcall **v2)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  __int64 *v4; // rax
  int (__fastcall **v5)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  __int64 *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 *v9; // rax
  int v10; // eax
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  __int64 *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rbx
  _QWORD v20[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v21; // [rsp+60h] [rbp+20h] BYREF
  _QWORD *v22; // [rsp+68h] [rbp+28h] BYREF
  __int64 v23; // [rsp+70h] [rbp+30h] BYREF
  __int64 v24; // [rsp+78h] [rbp+38h] BYREF

  v2 = *this;
  v20[0] = 0LL;
  v24 = 0LL;
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v24);
  if ( (*v2)((ApplicationViewHelpers *)this, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, v4) < 0 )
  {
    v23 = 0LL;
    v5 = *this;
    v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v23);
    if ( (*v5)((ApplicationViewHelpers *)this, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, v6) >= 0 )
    {
      v22 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v23 + 24LL))(v23, &v22) >= 0 )
      {
        v7 = v22;
        v21 = 0LL;
        v8 = *v22;
        v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v21);
        v10 = (*(__int64 (__fastcall **)(_QWORD *, __int64, GUID *, __int64 *))(v8 + 24))(
                v7,
                5LL,
                &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                v9);
        if ( v10 == -2147023728 )
        {
          v11 = v22;
          v12 = *v22;
          v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v21);
          v10 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, GUID *, __int64 *))(v12 + 24))(
                  v11,
                  0LL,
                  &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                  v13);
        }
        if ( v10 >= 0 )
          (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v21 + 32LL))(v21, v20);
        v14 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
      v15 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
      }
    }
    v16 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v24 + 24LL))(v24, v20);
  }
  v17 = v24;
  v18 = v20[0];
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return v18;
}
