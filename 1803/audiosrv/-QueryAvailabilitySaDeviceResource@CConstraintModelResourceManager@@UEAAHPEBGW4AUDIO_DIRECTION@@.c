/*
 * XREFs of ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x1800D9A80
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?GetEndpointInformationFromId@CConstraintModel@@QEAAJPEBGPEAGI1IPEAK@Z @ 0x180039AF0 (-GetEndpointInformationFromId@CConstraintModel@@QEAAJPEBGPEAGI1IPEAK@Z.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     ?GetEndpointResourceValidity@CConstraintModelResourceManager@@AEAAJPEBGPEAH@Z @ 0x180096C50 (-GetEndpointResourceValidity@CConstraintModelResourceManager@@AEAAJPEBGPEAH@Z.c)
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x180098EF0 (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___M.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z @ 0x1800D8370 (-AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@H@Z @ 0x1800D9000 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTI.c)
 */

__int64 __fastcall CConstraintModelResourceManager::QueryAvailabilitySaDeviceResource(
        __int64 a1,
        const unsigned __int16 *a2,
        int a3,
        struct _GUID *a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        unsigned int a6)
{
  struct _ResourceInfo *v9; // rdi
  unsigned int v10; // r14d
  unsigned int v11; // esi
  CConstraintModelResourceManager *v12; // rcx
  int EndpointResourceValidity; // eax
  CConstraintModel *v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  int v17; // ebx
  int v18; // eax
  CConstraintModel *v19; // rcx
  int StreamResourceConsumption; // eax
  int EndpointInformationFromId; // eax
  __int64 v22; // rcx
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  TraceLoggingHProvider v25; // r10
  __int64 v26; // rcx
  LPCGUID v27; // r8
  LPCGUID v28; // r9
  TraceLoggingHProvider v29; // r10
  unsigned int pData; // [rsp+28h] [rbp-D8h]
  int v32; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v34; // [rsp+48h] [rbp-B8h] BYREF
  int v35; // [rsp+4Ch] [rbp-B4h]
  struct _ResourceInfo *v36; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-A0h] BYREF
  char v39; // [rsp+68h] [rbp-98h]
  struct _GUID v40; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v41[296]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 v42[201]; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned __int16 v43[261]; // [rsp+33Ah] [rbp+23Ah] BYREF
  unsigned int v44[3]; // [rsp+544h] [rbp+444h] BYREF
  EVENT_DATA_DESCRIPTOR v45; // [rsp+550h] [rbp+450h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+570h] [rbp+470h] BYREF
  unsigned int *v47; // [rsp+580h] [rbp+480h]
  int v48; // [rsp+588h] [rbp+488h]
  int v49; // [rsp+58Ch] [rbp+48Ch]
  int *v50; // [rsp+590h] [rbp+490h]
  int v51; // [rsp+598h] [rbp+498h]
  int v52; // [rsp+59Ch] [rbp+49Ch]
  wil::details::in1diag3 *retaddr; // [rsp+5E8h] [rbp+4E8h]

  v35 = a3;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)(a1 + 24));
  v32 = 0;
  memset_0(v41, 0, 0x4D0uLL);
  v37 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v34 = 0;
  v36 = 0LL;
  v11 = 1;
  v33 = 1;
  EndpointResourceValidity = CConstraintModelResourceManager::GetEndpointResourceValidity(v12, a2, &v33);
  v17 = EndpointResourceValidity;
  if ( EndpointResourceValidity < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      897LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
      (const char *)(unsigned int)EndpointResourceValidity);
  v32 = v17;
  if ( v17 < 0 )
    goto LABEL_24;
  v18 = v17;
  if ( v33 )
  {
    v19 = *(CConstraintModel **)(a1 + 16);
    v40 = *a4;
    StreamResourceConsumption = CConstraintModel::GetStreamResourceConsumption(v19, a2, v15, &v40, a5, &v34, &v36);
    v17 = StreamResourceConsumption;
    if ( StreamResourceConsumption < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        901LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
        (const char *)(unsigned int)StreamResourceConsumption);
    v10 = v34;
    v18 = v17;
    v9 = v36;
    v32 = v17;
  }
  if ( v18 >= 0 && v10 )
  {
    EndpointInformationFromId = CConstraintModel::GetEndpointInformationFromId(v14, a2, v42, v16, v43, pData, v44);
    v17 = EndpointInformationFromId;
    if ( EndpointInformationFromId < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        913LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
        (const char *)(unsigned int)EndpointInformationFromId);
    v32 = v17;
    if ( v17 >= 0 )
    {
      v32 = CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(
              a1,
              (__int64)v42,
              (__int64)v43,
              v44[0],
              a6,
              v35,
              1);
      if ( v32 >= 0 )
        goto LABEL_17;
      if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                           v22,
                           lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
            + 1) > 4u )
      {
        TlgCreateWsz(&pDesc, a2);
        v49 = 0;
        v52 = 0;
        v50 = &v32;
        v47 = &a6;
        v48 = 4;
        v51 = 4;
        TlgWrite(v25, &unk_180147368, v23, v24, 5u, &v45);
      }
      v17 = v32;
      if ( v32 >= 0 )
      {
LABEL_17:
        v32 = CConstraintModelResourceManager::AcquireResourceHandle(
                (CConstraintModelResourceManager *)a1,
                v9,
                v10,
                a6,
                1,
                &v37);
        v17 = v32;
        if ( v32 < 0 )
        {
          if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                               v26,
                               lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                + 1) > 4u )
          {
            TlgCreateWsz(&pDesc, a2);
            v49 = 0;
            v52 = 0;
            v50 = &v32;
            v47 = &a6;
            v48 = 4;
            v51 = 4;
            TlgWrite(v29, &unk_1801472EF, v27, v28, 5u, &v45);
          }
          v17 = v32;
        }
      }
    }
  }
  if ( v9 )
  {
    operator delete(v9);
    v17 = v32;
  }
  if ( v17 < 0 )
LABEL_24:
    v11 = 0;
  if ( v39 )
    LeaveCriticalSection(lpCriticalSection);
  return v11;
}
