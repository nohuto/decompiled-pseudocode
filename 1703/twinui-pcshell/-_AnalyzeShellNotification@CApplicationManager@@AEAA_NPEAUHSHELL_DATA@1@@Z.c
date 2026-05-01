/*
 * XREFs of ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x18001129C
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180008380 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?_ComputeApplicationId@CApplicationManager@@AEAAJPEAUHSHELL_DATA@1@@Z @ 0x180015740 (-_ComputeApplicationId@CApplicationManager@@AEAAJPEAUHSHELL_DATA@1@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_CompactOverlayMode@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800178B4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_CompactOverlayMode@@@wil@@CA.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180017CC8 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?IsClassicApplication@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4ZBID@@@Z @ 0x18002A448 (-IsClassicApplication@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4ZBID@@@Z.c)
 *     ?IsGhostWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002A49C (-IsGhostWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsModernAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002A528 (-IsModernAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002A584 (-IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?GetRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@_N@Z @ 0x18002A5CC (-GetRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@_N@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall CApplicationManager::_AnalyzeShellNotification(
        CApplicationManager **this,
        struct CApplicationManager::HSHELL_DATA *a2)
{
  char v4; // si
  char v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int *v8; // rbx
  HWND v9; // rdx
  bool v10; // r8
  unsigned int v11; // eax
  int v12; // ecx
  RTL_SRWLOCK *v13; // rbx
  __int64 v14; // rcx
  CApplicationManager *v15; // rcx
  HWND v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  HWND v21; // rcx
  bool v22; // al
  __int64 v23; // rax
  HWND RootOwner; // rax
  HWND v25; // rdx
  bool v26; // r8
  __int64 v28; // [rsp+30h] [rbp-50h] BYREF
  int v29; // [rsp+38h] [rbp-48h] BYREF
  __int64 v30; // [rsp+40h] [rbp-40h] BYREF
  int v31; // [rsp+48h] [rbp-38h]
  __int64 v32; // [rsp+50h] [rbp-30h]
  PSRWLOCK v33; // [rsp+58h] [rbp-28h]
  int v34; // [rsp+60h] [rbp-20h] BYREF
  int v35; // [rsp+64h] [rbp-1Ch]
  int v36; // [rsp+68h] [rbp-18h]
  int v37; // [rsp+6Ch] [rbp-14h]

  v32 = -2LL;
  if ( ((*(_QWORD *)a2 - 18LL) & 0xFFFFFFFFFFFFFFFBuLL) == 0 )
    return 1;
  v4 = 0;
  if ( CApplicationManagerUtility::IsGhostWindow(*((HWND *)a2 + 1), (HWND)a2) )
  {
    if ( ((*(_QWORD *)a2 - 17LL) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
    {
      *((_QWORD *)a2 + 5) = *((_QWORD *)a2 + 1);
      *((_QWORD *)a2 + 1) = HungWindowFromGhostWindow();
    }
    else
    {
      *((_QWORD *)a2 + 1) = 0LL;
    }
  }
  v5 = 1;
  if ( (unsigned int)IsShellFrameWindow(*((_QWORD *)a2 + 1)) )
  {
    v34 = 20;
    v35 = 19;
    v36 = 23;
    v37 = 32;
    v6 = 0LL;
    while ( *(_QWORD *)a2 != *(&v34 + v6) )
    {
      if ( (unsigned __int64)++v6 >= 4 )
      {
        *((_QWORD *)a2 + 1) = 0LL;
        break;
      }
    }
  }
  v7 = *((_QWORD *)a2 + 1);
  if ( !v7 )
    return v4;
  v8 = (unsigned int *)((char *)a2 + 24);
  if ( !(unsigned int)GetWindowBand(v7, (char *)a2 + 24) )
    return v4;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_CompactOverlayMode>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_CompactOverlayMode>::GetCachedFeatureEnabledState();
  v34 = 0;
  LOBYTE(v35) = 3;
  LODWORD(v28) = 0;
  WORD2(v28) = v35;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_CompactOverlayMode>::GetFeaturePropertyCache'::`2'::data,
    5284159LL,
    &v28,
    1LL,
    3);
  if ( !CApplicationManagerUtility::IsModernAppWindow(*((CApplicationManagerUtility **)a2 + 1), v9)
    || GetPropW(*((HWND *)a2 + 1), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") )
  {
    if ( (unsigned __int8)CApplicationManagerUtility::IsClassicApplication(*((_QWORD *)a2 + 1), *v8)
      || GetPropW(*((HWND *)a2 + 1), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") )
    {
      *((_DWORD *)a2 + 4) = 1;
    }
    else
    {
      v11 = *v8;
      if ( *v8 == 13 )
      {
        *((_DWORD *)a2 + 4) = 3;
      }
      else if ( v11 <= 0x11 && (v12 = 131344, _bittest(&v12, v11)) )
      {
        v13 = CApplicationManagerUtility::g_pIAMGlobals;
        v33 = CApplicationManagerUtility::g_pIAMGlobals;
        AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
        v28 = 0LL;
        v30 = *((_QWORD *)a2 + 1);
        v31 = 2;
        if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(this, &v30, &v28, &v34) < 0 )
          *((_DWORD *)a2 + 4) = 4;
        else
          *((_DWORD *)a2 + 4) = 2;
        v14 = v28;
        if ( v28 )
        {
          v28 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        if ( v13 )
          ReleaseSRWLockShared(v13);
      }
      else
      {
        *((_DWORD *)a2 + 4) = 4;
      }
    }
  }
  else
  {
    *((_DWORD *)a2 + 4) = 2;
  }
  *((_BYTE *)a2 + 28) = 0;
  v29 = 0;
  v15 = this[89];
  if ( v15
    && (*(int (__fastcall **)(CApplicationManager *, _QWORD, _QWORD, int *))(*(_QWORD *)v15 + 48LL))(
         v15,
         *((unsigned int *)a2 + 2),
         0LL,
         &v29) >= 0
    && v29 == 1 )
  {
    *((_BYTE *)a2 + 28) = 1;
  }
  v16 = (HWND)*((unsigned int *)a2 + 4);
  if ( (unsigned int)((_DWORD)v16 - 2) <= 1 )
  {
    if ( *((_BYTE *)a2 + 20) )
    {
      if ( *(_QWORD *)a2 == 24LL )
      {
        *((_QWORD *)a2 + 1) = 0LL;
        goto LABEL_64;
      }
      RootOwner = CApplicationManagerUtility::GetRootOwner(*((HWND *)a2 + 1), v16, v10);
      *((_BYTE *)a2 + 20) = 0;
    }
    else
    {
      if ( *(_QWORD *)a2 != 32LL || !GetWindow(*((HWND *)a2 + 1), 4u) )
      {
LABEL_64:
        if ( *((_QWORD *)a2 + 1) )
        {
          *((_BYTE *)a2 + 21) = 1;
          return (int)CApplicationManager::_ComputeApplicationId(v15, a2) >= 0;
        }
        return v4;
      }
      RootOwner = CApplicationManagerUtility::GetRootOwner(*((HWND *)a2 + 1), v25, v26);
    }
    *((_QWORD *)a2 + 1) = RootOwner;
    goto LABEL_64;
  }
  v17 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 != 34LL )
  {
    if ( (_DWORD)v16 != 1 )
    {
      if ( v17 != 20 || *((CApplicationManager **)a2 + 1) != this[88] )
      {
        if ( v17 > 0x1B )
          return 0;
        v23 = 243793920LL;
        if ( !_bittest64(&v23, v17) )
          return 0;
      }
      return v5;
    }
    v18 = v17 - 17;
    if ( v18 )
    {
      v19 = v18 - 3;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( !v20 )
        {
          *((_BYTE *)a2 + 21) = 0;
          return v5;
        }
        if ( v20 != 1 )
        {
          v21 = (HWND)*((_QWORD *)a2 + 1);
          if ( *((_BYTE *)a2 + 20) )
            v22 = (GetWindowLongPtrW(v21, -20) & 0x40000) != 0;
          else
            v22 = CApplicationManagerUtility::IsTrayWindowStyleCheck(v21, v16);
          *((_BYTE *)a2 + 21) = v22;
          return v5;
        }
      }
    }
    *((_BYTE *)a2 + 21) = 1;
    return v5;
  }
  return v4;
}
