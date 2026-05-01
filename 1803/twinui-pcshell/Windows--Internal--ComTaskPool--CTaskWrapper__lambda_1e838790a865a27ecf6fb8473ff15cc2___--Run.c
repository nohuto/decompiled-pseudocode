/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1e838790a865a27ecf6fb8473ff15cc2___::Run @ 0x18008E610
 * Callers:
 *     <none>
 * Callees:
 *     ?SetChromeOptions@CApplicationFrameWrapper@@UEAAJW4APPLICATION_FRAME_CHROME_OPTIONS@@0@Z @ 0x180016E40 (-SetChromeOptions@CApplicationFrameWrapper@@UEAAJW4APPLICATION_FRAME_CHROME_OPTIONS@@0@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180060A94 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801073E4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA-AW4wil_de.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1e838790a865a27ecf6fb8473ff15cc2___::Run(
        __int64 a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 (__fastcall *v4)(__int64); // rax
  RTL_SRWLOCK *v5; // rcx
  __int64 v6; // [rsp+20h] [rbp-18h]
  __int16 v7; // [rsp+44h] [rbp+Ch]
  int v8; // [rsp+48h] [rbp+10h] BYREF
  __int16 v9; // [rsp+4Ch] [rbp+14h]

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 120LL);
    v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 112LL);
    if ( v4 == CApplicationFrameWrapper::SetChromeOptions )
      CApplicationFrameWrapper::SetChromeOptions(v3);
    else
      ((void (__fastcall *)(__int64, _QWORD, _QWORD))v4)(v3, *(unsigned int *)(a1 + 32), *(unsigned int *)(a1 + 36));
    if ( (`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetCachedFeatureEnabledState();
    LOBYTE(v7) = 1;
    v9 = v7;
    v8 = 0;
    LODWORD(v6) = 3;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data,
      0xA3B12Du,
      (const struct FEATURE_LOGGED_TRAITS *)&v8,
      0LL,
      v6);
    if ( *(_BYTE *)(a1 + 56) )
    {
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      (*(void (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 24LL))(
        CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
        *(_QWORD *)(*(_QWORD *)(a1 + 64) + 128LL),
        0LL);
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    }
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 204LL);
  ReleaseSRWLockExclusive(v5);
}
