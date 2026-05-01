/*
 * XREFs of ?StealForegroundActivateGlom@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180122CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000A04C (-_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertyS.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180112178 (WPP_SF_.c)
 *     ?_FindAnotherGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@W4FindGlomOption@1@PEAPEAU2@@Z @ 0x180125EB4 (-_FindAnotherGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@W4FindGlomOption@1@PE.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppViewManager::StealForegroundActivateGlom(IUnknown **this, struct IImmersiveApplication *a2)
{
  int AnotherGlom; // edi
  char v5; // si
  RTL_SRWLOCK *v6; // rbx
  __int64 v7; // r8
  _QWORD *v8; // rcx
  struct IImmersiveApplicationInternal *v10; // [rsp+68h] [rbp+38h] BYREF
  __int64 v11; // [rsp+70h] [rbp+40h] BYREF
  PSRWLOCK v12; // [rsp+78h] [rbp+48h]

  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  AnotherGlom = (**(__int64 (__fastcall ***)(struct IImmersiveApplication *, GUID *, struct IImmersiveApplicationInternal **))a2)(
                  a2,
                  &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                  &v10);
  if ( AnotherGlom < 0 )
    goto LABEL_21;
  v5 = 0;
  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  v12 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v10 + 416LL))(v10) )
  {
    v8 = WPP_GLOBAL_Control;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      goto LABEL_14;
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x22u, &WPP_30bd9181394d37182917d8f42fc22ff1_Traceguids);
  }
  else
  {
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    AnotherGlom = CAppViewManager::_FindAnotherGlom(this - 5, v10, v7, &v11, -2LL);
    if ( AnotherGlom >= 0 )
    {
      v5 = 1;
    }
    else
    {
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x21u, &WPP_30bd9181394d37182917d8f42fc22ff1_Traceguids);
      AnotherGlom = -2147024891;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  v8 = WPP_GLOBAL_Control;
LABEL_14:
  if ( v6 )
  {
    ReleaseSRWLockExclusive(v6);
    v8 = WPP_GLOBAL_Control;
  }
  if ( v5 )
  {
    if ( (*((_BYTE *)v8 + 28) & 1) != 0 && *((_BYTE *)v8 + 25) >= 4u )
      WPP_SF_(v8[2], 0x23u, &WPP_30bd9181394d37182917d8f42fc22ff1_Traceguids);
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[21].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[21].Ptr);
    AnotherGlom = CAppViewManager::_TrySwitchToApplication(this - 5, v10, 0LL);
  }
LABEL_21:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  return (unsigned int)AnotherGlom;
}
