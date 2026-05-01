/*
 * XREFs of ?OnPositionChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180082130
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetApplicationByFrameProxyInternal@CApplicationManager@@UEAAJPEAUIApplicationFrameProxy@@AEBU_GUID@@PEAPEAX@Z @ 0x1800439E0 (-GetApplicationByFrameProxyInternal@CApplicationManager@@UEAAJPEAUIApplicationFrameProxy@@AEBU_G.c)
 *     ?OnFramePositionChanged@CImmersiveApp@@UEAAJXZ @ 0x18004C210 (-OnFramePositionChanged@CImmersiveApp@@UEAAJXZ.c)
 *     ?GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x180082370 (-GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationFrameService::OnPositionChanged(
        CApplicationFrameService *this,
        struct IApplicationFrame *a2)
{
  CApplicationManager *v3; // rbx
  __int64 (__fastcall *v4)(CApplicationManager *, struct IApplicationFrameProxy *, const struct _GUID *, void **); // rax
  int ApplicationByFrameProxyInternal; // eax
  void (*v6)(void); // rax
  CImmersiveApp *v8; // [rsp+50h] [rbp+10h] BYREF
  struct IApplicationFrameProxy *v9; // [rsp+60h] [rbp+20h] BYREF
  HWND v10; // [rsp+68h] [rbp+28h] BYREF

  if ( *((_DWORD *)this + 36)
    && (*(int (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)a2 + 24LL))(a2, &v10) >= 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
    if ( (int)CApplicationFrameService::GetFrameByWindow((CApplicationFrameService *)((char *)this - 8), v10, &v9) >= 0 )
    {
      v8 = 0LL;
      v3 = (CApplicationManager *)*((_QWORD *)this + 15);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
      v4 = *(__int64 (__fastcall **)(CApplicationManager *, struct IApplicationFrameProxy *, const struct _GUID *, void **))(*(_QWORD *)v3 + 48LL);
      if ( v4 == CApplicationManager::GetApplicationByFrameProxyInternal )
        ApplicationByFrameProxyInternal = CApplicationManager::GetApplicationByFrameProxyInternal(
                                            v3,
                                            v9,
                                            &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                                            (void **)&v8);
      else
        ApplicationByFrameProxyInternal = v4(v3, v9, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, (void **)&v8);
      if ( ApplicationByFrameProxyInternal >= 0 )
      {
        v6 = *(void (**)(void))(*(_QWORD *)v8 + 488LL);
        if ( (char *)v6 == (char *)CImmersiveApp::OnFramePositionChanged )
          CImmersiveApp::OnFramePositionChanged(v8);
        else
          v6();
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  }
  return 0LL;
}
