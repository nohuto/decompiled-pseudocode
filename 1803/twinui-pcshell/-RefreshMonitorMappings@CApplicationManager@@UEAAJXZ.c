/*
 * XREFs of ?RefreshMonitorMappings@CApplicationManager@@UEAAJXZ @ 0x180109DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180003ECC (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030CE0 (-GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1800F1508 (-_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _lambda_040c5264cfde888b59927d935a6bda9c_::operator() @ 0x180104AA8 (_lambda_040c5264cfde888b59927d935a6bda9c_--operator().c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationManager::RefreshMonitorMappings(CApplicationManager *this)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 (__fastcall *v3)(RTL_SRWLOCK *, struct _GUID *, void **); // rax
  HRESULT v4; // r14d
  int v5; // edi
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 i; // rbx
  HWND v9; // rdx
  unsigned int j; // edi
  __int64 v11; // rbx
  char IsReportingEnabled; // al
  __int64 v13; // rcx
  __int64 v15[2]; // [rsp+30h] [rbp-20h] BYREF
  int v16; // [rsp+40h] [rbp-10h] BYREF
  __int64 v17; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v18; // [rsp+80h] [rbp+30h] BYREF
  IUnknown *punk; // [rsp+88h] [rbp+38h] BYREF
  void *v20; // [rsp+90h] [rbp+40h] BYREF
  void *ppvOut; // [rsp+98h] [rbp+48h] BYREF

  v15[1] = -2LL;
  ppvOut = 0LL;
  v2 = (RTL_SRWLOCK *)((char *)this - 104);
  punk = 0LL;
  v18 = 2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&punk);
  v3 = (__int64 (__fastcall *)(RTL_SRWLOCK *, struct _GUID *, void **))*((_QWORD *)v2->Ptr + 4);
  if ( v3 == CWRLObjectWithGITSite::GetSite )
    CWRLObjectWithGITSite::GetSite(v2, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
  else
    v3(v2, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v4 = IUnknown_QueryService(
         punk,
         (const GUID *const)&SID_ImmersiveShellHookService,
         &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
         &ppvOut);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&punk);
  if ( v4 >= 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v5 = *((_DWORD *)this + 168);
    v15[0] = *((_QWORD *)this + 50);
    v6 = v15[0];
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v15);
    v16 = v5;
    v17 = v6;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v17);
    v7 = *((_QWORD *)this + 60);
    for ( i = 0LL; i < v7; ++i )
    {
      if ( !lambda_040c5264cfde888b59927d935a6bda9c_::operator()(&v16, *(_QWORD *)(*((_QWORD *)this + 59) + 8 * i)) )
        break;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v20 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    CApplicationManager::_IWMFromWindow(
      (CApplicationManager *)((char *)this - 152),
      v9,
      &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee,
      &v20);
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 50) + 32LL))(*((_QWORD *)this + 50), &v18) >= 0 )
    {
      for ( j = 0; j < v18; ++j )
      {
        punk = 0LL;
        v11 = *((_QWORD *)this + 50);
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&punk);
        if ( (*(int (__fastcall **)(__int64, _QWORD, IUnknown **))(*(_QWORD *)v11 + 40LL))(v11, j, &punk) >= 0 )
        {
          IsReportingEnabled = CReportWindowVisibilityChange::IsReportingEnabled(
                                 (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                                 punk,
                                 0LL);
          (*(void (__fastcall **)(void *, _QWORD, _QWORD, IUnknown *))(*(_QWORD *)v20 + 24LL))(
            v20,
            (unsigned int)(IsReportingEnabled != 0) + 1,
            *((unsigned int *)this + 168),
            punk);
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&punk);
      }
    }
    v13 = *((_QWORD *)this + 47);
    if ( v13 )
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 40LL))(v13, ppvOut);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v4;
}
