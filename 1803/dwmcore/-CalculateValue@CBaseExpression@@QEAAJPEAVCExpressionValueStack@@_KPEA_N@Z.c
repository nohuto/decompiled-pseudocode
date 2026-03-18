/*
 * XREFs of ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18003BF40
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18003A130 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18003BF40 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x18003D1D0 (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x18003D520 (-ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x180197988 (-ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValu.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180029658 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800296B0 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x18003B008 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z @ 0x18003B020 (-IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18003B590 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18003BC9C (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18003BF40 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18003D670 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x180052D08 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?GetMaxStackCount@CExpression@@UEBAIXZ @ 0x180054540 (-GetMaxStackCount@CExpression@@UEBAIXZ.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180055480 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800558E8 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800BA904 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSa.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x1800BBBCC (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x1800BBCCC (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePro.c)
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x1800BC404 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800BC430 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1DB8 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@AEA_N_J@Z @ 0x1800C8984 (-EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV-$unique_any_t@V-$unique_storage@U-$resource_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800C89C0 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800CD240 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800D1A30 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800DCD88 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x18013FA18 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x18017EEF4 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x18017EFBC (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x180181548 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x18018B994 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801AE054 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 */

__int64 __fastcall CBaseExpression::CalculateValue(
        CBaseExpression *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        bool *a4)
{
  CBaseExpression *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  bool v9; // zf
  void (__fastcall *v10)(CExpression *__hidden, bool *); // rax
  __int64 v11; // rax
  bool v12; // al
  unsigned int v13; // esi
  __int64 v15; // rax
  unsigned __int64 v16; // r10
  unsigned int (__fastcall *v17)(CKeyframeAnimation *__hidden); // rax
  unsigned int v18; // ecx
  CBaseExpression *v19; // rdx
  int v20; // r8d
  int v21; // eax
  char v22; // al
  int v23; // eax
  __int64 (__fastcall *v24)(CKeyframeAnimation *__hidden, struct CExpressionValueStack *, unsigned __int64, bool *); // rax
  int v25; // eax
  signed int v26; // r8d
  int v27; // ecx
  bool *v28; // rdx
  __int64 v29; // rax
  int v30; // ecx
  int v31; // eax
  __int64 v32; // rax
  struct CResource *v33; // rdx
  int v34; // eax
  int v35; // r9d
  void (*v36)(unsigned int, unsigned int, unsigned int, const char *); // r10
  int v37; // ecx
  wil::details_abi::FeatureStateData *v38; // rax
  RTL_SRWLOCK *v39; // rax
  __int64 (*ProcAddress)(void); // rax
  int v41; // eax
  unsigned int MaxStackCount; // eax
  unsigned int v43; // edx
  unsigned int v44; // r8d
  HMODULE NtDllModuleHandle; // rax
  PTP_TIMER ThreadpoolTimer; // rax
  void (*v47)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax
  __int64 v48; // rax
  PSRWLOCK v49; // rax
  bool v50; // sf
  PSRWLOCK v51; // rsi
  PSRWLOCK v52; // rax
  int v53; // eax
  PSRWLOCK v54; // rsi
  __int64 v55; // rbx
  int v56; // ecx
  __int64 v57; // r8
  __int64 v58; // rcx
  RTL_SRWLOCK *v59; // rax
  unsigned __int64 v60; // r8
  int v61; // eax
  __int64 Elapsed; // rax
  _DWORD *v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rcx
  int v66; // eax
  __int64 v67; // rdx
  int v68; // r9d
  char v69; // al
  __int64 v70; // rdx
  unsigned int TracingCookie; // eax
  int v72; // eax
  HANDLE EventW; // rsi
  __int64 v74; // rax
  _DWORD *v75; // rcx
  __int64 v76; // r8
  __int64 v77; // rax
  _DWORD *v78; // rcx
  unsigned int v79; // [rsp+20h] [rbp-E0h]
  unsigned int v80; // [rsp+20h] [rbp-E0h]
  bool v81; // [rsp+50h] [rbp-B0h] BYREF
  signed int v82; // [rsp+54h] [rbp-ACh]
  int v83; // [rsp+58h] [rbp-A8h]
  char Ptr; // [rsp+5Ch] [rbp-A4h]
  bool v85[3]; // [rsp+5Dh] [rbp-A3h] BYREF
  CBaseExpression *v86; // [rsp+60h] [rbp-A0h]
  PSRWLOCK SRWLock; // [rsp+68h] [rbp-98h] BYREF
  int v88; // [rsp+70h] [rbp-90h] BYREF
  __int16 v89; // [rsp+74h] [rbp-8Ch]
  unsigned __int64 v90; // [rsp+78h] [rbp-88h]
  __int64 v91; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v92; // [rsp+88h] [rbp-78h]
  unsigned int v93; // [rsp+90h] [rbp-70h]
  bool *v94; // [rsp+98h] [rbp-68h]
  __int64 v95; // [rsp+A0h] [rbp-60h] BYREF
  int v96; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v97; // [rsp+ACh] [rbp-54h]
  CBaseExpression *v98; // [rsp+B0h] [rbp-50h]
  char v99[24]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v100; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v101; // [rsp+E0h] [rbp-20h]
  _QWORD v102[2]; // [rsp+E8h] [rbp-18h] BYREF
  int v103; // [rsp+F8h] [rbp-8h]
  int v104; // [rsp+FCh] [rbp-4h]
  WCHAR Name[32]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v106; // [rsp+140h] [rbp+40h] BYREF
  int v107; // [rsp+148h] [rbp+48h]
  char v108; // [rsp+14Ch] [rbp+4Ch]

  v86 = a2;
  v4 = this;
  v5 = 0LL;
  v94 = a4;
  *a4 = 0;
  v6 = 0LL;
  v7 = *((_QWORD *)this + 35);
  v8 = 0LL;
  v90 = a3;
  v98 = this;
  v95 = 0LL;
  v9 = (*(_DWORD *)(v7 + 4) & 0x40000000) == 0;
  v91 = 0LL;
  v92 = 0LL;
  if ( !v9 || CCommonRegistryData::m_fLogExpressionPerfStats )
  {
    v48 = *((_QWORD *)this + 2);
    v81 = 1;
    v92 = (_DWORD *)(*(_QWORD *)(v48 + 240) + 96LL);
    QpcStopwatch::Start((QpcStopwatch *)&v95);
    v7 = *((_QWORD *)v4 + 35);
    a3 = v90;
    v6 = v95;
  }
  else
  {
    v81 = 0;
  }
  v93 = *((_DWORD *)v86 + 4);
  if ( !*((_QWORD *)v4 + 34) )
    *((_QWORD *)v4 + 34) = a3;
  if ( *(int *)(v7 + 4) < 0 && (*((_BYTE *)v4 + 208) & 8) == 0 )
  {
    (*(void (__fastcall **)(CBaseExpression *))(*(_QWORD *)v4 + 256LL))(v4);
    *((_BYTE *)v4 + 208) |= 8u;
  }
  v10 = *(void (__fastcall **)(CExpression *__hidden, bool *))(*(_QWORD *)v4 + 232LL);
  if ( v10 != CExpression::PrepareForCalculation )
  {
    ((void (__fastcall *)(CBaseExpression *, bool *, __int64))v10)(v4, v85, 1LL);
    v12 = v85[0];
    goto LABEL_23;
  }
  if ( CCommonRegistryData::m_fOptimizeForDirtyExpressions )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetCachedFeatureEnabledState(
        CExpression::PrepareForCalculation,
        v5,
        1LL);
    LOBYTE(v89) = 3;
    v96 = 0;
    v97 = v89;
    v88 = 3;
    v11 = wil_details_RecordUsageInPropertyCache(
            v99,
            &`wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetFeaturePropertyCache'::`2'::data,
            2LL);
    v100 = *(_OWORD *)v11;
    v101 = *(_QWORD *)(v11 + 16);
    if ( !g_wil_details_recordFeatureUsage )
      goto LABEL_19;
    if ( (char *)g_wil_details_recordFeatureUsage != (char *)wil::details::RecordFeatureUsageCallback )
    {
      g_wil_details_recordFeatureUsage(
        0xD17946u,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetFeaturePropertyCache'::`2'::data,
        (struct wil_details_RecordUsageResult *)&v100);
LABEL_17:
      if ( (`wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
      {
        v103 = 0;
        v104 = (`wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
        v102[0] = 0LL;
        v102[1] = 2LL;
        ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(13728070LL, 0LL, v102);
      }
LABEL_19:
      if ( !(_DWORD)v101 && g_wil_details_pfnFeatureLoggingHook )
        g_wil_details_pfnFeatureLoggingHook(
          0xD17946u,
          (const struct FEATURE_LOGGED_TRAITS *)&v96,
          0LL,
          1,
          (const enum wil_ReportingKind *)&v88,
          0LL,
          0,
          1uLL);
      if ( *((_QWORD *)v4 + 51) )
        v12 = 1;
      else
        v12 = *((_QWORD *)v4 + 34) > *((_QWORD *)v4 + 20);
      goto LABEL_22;
    }
    if ( (_DWORD)v100 )
      wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        &wil::details::g_enabledStateManager,
        0xD17946u,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetFeaturePropertyCache'::`2'::data);
    v83 = DWORD1(v100);
    if ( !DWORD1(v100) )
    {
LABEL_16:
      if ( !(_DWORD)v101 && wil::details::g_enabledStateManager )
      {
        AcquireSRWLockExclusive(&stru_1802D6B18);
        if ( !qword_1802D6B38 )
        {
          qword_1802D6B38 = 0LL;
          v47 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
          if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
            || (v47 = g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
          {
            ((void (__fastcall *)(__int64 *, __int64 (__fastcall *)(), __int64))v47)(
              &qword_1802D6B38,
              lambda_87c8d85798ea78242f0953b15d7cc197_::_lambda_invoker_cdecl_,
              -1LL);
          }
        }
        ReleaseSRWLockExclusive(&stru_1802D6B18);
      }
      goto LABEL_17;
    }
    v36 = g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage )
    {
      if ( (char *)g_wil_details_internalRecordFeatureUsage == (char *)wil::details::WilApiImpl_RecordFeatureUsage )
      {
        v37 = DWORD2(v100) & 0x7FFFFFFF;
        v82 = DWORD2(v100) & 0x7FFFFFFF;
        if ( !wil::details::g_featureStateManager )
          goto LABEL_16;
        v38 = (wil::details_abi::FeatureStateData *)*(&xmmword_1802D6A10 + 1);
        SRWLock = (PSRWLOCK)*(&xmmword_1802D6A10 + 1);
        if ( !*(&xmmword_1802D6A10 + 1) )
        {
          v49 = (PSRWLOCK)xmmword_1802D6A10;
          if ( !xmmword_1802D6A10 )
          {
            SRWLock = 0LL;
            v50 = (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(
                         qword_1802D6A08,
                         &SRWLock) < 0;
            v49 = (PSRWLOCK)xmmword_1802D6A10;
            if ( !v50 )
            {
              if ( !xmmword_1802D6A10 )
                v49 = SRWLock;
              xmmword_1802D6A10 = v49;
            }
          }
          v51 = v49 + 4;
          if ( !v49 )
            v51 = 0LL;
          AcquireSRWLockExclusive(&stru_1802D6A20);
          v52 = (PSRWLOCK)*(&xmmword_1802D6A10 + 1);
          if ( !*(&xmmword_1802D6A10 + 1) )
            v52 = v51;
          *(&xmmword_1802D6A10 + 1) = v52;
          ReleaseSRWLockExclusive(&stru_1802D6A20);
          v38 = (wil::details_abi::FeatureStateData *)*(&xmmword_1802D6A10 + 1);
          v4 = v98;
          v37 = v82;
          SRWLock = (PSRWLOCK)*(&xmmword_1802D6A10 + 1);
          if ( !*(&xmmword_1802D6A10 + 1) )
            goto LABEL_16;
        }
        if ( v37 == 254 )
        {
          wil::details_abi::FeatureStateData::RecordUsage(v38);
        }
        else
        {
          if ( (unsigned __int64)v37 >= 0xC8 && (v37 < 256 || (unsigned __int64)v37 >= 0x200) )
            goto LABEL_16;
          AcquireSRWLockExclusive((PSRWLOCK)v38);
          if ( (unsigned int)(v82 - 256) <= 0x7F || (unsigned int)v82 <= 7 && (v41 = 204, _bittest(&v41, v82)) )
          {
            wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,0>::RecordUsage((wil::details_abi::RawUsageIndex *)&SRWLock[1]);
            v39 = SRWLock;
            Ptr = (char)SRWLock[8].Ptr;
          }
          else
          {
            Ptr = wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,2>::RecordUsage(
                    &SRWLock[9],
                    (unsigned int)v82,
                    13728070LL,
                    (unsigned int)v83);
            v39 = SRWLock;
          }
          ReleaseSRWLockExclusive(v39);
          if ( !Ptr )
            goto LABEL_16;
        }
        if ( !wil::details::g_processShutdownInProgress )
        {
          ProcAddress = (__int64 (*)(void))wil::details::g_pfnRtlDllShutdownInProgress;
          if ( !wil::details::g_pfnRtlDllShutdownInProgress )
            goto LABEL_87;
          if ( (char *)wil::details::g_pfnRtlDllShutdownInProgress != (char *)wil::details::RtlDllShutdownInProgress
            || (ProcAddress = (__int64 (*)(void))`wil::details::RtlDllShutdownInProgress'::`2'::s_pfnRtlDllShutdownInProgress) != 0LL
            || (NtDllModuleHandle = wil_details_GetNtDllModuleHandle(),
                ProcAddress = GetProcAddress(NtDllModuleHandle, "RtlDllShutdownInProgress"),
                (`wil::details::RtlDllShutdownInProgress'::`2'::s_pfnRtlDllShutdownInProgress = (__int64)ProcAddress) != 0) )
          {
            LOBYTE(ProcAddress) = ProcAddress();
          }
          if ( !(_BYTE)ProcAddress )
          {
LABEL_87:
            AcquireSRWLockExclusive(&stru_1802D6A20);
            if ( !byte_1802D6A41 )
            {
              if ( !(_QWORD)xmmword_1802D6A30 )
              {
                ThreadpoolTimer = CreateThreadpoolTimer(
                                    lambda_2586d60923f8412dce879009b83555c3_::_lambda_invoker_cdecl_,
                                    &wil::details::g_featureStateManager,
                                    0LL);
                wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
                  &xmmword_1802D6A30,
                  ThreadpoolTimer);
              }
              wil::details::EnsureCoalescedTimer_SetTimer(&xmmword_1802D6A30, &byte_1802D6A41, 300000LL);
            }
            ReleaseSRWLockExclusive(&stru_1802D6A20);
          }
        }
        goto LABEL_16;
      }
    }
    else
    {
      v36 = g_wil_details_apiRecordFeatureUsage;
      if ( !g_wil_details_apiRecordFeatureUsage )
        goto LABEL_16;
    }
    ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))v36)(13728070LL, DWORD2(v100), DWORD1(v100), 0LL);
    goto LABEL_16;
  }
  v12 = 1;
LABEL_22:
  v85[0] = v12;
LABEL_23:
  if ( *((_BYTE *)v4 + 140) && !v12 )
  {
    v13 = 0;
    goto LABEL_26;
  }
  v15 = *(_QWORD *)v4;
  v16 = v90;
  *((_QWORD *)v4 + 20) = v90;
  v17 = *(unsigned int (__fastcall **)(CKeyframeAnimation *__hidden))(v15 + 168);
  if ( v17 == CKeyframeAnimation::GetMaxStackCount )
  {
    v18 = *((_DWORD *)v4 + 66);
    v82 = v18;
  }
  else
  {
    if ( v17 == CExpression::GetMaxStackCount )
      MaxStackCount = CExpression::GetMaxStackCount(v4);
    else
      MaxStackCount = v17(v4);
    v16 = v90;
    v18 = MaxStackCount;
    v82 = MaxStackCount;
  }
  v19 = v86;
  v20 = *((_DWORD *)v86 + 4);
  v83 = v20;
  if ( v18 > ~v20 )
  {
    v83 = -2147418113;
    v82 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147418113,
      0x57u);
    v21 = -2147418113;
    goto LABEL_143;
  }
  v88 = *((_DWORD *)v86 + 12);
  if ( v88 - v20 >= v18 )
    goto LABEL_33;
  memset_0(Name, 0, sizeof(Name));
  v107 = 18;
  v106 = 0LL;
  v108 = 0;
  v83 = v82 + v83 - v88;
  v53 = DynArrayImpl<1>::AddMultiple((char *)v86 + 24, 80LL, (unsigned int)v83, &SRWLock);
  v82 = v53;
  if ( v53 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0xE5u);
  }
  else
  {
    if ( !v83 )
      goto LABEL_151;
    v54 = SRWLock;
    v55 = (unsigned int)v83;
    do
    {
      CExpressionValue::operator=((__int64)v54, (__int64)Name);
      v54 += 10;
      --v55;
    }
    while ( v55 );
    v6 = v95;
    v4 = v98;
  }
  v53 = v82;
LABEL_151:
  if ( v53 >= 0 )
  {
    v19 = v86;
    v16 = v90;
LABEL_33:
    v21 = 0;
    goto LABEL_34;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST, 1u, v53, 0x5Fu);
  v19 = v86;
  v21 = v82;
  v16 = v90;
LABEL_34:
  v83 = v21;
  if ( v21 < 0 )
  {
LABEL_143:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180239D30, 1u, v21, 0x3C4u);
    v13 = v83;
    goto LABEL_103;
  }
  if ( v81 && (*((_BYTE *)v4 + 208) & 2) != 0 )
  {
    v56 = *(_DWORD *)(*((_QWORD *)v4 + 35) + 4LL);
    v57 = *(_QWORD *)(*((_QWORD *)v4 + 2) + 240LL);
    ++*(_DWORD *)(v57 + 428);
    if ( (v56 & 0x40000000) != 0 )
      ++*(_DWORD *)(v57 + 432);
  }
  if ( v92 )
  {
    QpcStopwatch::Start((QpcStopwatch *)&v91);
    v19 = v86;
    v16 = v90;
    v8 = v91;
  }
  v22 = *((_BYTE *)v4 + 208);
  if ( (v22 & 0x20) != 0 )
    goto LABEL_39;
  v9 = *((_DWORD *)v4 + 60) == 0;
  v44 = 0;
  v82 = 0;
  if ( v9 )
  {
LABEL_106:
    *((_BYTE *)v4 + 208) = v22 | 0x20;
LABEL_39:
    v23 = 0;
    v83 = 0;
    goto LABEL_40;
  }
  while ( 1 )
  {
    v58 = *((_QWORD *)v4 + 27);
    v59 = (RTL_SRWLOCK *)v44;
    v60 = *((_QWORD *)v4 + 20);
    v81 = 0;
    SRWLock = v59;
    v61 = CBaseExpression::CalculateValue(*(CBaseExpression **)(v58 + 8LL * (_QWORD)v59), v19, v60, &v81);
    v83 = v61;
    if ( v61 < 0 )
      break;
    CBaseExpression::EnsureExpressionIsUnregistered(*(CBaseExpression **)(*((_QWORD *)v4 + 27) + 8LL * (_QWORD)SRWLock));
    v19 = v86;
    v44 = v82 + 1;
    v82 = v44;
    if ( v44 >= *((_DWORD *)v4 + 60) )
    {
      v22 = *((_BYTE *)v4 + 208);
      v16 = v90;
      goto LABEL_106;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v61, 0x2C0u);
  v23 = v83;
  v19 = v86;
  v16 = v90;
LABEL_40:
  if ( v23 < 0 )
  {
    v79 = 991;
    goto LABEL_102;
  }
  v24 = *(__int64 (__fastcall **)(CKeyframeAnimation *__hidden, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v4 + 208LL);
  if ( v24 == CKeyframeAnimation::CalculateValueWorker )
  {
    v25 = CKeyframeAnimation::CalculateValueWorker(v4, v19, v16, v94);
  }
  else if ( v24 == CExpression::CalculateValueWorker )
  {
    v25 = CExpression::CalculateValueWorker(v4, v19, v16, v94);
  }
  else
  {
    v25 = v24(v4, v19, v16, v94);
  }
  v83 = v25;
  if ( v25 < 0 )
  {
    v79 = 993;
LABEL_102:
    v13 = v83;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180239D30, 1u, v83, v79);
    goto LABEL_103;
  }
  if ( v8 )
  {
    Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v91);
    v63 = v92;
    ++v92[1];
    *((_QWORD *)v63 + 4) += Elapsed;
    v8 = 0LL;
    v91 = 0LL;
    v25 = v83;
  }
  if ( v25 == 1 )
  {
    v81 = 1;
  }
  else
  {
    v81 = 0;
    if ( CBaseExpression::IsExpressionValueValid(
           v86,
           (struct CExpressionValue *)(*((_QWORD *)v86 + 3) + 80LL * (unsigned int)(*((_DWORD *)v86 + 4) - 1))) )
    {
      goto LABEL_48;
    }
  }
  memset_0(Name, 0, sizeof(Name));
  v64 = *((_QWORD *)v4 + 22);
  v106 = 0LL;
  v107 = 18;
  v108 = 0;
  if ( !v64 || (v65 = *(_QWORD *)(v64 + 8)) == 0 )
  {
    v13 = -2147024890;
    v80 = 1019;
    v68 = -2147024890;
    goto LABEL_181;
  }
  v66 = (*(__int64 (__fastcall **)(__int64, _QWORD, WCHAR *))(*(_QWORD *)v65 + 96LL))(
          v65,
          *((unsigned int *)v4 + 46),
          Name);
  if ( v66 < 0 )
  {
    v80 = 1021;
    goto LABEL_179;
  }
  v67 = *((_QWORD *)v4 + 24);
  if ( v67 )
  {
    if ( *(_BYTE *)(v67 + 4) )
    {
      v66 = CExpressionValue::ApplyMaskToValue((CExpressionValue *)Name, (struct SubchannelMaskInfo *)v67);
      if ( v66 < 0 )
      {
        v80 = 1027;
LABEL_179:
        v13 = v66;
        v68 = v66;
LABEL_181:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180239D30, 1u, v68, v80);
        goto LABEL_182;
      }
    }
  }
  if ( v107 != *((_DWORD *)v4 + 36) )
  {
    v13 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180239D30, 1u, -2147024809, 0x408u);
LABEL_182:
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v106);
    goto LABEL_103;
  }
  if ( v81 )
  {
    v66 = CExpressionValueStack::PushConstant(v86, (const struct CExpressionValue *)Name);
    if ( v66 < 0 )
    {
      v80 = 1037;
      goto LABEL_179;
    }
  }
  else
  {
    CExpressionValue::CopyFrom(
      (CExpressionValue *)(*((_QWORD *)v86 + 3) + 80LL * (unsigned int)(*((_DWORD *)v86 + 4) - 1)),
      (const struct CExpressionValue *)Name);
  }
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v106);
LABEL_48:
  v27 = *((_DWORD *)v86 + 4);
  if ( v27 != v93 + 1 )
  {
    v13 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180239D30, 1u, -2147467259, 0x421u);
    goto LABEL_103;
  }
  if ( v92 )
  {
    QpcStopwatch::Start((QpcStopwatch *)&v91);
    v8 = v91;
    v27 = *((_DWORD *)v86 + 4);
  }
  LOBYTE(v26) = 0;
  v82 = v26;
  v28 = (bool *)(*((_QWORD *)v86 + 3) + 80LL * (unsigned int)(v27 - 1));
  v29 = *((_QWORD *)v4 + 35);
  v94 = v28;
  v30 = *(_DWORD *)(v29 + 4);
  if ( (v30 & 0x40000000) != 0 || v30 < 0 )
  {
    v69 = CExpressionValue::operator==((char *)v4 + 64);
    v28 = v94;
    v26 = (unsigned __int8)v82;
    if ( !v69 )
      v26 = 1;
    v82 = v26;
  }
  v31 = *((_DWORD *)v28 + 18);
  if ( v31 == 18 )
  {
    *((_DWORD *)v4 + 16) = *(_DWORD *)v28;
    *((_DWORD *)v4 + 34) = 18;
LABEL_55:
    *((_BYTE *)v4 + 140) = 1;
  }
  else
  {
    switch ( v31 )
    {
      case 11:
        v70 = *((_QWORD *)v28 + 8);
        *((_DWORD *)v4 + 34) = 11;
        *((_BYTE *)v4 + 140) = 1;
        Microsoft::WRL::ComPtr<CPathData>::operator=((char *)v4 + 128, v70);
        LOBYTE(v26) = v82;
        break;
      case 17:
        *((_BYTE *)v4 + 64) = *v28;
        *((_DWORD *)v4 + 34) = 17;
        goto LABEL_55;
      case 35:
        *((_DWORD *)v4 + 34) = 35;
        *((_QWORD *)v4 + 8) = *(_QWORD *)v28;
        goto LABEL_55;
      case 42:
        *((_DWORD *)v4 + 34) = 42;
        *((_DWORD *)v4 + 16) = *(_DWORD *)v28;
        goto LABEL_55;
      case 52:
        *((_DWORD *)v4 + 34) = 52;
        *((_QWORD *)v4 + 8) = *(_QWORD *)v28;
        *((_DWORD *)v4 + 18) = *((_DWORD *)v28 + 2);
        goto LABEL_55;
      case 69:
        *((_DWORD *)v4 + 34) = 69;
        *((_OWORD *)v4 + 4) = *(_OWORD *)v28;
        goto LABEL_55;
      case 70:
        *((_DWORD *)v4 + 34) = 70;
        *((_OWORD *)v4 + 4) = *(_OWORD *)v28;
        goto LABEL_55;
      case 71:
        *((_DWORD *)v4 + 34) = 71;
        *((_OWORD *)v4 + 4) = *(_OWORD *)v28;
        goto LABEL_55;
      case 104:
        *((_DWORD *)v4 + 34) = 104;
        *((_OWORD *)v4 + 4) = *(_OWORD *)v28;
        *((_QWORD *)v4 + 10) = *((_QWORD *)v28 + 2);
        goto LABEL_55;
      case 265:
        *((_DWORD *)v4 + 34) = 265;
        *((_OWORD *)v4 + 4) = *(_OWORD *)v28;
        *((_OWORD *)v4 + 5) = *((_OWORD *)v28 + 1);
        *((_OWORD *)v4 + 6) = *((_OWORD *)v28 + 2);
        *((_OWORD *)v4 + 7) = *((_OWORD *)v28 + 3);
        goto LABEL_55;
      default:
        break;
    }
  }
  if ( (_BYTE)v26 )
  {
    CBaseExpression::LogSetOutputValue(v4);
    TracingCookie = CBaseExpression::GetTracingCookie(v4);
    v72 = StringCchPrintfW(Name, 0x3CuLL, L"DwmExpression_SetValue_%d", TracingCookie);
    v82 = v72;
    v13 = v72;
    if ( v72 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v72, 0x1F5u);
      goto LABEL_62;
    }
    EventW = CreateEventW(0LL, 1, 0, Name);
    SetEvent(EventW);
    CloseHandle(EventW);
    v4 = v98;
  }
  if ( (*((_BYTE *)v4 + 208) & 3) != 3 )
  {
LABEL_61:
    v13 = 0;
    v82 = 0;
    goto LABEL_62;
  }
  v32 = *((_QWORD *)v4 + 22);
  if ( v32 )
  {
    v33 = *(struct CResource **)(v32 + 8);
    if ( v33 )
    {
      v34 = CBaseExpression::SetOutputValueOnTarget(v4, v33);
      v82 = v34;
      v13 = v34;
      if ( v34 >= 0 )
        goto LABEL_61;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x207u);
LABEL_62:
      v35 = v82;
      if ( v82 >= 0 )
      {
        if ( v8 )
        {
          v74 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v91);
          v75 = v92;
          ++v92[5];
          *((_QWORD *)v75 + 8) += v74;
        }
        --*((_DWORD *)v86 + 4);
        v13 = 0;
        goto LABEL_26;
      }
      goto LABEL_197;
    }
  }
  v13 = -2147024890;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024890, 0x206u);
  v35 = -2147024890;
LABEL_197:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180239D30, 1u, v35, 0x42Eu);
LABEL_103:
  v43 = *((_DWORD *)v86 + 4);
  if ( v43 > v93 )
  {
    v76 = v43 - v93;
    do
    {
      --v43;
      --v76;
    }
    while ( v76 );
    *((_DWORD *)v86 + 4) = v43;
  }
LABEL_26:
  if ( v6 )
  {
    v77 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v95);
    v78 = v92;
    ++*v92;
    *((_QWORD *)v78 + 3) += v77;
  }
  return v13;
}
