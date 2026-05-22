/*
 * XREFs of ?OnTargetWithFocusChanged@MPCInputProviderBase@@UEAAJPEAUIInputTarget@@0@Z @ 0x18005FFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCInputProviderBase::OnTargetWithFocusChanged(
        MPCInputProviderBase *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  struct IInputTarget *v3; // r9
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h]

  v3 = a3;
  v5 = 0LL;
  v10 = 0LL;
  if ( a3 )
  {
    (**(void (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a3)(
      a3,
      &GUID_0ffb2569_1e11_4fce_b7f2_9d15d794e042,
      &v10);
    v5 = v10;
    if ( v10 )
    {
      MPCHolographicInputManager::GetInstance();
      v7 = *(_QWORD *)(v6 + 3064);
      v11 = v7;
      if ( v7 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
      }
      else
      {
        v8 = 0LL;
      }
      (*(void (__fastcall **)(char *, __int64, __int64))(*((_QWORD *)this - 2) + 56LL))((char *)this - 16, v8, v10);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      v5 = v10;
    }
  }
  if ( v5 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64, struct IInputTarget *, struct IInputTarget *, struct IInputTarget *, __int64))(*(_QWORD *)v5 + 16LL))(
      v5,
      a2,
      a3,
      v3,
      -2LL);
  }
  return 0LL;
}
