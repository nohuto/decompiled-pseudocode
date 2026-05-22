/*
 * XREFs of ?OnTargetWithFocusChanged@MPCInputProviderBase@@UEAAJPEAUIInputTarget@@0@Z @ 0x180049B00
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18004A1E8 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCInputProviderBase::OnTargetWithFocusChanged(
        MPCInputProviderBase *this,
        struct IInputTarget *a2,
        void (__fastcall ***a3)(struct IInputTarget *, GUID *, __int64))
{
  void (__fastcall **v5)(struct IInputTarget *, GUID *, __int64); // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h]

  v11 = 0LL;
  if ( a3 )
  {
    v5 = *a3;
    v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFocusInputTarget>>(&v11, a2);
    (*v5)((struct IInputTarget *)a3, &GUID_0ffb2569_1e11_4fce_b7f2_9d15d794e042, v6);
    if ( v11 )
    {
      v7 = *((_QWORD *)MPCHolographicInputManager::GetInstance() + 244);
      v12 = v7;
      if ( v7 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
      }
      else
      {
        v8 = 0LL;
      }
      (*(void (__fastcall **)(char *, __int64, __int64))(*((_QWORD *)this - 2) + 56LL))((char *)this - 16, v8, v11);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  v9 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64, struct IInputTarget *))(*(_QWORD *)v9 + 16LL))(v9, a2);
  }
  return 0LL;
}
