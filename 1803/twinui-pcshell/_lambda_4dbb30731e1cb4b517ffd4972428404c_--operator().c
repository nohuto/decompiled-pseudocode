/*
 * XREFs of _lambda_4dbb30731e1cb4b517ffd4972428404c_::operator() @ 0x180018490
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e97912004d4e96f3bec37740b2aa1798___::Run @ 0x180018420 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e97912004d4e96f3bec37740b2aa1798___--Run.c)
 * Callees:
 *     ?GetTitleBar@CApplicationFrameWrapper@@UEAAJPEAPEAUIApplicationFrameTitleBar@@@Z @ 0x180016A30 (-GetTitleBar@CApplicationFrameWrapper@@UEAAJPEAPEAUIApplicationFrameTitleBar@@@Z.c)
 *     ?IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEAPEAG@Z @ 0x18001B724 (-IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImm.c)
 *     ?GetShouldShowTitleBarBackButton@CImmersiveApp@@UEAA_NXZ @ 0x18004C5B0 (-GetShouldShowTitleBarBackButton@CImmersiveApp@@UEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_4dbb30731e1cb4b517ffd4972428404c_::operator()(struct IImmersiveApplication **a1)
{
  CApplicationFrameWrapper *v2; // rbx
  __int64 (__fastcall *v3)(CApplicationFrameWrapper *, struct IApplicationFrameTitleBar **); // rax
  int TitleBar; // eax
  struct IImmersiveApplicationManagerSafeForSyncCallouts *v5; // rdx
  int NormalDisplayNameWithTitleSafe; // eax
  void *v7; // rbx
  bool (__fastcall *v8)(CImmersiveApp *__hidden); // rax
  bool ShouldShowTitleBarBackButton; // al
  bool v10; // di
  __int64 v11; // r8
  CImmersiveApp *v12; // rcx
  struct IApplicationFrameTitleBar *v13; // rcx
  LPVOID pv; // [rsp+28h] [rbp-18h] BYREF
  __int64 v15; // [rsp+30h] [rbp-10h]
  __int64 v16; // [rsp+38h] [rbp-8h]
  struct IApplicationFrameTitleBar *v17; // [rsp+60h] [rbp+20h] BYREF
  CImmersiveApp *v18; // [rsp+68h] [rbp+28h] BYREF

  v17 = 0LL;
  v2 = (CApplicationFrameWrapper *)*((_QWORD *)*a1 + 15);
  v3 = *(__int64 (__fastcall **)(CApplicationFrameWrapper *, struct IApplicationFrameTitleBar **))(*(_QWORD *)v2 + 144LL);
  if ( v3 == CApplicationFrameWrapper::GetTitleBar )
    TitleBar = CApplicationFrameWrapper::GetTitleBar(v2, &v17);
  else
    TitleBar = v3(v2, &v17);
  if ( TitleBar >= 0 )
  {
    pv = 0LL;
    v15 = -1LL;
    v16 = -1LL;
    NormalDisplayNameWithTitleSafe = IImmersiveApplication_GetNormalDisplayNameWithTitleSafe(
                                       a1[1],
                                       v5,
                                       (unsigned __int16 **)&pv);
    v7 = pv;
    if ( NormalDisplayNameWithTitleSafe >= 0 )
      (*(void (__fastcall **)(struct IApplicationFrameTitleBar *, LPVOID))(*(_QWORD *)v17 + 24LL))(v17, pv);
    v18 = 0LL;
    if ( (**(int (__fastcall ***)(struct IImmersiveApplication *, GUID *, CImmersiveApp **))a1[1])(
           a1[1],
           &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
           &v18) >= 0 )
    {
      AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      v8 = *(bool (__fastcall **)(CImmersiveApp *__hidden))(*(_QWORD *)v18 + 216LL);
      if ( v8 == CImmersiveApp::GetShouldShowTitleBarBackButton )
        ShouldShowTitleBarBackButton = CImmersiveApp::GetShouldShowTitleBarBackButton(v18);
      else
        ShouldShowTitleBarBackButton = v8(v18);
      v10 = ShouldShowTitleBarBackButton;
      ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      if ( v10 )
        v11 = 128LL;
      else
        v11 = 0LL;
      (*(void (__fastcall **)(struct IApplicationFrameTitleBar *, __int64, __int64))(*(_QWORD *)v17 + 104LL))(
        v17,
        128LL,
        v11);
    }
    v12 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( v7 )
    {
      CoTaskMemFree(v7);
      pv = 0LL;
    }
    v15 = 0LL;
    v16 = 0LL;
  }
  v13 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(struct IApplicationFrameTitleBar *))(*(_QWORD *)v13 + 16LL))(v13);
  }
}
