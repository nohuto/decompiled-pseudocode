/*
 * XREFs of VidSchiResetEngine @ 0x1C002BF88
 * Callers:
 *     VidSchiResetEngines @ 0x1C00BC1C0 (VidSchiResetEngines.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     _TlgCreateSz @ 0x1C0026B88 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0026BC0 (_TlgWrite.c)
 *     McTemplateK0dp @ 0x1C0028AA8 (McTemplateK0dp.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C0034008 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C0055818 (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiMarkDevicesInError @ 0x1C00BBE10 (VidSchiMarkDevicesInError.c)
 */

char __fastcall VidSchiResetEngine(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r14
  _DWORD *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _TDR_RECOVERY_CONTEXT *v10; // rsi
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rax
  char v14; // r15
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  unsigned __int16 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // ebx
  __int64 v27; // r8
  const GUID *v28; // r9
  __int64 v29; // rcx
  unsigned __int16 *v30; // rax
  unsigned __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r13
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  int v42; // eax
  bool IsLimitExhausted; // al
  __int64 v44; // rdx
  unsigned __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rcx
  const CHAR *v48; // rdx
  unsigned __int16 *v49; // rax
  LPCGUID v50; // r9
  char v51; // bl
  __int64 v52; // rdx
  __int64 v53; // rax
  char result; // al
  __int64 v55; // rdx
  char v56; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v57[7]; // [rsp+39h] [rbp-CFh] BYREF
  int v58; // [rsp+40h] [rbp-C8h] BYREF
  int v59; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v60; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v61; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v62[7]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v63; // [rsp+90h] [rbp-78h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v64; // [rsp+98h] [rbp-70h] BYREF
  __int64 v65; // [rsp+A0h] [rbp-68h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v66; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v67; // [rsp+B0h] [rbp-58h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v68; // [rsp+B8h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v70; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v71; // [rsp+E0h] [rbp-28h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E8h] [rbp-20h] BYREF
  __int64 *v73; // [rsp+108h] [rbp+0h]
  __int64 v74; // [rsp+110h] [rbp+8h]
  _DWORD *v75; // [rsp+118h] [rbp+10h]
  __int64 v76; // [rsp+120h] [rbp+18h]
  __int64 v77; // [rsp+128h] [rbp+20h]
  _DWORD v78[2]; // [rsp+130h] [rbp+28h] BYREF
  __int64 v79; // [rsp+138h] [rbp+30h]
  __int64 v80; // [rsp+140h] [rbp+38h]
  __int64 v81; // [rsp+148h] [rbp+40h]
  __int64 v82; // [rsp+150h] [rbp+48h]
  __int64 v83; // [rsp+158h] [rbp+50h]
  __int64 v84; // [rsp+160h] [rbp+58h]
  struct _TDR_RECOVERY_CONTEXT **v85; // [rsp+168h] [rbp+60h]
  __int64 v86; // [rsp+170h] [rbp+68h]
  char *v87; // [rsp+178h] [rbp+70h]
  __int64 v88; // [rsp+180h] [rbp+78h]
  _BYTE *v89; // [rsp+188h] [rbp+80h]
  __int64 v90; // [rsp+190h] [rbp+88h]
  EVENT_DATA_DESCRIPTOR v91; // [rsp+198h] [rbp+90h] BYREF
  __int64 *v92; // [rsp+1B8h] [rbp+B0h]
  __int64 v93; // [rsp+1C0h] [rbp+B8h]
  _DWORD *v94; // [rsp+1C8h] [rbp+C0h]
  __int64 v95; // [rsp+1D0h] [rbp+C8h]
  __int64 v96; // [rsp+1D8h] [rbp+D0h]
  _DWORD v97[2]; // [rsp+1E0h] [rbp+D8h] BYREF
  struct _TDR_RECOVERY_CONTEXT **v98; // [rsp+1E8h] [rbp+E0h]
  __int64 v99; // [rsp+1F0h] [rbp+E8h]
  unsigned int *v100; // [rsp+1F8h] [rbp+F0h]
  __int64 v101; // [rsp+200h] [rbp+F8h]
  int *v102; // [rsp+208h] [rbp+100h]
  __int64 v103; // [rsp+210h] [rbp+108h]
  int *v104; // [rsp+218h] [rbp+110h]
  __int64 v105; // [rsp+220h] [rbp+118h]
  EVENT_DATA_DESCRIPTOR v106; // [rsp+228h] [rbp+120h] BYREF
  __int64 *v107; // [rsp+248h] [rbp+140h]
  __int64 v108; // [rsp+250h] [rbp+148h]
  _DWORD *v109; // [rsp+258h] [rbp+150h]
  __int64 v110; // [rsp+260h] [rbp+158h]
  __int64 v111; // [rsp+268h] [rbp+160h]
  _DWORD v112[2]; // [rsp+270h] [rbp+168h] BYREF
  struct _TDR_RECOVERY_CONTEXT **v113; // [rsp+278h] [rbp+170h]
  __int64 v114; // [rsp+280h] [rbp+178h]
  __int64 *v115; // [rsp+288h] [rbp+180h]
  __int64 v116; // [rsp+290h] [rbp+188h]
  char *v117; // [rsp+298h] [rbp+190h]
  __int64 v118; // [rsp+2A0h] [rbp+198h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2A8h] [rbp+1A0h] BYREF

  v4 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
  v4[3] = *(_QWORD *)(a1 + 168);
  v4[4] = *(_QWORD *)(a1 + 64);
  v4[5] = *(_QWORD *)(a1 + 96);
  WdLogEvent5_WdEvent(v4);
  v5 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 2828) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 972));
    if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 2832)) == 1 )
    {
      *(_QWORD *)(a1 + 232) = 0LL;
      VidSchiSubmitPreemptionCommand(a1);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 2832));
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 972));
    }
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1904), &LockHandle);
  v6 = (_DWORD *)(*(_QWORD *)(a1 + 184) + 112LL * *(unsigned int *)(a1 + 196));
  memset(v6, 0, 0x70uLL);
  *(_DWORD *)(a1 + 196) = (*(_DWORD *)(a1 + 196) + 1) & (*(_DWORD *)(a1 + 192) - 1);
  memset(v62, 0, sizeof(v62));
  v62[0] = a1;
  DpSynchronizeExecution(*(_QWORD *)(v5 + 24), VidSchiSetNodeResettingStateAtISR, v62, *(unsigned int *)(v5 + 32), v57);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KeFlushQueuedDpcs();
  *v6 = 6;
  v10 = 0LL;
  v11 = 0x400000000010LL;
  *((_QWORD *)v6 + 1) = v62[1];
  *((_QWORD *)v6 + 2) = v62[2];
  *((_QWORD *)v6 + 3) = v62[3];
  *((_QWORD *)v6 + 4) = v62[4];
  *((_QWORD *)v6 + 6) = v62[6];
  if ( LODWORD(v62[6]) != HIDWORD(v62[6]) || *(_DWORD *)(a1 + 1996) )
  {
    if ( *(_QWORD *)(v5 + 2872) == a1 )
    {
      RecoveryContext = TdrCreateRecoveryContext();
      *(_QWORD *)(v5 + 2864) = RecoveryContext;
      v10 = RecoveryContext;
      if ( RecoveryContext )
      {
        *((_QWORD *)RecoveryContext + 350) = a2;
        *((_QWORD *)RecoveryContext + 1) = v5 + 2860;
        *((_DWORD *)RecoveryContext + 4) = 6;
        v16 = *(_QWORD *)(v5 + 16);
        *((_QWORD *)v10 + 4) = v16;
        _InterlockedIncrement64((volatile signed __int64 *)(v16 + 24));
        v17 = *((_QWORD *)v10 + 4);
        *((_QWORD *)v10 + 5) = -1LL;
        *((_DWORD *)v10 + 37) = 36870;
        *((_DWORD *)v10 + 38) = DpiGetDriverVersion(*(_QWORD *)(v17 + 192));
        *((_DWORD *)v10 + 14) = *(unsigned __int16 *)(*(_QWORD *)(v5 + 2872) + 4LL);
        v18 = *((_QWORD *)v10 + 4);
        v19 = *(_QWORD *)(v18 + 456);
        if ( !v19 )
          v19 = *(_QWORD *)(v18 + 312);
        *((_QWORD *)v10 + 13) = v19;
        TdrCollectDbgInfoStage1(*(struct _TDR_RECOVERY_CONTEXT **)(v5 + 2864), 1);
      }
      v11 = 0x400000000010LL;
    }
    v20 = *(unsigned __int16 *)(a1 + 4);
    v21 = (unsigned int)(*(_DWORD *)(a1 + 484) + 1);
    v70 = 0LL;
    *(_DWORD *)(a1 + 484) = v21;
    v71 = 0;
    HIDWORD(v70) = *(unsigned __int16 *)(*(_QWORD *)(v5 + 8 * v20 + 440) + 6LL);
    LODWORD(v70) = *(unsigned __int16 *)(*(_QWORD *)(v5 + 8 * v20 + 440) + 8LL);
    if ( hProvider > 5u
      && (qword_1C0047060 & 0x400000000010LL) != 0
      && (qword_1C0047068 & 0x400000000010LL) == qword_1C0047068 )
    {
      v22 = *(_QWORD *)(v5 + 16);
      v63 = *(_QWORD *)(v22 + 268);
      v73 = &v63;
      v74 = 8LL;
      v23 = *(unsigned __int16 **)(v22 + 1344);
      v75 = v78;
      v76 = 2LL;
      LODWORD(v22) = *v23;
      v77 = *((_QWORD *)v23 + 1);
      v81 = a1 + 64;
      v85 = &v64;
      v87 = (char *)v10 + 56;
      v89 = &v57[3];
      v78[0] = v22;
      v78[1] = 0;
      v79 = a1 + 168;
      v80 = 8LL;
      v82 = 8LL;
      v83 = a1 + 96;
      v84 = 8LL;
      v64 = v10;
      v86 = 8LL;
      v88 = 4LL;
      *(_DWORD *)&v57[3] = v21;
      v90 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C003AD38, 0LL, (LPCGUID)0x400000000010LL, 0xBu, &pData);
    }
    v26 = ((__int64 (__fastcall *)(_QWORD, __int64 *, __int64, __int64))DxgCoreInterface[36])(
            *(_QWORD *)(v5 + 8),
            &v70,
            v21,
            v11);
    if ( v26 )
    {
      v14 = 0;
    }
    else
    {
      v14 = 1;
      *(_DWORD *)(a1 + 16) = 2;
    }
    *((_BYTE *)v6 + 61) = 1;
    v6[14] = v26;
    if ( hProvider > 5u )
    {
      v24 = 0x400000000010LL;
      if ( (qword_1C0047060 & 0x400000000010LL) != 0 && (qword_1C0047068 & 0x400000000010LL) == qword_1C0047068 )
      {
        v29 = *(_QWORD *)(v5 + 16);
        v65 = *(_QWORD *)(v29 + 268);
        v92 = &v65;
        v93 = 8LL;
        v30 = *(unsigned __int16 **)(v29 + 1344);
        v94 = v97;
        v95 = 2LL;
        LODWORD(v29) = *v30;
        v96 = *((_QWORD *)v30 + 1);
        v98 = &v66;
        v100 = &v71;
        v102 = &v58;
        v59 = *(_DWORD *)(a1 + 484);
        v104 = &v59;
        v97[0] = v29;
        v97[1] = 0;
        v66 = v10;
        v99 = 8LL;
        v101 = 4LL;
        v58 = v26;
        v103 = 4LL;
        v105 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C003AE62, 0LL, v28, 9u, &v91);
      }
    }
    v31 = v71;
    *((_QWORD *)v6 + 5) = v71;
    *((_BYTE *)v6 + 60) = v14;
    if ( v14 )
    {
      if ( v31 < v62[2] || v31 > v62[4] )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24, v27);
        v32[3] = 281LL;
        v32[4] = 10LL;
        v32[5] = v71;
        v32[6] = v62[2];
        v32[7] = *(_QWORD *)(v5 + 16);
        WdLogEvent5_WdCriticalError(v32);
        __debugbreak();
      }
    }
    else
    {
      v31 = v62[4];
    }
    v62[5] = v31;
    if ( v10 )
      *((_DWORD *)v10 + 704) = v26;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 2828) )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7, v9);
      v12[3] = 281LL;
      v12[4] = 2048LL;
      v12[5] = HIDWORD(v62[6]);
      v12[6] = *(unsigned int *)(a1 + 2828);
      v12[7] = 0LL;
      WdLogEvent5_WdCriticalError(v12);
      __debugbreak();
    }
    v13 = WdLogNewEntry5_WdEvent(v8, v7);
    *(_QWORD *)(v13 + 24) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(v13 + 32) = *(_QWORD *)(a1 + 96);
    WdLogEvent5_WdEvent(v13);
    v14 = 1;
    v62[5] = v62[2];
    *((_BYTE *)v6 + 61) = 0;
  }
  v56 = 0;
  v61 = 0LL;
  if ( *(_QWORD *)(v5 + 2872) == a1 )
  {
    v33 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1552) + 1560);
    if ( v33 )
    {
      v34 = *(_QWORD *)(v33 + 104);
      v35 = *(_QWORD *)(v34 + 40);
      if ( v35 )
      {
        v36 = 0LL;
        if ( *(_QWORD *)(v35 + 8) )
          v36 = v34;
        v61 = v36;
      }
    }
  }
  VidSchiMarkDevicesInError(v62, &v56, &v61);
  if ( v10 )
  {
    v37 = v61;
    if ( v61 )
    {
      v38 = *(_QWORD *)(v61 + 40);
      v39 = v38;
      v40 = *(_QWORD *)(v38 + 8);
      if ( v40 )
      {
        *((_QWORD *)v10 + 351) = *(_QWORD *)(v40 + 64);
        v41 = *(_QWORD *)(*(_QWORD *)(v38 + 8) + 72LL);
        if ( v41 )
          v41 = *(_QWORD *)(v41 + 80);
        *((_QWORD *)v10 + 12) = v41;
        v39 = *(_QWORD *)(v37 + 40);
      }
      if ( !*(_BYTE *)(v39 + 2624) )
      {
        v42 = *(_DWORD *)(v37 + 48);
        if ( (v42 & 8) == 0 && (v42 & 1) == 0 )
        {
          TdrHistoryUpdate((struct _TDR_HISTORY *)(v38 + 32), v10);
          IsLimitExhausted = TdrHistoryIsLimitExhausted((const struct _TDR_HISTORY *)(v38 + 32), v10, 1);
          *((_BYTE *)v10 + 2820) = IsLimitExhausted;
          if ( IsLimitExhausted )
          {
            v44 = *(_QWORD *)(v38 + 2616);
            v45 = (unsigned __int64)*(unsigned int *)(v5 + 4) >> 5;
            v46 = *(_DWORD *)(v5 + 4) & 0x1F;
            *(_DWORD *)(v44 + 4 * v45) |= 1 << (*(_BYTE *)(v5 + 4) & 0x1F);
            if ( bTracingEnabled )
            {
              if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0dp(v46, v44, v45, *(_DWORD *)(v5 + 4), *((_QWORD *)v10 + 351));
            }
          }
        }
      }
    }
    TdrUpdateDbgReport(v10, 1);
    TdrCollectDbgInfoStage2(v10);
    if ( hProvider > 5u
      && (qword_1C0047060 & 0x400000000010LL) != 0
      && (qword_1C0047068 & 0x400000000010LL) == qword_1C0047068 )
    {
      v47 = *(_QWORD *)(v5 + 16);
      v48 = (const CHAR *)*((_QWORD *)v10 + 12);
      v67 = *(_QWORD *)(v47 + 268);
      v107 = &v67;
      v108 = 8LL;
      v49 = *(unsigned __int16 **)(v47 + 1344);
      v109 = v112;
      v110 = 2LL;
      LODWORD(v47) = *v49;
      v111 = *((_QWORD *)v49 + 1);
      v113 = &v68;
      LODWORD(v60) = *(_DWORD *)(a1 + 484);
      v115 = &v60;
      v112[0] = v47;
      v117 = (char *)v10 + 2808;
      v112[1] = 0;
      v68 = v10;
      v114 = 8LL;
      v116 = 4LL;
      v118 = 8LL;
      TlgCreateSz(&pDesc, v48);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C003ACC1, 0LL, v50, 9u, &v106);
    }
    TdrCompleteRecoveryContext(v10, 1, 1);
    *(_QWORD *)(v5 + 2864) = 0LL;
  }
  v51 = v56;
  if ( v14 )
  {
    v52 = v62[5];
    *(_DWORD *)(a1 + 440) &= 0xFFFFFFFC;
    VidSchiCompletePendingCommandInNodeHwQueue(a1, v52, 0LL);
    v53 = v62[5];
    if ( v51 )
      v14 = 0;
    *(_QWORD *)(a1 + 64) = v62[5];
    *(_QWORD *)(a1 + 72) = v53;
  }
  result = v14;
  v55 = *(_QWORD *)(v5 + 432);
  _bittestandreset64(&v55, *(unsigned __int16 *)(a1 + 4));
  *(_QWORD *)(v5 + 432) = v55;
  *(_DWORD *)(a1 + 16) = 0;
  *((_BYTE *)v6 + 60) = v14;
  *((_BYTE *)v6 + 62) = v51;
  *((_QWORD *)v6 + 5) = v62[5];
  return result;
}
