/*
 * XREFs of ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140017B40
 * Callers:
 *     <none>
 * Callees:
 *     ?FillRampBuffer@CCrossProcessServerInputEndpoint@@AEAAXXZ @ 0x140017A54 (-FillRampBuffer@CCrossProcessServerInputEndpoint@@AEAAXXZ.c)
 *     ?SetCurrentTimeStamp@CCrossProcessBaseEndpoint@@MEAAXPEAUAE_CURRENT_POSITION@@_J@Z @ 0x140017FE0 (-SetCurrentTimeStamp@CCrossProcessBaseEndpoint@@MEAAXPEAUAE_CURRENT_POSITION@@_J@Z.c)
 *     ?CheckSampleForSilence@@YAHPEAEIII@Z @ 0x1400192D8 (-CheckSampleForSilence@@YAHPEAEIII@Z.c)
 *     ?ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z @ 0x14001A508 (-ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 *     memcpy_0 @ 0x14001D6ED (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     WPP_SF_s @ 0x140054A68 (WPP_SF_s.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140054BE4 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x140054C94 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     McTemplateU0pqqqq @ 0x1400551E0 (McTemplateU0pqqqq.c)
 *     WPP_SF_DDDD @ 0x14005527C (WPP_SF_DDDD.c)
 *     ?AEWMILOG_SECURITY@@YAXKPEAXE@Z @ 0x1400601E0 (-AEWMILOG_SECURITY@@YAXKPEAXE@Z.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x140060254 (-AEWMILOG_DATA@@YAXKPEAXEE_K11@Z.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x1400602F0 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 */

void __fastcall CCrossProcessServerInputEndpoint::GetInputDataPointer(
        CCrossProcessServerInputEndpoint *this,
        struct APO_CONNECTION_PROPERTY *a2,
        struct AE_CURRENT_POSITION *a3)
{
  char *v3; // r15
  unsigned int v6; // r14d
  __int64 v7; // rdi
  unsigned int v8; // esi
  void *v9; // rcx
  unsigned __int8 v10; // r8
  signed __int32 v11; // eax
  char v12; // cl
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // r13d
  __int64 v16; // r9
  __int64 v17; // r11
  __int64 v18; // rdi
  int v19; // ecx
  unsigned int v20; // r14d
  void (__fastcall *v21)(CCrossProcessBaseEndpoint *__hidden, struct AE_CURRENT_POSITION *, __int64); // rax
  CCrossProcessBaseEndpoint *v22; // rcx
  unsigned int v23; // r14d
  bool v24; // cf
  APO_BUFFER_FLAGS v25; // eax
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  unsigned __int8 *pBuffer; // r12
  unsigned int v29; // edx
  unsigned int v30; // r11d
  unsigned int v31; // r9d
  char *v32; // r14
  _QWORD *v33; // rcx
  unsigned int v34; // ecx
  unsigned __int8 v35; // r8
  unsigned int v36; // ecx
  int v37; // ecx
  const void *v38; // rdx
  void *v39; // r9
  unsigned int v40; // ecx
  __int64 v41; // rdi
  int v42; // edx
  unsigned __int32 v43; // [rsp+40h] [rbp-C0h]
  unsigned int v44; // [rsp+40h] [rbp-C0h]
  size_t v45; // [rsp+48h] [rbp-B8h]
  size_t v46; // [rsp+48h] [rbp-B8h]
  unsigned int v47; // [rsp+50h] [rbp-B0h]
  unsigned int v48; // [rsp+58h] [rbp-A8h]
  __int64 v49; // [rsp+60h] [rbp-A0h]
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+70h] [rbp-90h] BYREF
  char *v51; // [rsp+A0h] [rbp-60h]
  int v52; // [rsp+A8h] [rbp-58h]
  __int64 u32ValidFrameCount; // [rsp+B0h] [rbp-50h]
  __int64 u32BufferFlags; // [rsp+B8h] [rbp-48h]
  __int64 v55; // [rsp+C0h] [rbp-40h]
  struct _EVENT_TRACE_HEADER v56; // [rsp+D0h] [rbp-30h] BYREF
  size_t v57; // [rsp+100h] [rbp+0h]
  int v58; // [rsp+108h] [rbp+8h]
  __int64 v59; // [rsp+110h] [rbp+10h]
  __int64 v60; // [rsp+118h] [rbp+18h]
  __int64 v61; // [rsp+120h] [rbp+20h]
  struct _EVENT_TRACE_HEADER v62; // [rsp+130h] [rbp+30h] BYREF
  char *v63; // [rsp+160h] [rbp+60h]
  int v64; // [rsp+168h] [rbp+68h]
  __int64 v65; // [rsp+170h] [rbp+70h]
  __int64 v66; // [rsp+178h] [rbp+78h]
  __int64 v67; // [rsp+180h] [rbp+80h]
  unsigned int Size; // [rsp+1E0h] [rbp+E0h]
  unsigned int v69; // [rsp+1E8h] [rbp+E8h]
  int v71; // [rsp+1F8h] [rbp+F8h]

  v3 = (char *)this - 440;
  v6 = 0;
  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    u32ValidFrameCount = a2->u32ValidFrameCount;
    u32BufferFlags = a2->u32BufferFlags;
    EventTrace.Size = 88;
    EventTrace.UserTime = 0x20000;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_DATA;
    LOWORD(EventTrace.Version) = 1285;
    v51 = v3;
    v52 = 0;
    v55 = 0LL;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
  v7 = a2->u32ValidFrameCount;
  v8 = 0;
  v9 = (void *)*((_QWORD *)this - 39);
  v69 = v7;
  *((_DWORD *)this + 5) = v7;
  *((_DWORD *)this + 4) = 2;
  ResetEvent(v9);
  v11 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 47) + 156LL), 0, 0);
  v12 = v11;
  v43 = v11;
  v13 = *((_DWORD *)this + 21);
  v14 = v12 & 1;
  v71 = v13;
  v15 = v14;
  if ( !(_BYTE)v14 && (v45 = (size_t)v3, (*((_BYTE *)this - 280) & 1) == 0) || (v45 = (size_t)v3, !(_DWORD)v7) )
  {
    if ( g_u32AEWMILogLevel >= 5 )
    {
      memset_0(&v56, 0, 0x40uLL);
      v58 = 0;
      v56.Size = 88;
      v57 = v45;
      v59 = v43;
      v56.UserTime = 0x20000;
      v56.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_DATA;
      LOWORD(v56.Version) = 1303;
      v60 = v7;
      v61 = 101LL;
      TraceEvent(g_hAEWMITraceHandle, &v56);
      v13 = v71;
    }
    if ( v13 != v15 && !v15 )
    {
      CCrossProcessServerInputEndpoint::FillRampBuffer((CCrossProcessServerInputEndpoint *)((char *)this - 440));
      if ( (_DWORD)v7 )
      {
        v31 = *((_DWORD *)this - 89);
        if ( v31 )
          ApplyVolumeRamp(
            (CCrossProcessServerInputEndpoint *)((char *)this + 88),
            *((unsigned __int8 **)this - 42),
            v7,
            v31,
            *((_DWORD *)this - 87),
            *((_DWORD *)this - 86),
            *((_DWORD *)this - 85),
            0);
      }
      v25 = BUFFER_VALID;
      goto LABEL_23;
    }
LABEL_22:
    v25 = BUFFER_SILENT;
LABEL_23:
    a2->u32BufferFlags = v25;
    a2->pBuffer = *((_QWORD *)this - 42);
    v26 = *(_DWORD *)(*((_QWORD *)this - 47) + 156LL);
    do
    {
      v27 = v26;
      v26 = _InterlockedCompareExchange(
              (volatile signed __int32 *)(*((_QWORD *)this - 47) + 156LL),
              v26 & 0xFFFFFFFD,
              v26);
    }
    while ( v27 != v26 );
    goto LABEL_15;
  }
  v16 = *((_QWORD *)this - 47);
  v17 = *(_QWORD *)(v16 + 8);
  v18 = *(_QWORD *)(v16 + 16);
  v49 = v17;
  if ( v17 < 0 )
  {
    AEWMILOG_SECURITY(v14, (char *)this - 440, v10);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) )
    {
      WPP_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        38LL,
        &WPP_698a2f115f533c7f031ecbc2e80baf0e_Traceguids,
        "Security failure - memory overwrite detected - Invalid offset.");
    }
    v32 = (char *)this - 440;
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 47) + 156LL), 0xFFFFFFFE);
    v33 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
    {
      goto LABEL_50;
    }
LABEL_49:
    WPP_SF_D(v33[2], 37LL, &WPP_698a2f115f533c7f031ecbc2e80baf0e_Traceguids, 0LL);
LABEL_50:
    AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidOffset", 0x64Eu, -2147467259);
    AEWMILOG_DATA(v34, v32, v35, 0x17u, v49, v18, 0x66uLL);
    v6 = 0;
    goto LABEL_22;
  }
  if ( v18 < 0 )
  {
    AEWMILOG_SECURITY(v14, (char *)this - 440, v10);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) )
    {
      WPP_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        38LL,
        &WPP_698a2f115f533c7f031ecbc2e80baf0e_Traceguids,
        "Security failure - memory overwrite detected - Invalid offset.");
    }
    v32 = (char *)this - 440;
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 47) + 156LL), 0xFFFFFFFE);
    v33 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
    {
      goto LABEL_50;
    }
    goto LABEL_49;
  }
  v19 = *(_DWORD *)(*((_QWORD *)this - 46) + 140LL);
  v47 = v19 + v17 % *((unsigned int *)this - 76);
  v20 = v19 + v18 % *((unsigned int *)this - 76);
  v48 = v20;
  Size = v17 - v18;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 168), 0, 0) )
  {
    v36 = a2->u32ValidFrameCount;
    if ( v36 >= (unsigned int)(v17 - v18) / *((_DWORD *)this - 90) )
      v36 = (unsigned int)(v17 - v18) / *((_DWORD *)this - 90);
    a2->u32ValidFrameCount = v36;
    *((_DWORD *)this + 5) = v36;
    v69 = v36;
  }
  v21 = *(void (__fastcall **)(CCrossProcessBaseEndpoint *__hidden, struct AE_CURRENT_POSITION *, __int64))(*((_QWORD *)this - 55) + 80LL);
  v22 = (CCrossProcessServerInputEndpoint *)((char *)this - 440);
  if ( v21 == CCrossProcessBaseEndpoint::SetCurrentTimeStamp )
    CCrossProcessBaseEndpoint::SetCurrentTimeStamp(v22, a3, v18);
  else
    v21(v22, a3, v18);
  v8 = v69 * *((_DWORD *)this - 90);
  *((_DWORD *)this + 20) = 0;
  if ( v8 > Size )
  {
    v46 = v8 - Size;
    AEWMILOG_GLITCH(v47, (char *)this - 440, v20, 2u, v47, v20, *((unsigned int *)this - 76), v46);
    if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
      McTemplateU0pqqqq(
        v37,
        (unsigned int)&EVT_GLITCH_CP_SERVER_INPUT_STARVATION,
        (_DWORD)this - 440,
        v47,
        v20,
        *((_DWORD *)this - 76),
        v8 - Size);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_DDDD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        10LL,
        &WPP_db6a5a3365073b0704c2b4fb3f0a81e6_Traceguids,
        v47,
        v20,
        v8,
        Size);
    }
    if ( v49 > 0 )
      CCrossProcessEndpointTraceLogger::Glitch((char *)this - 256, 5LL, "CpGlitchEvent::SERVER_INPUT_STARVATION");
    if ( Size )
    {
      v38 = (const void *)(*((_QWORD *)this - 47) + v20);
      v39 = (void *)*((_QWORD *)this - 42);
      v40 = *(_DWORD *)(*((_QWORD *)this - 46) + 144LL) - v20;
      v6 = Size;
      v44 = v40;
      if ( Size <= v40 )
      {
        memcpy_0(v39, v38, Size);
      }
      else
      {
        v41 = v40;
        memcpy_0(v39, v38, v40);
        memcpy_0(
          (void *)(v41 + *((_QWORD *)this - 42)),
          (const void *)(*((_QWORD *)this - 47) + *(unsigned int *)(*((_QWORD *)this - 46) + 140LL)),
          Size - v44);
      }
      v42 = 128;
      if ( *((_DWORD *)this - 86) != 8 )
        v42 = 0;
      memset_0((void *)(*((_QWORD *)this - 42) + Size), v42, v46);
      *((_DWORD *)this + 20) = v46;
      a2->pBuffer = *((_QWORD *)this - 42);
      *((_DWORD *)this + 4) = 1;
      goto LABEL_13;
    }
    v6 = 0;
    *((_DWORD *)this + 20) = v8;
    goto LABEL_22;
  }
  v23 = *(_DWORD *)(*((_QWORD *)this - 46) + 144LL) - v20;
  if ( v8 > v23 )
  {
    memcpy_0(*((void **)this - 42), (const void *)(*((_QWORD *)this - 47) + v48), v23);
    memcpy_0(
      (void *)(v23 + *((_QWORD *)this - 42)),
      (const void *)(*((_QWORD *)this - 47) + *(unsigned int *)(*((_QWORD *)this - 46) + 140LL)),
      v8 - v23);
    v6 = Size;
    a2->pBuffer = *((_QWORD *)this - 42);
    *((_DWORD *)this + 4) = 1;
  }
  else
  {
    v6 = Size;
    a2->pBuffer = *((_QWORD *)this - 47) + v48;
    *((_DWORD *)this + 4) = 0;
  }
LABEL_13:
  a2->u32BufferFlags = BUFFER_VALID;
  if ( (*((_BYTE *)this - 280) & 1) == 0 && v71 != v15 && v15 == 1 )
  {
    pBuffer = (unsigned __int8 *)a2->pBuffer;
    if ( !(unsigned int)CheckSampleForSilence(
                          pBuffer,
                          *((_DWORD *)this - 89),
                          *((_DWORD *)this - 86),
                          *((_DWORD *)this - 85)) )
      ApplyVolumeRamp(
        (CCrossProcessServerInputEndpoint *)((char *)this + 88),
        pBuffer,
        v30,
        v29,
        *((_DWORD *)this - 87),
        *((_DWORD *)this - 86),
        *((_DWORD *)this - 85),
        1);
  }
LABEL_15:
  v24 = g_u32AEWMILogLevel < 5;
  *((_DWORD *)this + 21) = v15;
  if ( !v24 )
  {
    memset_0(&v62, 0, 0x40uLL);
    v62.UserTime = 0x20000;
    v62.Size = 88;
    v64 = 0;
    v65 = v8;
    v66 = v6;
    v67 = *((int *)this + 4);
    v62.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_DATA;
    LOWORD(v62.Version) = 1286;
    v63 = v3;
    TraceEvent(g_hAEWMITraceHandle, &v62);
  }
}
