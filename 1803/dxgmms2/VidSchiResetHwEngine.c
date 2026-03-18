/*
 * XREFs of VidSchiResetHwEngine @ 0x1C00334A4
 * Callers:
 *     VidSchiResetEngines @ 0x1C00BC1C0 (VidSchiResetEngines.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     _TlgCreateSz @ 0x1C0026B88 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0026BC0 (_TlgWrite.c)
 */

bool __fastcall VidSchiResetHwEngine(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  _DWORD *v5; // r15
  int v6; // ecx
  int v7; // eax
  const GUID *v8; // r9
  struct _TDR_RECOVERY_CONTEXT *v9; // rbx
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // r8d
  int v17; // r8d
  __int64 v18; // rcx
  unsigned __int16 *v19; // rax
  int v20; // eax
  const GUID *v21; // r9
  int v22; // r12d
  bool v23; // r14
  __int64 v24; // rcx
  unsigned __int16 *v25; // rax
  __int64 v26; // rcx
  const CHAR *v27; // rdx
  unsigned __int16 *v28; // rax
  LPCGUID v29; // r9
  __int64 v30; // rdx
  int v31; // eax
  int v33; // [rsp+38h] [rbp-D0h] BYREF
  int v34; // [rsp+3Ch] [rbp-CCh] BYREF
  int v35; // [rsp+40h] [rbp-C8h] BYREF
  int v36; // [rsp+44h] [rbp-C4h] BYREF
  int v37; // [rsp+48h] [rbp-C0h] BYREF
  int v38; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v39; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+68h] [rbp-A0h]
  __int64 v43; // [rsp+70h] [rbp-98h]
  __int64 v44; // [rsp+78h] [rbp-90h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v45; // [rsp+80h] [rbp-88h] BYREF
  __int64 v46; // [rsp+88h] [rbp-80h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v47; // [rsp+90h] [rbp-78h] BYREF
  __int64 v48; // [rsp+98h] [rbp-70h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v49; // [rsp+A0h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C8h] [rbp-40h] BYREF
  __int64 *v52; // [rsp+E8h] [rbp-20h]
  __int64 v53; // [rsp+F0h] [rbp-18h]
  _DWORD *v54; // [rsp+F8h] [rbp-10h]
  __int64 v55; // [rsp+100h] [rbp-8h]
  __int64 v56; // [rsp+108h] [rbp+0h]
  _DWORD v57[2]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v58; // [rsp+118h] [rbp+10h]
  __int64 v59; // [rsp+120h] [rbp+18h]
  __int64 v60; // [rsp+128h] [rbp+20h]
  __int64 v61; // [rsp+130h] [rbp+28h]
  __int64 v62; // [rsp+138h] [rbp+30h]
  __int64 v63; // [rsp+140h] [rbp+38h]
  struct _TDR_RECOVERY_CONTEXT **v64; // [rsp+148h] [rbp+40h]
  __int64 v65; // [rsp+150h] [rbp+48h]
  char *v66; // [rsp+158h] [rbp+50h]
  __int64 v67; // [rsp+160h] [rbp+58h]
  int *v68; // [rsp+168h] [rbp+60h]
  __int64 v69; // [rsp+170h] [rbp+68h]
  EVENT_DATA_DESCRIPTOR v70; // [rsp+178h] [rbp+70h] BYREF
  __int64 *v71; // [rsp+198h] [rbp+90h]
  __int64 v72; // [rsp+1A0h] [rbp+98h]
  _DWORD *v73; // [rsp+1A8h] [rbp+A0h]
  __int64 v74; // [rsp+1B0h] [rbp+A8h]
  __int64 v75; // [rsp+1B8h] [rbp+B0h]
  _DWORD v76[2]; // [rsp+1C0h] [rbp+B8h] BYREF
  struct _TDR_RECOVERY_CONTEXT **v77; // [rsp+1C8h] [rbp+C0h]
  __int64 v78; // [rsp+1D0h] [rbp+C8h]
  int *v79; // [rsp+1D8h] [rbp+D0h]
  __int64 v80; // [rsp+1E0h] [rbp+D8h]
  int *v81; // [rsp+1E8h] [rbp+E0h]
  __int64 v82; // [rsp+1F0h] [rbp+E8h]
  int *v83; // [rsp+1F8h] [rbp+F0h]
  __int64 v84; // [rsp+200h] [rbp+F8h]
  EVENT_DATA_DESCRIPTOR v85; // [rsp+208h] [rbp+100h] BYREF
  __int64 *v86; // [rsp+228h] [rbp+120h]
  __int64 v87; // [rsp+230h] [rbp+128h]
  _DWORD *v88; // [rsp+238h] [rbp+130h]
  __int64 v89; // [rsp+240h] [rbp+138h]
  __int64 v90; // [rsp+248h] [rbp+140h]
  _DWORD v91[2]; // [rsp+250h] [rbp+148h] BYREF
  struct _TDR_RECOVERY_CONTEXT **v92; // [rsp+258h] [rbp+150h]
  __int64 v93; // [rsp+260h] [rbp+158h]
  int *v94; // [rsp+268h] [rbp+160h]
  __int64 v95; // [rsp+270h] [rbp+168h]
  char *v96; // [rsp+278h] [rbp+170h]
  __int64 v97; // [rsp+280h] [rbp+178h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+288h] [rbp+180h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 1904), &LockHandle);
  v5 = (_DWORD *)(*(_QWORD *)(a1 + 184) + 112LL * *(unsigned int *)(a1 + 196));
  memset(v5, 0, 0x70uLL);
  v6 = *(_DWORD *)(a1 + 192);
  v7 = *(_DWORD *)(a1 + 196) + 1;
  v41 = a1;
  v42 = 0LL;
  v43 = 0LL;
  *(_DWORD *)(a1 + 196) = v7 & (v6 - 1);
  DpSynchronizeExecution(
    *(_QWORD *)(v2 + 24),
    VidSchiSetHwNodeResettingStateAtISR,
    &v41,
    *(unsigned int *)(v2 + 32),
    &v33);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KeFlushQueuedDpcs();
  *v5 = 10;
  v9 = 0LL;
  *((_QWORD *)v5 + 1) = v42;
  v5[9] = v43;
  if ( *(_QWORD *)(v2 + 2872) == a1 )
  {
    RecoveryContext = TdrCreateRecoveryContext();
    *(_QWORD *)(v2 + 2864) = RecoveryContext;
    v9 = RecoveryContext;
    if ( RecoveryContext )
    {
      *((_QWORD *)RecoveryContext + 350) = a2;
      *((_QWORD *)RecoveryContext + 1) = v2 + 2860;
      *((_DWORD *)RecoveryContext + 4) = 6;
      v11 = *(_QWORD *)(v2 + 16);
      *((_QWORD *)v9 + 4) = v11;
      _InterlockedIncrement64((volatile signed __int64 *)(v11 + 24));
      v12 = *((_QWORD *)v9 + 4);
      *((_QWORD *)v9 + 5) = -1LL;
      *((_DWORD *)v9 + 37) = 36870;
      *((_DWORD *)v9 + 38) = DpiGetDriverVersion(*(_QWORD *)(v12 + 192));
      *((_DWORD *)v9 + 14) = *(unsigned __int16 *)(*(_QWORD *)(v2 + 2872) + 4LL);
      v13 = *((_QWORD *)v9 + 4);
      v14 = *(_QWORD *)(v13 + 456);
      if ( !v14 )
        v14 = *(_QWORD *)(v13 + 312);
      *((_QWORD *)v9 + 13) = v14;
      TdrCollectDbgInfoStage1(*(struct _TDR_RECOVERY_CONTEXT **)(v2 + 2864), 1);
    }
  }
  v15 = *(unsigned __int16 *)(a1 + 4);
  v16 = *(_DWORD *)(a1 + 484);
  v39 = 0LL;
  v17 = v16 + 1;
  *(_DWORD *)(a1 + 484) = v17;
  HIDWORD(v39) = *(unsigned __int16 *)(*(_QWORD *)(v2 + 8 * v15 + 440) + 6LL);
  LODWORD(v39) = *(unsigned __int16 *)(*(_QWORD *)(v2 + 8 * v15 + 440) + 8LL);
  if ( hProvider > 5u
    && (qword_1C0047060 & 0x400000000010LL) != 0
    && (qword_1C0047068 & 0x400000000010LL) == qword_1C0047068 )
  {
    v18 = *(_QWORD *)(v2 + 16);
    v44 = *(_QWORD *)(v18 + 268);
    v52 = &v44;
    v53 = 8LL;
    v19 = *(unsigned __int16 **)(v18 + 1344);
    v54 = v57;
    v55 = 2LL;
    LODWORD(v18) = *v19;
    v56 = *((_QWORD *)v19 + 1);
    v58 = a1 + 168;
    v60 = a1 + 64;
    v62 = a1 + 96;
    v64 = &v45;
    v66 = (char *)v9 + 56;
    v68 = &v34;
    v57[0] = v18;
    v57[1] = 0;
    v59 = 8LL;
    v61 = 8LL;
    v63 = 8LL;
    v45 = v9;
    v65 = 8LL;
    v67 = 4LL;
    v34 = v17;
    v69 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C003AD38, 0LL, v8, 0xBu, &pData);
  }
  *(_QWORD *)(a1 + 1728) = v9;
  *(_QWORD *)(a1 + 1720) = v5 + 4;
  v20 = ((__int64 (__fastcall *)(_QWORD, __int64 *))DxgCoreInterface[37])(*(_QWORD *)(v2 + 8), &v39);
  *(_QWORD *)(a1 + 1720) = 0LL;
  v22 = v20;
  *(_QWORD *)(a1 + 1728) = 0LL;
  if ( v20 )
  {
    v23 = 0;
  }
  else
  {
    v23 = 1;
    *(_DWORD *)(a1 + 16) = 2;
  }
  *((_BYTE *)v5 + 49) = 1;
  v5[10] = v20;
  if ( hProvider > 5u
    && (qword_1C0047060 & 0x400000000010LL) != 0
    && (qword_1C0047068 & 0x400000000010LL) == qword_1C0047068 )
  {
    v24 = *(_QWORD *)(v2 + 16);
    v46 = *(_QWORD *)(v24 + 268);
    v71 = &v46;
    v72 = 8LL;
    v25 = *(unsigned __int16 **)(v24 + 1344);
    v73 = v76;
    v74 = 2LL;
    LODWORD(v24) = *v25;
    v75 = *((_QWORD *)v25 + 1);
    v77 = &v47;
    v79 = &v35;
    v81 = &v36;
    v37 = *(_DWORD *)(a1 + 484);
    v83 = &v37;
    v76[0] = v24;
    v76[1] = 0;
    v47 = v9;
    v78 = 8LL;
    v35 = 0;
    v80 = 4LL;
    v36 = v22;
    v82 = 4LL;
    v84 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C003AE62, 0LL, v21, 9u, &v70);
  }
  if ( v9 )
  {
    *((_DWORD *)v9 + 704) = v22;
    TdrUpdateDbgReport(v9, 1);
    TdrCollectDbgInfoStage2(v9);
    if ( hProvider > 5u
      && (qword_1C0047060 & 0x400000000010LL) != 0
      && (qword_1C0047068 & 0x400000000010LL) == qword_1C0047068 )
    {
      v26 = *(_QWORD *)(v2 + 16);
      v27 = (const CHAR *)*((_QWORD *)v9 + 12);
      v48 = *(_QWORD *)(v26 + 268);
      v86 = &v48;
      v87 = 8LL;
      v28 = *(unsigned __int16 **)(v26 + 1344);
      v88 = v91;
      v89 = 2LL;
      LODWORD(v26) = *v28;
      v90 = *((_QWORD *)v28 + 1);
      v92 = &v49;
      v38 = *(_DWORD *)(a1 + 484);
      v94 = &v38;
      v91[0] = v26;
      v96 = (char *)v9 + 2808;
      v91[1] = 0;
      v49 = v9;
      v93 = 8LL;
      v95 = 4LL;
      v97 = 8LL;
      TlgCreateSz(&pDesc, v27);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C003ACC1, 0LL, v29, 9u, &v85);
    }
    TdrCompleteRecoveryContext(v9, 1, 1);
    *(_QWORD *)(v2 + 2864) = 0LL;
  }
  if ( v23 )
    *(_DWORD *)(a1 + 440) &= 0xFFFFFFFC;
  *(_QWORD *)(v2 + 432) &= ~(1LL << *(_WORD *)(a1 + 4));
  *(_DWORD *)(a1 + 16) = 0;
  if ( v23 )
  {
    v30 = *(unsigned __int16 *)(a1 + 4);
    v40 = 0LL;
    HIDWORD(v40) = *(unsigned __int16 *)(*(_QWORD *)(v2 + 8 * v30 + 440) + 6LL);
    LODWORD(v40) = *(unsigned __int16 *)(*(_QWORD *)(v2 + 8 * v30 + 440) + 8LL);
    v31 = ((__int64 (__fastcall *)(_QWORD, __int64 *))DxgCoreInterface[38])(*(_QWORD *)(v2 + 8), &v40);
    *((_BYTE *)v5 + 50) = 1;
    v5[11] = v31;
    v23 = v31 == 0;
  }
  *((_BYTE *)v5 + 48) = v23;
  return v23;
}
