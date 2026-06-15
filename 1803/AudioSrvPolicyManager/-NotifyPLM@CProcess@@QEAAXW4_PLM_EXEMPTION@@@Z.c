/*
 * XREFs of ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180015928
 * Callers:
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x180011524 (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x1800127C4 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x18001A8D0 (--_GCApplicationManager@@MEAAPEAXI@Z.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001C550 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001D100 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x180010F60 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcess::NotifyPLM(__int64 a1, int a2)
{
  int v3; // edx
  HRESULT Instance; // edi
  __int64 v5; // rcx
  int v6; // eax

  v3 = a2 - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( *(_DWORD *)(a1 + 472) )
        return;
      if ( !*(_DWORD *)(a1 + 288) )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x2Fu,
            &WPP_16513b4b06ea364292c42252679a25cf_Traceguids,
            *(_DWORD *)(a1 + 216));
        }
        if ( !*(_QWORD *)(a1 + 296) )
        {
          Instance = CoCreateInstance(
                       &CLSID_OSTaskCompletion,
                       0LL,
                       1u,
                       &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558,
                       (LPVOID *)(a1 + 296));
          if ( Instance < 0 )
            goto LABEL_48;
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 296) + 32LL))(
                     *(_QWORD *)(a1 + 296),
                     *(_QWORD *)(a1 + 208),
                     1LL);
        if ( Instance < 0 )
          goto LABEL_48;
        *(_DWORD *)(a1 + 288) = 1;
      }
    }
  }
  else if ( *(_DWORD *)(a1 + 288) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x30u,
        &WPP_16513b4b06ea364292c42252679a25cf_Traceguids,
        *(_DWORD *)(a1 + 216));
    }
    Instance = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 40LL))(*(_QWORD *)(a1 + 296));
    if ( Instance == -2147023728 )
      Instance = 0;
    if ( Instance < 0 )
      goto LABEL_48;
    *(_DWORD *)(a1 + 288) = 0;
  }
  v5 = *(_QWORD *)(a1 + 280);
  if ( v5 )
  {
    v6 = CApplication::Category(v5);
  }
  else if ( *(_DWORD *)(a1 + 524) )
  {
    v6 = *(_DWORD *)(a1 + 528);
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 368);
  }
  if ( v6 || !*(_DWORD *)(a1 + 492) )
  {
    if ( !*(_DWORD *)(a1 + 292) )
      return;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x32u,
        &WPP_16513b4b06ea364292c42252679a25cf_Traceguids,
        *(_DWORD *)(a1 + 216));
    }
    Instance = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 304) + 40LL))(*(_QWORD *)(a1 + 304));
    if ( Instance == -2147023728 )
      Instance = 0;
    if ( Instance >= 0 )
    {
      *(_DWORD *)(a1 + 292) = 0;
      return;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 292) )
      return;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x31u,
        &WPP_16513b4b06ea364292c42252679a25cf_Traceguids,
        *(_DWORD *)(a1 + 216));
    }
    if ( *(_QWORD *)(a1 + 304)
      || (Instance = CoCreateInstance(
                       &CLSID_OSTaskCompletion,
                       0LL,
                       1u,
                       &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558,
                       (LPVOID *)(a1 + 304)),
          Instance >= 0) )
    {
      Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 304) + 32LL))(
                   *(_QWORD *)(a1 + 304),
                   *(_QWORD *)(a1 + 208),
                   0x80000LL);
      if ( Instance >= 0 )
      {
        *(_DWORD *)(a1 + 292) = 1;
        return;
      }
    }
  }
LABEL_48:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x33u, &WPP_16513b4b06ea364292c42252679a25cf_Traceguids, Instance);
  }
  AudPolicyLogError("CProcess::NotifyPLM", 3649, Instance);
}
