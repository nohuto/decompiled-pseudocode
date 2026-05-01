/*
 * XREFs of ?NotifyWindowWithQEvent@CPrivilegedNotificationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001@@_K_J@Z @ 0x18008F0A0
 * Callers:
 *     ?ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@@Z @ 0x180044430 (-ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUII.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _Init_thread_footer @ 0x180098368 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800983C8 (_Init_thread_header.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802E787C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802E787C.c)
 */

__int64 __fastcall CPrivilegedNotificationOperations::NotifyWindowWithQEvent(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // rsi
  RTL_SRWLOCK *v9; // rbx
  __int64 v10; // rdi
  unsigned int v11; // edi
  int Error; // eax
  volatile int *v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = a3;
  if ( __TSS0__1__NotifyWindowWithQEvent_CPrivilegedNotificationOperations__EEAAJPEAUHWND____W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001___K_J_Z_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL) )
  {
    Init_thread_header(&__TSS0__1__NotifyWindowWithQEvent_CPrivilegedNotificationOperations__EEAAJPEAUHWND____W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001___K_J_Z_4HA);
    if ( __TSS0__1__NotifyWindowWithQEvent_CPrivilegedNotificationOperations__EEAAJPEAUHWND____W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001___K_J_Z_4HA == -1 )
    {
      `CPrivilegedNotificationOperations::NotifyWindowWithQEvent'::`2'::WM_SHELLAPPACTIVATE = RegisterWindowMessageW(
                                                                                                L"{9993b795-bae5-4752-a837-faa5985c808d}");
      dword_180435F8C = `CPrivilegedNotificationOperations::NotifyWindowWithQEvent'::`2'::WM_SHELLAPPACTIVATE;
      Init_thread_footer(&__TSS0__1__NotifyWindowWithQEvent_CPrivilegedNotificationOperations__EEAAJPEAUHWND____W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001___K_J_Z_4HA);
    }
  }
  v9 = *(RTL_SRWLOCK **)(a1 + 48);
  v10 = a5 | 0x10;
  if ( (_DWORD)v8 )
    v10 = a5;
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(v9);
  AcquireSRWLockExclusive(v9 + 6);
  EnableIAMAccess(v9[5].Ptr, 1LL);
  if ( (unsigned int)SendEventMessage(a2, dword_180435F74[2 * v8], a4, v10) )
  {
    v11 = 0;
  }
  else
  {
    Error = ResultFromKnownLastError();
    v11 = Error;
    if ( Error < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12D,
        (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        (const char *)(unsigned int)Error);
  }
  EnableIAMAccess(v9[5].Ptr, 0LL);
  ReleaseSRWLockExclusive(v9 + 6);
  if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)((char *)&v9[4].Ptr + 4), v13) )
  {
    (*((void (__fastcall **)(RTL_SRWLOCK *, __int64))v9->Ptr + 9))(v9, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v11;
}
