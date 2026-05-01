/*
 * XREFs of ?ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z @ 0x180106E90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030CE0 (-GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z @ 0x18010F090 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x18010F4CC (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::ForgetApplicationsInPackage(
        CApplicationManager *this,
        const unsigned __int16 *a2)
{
  __int64 i; // rsi
  __int64 v5; // rbx
  __int64 v6; // r8
  const unsigned __int16 *v7; // rax
  __int64 (__fastcall *v8)(RTL_SRWLOCK *, struct _GUID *, void **); // rax
  RTL_SRWLOCK *v9; // rcx
  bool v10; // bl
  __int64 v12; // [rsp+60h] [rbp+30h] BYREF
  IUnknown *punk; // [rsp+70h] [rbp+40h] BYREF
  void *ppvOut; // [rsp+78h] [rbp+48h] BYREF

  LODWORD(v12) = 0;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  for ( i = *((_QWORD *)this + 60); i; --i )
  {
    v12 = *(_QWORD *)(*((_QWORD *)this + 59) + 8 * i - 8);
    v5 = v12;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v12);
    LOBYTE(v6) = 1;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, const unsigned __int16 *, __int64))(*(_QWORD *)v5 + 320LL))(
           v5,
           a2,
           v6) )
    {
      CApplicationManager::_ForgetApplicationNoLock((char *)this - 152, v5, 2LL);
      v7 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
      CApplicationManager::_DeleteApplicationData((CApplicationManager *)((char *)this - 152), v7);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  ppvOut = 0LL;
  punk = 0LL;
  LODWORD(v12) = 2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&punk);
  v8 = *(__int64 (__fastcall **)(RTL_SRWLOCK *, struct _GUID *, void **))(*((_QWORD *)this - 13) + 32LL);
  v9 = (RTL_SRWLOCK *)((char *)this - 104);
  if ( v8 == CWRLObjectWithGITSite::GetSite )
    CWRLObjectWithGITSite::GetSite(v9, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
  else
    v8(v9, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v10 = IUnknown_QueryService(
          punk,
          &GUID_b70e7ce8_5eb0_4e5a_af6c_05e57f1e87a3,
          &GUID_b70e7ce8_5eb0_4e5a_af6c_05e57f1e87a3,
          &ppvOut) >= 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&punk);
  if ( v10 )
    (*(void (__fastcall **)(void *, const unsigned __int16 *))(*(_QWORD *)ppvOut + 56LL))(ppvOut, a2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return 0LL;
}
