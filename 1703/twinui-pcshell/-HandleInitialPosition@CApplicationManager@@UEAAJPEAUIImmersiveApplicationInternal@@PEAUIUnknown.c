/*
 * XREFs of ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@@Z @ 0x18000C8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_HandleViewCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAUIApplicationView@@@Z @ 0x180012860 (-_HandleViewCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIn.c)
 *     ?_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x180012A2C (-_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicat.c)
 *     ?_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180025750 (-_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::HandleInitialPosition(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2,
        struct IUnknown *a3)
{
  HRESULT v6; // edi
  struct IApplicationView *v7; // rbx
  int v8; // eax
  IUnknown **GITSitePtr; // rdi
  void *v10; // rcx
  __int64 v11; // rcx
  void *v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-20h] BYREF
  struct IApplicationView *v16; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  void *ppvOut; // [rsp+78h] [rbp+38h] BYREF

  v17[1] = -2LL;
  v16 = 0LL;
  v6 = CApplicationManager::_HandleViewCreation_EnsureApplicationView(this, a2, &v16);
  v7 = v16;
  if ( v6 >= 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v15 = 0LL;
    if ( (*(int (__fastcall **)(struct IImmersiveApplicationInternal *, __int64 *))(*(_QWORD *)a2 + 504LL))(a2, &v15) >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 192LL))(v15);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xC05,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v8,
          v15);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    ppvOut = 0LL;
    GITSitePtr = (IUnknown **)CWRLObjectWithGITSite::_GetGITSitePtr((char *)this - 160, v17);
    v10 = ppvOut;
    if ( ppvOut )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v6 = IUnknown_QueryService(
           *GITSitePtr,
           &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
           &GUID_ff964f56_8baf_4947_9c46_f227ec68ff34,
           &ppvOut);
    v11 = v17[0];
    if ( v17[0] )
    {
      v17[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *, struct IUnknown *))(*(_QWORD *)ppvOut + 24LL))(
             ppvOut,
             v7,
             a3);
      if ( v6 >= 0 )
        v6 = CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition(
               (CApplicationManager *)((char *)this - 200),
               a2);
    }
    v12 = ppvOut;
    if ( ppvOut )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  if ( v7 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v6;
}
