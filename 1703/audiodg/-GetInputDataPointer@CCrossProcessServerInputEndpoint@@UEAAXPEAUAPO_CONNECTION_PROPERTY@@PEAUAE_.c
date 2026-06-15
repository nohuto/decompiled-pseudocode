/*
 * XREFs of ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140018D40
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCurrentTimeStamp@CCrossProcessBaseEndpoint@@MEAAXPEAUAE_CURRENT_POSITION@@_J@Z @ 0x1400190C0 (-SetCurrentTimeStamp@CCrossProcessBaseEndpoint@@MEAAXPEAUAE_CURRENT_POSITION@@_J@Z.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     memset @ 0x14001DC2C (memset.c)
 *     memcpy_0 @ 0x14001E75E (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@I@Z @ 0x140031C50 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@I@Z.c)
 *     WPP_SF_s @ 0x140054F38 (WPP_SF_s.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400550E4 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     Template_pqqqq @ 0x140056788 (Template_pqqqq.c)
 *     WPP_SF_DDDD @ 0x1400568C0 (WPP_SF_DDDD.c)
 *     ?ApplyVolumeRamp@@YAXPEAEIIIIH@Z @ 0x140056E78 (-ApplyVolumeRamp@@YAXPEAEIIIIH@Z.c)
 *     ?FillRampBuffer@CCrossProcessServerInputEndpoint@@AEAAXXZ @ 0x140056F84 (-FillRampBuffer@CCrossProcessServerInputEndpoint@@AEAAXXZ.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x1400600F0 (-AEWMILOG_DATA@@YAXKPEAXEE_K11@Z.c)
 *     ?AEWMILOG_SECURITY@@YAXKPEAXE@Z @ 0x14006032C (-AEWMILOG_SECURITY@@YAXKPEAXE@Z.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x1400603A0 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 */

void __fastcall CCrossProcessServerInputEndpoint::GetInputDataPointer(
        CCrossProcessServerInputEndpoint *this,
        struct APO_CONNECTION_PROPERTY *a2,
        struct AE_CURRENT_POSITION *a3)
{
  unsigned int v5; // r15d
  unsigned __int64 v6; // rbx
  unsigned int v7; // r14d
  void *v8; // rcx
  unsigned __int8 v9; // r8
  unsigned __int32 v10; // eax
  int v11; // r12d
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // r8
  int v16; // r10d
  __int64 v17; // rdx
  __int64 v18; // rdx
  unsigned int v19; // esi
  void (__fastcall *v20)(CCrossProcessBaseEndpoint *__hidden, struct AE_CURRENT_POSITION *, __int64); // rax
  CCrossProcessBaseEndpoint *v21; // rcx
  int v22; // ebx
  unsigned int v23; // r10d
  __int64 v24; // rax
  unsigned int v25; // esi
  char *v26; // rsi
  bool v27; // cf
  unsigned __int64 v28; // r9
  unsigned int v29; // r8d
  __int16 *pBuffer; // rdx
  int v31; // ecx
  unsigned int v32; // r8d
  _QWORD *v33; // rcx
  unsigned int v34; // ecx
  unsigned __int8 v35; // r8
  UINT32 v36; // ecx
  int v37; // ecx
  signed __int32 v38; // eax
  signed __int32 v39; // ett
  void *v40; // rcx
  const void *v41; // rdx
  unsigned int v42; // eax
  __int64 v43; // rbx
  size_t v44; // r8
  int v45; // edx
  unsigned int v46; // ecx
  int v47; // ecx
  int v48; // [rsp+40h] [rbp-C0h]
  size_t Size; // [rsp+48h] [rbp-B8h]
  __int64 v50; // [rsp+50h] [rbp-B0h]
  int v51; // [rsp+58h] [rbp-A8h]
  _BYTE EventTrace[64]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 u32ValidFrameCount; // [rsp+A0h] [rbp-60h]
  __int64 u32BufferFlags; // [rsp+A8h] [rbp-58h]
  __int64 v55; // [rsp+B0h] [rbp-50h]
  _BYTE v56[64]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v57; // [rsp+100h] [rbp+0h]
  __int64 v58; // [rsp+108h] [rbp+8h]
  __int64 v59; // [rsp+110h] [rbp+10h]
  unsigned int v60; // [rsp+170h] [rbp+70h]
  unsigned int v61; // [rsp+178h] [rbp+78h]
  unsigned int v62; // [rsp+178h] [rbp+78h]
  int v64; // [rsp+188h] [rbp+88h]

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
    v55 = 0LL;
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
  v11 = (v10 & 1) != 0;
  v64 = *((_DWORD *)this + 21);
  if ( (v10 & 1) == 0 && (*((_BYTE *)this - 280) & 1) == 0 || !(_DWORD)v6 )
  {
    v26 = (char *)this - 440;
    AEWMILOG_DATA(v10 & 1, (char *)this - 440, v9, 0x17u, v10, v6, 0x65uLL);
    if ( v64 != v11 && !v11 )
    {
      CCrossProcessServerInputEndpoint::FillRampBuffer((CCrossProcessServerInputEndpoint *)((char *)this - 440));
      if ( (_DWORD)v6 )
      {
        v32 = *((_DWORD *)this - 89);
        if ( v32 )
          ApplyVolumeRamp(*((unsigned __int8 **)this - 42), v6, v32, *((_DWORD *)this - 87), *((_DWORD *)this - 86), 0);
      }
      a2->u32BufferFlags = BUFFER_VALID;
      goto LABEL_71;
    }
LABEL_70:
    a2->u32BufferFlags = BUFFER_SILENT;
LABEL_71:
    a2->pBuffer = *((_QWORD *)this - 42);
    v38 = *(_DWORD *)(*((_QWORD *)this - 47) + 156LL);
    do
    {
      v39 = v38;
      v38 = _InterlockedCompareExchange(
              (volatile signed __int32 *)(*((_QWORD *)this - 47) + 156LL),
              v38 & 0xFFFFFFFD,
              v38);
    }
    while ( v39 != v38 );
    goto LABEL_20;
  }
  v12 = *((_QWORD *)this - 47);
  v13 = *(_QWORD *)(v12 + 8);
  v14 = *(_QWORD *)(v12 + 16);
  v50 = v13;
  if ( v13 < 0 )
  {
    AEWMILOG_SECURITY(v12, (char *)this - 440, v9);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) )
    {
      WPP_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        38LL,
        &WPP_16533aa73b2d367cdf7d3dcf93dce015_Traceguids,
        "Security failure - memory overwrite detected - Invalid offset.");
    }
    v26 = (char *)this - 440;
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 47) + 156LL), 0xFFFFFFFE);
    v33 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
    {
      goto LABEL_55;
    }
LABEL_54:
    WPP_SF_D(v33[2], 37LL, &WPP_16533aa73b2d367cdf7d3dcf93dce015_Traceguids, 0LL);
LABEL_55:
    AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidOffset", 0x64Au, -2147467259);
    AEWMILOG_DATA(v34, v26, v35, 0x17u, v50, v14, 0x66uLL);
    goto LABEL_70;
  }
  if ( v14 < 0 )
  {
    AEWMILOG_SECURITY(v12, (char *)this - 440, v9);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) )
    {
      WPP_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        38LL,
        &WPP_16533aa73b2d367cdf7d3dcf93dce015_Traceguids,
        "Security failure - memory overwrite detected - Invalid offset.");
    }
    v26 = (char *)this - 440;
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 47) + 156LL), 0xFFFFFFFE);
    v33 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
    {
      goto LABEL_55;
    }
    goto LABEL_54;
  }
  v15 = *((unsigned int *)this - 76);
  v16 = *(_DWORD *)(*((_QWORD *)this - 46) + 140LL);
  v48 = v16;
  if ( v15 == 4144 )
    v17 = v13 % 4144;
  else
    v17 = v13 % v15;
  v61 = v17 + v16;
  if ( v15 == 4144 )
    v18 = v14 % 4144;
  else
    v18 = v14 % v15;
  v51 = v18;
  v5 = v13 - v14;
  v19 = v18 + v16;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 168), 0, 0) )
  {
    v36 = v5 / *((_DWORD *)this - 90);
    if ( a2->u32ValidFrameCount < v36 )
      v36 = a2->u32ValidFrameCount;
    a2->u32ValidFrameCount = v36;
    *((_DWORD *)this + 5) = v36;
    v60 = v36;
  }
  v20 = *(void (__fastcall **)(CCrossProcessBaseEndpoint *__hidden, struct AE_CURRENT_POSITION *, __int64))(*((_QWORD *)this - 55) + 80LL);
  v21 = (CCrossProcessServerInputEndpoint *)((char *)this - 440);
  if ( v20 == CCrossProcessBaseEndpoint::SetCurrentTimeStamp )
    CCrossProcessBaseEndpoint::SetCurrentTimeStamp(v21, a3, v14);
  else
    v20(v21, a3, v14);
  v22 = 0;
  v23 = v60;
  v7 = v60 * *((_DWORD *)this - 90);
  *((_DWORD *)this + 20) = 0;
  if ( v7 > v5 )
  {
    Size = v7 - v5;
    AEWMILOG_GLITCH(v61, (char *)this - 440, v19, 2u, v61, v19, *((unsigned int *)this - 76), Size);
    if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
      Template_pqqqq(
        v37,
        (unsigned int)&EVT_GLITCH_CP_SERVER_INPUT_STARVATION,
        (_DWORD)this - 440,
        v61,
        v19,
        *((_DWORD *)this - 76),
        Size);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_DDDD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        10LL,
        &WPP_a301c75205ba3aed45b7171fbb8085cd_Traceguids,
        v61,
        v19,
        v7,
        v5);
    }
    if ( v50 > 0 )
      CCrossProcessEndpointTraceLogger::Glitch((char *)this - 256, 5LL);
    if ( v5 )
    {
      v40 = (void *)*((_QWORD *)this - 42);
      v41 = (const void *)(*((_QWORD *)this - 47) + v19);
      v42 = *(_DWORD *)(*((_QWORD *)this - 46) + 144LL) - v19;
      v62 = v42;
      if ( v5 <= v42 )
      {
        v44 = v5;
      }
      else
      {
        v43 = v42;
        memcpy_0(v40, v41, v42);
        v44 = v5 - v62;
        v41 = (const void *)(*((_QWORD *)this - 47) + *(unsigned int *)(*((_QWORD *)this - 46) + 140LL));
        v40 = (void *)(v43 + *((_QWORD *)this - 42));
      }
      memcpy_0(v40, v41, v44);
      v45 = 128;
      if ( *((_DWORD *)this - 87) != 8 )
        v45 = 0;
      memset((void *)(*((_QWORD *)this - 42) + v5), v45, Size);
      *((_DWORD *)this + 20) = Size;
      goto LABEL_23;
    }
    *((_DWORD *)this + 20) = v7;
    v26 = (char *)this - 440;
    goto LABEL_70;
  }
  v24 = (unsigned int)(v48 + v51);
  v25 = *(_DWORD *)(*((_QWORD *)this - 46) + 144LL) - v24;
  if ( v7 > v25 )
  {
    memcpy_0(*((void **)this - 42), (const void *)(*((_QWORD *)this - 47) + (unsigned int)v24), v25);
    memcpy_0(
      (void *)(v25 + *((_QWORD *)this - 42)),
      (const void *)(*((_QWORD *)this - 47) + *(unsigned int *)(*((_QWORD *)this - 46) + 140LL)),
      v7 - v25);
LABEL_23:
    v22 = 0;
    v23 = v60;
    a2->pBuffer = *((_QWORD *)this - 42);
    *((_DWORD *)this + 4) = 1;
    goto LABEL_17;
  }
  a2->pBuffer = *((_QWORD *)this - 47) + v24;
  *((_DWORD *)this + 4) = 0;
LABEL_17:
  a2->u32BufferFlags = BUFFER_VALID;
  if ( (*((_BYTE *)this - 280) & 1) != 0 || v64 == v11 || v11 != 1 )
    goto LABEL_19;
  v28 = *((unsigned int *)this - 87);
  v29 = *((_DWORD *)this - 89);
  pBuffer = (__int16 *)a2->pBuffer;
  if ( (_DWORD)v28 == 16 )
  {
    v31 = 0;
    if ( v29 )
    {
      while ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*pBuffer * 0.000030517578)) & _xmm) < 0.004999999888241291 )
      {
        ++pBuffer;
        if ( ++v31 >= v29 )
        {
          v26 = (char *)this - 440;
          goto LABEL_20;
        }
      }
      goto LABEL_99;
    }
LABEL_19:
    v26 = (char *)this - 440;
    goto LABEL_20;
  }
  if ( (_DWORD)v28 == 8 )
  {
    v47 = 0;
    if ( v29 )
    {
      while ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(char)(*(_BYTE *)pBuffer + 0x80) * 0.0078125)) & _xmm) <= 0.004999999888241291 )
      {
        pBuffer = (__int16 *)((char *)pBuffer + 1);
        if ( ++v47 >= v29 )
        {
          v26 = (char *)this - 440;
          goto LABEL_20;
        }
      }
      goto LABEL_99;
    }
    goto LABEL_19;
  }
  if ( (_DWORD)v28 != 24 )
  {
    v46 = 0;
    if ( *((_DWORD *)this - 86) == 3 )
    {
      if ( v29 )
      {
        while ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)pBuffer) & _xmm) < 0.004999999888241291 )
        {
          ++v46;
          pBuffer = (__int16 *)((char *)pBuffer + (v28 >> 3));
          if ( v46 >= v29 )
            goto LABEL_19;
        }
        goto LABEL_99;
      }
    }
    else if ( v29 )
    {
      while ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*(int *)pBuffer * 4.6566129e-10)) & _xmm) < 0.004999999888241291 )
      {
        ++v46;
        pBuffer = (__int16 *)((char *)pBuffer + (v28 >> 3));
        if ( v46 >= v29 )
        {
          v26 = (char *)this - 440;
          goto LABEL_20;
        }
      }
      goto LABEL_99;
    }
    goto LABEL_19;
  }
  if ( !v29 )
  {
LABEL_94:
    v26 = (char *)this - 440;
    goto LABEL_20;
  }
  while ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((*(unsigned __int8 *)pBuffer | (*(unsigned __int16 *)((char *)pBuffer + 1) << 8)) << 8 >> 8)
                                                    * 0.00000011920929)) & _xmm) < 0.004999999888241291 )
  {
    pBuffer = (__int16 *)((char *)pBuffer + 3);
    if ( ++v22 >= v29 )
      goto LABEL_94;
  }
LABEL_99:
  ApplyVolumeRamp((unsigned __int8 *)a2->pBuffer, v23, v29, v28, *((_DWORD *)this - 86), 1);
  v26 = (char *)this - 440;
LABEL_20:
  v27 = g_u32AEWMILogLevel < 5;
  *((_DWORD *)this + 21) = v11;
  if ( !v27 )
  {
    memset(v56, 0, sizeof(v56));
    *(_DWORD *)&v56[44] = 0x20000;
    strcpy(v56, "X");
    v57 = v7;
    v58 = v5;
    v59 = *((int *)this + 4);
    *(_OWORD *)&v56[24] = AEWMIGUID_DATA;
    *(_WORD *)&v56[4] = 1286;
    *(_QWORD *)&v56[48] = v26;
    *(_DWORD *)&v56[56] = 0;
    TraceEvent(g_hAEWMITraceHandle, (PEVENT_TRACE_HEADER)v56);
  }
}
