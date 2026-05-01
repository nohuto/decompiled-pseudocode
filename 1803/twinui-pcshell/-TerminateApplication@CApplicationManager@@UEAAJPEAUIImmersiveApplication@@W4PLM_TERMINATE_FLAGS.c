/*
 * XREFs of ?TerminateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4PLM_TERMINATE_FLAGS@@PEAW4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@@Z @ 0x18010DCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030CE0 (-GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800F08B0 (--$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImme.c)
 *     CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEachBackwards__lambda_ec20f1c18de424a8cf5f8595593a6052___ @ 0x1801023D4 (CActivationBasedCollection_Microsoft--WRL--ComPtr_IImmersiveApplicationInternal___--ForEachBackw.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::TerminateApplication(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  RTL_SRWLOCK *v8; // rbx
  __int64 (__fastcall *v9)(RTL_SRWLOCK *, struct _GUID *, void **); // rax
  HRESULT Service; // ebx
  bool v11; // bl
  IUnknown *punk; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+38h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-20h] BYREF
  void *ppvOut[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v18; // [rsp+80h] [rbp+20h] BYREF

  ppvOut[1] = (void *)-2LL;
  ppvOut[0] = 0LL;
  v8 = (RTL_SRWLOCK *)(a1 - 288);
  punk = 0LL;
  LODWORD(v18) = 2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&punk);
  v9 = (__int64 (__fastcall *)(RTL_SRWLOCK *, struct _GUID *, void **))*((_QWORD *)v8->Ptr + 4);
  if ( v9 == CWRLObjectWithGITSite::GetSite )
    CWRLObjectWithGITSite::GetSite(v8, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
  else
    v9(v8, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
  Service = IUnknown_QueryService(
              punk,
              (const GUID *const)&SID_ProcessLifetimeManagerControl,
              &GUID_69c083b1_7f6f_490d_9d77_c0219a95b25d,
              ppvOut);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&punk);
  if ( Service >= 0 )
  {
    Service = (*(__int64 (__fastcall **)(void *, __int64, _QWORD, __int64))(*(_QWORD *)ppvOut[0] + 184LL))(
                ppvOut[0],
                a2,
                a3,
                a4);
    if ( Service >= 0 )
    {
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v15 = 0LL;
      v18 = a2;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v18);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      v11 = (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>(
                   a1 - 336,
                   (__int64)&v18,
                   &v15,
                   0LL) >= 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      if ( v11 )
      {
        punk = (IUnknown *)(a1 - 336);
        v14 = v15;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v14);
        CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEachBackwards__lambda_ec20f1c18de424a8cf5f8595593a6052___(
          a1 + 280,
          (__int64)&punk);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      }
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      Service = 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8C3,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)Service);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
  return (unsigned int)Service;
}
