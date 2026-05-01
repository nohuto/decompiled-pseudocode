/*
 * XREFs of ?SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x180009230
 * Callers:
 *     ?SetCloak@CClassicWindowManager@@UEAAJPEAUHWND__@@HW4_SET_CLOAK_OPTIONS@@@Z @ 0x180006680 (-SetCloak@CClassicWindowManager@@UEAAJPEAUHWND__@@HW4_SET_CLOAK_OPTIONS@@@Z.c)
 *     _lambda_0d74f069fa796de4b01adcedcd59308d_::operator() @ 0x18000EA38 (_lambda_0d74f069fa796de4b01adcedcd59308d_--operator().c)
 *     ?_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x180013620 (-_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoper.c)
 *     ?SetShellCloak@ViewWrapperBase@@UEAAJW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x18004F9A0 (-SetShellCloak@ViewWrapperBase@@UEAAJW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z.c)
 * Callees:
 *     atexit @ 0x180098A9C (atexit.c)
 *     IsDwmSetWindowAttributePresent @ 0x18009B464 (IsDwmSetWindowAttributePresent.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??$SetShellCloak@HAEAPEAUHWND__@@AEBKAEAK@PrivilegedOperationsTraceLogging@@SAX$$QEAHAEAPEAUHWND__@@AEBKAEAK@Z @ 0x18019D944 (--$SetShellCloak@HAEAPEAUHWND__@@AEBKAEAK@PrivilegedOperationsTraceLogging@@SAX$$QEAHAEAPEAUHWND.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802E787C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802E787C.c)
 */

__int64 __fastcall CPrivilegedPresentationOperations::SetShellCloak(__int64 a1, HWND a2, int a3)
{
  _DWORD *v7; // rcx
  RTL_SRWLOCK *v8; // rbx
  unsigned int v9; // esi
  volatile int *v10; // rdx
  DWORD WindowThreadProcessId; // [rsp+20h] [rbp-20h] BYREF
  LPVOID Context; // [rsp+28h] [rbp-18h] BYREF
  BOOL pvAttribute[4]; // [rsp+30h] [rbp-10h] BYREF
  HWND v14; // [rsp+68h] [rbp+28h] BYREF
  WINBOOL fPending; // [rsp+78h] [rbp+38h] BYREF

  v14 = a2;
  if ( !(unsigned __int8)IsDwmSetWindowAttributePresent() )
    return 0LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`PrivilegedOperationsTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = &qword_180438CE8;
    qword_180438CE8 = &LockScreenServiceLogging::`vftable';
    qword_180438D00 = (struct _TlgProvider_t *)&`PrivilegedOperationsTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_87ebf9cdbe9512ecf246e0e20380c4a1_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180438CE8, qword_180438D00);
    InitOnceComplete(&`PrivilegedOperationsTraceLogging::Instance'::`2'::wrapper, 0, &qword_180438CE8);
  }
  v7 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( v7 && *v7 )
  {
    WindowThreadProcessId = GetWindowThreadProcessId(a2, (LPDWORD)&fPending);
    LODWORD(Context) = a3 == 1;
    ((void (__fastcall *)(LPVOID *, HWND *, DWORD *, WINBOOL *))PrivilegedOperationsTraceLogging::SetShellCloak<int,HWND__ * &,unsigned long const &,unsigned long &>)(
      &Context,
      &v14,
      &WindowThreadProcessId,
      &fPending);
  }
  v8 = *(RTL_SRWLOCK **)(a1 + 48);
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(v8);
  AcquireSRWLockExclusive(v8 + 6);
  EnableIAMAccess(v8[5].Ptr, 1LL);
  pvAttribute[0] = a3 != 0;
  v9 = DwmSetWindowAttribute(a2, 0xDu, pvAttribute, 4u);
  EnableIAMAccess(v8[5].Ptr, 0LL);
  ReleaseSRWLockExclusive(v8 + 6);
  if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)((char *)&v8[4].Ptr + 4), v10) )
  {
    (*((void (__fastcall **)(RTL_SRWLOCK *, __int64))v8->Ptr + 9))(v8, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v9;
}
