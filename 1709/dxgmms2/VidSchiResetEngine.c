/*
 * XREFs of VidSchiResetEngine @ 0x1C0029078
 * Callers:
 *     VidSchiResetEngines @ 0x1C00B37B8 (VidSchiResetEngines.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     _TlgCreateSz @ 0x1C00240A0 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C00240D4 (_TlgWrite.c)
 *     McTemplateK0dp @ 0x1C0025E74 (McTemplateK0dp.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C002C780 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C0071AE8 (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiMarkDevicesInError @ 0x1C00B3410 (VidSchiMarkDevicesInError.c)
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
  char v32; // al
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  int v41; // eax
  bool IsLimitExhausted; // al
  __int64 v43; // rdx
  unsigned __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // rcx
  const CHAR *v47; // rdx
  unsigned __int16 *v48; // rax
  LPCGUID v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  char result; // al
  __int16 v54; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v55[6]; // [rsp+3Ah] [rbp-CEh] BYREF
  int v56; // [rsp+40h] [rbp-C8h] BYREF
  int v57; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v58; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v59; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v60[7]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v61; // [rsp+90h] [rbp-78h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v62; // [rsp+98h] [rbp-70h] BYREF
  __int64 v63; // [rsp+A0h] [rbp-68h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v64; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v65; // [rsp+B0h] [rbp-58h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v66; // [rsp+B8h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v68; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v69; // [rsp+E0h] [rbp-28h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E8h] [rbp-20h] BYREF
  __int64 *v71; // [rsp+108h] [rbp+0h]
  __int64 v72; // [rsp+110h] [rbp+8h]
  _DWORD *v73; // [rsp+118h] [rbp+10h]
  __int64 v74; // [rsp+120h] [rbp+18h]
  __int64 v75; // [rsp+128h] [rbp+20h]
  _DWORD v76[2]; // [rsp+130h] [rbp+28h] BYREF
  __int64 v77; // [rsp+138h] [rbp+30h]
  __int64 v78; // [rsp+140h] [rbp+38h]
  __int64 v79; // [rsp+148h] [rbp+40h]
  __int64 v80; // [rsp+150h] [rbp+48h]
  __int64 v81; // [rsp+158h] [rbp+50h]
  __int64 v82; // [rsp+160h] [rbp+58h]
  struct _TDR_RECOVERY_CONTEXT **v83; // [rsp+168h] [rbp+60h]
  __int64 v84; // [rsp+170h] [rbp+68h]
  char *v85; // [rsp+178h] [rbp+70h]
  __int64 v86; // [rsp+180h] [rbp+78h]
  _BYTE *v87; // [rsp+188h] [rbp+80h]
  __int64 v88; // [rsp+190h] [rbp+88h]
  EVENT_DATA_DESCRIPTOR v89; // [rsp+198h] [rbp+90h] BYREF
  __int64 *v90; // [rsp+1B8h] [rbp+B0h]
  __int64 v91; // [rsp+1C0h] [rbp+B8h]
  _DWORD *v92; // [rsp+1C8h] [rbp+C0h]
  __int64 v93; // [rsp+1D0h] [rbp+C8h]
  __int64 v94; // [rsp+1D8h] [rbp+D0h]
  _DWORD v95[2]; // [rsp+1E0h] [rbp+D8h] BYREF
  struct _TDR_RECOVERY_CONTEXT **v96; // [rsp+1E8h] [rbp+E0h]
  __int64 v97; // [rsp+1F0h] [rbp+E8h]
  unsigned int *v98; // [rsp+1F8h] [rbp+F0h]
  __int64 v99; // [rsp+200h] [rbp+F8h]
  int *v100; // [rsp+208h] [rbp+100h]
  __int64 v101; // [rsp+210h] [rbp+108h]
  int *v102; // [rsp+218h] [rbp+110h]
  __int64 v103; // [rsp+220h] [rbp+118h]
  EVENT_DATA_DESCRIPTOR v104; // [rsp+228h] [rbp+120h] BYREF
  __int64 *v105; // [rsp+248h] [rbp+140h]
  __int64 v106; // [rsp+250h] [rbp+148h]
  _DWORD *v107; // [rsp+258h] [rbp+150h]
  __int64 v108; // [rsp+260h] [rbp+158h]
  __int64 v109; // [rsp+268h] [rbp+160h]
  _DWORD v110[2]; // [rsp+270h] [rbp+168h] BYREF
  struct _TDR_RECOVERY_CONTEXT **v111; // [rsp+278h] [rbp+170h]
  __int64 v112; // [rsp+280h] [rbp+178h]
  __int64 *v113; // [rsp+288h] [rbp+180h]
  __int64 v114; // [rsp+290h] [rbp+188h]
  char *v115; // [rsp+298h] [rbp+190h]
  __int64 v116; // [rsp+2A0h] [rbp+198h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2A8h] [rbp+1A0h] BYREF

  v4 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
  v4[3] = *(_QWORD *)(a1 + 168);
  v4[4] = *(_QWORD *)(a1 + 64);
  v4[5] = *(_QWORD *)(a1 + 96);
  WdLogEvent5_WdEvent(v4);
  v5 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 2796) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 956));
    if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 2800)) == 1 )
    {
      *(_QWORD *)(a1 + 232) = 0LL;
      VidSchiSubmitPreemptionCommand(a1);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 2800));
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 956));
    }
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1888), &LockHandle);
  v6 = (_DWORD *)(*(_QWORD *)(a1 + 184) + 112LL * *(unsigned int *)(a1 + 196));
  memset(v6, 0, 0x70uLL);
  *(_DWORD *)(a1 + 196) = (*(_DWORD *)(a1 + 196) + 1) & (*(_DWORD *)(a1 + 192) - 1);
  memset(v60, 0, sizeof(v60));
  v60[0] = a1;
  DpSynchronizeExecution(*(_QWORD *)(v5 + 24), VidSchiSetNodeResettingStateAtISR, v60, *(unsigned int *)(v5 + 32), v55);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KeFlushQueuedDpcs();
  *v6 = 6;
  v10 = 0LL;
  v11 = 0x400000000010LL;
  *((_QWORD *)v6 + 1) = v60[1];
  *((_QWORD *)v6 + 2) = v60[2];
  *((_QWORD *)v6 + 3) = v60[3];
  *((_QWORD *)v6 + 4) = v60[4];
  *((_QWORD *)v6 + 6) = v60[6];
  if ( LODWORD(v60[6]) != HIDWORD(v60[6]) || *(_DWORD *)(a1 + 1964) )
  {
    if ( *(_QWORD *)(v5 + 2848) == a1 )
    {
      RecoveryContext = TdrCreateRecoveryContext();
      *(_QWORD *)(v5 + 2840) = RecoveryContext;
      v10 = RecoveryContext;
      if ( RecoveryContext )
      {
        *((_QWORD *)RecoveryContext + 350) = a2;
        *((_QWORD *)RecoveryContext + 1) = v5 + 2836;
        *((_DWORD *)RecoveryContext + 4) = 6;
        v16 = *(_QWORD *)(v5 + 16);
        *((_QWORD *)v10 + 4) = v16;
        _InterlockedIncrement64((volatile signed __int64 *)(v16 + 24));
        v17 = *((_QWORD *)v10 + 4);
        *((_QWORD *)v10 + 5) = -1LL;
        *((_DWORD *)v10 + 37) = 32769;
        *((_DWORD *)v10 + 38) = DpiGetDriverVersion(*(_QWORD *)(v17 + 192));
        *((_DWORD *)v10 + 14) = *(unsigned __int16 *)(*(_QWORD *)(v5 + 2848) + 4LL);
        v18 = *((_QWORD *)v10 + 4);
        v19 = *(_QWORD *)(v18 + 456);
        if ( !v19 )
          v19 = *(_QWORD *)(v18 + 312);
        *((_QWORD *)v10 + 13) = v19;
        TdrCollectDbgInfoStage1(*(struct _TDR_RECOVERY_CONTEXT **)(v5 + 2840), 1);
      }
      v11 = 0x400000000010LL;
    }
    ++*(_DWORD *)(a1 + 484);
    v20 = *(unsigned __int16 *)(a1 + 4);
    v21 = *(unsigned int *)(a1 + 484);
    v68 = 0LL;
    v69 = 0;
    HIDWORD(v68) = *(unsigned __int16 *)(*(_QWORD *)(v5 + 8 * v20 + 424) + 6LL);
    LODWORD(v68) = *(unsigned __int16 *)(*(_QWORD *)(v5 + 8 * v20 + 424) + 8LL);
    if ( hProvider > 5u
      && (qword_1C0040060 & 0x400000000010LL) != 0
      && (qword_1C0040068 & 0x400000000010LL) == qword_1C0040068 )
    {
      v22 = *(_QWORD *)(v5 + 16);
      v61 = *(_QWORD *)(v22 + 268);
      v71 = &v61;
      v72 = 8LL;
      v23 = *(unsigned __int16 **)(v22 + 1248);
      v73 = v76;
      v74 = 2LL;
      LODWORD(v22) = *v23;
      v75 = *((_QWORD *)v23 + 1);
      v79 = a1 + 64;
      v83 = &v62;
      v85 = (char *)v10 + 56;
      v87 = &v55[2];
      v76[0] = v22;
      v76[1] = 0;
      v77 = a1 + 168;
      v78 = 8LL;
      v80 = 8LL;
      v81 = a1 + 96;
      v82 = 8LL;
      v62 = v10;
      v84 = 8LL;
      v86 = 4LL;
      *(_DWORD *)&v55[2] = v21;
      v88 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0033CBA, 0LL, (LPCGUID)0x400000000010LL, 0xBu, &pData);
    }
    v26 = ((__int64 (__fastcall *)(_QWORD, __int64 *, __int64, __int64))DxgCoreInterface[31])(
            *(_QWORD *)(v5 + 8),
            &v68,
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
      if ( (qword_1C0040060 & 0x400000000010LL) != 0 && (qword_1C0040068 & 0x400000000010LL) == qword_1C0040068 )
      {
        v29 = *(_QWORD *)(v5 + 16);
        v63 = *(_QWORD *)(v29 + 268);
        v90 = &v63;
        v91 = 8LL;
        v30 = *(unsigned __int16 **)(v29 + 1248);
        v92 = v95;
        v93 = 2LL;
        LODWORD(v29) = *v30;
        v94 = *((_QWORD *)v30 + 1);
        v96 = &v64;
        v98 = &v69;
        v100 = &v56;
        v57 = *(_DWORD *)(a1 + 484);
        v102 = &v57;
        v95[0] = v29;
        v95[1] = 0;
        v64 = v10;
        v97 = 8LL;
        v99 = 4LL;
        v56 = v26;
        v101 = 4LL;
        v103 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0033C40, 0LL, v28, 9u, &v89);
      }
    }
    v31 = v69;
    *((_QWORD *)v6 + 5) = v69;
    *((_BYTE *)v6 + 60) = v14;
    if ( v14 )
    {
      if ( v31 < v60[2] || v31 > v60[4] )
      {
        v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24, v27);
        v40[3] = 281LL;
        v40[4] = 10LL;
        v40[5] = v69;
        v40[6] = v60[2];
        v40[7] = *(_QWORD *)(v5 + 16);
        WdLogEvent5_WdCriticalError(v40);
        __debugbreak();
      }
      v60[5] = v31;
    }
    if ( v10 )
      *((_DWORD *)v10 + 704) = v26;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 2796) )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7, v9);
      v12[3] = 281LL;
      v12[4] = 2048LL;
      v12[5] = HIDWORD(v60[6]);
      v12[6] = *(unsigned int *)(a1 + 2796);
      v12[7] = 0LL;
      WdLogEvent5_WdCriticalError(v12);
      __debugbreak();
    }
    v13 = WdLogNewEntry5_WdEvent(v8, v7);
    *(_QWORD *)(v13 + 24) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(v13 + 32) = *(_QWORD *)(a1 + 96);
    WdLogEvent5_WdEvent(v13);
    v14 = 1;
    v60[5] = v60[2];
    *((_BYTE *)v6 + 61) = 0;
  }
  v32 = 0;
  v33 = 0LL;
  v54 = 0;
  v59 = 0LL;
  if ( *(_QWORD *)(v5 + 2848) == a1 )
  {
    v34 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1552) + 1560);
    if ( v34 )
    {
      v35 = *(_QWORD *)(v34 + 104);
      v36 = *(_QWORD *)(v35 + 40);
      if ( v36 )
      {
        if ( *(_QWORD *)(v36 + 8) )
          v33 = v35;
        v59 = v33;
      }
    }
    v32 = v54;
  }
  if ( v14 )
  {
    VidSchiMarkDevicesInError(v60, (char *)&v54 + 1, &v59);
    v32 = HIBYTE(v54);
    v33 = v59;
    LOBYTE(v54) = HIBYTE(v54);
  }
  if ( v10 )
  {
    if ( v33 )
    {
      v37 = *(_QWORD *)(v33 + 40);
      v38 = *(_QWORD *)(v37 + 8);
      if ( v38 )
      {
        *((_QWORD *)v10 + 351) = *(_QWORD *)(v38 + 56);
        v39 = *(_QWORD *)(*(_QWORD *)(v37 + 8) + 64LL);
        if ( v39 )
          v39 = *(_QWORD *)(v39 + 80);
        *((_QWORD *)v10 + 12) = v39;
      }
      if ( !*(_BYTE *)(*(_QWORD *)(v33 + 40) + 2624LL) )
      {
        v41 = *(_DWORD *)(v33 + 48);
        if ( (v41 & 8) == 0 && (v41 & 1) == 0 )
        {
          TdrHistoryUpdate((struct _TDR_HISTORY *)(v37 + 32), v10);
          IsLimitExhausted = TdrHistoryIsLimitExhausted((const struct _TDR_HISTORY *)(v37 + 32), v10, 1);
          *((_BYTE *)v10 + 2820) = IsLimitExhausted;
          if ( IsLimitExhausted )
          {
            v43 = *(_QWORD *)(v37 + 2616);
            v44 = (unsigned __int64)*(unsigned int *)(v5 + 4) >> 5;
            v45 = *(_DWORD *)(v5 + 4) & 0x1F;
            *(_DWORD *)(v43 + 4 * v44) |= 1 << (*(_BYTE *)(v5 + 4) & 0x1F);
            if ( bTracingEnabled )
            {
              if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0dp(v45, v43, v44, *(_DWORD *)(v5 + 4), *((_QWORD *)v10 + 351));
            }
          }
        }
      }
    }
    TdrUpdateDbgReport(v10, 1);
    TdrCollectDbgInfoStage2(v10);
    if ( hProvider > 5u
      && (qword_1C0040060 & 0x400000000010LL) != 0
      && (qword_1C0040068 & 0x400000000010LL) == qword_1C0040068 )
    {
      v46 = *(_QWORD *)(v5 + 16);
      v47 = (const CHAR *)*((_QWORD *)v10 + 12);
      v65 = *(_QWORD *)(v46 + 268);
      v105 = &v65;
      v106 = 8LL;
      v48 = *(unsigned __int16 **)(v46 + 1248);
      v107 = v110;
      v108 = 2LL;
      LODWORD(v46) = *v48;
      v109 = *((_QWORD *)v48 + 1);
      v111 = &v66;
      LODWORD(v58) = *(_DWORD *)(a1 + 484);
      v113 = &v58;
      v110[0] = v46;
      v115 = (char *)v10 + 2808;
      v110[1] = 0;
      v66 = v10;
      v112 = 8LL;
      v114 = 4LL;
      v116 = 8LL;
      TlgCreateSz(&pDesc, v47);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0033BC9, 0LL, v49, 9u, &v104);
    }
    TdrCompleteRecoveryContext(v10, 1, 1);
    v32 = v54;
    *(_QWORD *)(v5 + 2840) = 0LL;
  }
  if ( v14 )
  {
    v50 = v60[5];
    *(_DWORD *)(a1 + 440) &= 0xFFFFFFFC;
    VidSchiCompletePendingCommandInNodeHwQueue(a1, v50, 0LL);
    v51 = v60[5];
    *(_QWORD *)(a1 + 64) = v60[5];
    *(_QWORD *)(a1 + 72) = v51;
    v32 = v54;
    if ( (_BYTE)v54 )
      v14 = 0;
  }
  v52 = *(_QWORD *)(v5 + 416);
  _bittestandreset64(&v52, *(unsigned __int16 *)(a1 + 4));
  *(_QWORD *)(v5 + 416) = v52;
  *(_DWORD *)(a1 + 16) = 0;
  *((_BYTE *)v6 + 62) = v32;
  result = v14;
  *((_BYTE *)v6 + 60) = v14;
  *((_QWORD *)v6 + 5) = v60[5];
  return result;
}
