/*
 * XREFs of ?GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z @ 0x18001ACAC
 * Callers:
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180018810 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18002D140 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180070260 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?GetNextValue@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAAEAPEAVCGainStage@@AEAPEAU__POSITION@@@Z @ 0x180071F6C (-GetNextValue@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTrait.c)
 *     WPP_SF_S_guid_ @ 0x180076C80 (WPP_SF_S_guid_.c)
 *     WPP_SF_S_guid_g @ 0x180076CFC (WPP_SF_S_guid_g.c)
 *     WPP_SF_Sg @ 0x180076E18 (WPP_SF_Sg.c)
 */

__int64 __fastcall CAudioSession::GetCurrentPolicyGain(
        CAudioSession *this,
        __int64 *a2,
        bool *a3,
        struct SessionPolicyGains *a4,
        __int64 *a5)
{
  __int64 *v5; // rsi
  float *v6; // r12
  float v8; // xmm6_4
  int v10; // r8d
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // r8d
  __int64 v17; // r14
  __int64 v18; // rax
  int v19; // edx
  int v20; // r8d
  __int64 v21; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-48h] BYREF
  char v23; // [rsp+38h] [rbp-40h]
  __int64 v24; // [rsp+80h] [rbp+8h] BYREF
  struct SessionPolicyGains *v25; // [rsp+98h] [rbp+20h]

  v25 = a4;
  v5 = a5;
  v6 = (float *)a4;
  v8 = FLOAT_1_0;
  if ( a2 )
    *a5 = *a2;
  else
    *a5 = 0LL;
  *a3 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 432);
  v23 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( *((_QWORD *)this + 60)
    && WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sg(*((_QWORD *)WPP_GLOBAL_Control + 2), 35, v10, *((_QWORD *)this + 99), SLOBYTE(DOUBLE_1_0));
  }
  if ( *((_QWORD *)this + 60) )
  {
    v12 = 0LL;
    if ( *((_DWORD *)this + 122) )
    {
      v13 = *((_QWORD *)this + 59);
      while ( !*(_QWORD *)(v13 + 8 * v12) )
      {
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= *((_DWORD *)this + 122) )
          goto LABEL_17;
      }
      v14 = *(_QWORD *)(v13 + 8 * v12);
    }
    else
    {
LABEL_17:
      v14 = 0LL;
    }
    v24 = v14;
    if ( v14 )
    {
      do
      {
        v15 = *(_QWORD *)ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetNextValue(
                           (char *)this + 472,
                           &v24);
        v17 = v15 + 16;
        v18 = *(_QWORD *)(v15 + 16) - MutePolicyGuid;
        if ( *(_QWORD *)(v15 + 16) == (_QWORD)MutePolicyGuid )
          v18 = *(_QWORD *)(v15 + 24) - *((_QWORD *)&MutePolicyGuid + 1);
        if ( v18 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15) )
          {
            if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_S_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 37, v20, *((_QWORD *)this + 99), v17);
            }
            *a3 = 1;
          }
          else if ( v8 > *(float *)(v15 + 48) )
          {
            if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_S_guid_g(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                v19,
                v20,
                *((_QWORD *)this + 99),
                v17,
                *(_OWORD *)&_mm_cvtps_pd((__m128)*(unsigned int *)(v15 + 48)));
            }
            v21 = *(_QWORD *)(v15 + 40);
            v8 = *(float *)(v15 + 48);
            if ( v21 > *v5 )
              *v5 = v21;
          }
        }
        else if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
               && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 36, v16, *((_QWORD *)this + 99), v17);
        }
      }
      while ( v24 );
      v6 = (float *)v25;
    }
  }
  if ( v23 )
    LeaveCriticalSection(lpCriticalSection);
  *v6 = v8;
  return 0LL;
}
