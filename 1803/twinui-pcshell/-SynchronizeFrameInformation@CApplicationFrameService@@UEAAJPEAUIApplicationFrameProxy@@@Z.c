/*
 * XREFs of ?SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x180082250
 * Callers:
 *     ?_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18003F370 (-_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicat.c)
 * Callees:
 *     CApplicationFrameService::_FindFrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed___ @ 0x1800811E0 (CApplicationFrameService--_FindFrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed___.c)
 *     ?OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180081540 (-OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationFrameService::SynchronizeFrameInformation(
        CApplicationFrameService *this,
        struct IUnknown *a2)
{
  int FrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed; // esi
  volatile int *v5; // rdx
  _QWORD *v6; // rbx
  struct IApplicationFrame *v7; // rdi
  signed __int64 v8; // rax
  unsigned int v9; // ecx
  signed __int64 v10; // rtt
  _QWORD *v12; // [rsp+50h] [rbp+8h] BYREF
  struct IApplicationFrame *v13; // [rsp+58h] [rbp+10h]

  v12 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  FrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed = CApplicationFrameService::_FindFrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed___(
                                                            (_QWORD *)this - 5,
                                                            a2,
                                                            &v12);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = v12;
  if ( FrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed >= 0 )
  {
    v13 = 0LL;
    v7 = (struct IApplicationFrame *)v12[15];
    if ( v7 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(v12[15]);
      v7 = (struct IApplicationFrame *)v6[15];
    }
    v13 = v7;
    FrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed = CApplicationFrameService::OnChromeOffsetsChanged(
                                                              (CApplicationFrameService *)((char *)this + 8),
                                                              v7);
    if ( v7 )
      (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v6 )
  {
    v8 = v6[9];
    while ( v8 >= 0 )
    {
      if ( (_DWORD)v8 == 0x7FFFFFFF )
        return (unsigned int)FrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed;
      v9 = v8 - 1;
      v10 = v8;
      v8 = _InterlockedCompareExchange64(v6 + 9, v8 - 1, v8);
      if ( v10 == v8 )
        goto LABEL_13;
    }
    v9 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v8 + 16), v5);
LABEL_13:
    if ( !v9 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*v12 + 48LL))(v12, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return (unsigned int)FrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed;
}
