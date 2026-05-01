/*
 * XREFs of ?HandleDeactivation@CCharmsWindowManager@@UEAAXXZ @ 0x18008A720
 * Callers:
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18003DE00 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentCharm@CCharmsWindowManager@@UEBAPEAUHWND__@@XZ @ 0x18008A6F0 (-GetCurrentCharm@CCharmsWindowManager@@UEBAPEAUHWND__@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?s_GetBehaviorCharm@CCharmsWindowManager@@CA?AW4CHARM_WINDOW_VISIBILITY_BEHAVIOR@@PEAUHWND__@@@Z @ 0x18011CC78 (-s_GetBehaviorCharm@CCharmsWindowManager@@CA-AW4CHARM_WINDOW_VISIBILITY_BEHAVIOR@@PEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CCharmsWindowManager::HandleDeactivation(CCharmsWindowManager *this)
{
  __int64 (__fastcall *v2)(CCharmsWindowManager *); // rax
  __int64 CurrentCharm; // rax
  __int64 v4; // rdi
  int BehaviorCharm; // eax
  int v6; // eax
  bool v7; // di
  _QWORD v8[4]; // [rsp+28h] [rbp-20h] BYREF
  void *ppvOut; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(__int64 (__fastcall **)(CCharmsWindowManager *))(*(_QWORD *)this + 56LL);
  if ( v2 == CCharmsWindowManager::GetCurrentCharm )
    CurrentCharm = CCharmsWindowManager::GetCurrentCharm(this);
  else
    CurrentCharm = v2(this);
  v4 = CurrentCharm;
  if ( CurrentCharm )
  {
    BehaviorCharm = CCharmsWindowManager::s_GetBehaviorCharm(CurrentCharm);
    if ( BehaviorCharm )
    {
      v6 = BehaviorCharm - 1;
      if ( v6 )
      {
        if ( v6 == 2 )
        {
          ppvOut = 0LL;
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppvOut);
          if ( IUnknown_QueryService(
                 *((IUnknown **)this - 2),
                 &IID_IImmersiveApplicationManager,
                 &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
                 &ppvOut) >= 0
            && (*(int (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[21].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[21].Ptr) >= 0 )
          {
            (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)ppvOut + 32LL))(ppvOut, v4);
            *((_DWORD *)this + 14) |= 8u;
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppvOut);
        }
      }
      else
      {
        *((_DWORD *)this + 14) |= 4u;
      }
    }
    else if ( (*((_BYTE *)this + 56) & 0xC) == 0 )
    {
      v8[0] = v4;
      v8[1] = 0LL;
      v7 = (*(int (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 8) + 56LL))(*((_QWORD *)this + 8), v8) >= 0;
      if ( (*(int (__fastcall **)(_QWORD))(***((_QWORD ***)this + 3) + 112LL))(**((_QWORD **)this + 3)) >= 0 )
        *((_DWORD *)this + 14) &= ~1u;
      if ( v7 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 64LL))(*((_QWORD *)this + 8));
    }
  }
  *((_DWORD *)this + 14) &= ~2u;
}
