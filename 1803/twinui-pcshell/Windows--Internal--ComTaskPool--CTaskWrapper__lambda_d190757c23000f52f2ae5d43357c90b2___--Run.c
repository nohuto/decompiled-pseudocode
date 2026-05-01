/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d190757c23000f52f2ae5d43357c90b2___::Run @ 0x18001DAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAt@AgileCallbackArray@AgileRegistrationList@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x18001EA70 (-GetAt@AgileCallbackArray@AgileRegistrationList@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIImmersiveApplicationNotification@@@WRL@Microsoft@@IEAAKXZ @ 0x180087710 (-InternalRelease@-$ComPtr@UIImmersiveApplicationNotification@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d190757c23000f52f2ae5d43357c90b2___::Run(
        __int64 a1)
{
  AgileRegistrationList::AgileCallbackArray *v2; // rcx
  __int64 (__fastcall *v3)(AgileRegistrationList::AgileCallbackArray *__hidden, unsigned int *); // rax
  __int64 result; // rax
  unsigned int v5; // ebx
  AgileRegistrationList::AgileCallbackArray *v6; // rcx
  __int64 (__fastcall *v7)(AgileRegistrationList::AgileCallbackArray *__hidden, unsigned int, const struct _GUID *, void **); // rax
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rdx
  unsigned int v11; // [rsp+60h] [rbp+8h] BYREF
  void *v12; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(AgileRegistrationList::AgileCallbackArray **)(*(_QWORD *)(a1 + 16) + 16LL);
  v3 = *(__int64 (__fastcall **)(AgileRegistrationList::AgileCallbackArray *__hidden, unsigned int *))(*(_QWORD *)v2 + 24LL);
  if ( v3 == AgileRegistrationList::AgileCallbackArray::GetCount )
  {
    result = (__int64)(*((_QWORD *)v2 + 7) - *((_QWORD *)v2 + 6)) >> 3;
    v11 = result;
  }
  else
  {
    result = v3(v2, &v11);
    if ( (int)result < 0 )
      return result;
    result = v11;
  }
  v5 = 0;
  if ( (_DWORD)result )
  {
    do
    {
      v12 = 0LL;
      v6 = *(AgileRegistrationList::AgileCallbackArray **)(*(_QWORD *)(a1 + 16) + 16LL);
      v7 = *(__int64 (__fastcall **)(AgileRegistrationList::AgileCallbackArray *__hidden, unsigned int, const struct _GUID *, void **))(*(_QWORD *)v6 + 32LL);
      if ( v7 == AgileRegistrationList::AgileCallbackArray::GetAt )
        v8 = AgileRegistrationList::AgileCallbackArray::GetAt(v6, v5, &GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7, &v12);
      else
        v8 = v7(v6, v5, &GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7, &v12);
      if ( v8 >= 0 )
      {
        v9 = 0;
        v10 = *(_QWORD *)(a1 + 16);
        if ( *(_DWORD *)(v10 + 40) )
        {
          do
          {
            (*(void (__fastcall **)(void *, _QWORD, __int64, _QWORD))(*(_QWORD *)v12 + 32LL))(
              v12,
              *(_QWORD *)(v10 + 8),
              *(_QWORD *)(v10 + 32) + 16LL * v9++,
              *(unsigned int *)(v10 + 24));
            v10 = *(_QWORD *)(a1 + 16);
          }
          while ( v9 < *(_DWORD *)(v10 + 40) );
        }
      }
      result = Microsoft::WRL::ComPtr<IImmersiveApplicationNotification>::InternalRelease(&v12);
      ++v5;
    }
    while ( v5 < v11 );
  }
  return result;
}
