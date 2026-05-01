/*
 * XREFs of Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___lambda_3bfb5a602b85e7686ece1d2b25427cc2__2__1_::Invoke @ 0x1800653D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18003A88C (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___lambda_3bfb5a602b85e7686ece1d2b25427cc2__2__1_::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  char v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v5 = *(_QWORD *)(a1 + 24);
  v13 = 0LL;
  if ( v5
    && ((*(void (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL))(
          v5,
          &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
          &v13),
        v13) )
  {
    if ( (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)a3 + 48LL))(a3, &v12) >= 0 )
    {
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v8 = *(_QWORD *)(a1 + 16);
      v9 = *(_QWORD *)(v8 + 136);
      if ( v9 )
      {
        LOBYTE(v7) = v12 != 0;
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 512LL))(
          v9,
          (v8 + 8) & -(__int64)(v8 != 0),
          v7);
      }
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    }
    v10 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  else
  {
    v3 = -2147023728;
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(2147943568LL);
  }
  return v3;
}
