/*
 * XREFs of ?DisableApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180106700
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1800F1508 (-_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?SetOverrideImmuneApplication@CReportWindowVisibilityChange@@QEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18010B7EC (-SetOverrideImmuneApplication@CReportWindowVisibilityChange@@QEAAJPEAUIImmersiveApplicationInter.c)
 *     WPP_SF_Sdd @ 0x1801121FC (WPP_SF_Sdd.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::DisableApplicationVisibilityOverride(
        CApplicationManager *this,
        struct IImmersiveApplication *a2)
{
  int v4; // edi
  HWND v5; // rdx
  int v6; // ebx
  char v7; // al
  __int64 v9; // [rsp+38h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp-10h]
  __int64 v11; // [rsp+48h] [rbp-8h]
  struct IImmersiveApplicationInternal *v12; // [rsp+78h] [rbp+28h] BYREF
  void *v13; // [rsp+80h] [rbp+30h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  v4 = (**(__int64 (__fastcall ***)(struct IImmersiveApplication *, GUID *, struct IImmersiveApplicationInternal **))a2)(
         a2,
         &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
         &v12);
  if ( v4 >= 0 )
  {
    v4 = CReportWindowVisibilityChange::SetOverrideImmuneApplication(
           (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
           v12);
    if ( v4 >= 0 )
    {
      v13 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
      CApplicationManager::_IWMFromWindow(
        (CApplicationManager *)((char *)this - 184),
        v5,
        &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee,
        &v13);
      (*(void (__fastcall **)(void *, struct IImmersiveApplicationInternal *, _QWORD, __int64))(*(_QWORD *)v13 + 32LL))(
        v13,
        v12,
        *((unsigned int *)this + 160),
        1LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    }
  }
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
  {
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v9);
    v10 = -1LL;
    v11 = -1LL;
    if ( (*(int (__fastcall **)(struct IImmersiveApplication *, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, &v9) >= 0
      && v12
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v6 = v9;
      v7 = (*(__int64 (**)(void))(*(_QWORD *)v12 + 160LL))();
      WPP_SF_Sdd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        12,
        (unsigned int)&WPP_dec5a53844bb36396a136e6751054188_Traceguids,
        v6,
        v7,
        v4);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v9);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return (unsigned int)v4;
}
