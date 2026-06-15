/*
 * XREFs of ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140017480
 * Callers:
 *     <none>
 * Callees:
 *     ?FillRampBuffer@CCrossProcessServerInputEndpoint@@AEAAXXZ @ 0x140017394 (-FillRampBuffer@CCrossProcessServerInputEndpoint@@AEAAXXZ.c)
 *     ?SetCurrentTimeStamp@CCrossProcessBaseEndpoint@@MEAAXPEAUAE_CURRENT_POSITION@@_J@Z @ 0x140017960 (-SetCurrentTimeStamp@CCrossProcessBaseEndpoint@@MEAAXPEAUAE_CURRENT_POSITION@@_J@Z.c)
 *     ?CheckSampleForSilence@@YAHPEAEIII@Z @ 0x140018C24 (-CheckSampleForSilence@@YAHPEAEIII@Z.c)
 *     ?ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z @ 0x14001A420 (-ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z.c)
 *     memset @ 0x14001D9AC (memset.c)
 *     memcpy_0 @ 0x14001E51D (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     WPP_SF_s @ 0x140056DE8 (WPP_SF_s.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140056F64 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x140057014 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     McTemplateU0pqqqq @ 0x1400575B0 (McTemplateU0pqqqq.c)
 *     WPP_SF_DDDD @ 0x14005764C (WPP_SF_DDDD.c)
 *     ?AEWMILOG_SECURITY@@YAXKPEAXE@Z @ 0x1400631E0 (-AEWMILOG_SECURITY@@YAXKPEAXE@Z.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x140063254 (-AEWMILOG_DATA@@YAXKPEAXEE_K11@Z.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x1400632F0 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 */

void __fastcall CCrossProcessServerInputEndpoint::GetInputDataPointer(
        CCrossProcessServerInputEndpoint *this,
        struct APO_CONNECTION_PROPERTY *a2,
        struct AE_CURRENT_POSITION *a3)
{
  unsigned int v5; // r13d
  __int64 v6; // rsi
  unsigned int v7; // r14d
  void *v8; // rcx
  unsigned __int8 v9; // r8
  unsigned __int32 v10; // eax
  int v11; // r12d
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rcx
  signed __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // r8
  int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned int v21; // r12d
  void (__fastcall *v22)(CCrossProcessBaseEndpoint *__hidden, struct AE_CURRENT_POSITION *, __int64); // rax
  CCrossProcessBaseEndpoint *v23; // rcx
  unsigned int v24; // esi
  int v25; // edi
  bool v26; // cf
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  unsigned __int8 *pBuffer; // r15
  unsigned int v30; // esi
  unsigned int v31; // r12d
  unsigned int v32; // edx
  unsigned int v33; // r11d
  unsigned int v34; // r9d
  char *v35; // r12
  _QWORD *v36; // rcx
  unsigned int v37; // ecx
  unsigned __int8 v38; // r8
  UINT32 v39; // ecx
  int v40; // ecx
  void *v41; // rcx
  const void *v42; // rdx
  unsigned int v43; // esi
  size_t v44; // r8
  int v45; // edx
  int v46; // [rsp+40h] [rbp-C0h]
  size_t Size; // [rsp+48h] [rbp-B8h]
  _BYTE EventTrace[64]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 u32ValidFrameCount; // [rsp+90h] [rbp-70h]
  __int64 u32BufferFlags; // [rsp+98h] [rbp-68h]
  __int64 v51; // [rsp+A0h] [rbp-60h]
  _BYTE v52[64]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v53; // [rsp+F0h] [rbp-10h]
  __int64 v54; // [rsp+F8h] [rbp-8h]
  __int64 v55; // [rsp+100h] [rbp+0h]
  _BYTE v56[64]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v57; // [rsp+150h] [rbp+50h]
  __int64 v58; // [rsp+158h] [rbp+58h]
  __int64 v59; // [rsp+160h] [rbp+60h]
  UINT32 v60; // [rsp+1C0h] [rbp+C0h]
  int v61; // [rsp+1C8h] [rbp+C8h]
  unsigned int v63; // [rsp+1D8h] [rbp+D8h]

  v5 = 0;
  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset(EventTrace, 0, sizeof(EventTrace));
    *(_QWORD *)&EventTrace[48] = (char *)this - 440;
    u32ValidFrameCount = a2->u32ValidFrameCount;
    u32BufferFlags = a2->u32BufferFlags;
    strcpy(EventTrace, "X");
    *(_DWORD *)&EventTrace[44] = 0x20000;
    *(_OWORD *)&EventTrace[24] = AEWMIGUID_DATA;
    *(_WORD *)&EventTrace[4] = 1285;
    *(_DWORD *)&EventTrace[56] = 0;
    v51 = 0LL;
    TraceEvent(g_hAEWMITraceHandle, (PEVENT_TRACE_HEADER)EventTrace);
  }
  v6 = a2->u32ValidFrameCount;
  v7 = 0;
  v8 = (void *)*((_QWORD *)this - 39);
  v60 = v6;
  *((_DWORD *)this + 5) = v6;
  *((_DWORD *)this + 4) = 2;
  ResetEvent(v8);
  v10 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 47) + 156LL), 0, 0);
  v11 = *((_DWORD *)this + 21);
  v12 = v10;
  v61 = v10 & 1;
  v13 = v61;
  v46 = v11;
  if ( !(_BYTE)v61 && (*((_BYTE *)this - 280) & 1) == 0 || !(_DWORD)v6 )
  {
    if ( g_u32AEWMILogLevel >= 5 )
    {
      memset(v52, 0, sizeof(v52));
      *(_DWORD *)&v52[56] = 0;
      strcpy(v52, "X");
      *(_DWORD *)&v52[44] = 0x20000;
      *(_QWORD *)&v52[48] = (char *)this - 440;
      *(_OWORD *)&v52[24] = AEWMIGUID_DATA;
      *(_WORD *)&v52[4] = 1303;
      v53 = v12;
      v54 = v6;
      v55 = 101LL;
      TraceEvent(g_hAEWMITraceHandle, (PEVENT_TRACE_HEADER)v52);
      v13 = v61;
    }
    if ( v11 != v13 && !v13 )
    {
      CCrossProcessServerInputEndpoint::FillRampBuffer((CCrossProcessServerInputEndpoint *)((char *)this - 440));
      if ( (_DWORD)v6 )
      {
        v34 = *((_DWORD *)this - 89);
        if ( v34 )
          ApplyVolumeRamp(
            (CCrossProcessServerInputEndpoint *)((char *)this + 88),
            *((unsigned __int8 **)this - 42),
            v6,
            v34,
            *((_DWORD *)this - 87),
            *((_DWORD *)this - 86),
            *((_DWORD *)this - 85),
            0);
      }
      a2->u32BufferFlags = BUFFER_VALID;
      goto LABEL_30;
    }
LABEL_29:
    a2->u32BufferFlags = BUFFER_SILENT;
LABEL_30:
    a2->pBuffer = *((_QWORD *)this - 42);
    v27 = *(_DWORD *)(*((_QWORD *)this - 47) + 156LL);
    do
    {
      v28 = v27;
      v27 = _InterlockedCompareExchange(
              (volatile signed __int32 *)(*((_QWORD *)this - 47) + 156LL),
              v27 & 0xFFFFFFFD,
              v27);
    }
    while ( v28 != v27 );
    v25 = v61;
    goto LABEL_19;
  }
  v14 = *((_QWORD *)this - 47);
  v15 = *(_QWORD *)(v14 + 8);
  v16 = *(_QWORD *)(v14 + 16);
  if ( v15 < 0 )
  {
    AEWMILOG_SECURITY(v14, (char *)this - 440, v9);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) )
    {
      WPP_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        38LL,
        &WPP_a656f1dc337437ce15896b73439d7644_Traceguids,
        "Security failure - memory overwrite detected - Invalid offset.");
    }
    v35 = (char *)this - 440;
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 47) + 156LL), 0xFFFFFFFE);
    v36 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
    {
      goto LABEL_57;
    }
LABEL_56:
    WPP_SF_D(v36[2], 37LL, &WPP_a656f1dc337437ce15896b73439d7644_Traceguids, 0LL);
LABEL_57:
    AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidOffset", 0x64Eu, -2147467259);
    AEWMILOG_DATA(v37, v35, v38, 0x17u, v15, v16, 0x66uLL);
    goto LABEL_29;
  }
  if ( v16 < 0 )
  {
    AEWMILOG_SECURITY(v14, (char *)this - 440, v9);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) )
    {
      WPP_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        38LL,
        &WPP_a656f1dc337437ce15896b73439d7644_Traceguids,
        "Security failure - memory overwrite detected - Invalid offset.");
    }
    v35 = (char *)this - 440;
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 47) + 156LL), 0xFFFFFFFE);
    v36 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
    {
      goto LABEL_57;
    }
    goto LABEL_56;
  }
  v17 = *((unsigned int *)this - 76);
  v18 = *(_DWORD *)(*((_QWORD *)this - 46) + 140LL);
  if ( v17 == 76800 )
    v19 = v15 % 76800;
  else
    v19 = v15 % v17;
  v63 = v19 + v18;
  if ( v17 == 76800 )
    v20 = v16 % 76800;
  else
    v20 = v16 % v17;
  v21 = v20 + v18;
  v5 = v15 - v16;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 168), 0, 0) )
  {
    v39 = v5 / *((_DWORD *)this - 90);
    if ( a2->u32ValidFrameCount < v39 )
      v39 = a2->u32ValidFrameCount;
    a2->u32ValidFrameCount = v39;
    *((_DWORD *)this + 5) = v39;
    v60 = v39;
  }
  v22 = *(void (__fastcall **)(CCrossProcessBaseEndpoint *__hidden, struct AE_CURRENT_POSITION *, __int64))(*((_QWORD *)this - 55) + 80LL);
  v23 = (CCrossProcessServerInputEndpoint *)((char *)this - 440);
  if ( v22 == CCrossProcessBaseEndpoint::SetCurrentTimeStamp )
    CCrossProcessBaseEndpoint::SetCurrentTimeStamp(v23, a3, v16);
  else
    v22(v23, a3, v16);
  v7 = v60 * *((_DWORD *)this - 90);
  *((_DWORD *)this + 20) = 0;
  if ( v7 > v5 )
  {
    Size = v7 - v5;
    AEWMILOG_GLITCH(v63, (char *)this - 440, v21, 2u, v63, v21, *((unsigned int *)this - 76), Size);
    if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
      McTemplateU0pqqqq(
        v40,
        (unsigned int)&EVT_GLITCH_CP_SERVER_INPUT_STARVATION,
        (_DWORD)this - 440,
        v63,
        v21,
        *((_DWORD *)this - 76),
        Size);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_DDDD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        10LL,
        &WPP_eafc973c17df3eb3b5e0d8b339ba18aa_Traceguids,
        v63,
        v21,
        v7,
        v15 - v16);
    }
    if ( v15 > 0 )
      CCrossProcessEndpointTraceLogger::Glitch((char *)this - 256, 5LL, "CpGlitchEvent::SERVER_INPUT_STARVATION");
    if ( v5 )
    {
      v41 = (void *)*((_QWORD *)this - 42);
      v42 = (const void *)(*((_QWORD *)this - 47) + v21);
      v43 = *(_DWORD *)(*((_QWORD *)this - 46) + 144LL) - v21;
      if ( v5 <= v43 )
      {
        v44 = v5;
      }
      else
      {
        memcpy_0(v41, v42, v43);
        v44 = v5 - v43;
        v42 = (const void *)(*((_QWORD *)this - 47) + *(unsigned int *)(*((_QWORD *)this - 46) + 140LL));
        v41 = (void *)(v43 + *((_QWORD *)this - 42));
      }
      memcpy_0(v41, v42, v44);
      v45 = 128;
      if ( *((_DWORD *)this - 86) != 8 )
        v45 = 0;
      memset((void *)(*((_QWORD *)this - 42) + v5), v45, Size);
      *((_DWORD *)this + 20) = Size;
      goto LABEL_24;
    }
    *((_DWORD *)this + 20) = v7;
    goto LABEL_29;
  }
  v24 = *(_DWORD *)(*((_QWORD *)this - 46) + 144LL) - v21;
  if ( v7 > v24 )
  {
    memcpy_0(*((void **)this - 42), (const void *)(*((_QWORD *)this - 47) + v21), v24);
    memcpy_0(
      (void *)(v24 + *((_QWORD *)this - 42)),
      (const void *)(*((_QWORD *)this - 47) + *(unsigned int *)(*((_QWORD *)this - 46) + 140LL)),
      v7 - v24);
LABEL_24:
    a2->pBuffer = *((_QWORD *)this - 42);
    *((_DWORD *)this + 4) = 1;
    goto LABEL_17;
  }
  a2->pBuffer = *((_QWORD *)this - 47) + v21;
  *((_DWORD *)this + 4) = 0;
LABEL_17:
  v25 = v61;
  a2->u32BufferFlags = BUFFER_VALID;
  if ( (*((_BYTE *)this - 280) & 1) == 0 && v46 != v61 && v61 == 1 )
  {
    pBuffer = (unsigned __int8 *)a2->pBuffer;
    v30 = *((_DWORD *)this - 85);
    v31 = *((_DWORD *)this - 86);
    if ( !(unsigned int)CheckSampleForSilence(pBuffer, *((_DWORD *)this - 89), v31, v30) )
      ApplyVolumeRamp(
        (CCrossProcessServerInputEndpoint *)((char *)this + 88),
        pBuffer,
        v33,
        v32,
        *((_DWORD *)this - 87),
        v31,
        v30,
        1);
  }
LABEL_19:
  v26 = g_u32AEWMILogLevel < 5;
  *((_DWORD *)this + 21) = v25;
  if ( !v26 )
  {
    memset(v56, 0, sizeof(v56));
    *(_DWORD *)&v56[44] = 0x20000;
    strcpy(v56, "X");
    *(_QWORD *)&v56[48] = (char *)this - 440;
    *(_DWORD *)&v56[56] = 0;
    v57 = v7;
    v58 = v5;
    v59 = *((int *)this + 4);
    *(_OWORD *)&v56[24] = AEWMIGUID_DATA;
    *(_WORD *)&v56[4] = 1286;
    TraceEvent(g_hAEWMITraceHandle, (PEVENT_TRACE_HEADER)v56);
  }
}
