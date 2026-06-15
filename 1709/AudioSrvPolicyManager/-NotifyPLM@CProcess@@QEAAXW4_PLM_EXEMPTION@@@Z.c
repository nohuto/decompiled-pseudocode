/*
 * XREFs of ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x18000FF5C
 * Callers:
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x18000C594 (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x18000D848 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x180012690 (--_GCApplicationManager@@MEAAPEAXI@Z.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180013C08 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180014770 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18000BFCC (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
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
      if ( *(_DWORD *)(a1 + 464) )
        return;
      if ( !*(_DWORD *)(a1 + 280) )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x2Du,
            &WPP_9c3c8450e3c737dcda82a54556fbcbcb_Traceguids,
            *(_DWORD *)(a1 + 216));
        }
        if ( !*(_QWORD *)(a1 + 288) )
        {
          Instance = CoCreateInstance(
                       &CLSID_OSTaskCompletion,
                       0LL,
                       1u,
                       &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558,
                       (LPVOID *)(a1 + 288));
          if ( Instance < 0 )
            goto LABEL_48;
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 288) + 32LL))(
                     *(_QWORD *)(a1 + 288),
                     *(_QWORD *)(a1 + 208),
                     1LL);
        if ( Instance < 0 )
          goto LABEL_48;
        *(_DWORD *)(a1 + 280) = 1;
      }
    }
  }
  else if ( *(_DWORD *)(a1 + 280) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Eu,
        &WPP_9c3c8450e3c737dcda82a54556fbcbcb_Traceguids,
        *(_DWORD *)(a1 + 216));
    }
    Instance = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 40LL))(*(_QWORD *)(a1 + 288));
    if ( Instance == -2147023728 )
      Instance = 0;
    if ( Instance < 0 )
      goto LABEL_48;
    *(_DWORD *)(a1 + 280) = 0;
  }
  v5 = *(_QWORD *)(a1 + 272);
  if ( v5 )
  {
    v6 = CApplication::Category(v5);
  }
  else if ( *(_DWORD *)(a1 + 516) )
  {
    v6 = *(_DWORD *)(a1 + 520);
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 360);
  }
  if ( v6 || !*(_DWORD *)(a1 + 484) )
  {
    if ( !*(_DWORD *)(a1 + 284) )
      return;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x30u,
        &WPP_9c3c8450e3c737dcda82a54556fbcbcb_Traceguids,
        *(_DWORD *)(a1 + 216));
    }
    Instance = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 40LL))(*(_QWORD *)(a1 + 296));
    if ( Instance == -2147023728 )
      Instance = 0;
    if ( Instance >= 0 )
    {
      *(_DWORD *)(a1 + 284) = 0;
      return;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 284) )
      return;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Fu,
        &WPP_9c3c8450e3c737dcda82a54556fbcbcb_Traceguids,
        *(_DWORD *)(a1 + 216));
    }
    if ( *(_QWORD *)(a1 + 296)
      || (Instance = CoCreateInstance(
                       &CLSID_OSTaskCompletion,
                       0LL,
                       1u,
                       &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558,
                       (LPVOID *)(a1 + 296)),
          Instance >= 0) )
    {
      Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 296) + 32LL))(
                   *(_QWORD *)(a1 + 296),
                   *(_QWORD *)(a1 + 208),
                   0x80000LL);
      if ( Instance >= 0 )
      {
        *(_DWORD *)(a1 + 284) = 1;
        return;
      }
    }
  }
LABEL_48:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x31u, &WPP_9c3c8450e3c737dcda82a54556fbcbcb_Traceguids, Instance);
  }
  AudPolicyLogError("CProcess::NotifyPLM", 3582, Instance);
}
