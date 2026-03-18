/*
 * XREFs of PpmIdleSelectStates @ 0x14015B9D0
 * Callers:
 *     PoIdle @ 0x1400F4340 (PoIdle.c)
 * Callees:
 *     KeSubtractAffinityEx @ 0x140044C00 (KeSubtractAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140047790 (KeAddProcessorAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x14006D6E4 (PoCopyDeepIdleMask.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     PpmIdleUpdateSelectionStatistics @ 0x14015BCF8 (PpmIdleUpdateSelectionStatistics.c)
 *     PpmComputeIdleDurationHint @ 0x14015BD14 (PpmComputeIdleDurationHint.c)
 *     PpmEstimateIdleDuration @ 0x14015BDC0 (PpmEstimateIdleDuration.c)
 *     PpmIdleEvaluateConstraints @ 0x14015BFD0 (PpmIdleEvaluateConstraints.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PpmCheckPreConditionsForDeepSleep @ 0x140227A00 (PpmCheckPreConditionsForDeepSleep.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140228324 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleCheckProcessorStateEligibility @ 0x140228574 (PpmIdleCheckProcessorStateEligibility.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x140228A98 (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmIdleSetSynchronizationState @ 0x140228B98 (PpmIdleSetSynchronizationState.c)
 *     PpmUnlockProcessors @ 0x140229858 (PpmUnlockProcessors.c)
 */

__int64 __fastcall PpmIdleSelectStates(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned __int8 *a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        char *a8)
{
  __int64 v8; // rbx
  __int64 v10; // r15
  unsigned __int8 v11; // r14
  __int64 (__fastcall *v12)(_QWORD, __int64); // rax
  __int64 v13; // rdi
  _DWORD *v14; // r13
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r12
  int v19; // ecx
  char v20; // al
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // rdx
  char v24; // al
  int v25; // r10d
  char *v26; // r15
  _DWORD *v27; // rcx
  _QWORD *v28; // rcx
  __int64 result; // rax
  __int64 v30; // r13
  _DWORD *v31; // rcx
  int v32; // eax
  __int64 v33; // rax
  _DWORD *v34; // r8
  __int64 v35; // rdx
  int v36; // ecx
  unsigned int v37; // edi
  int v38; // ecx
  char v39; // al
  int v40; // r9d
  int v41; // r8d
  int v42; // edx
  __int64 v43; // rax
  __int64 v44; // r13
  unsigned int (__fastcall *v45)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v46; // r10
  __int64 v47; // rax
  __int64 v48; // rdx
  int v49; // eax
  int v50; // ecx
  _DWORD *v51; // rcx
  char v52; // r10
  bool v53; // zf
  unsigned int (__fastcall *v54)(_QWORD, _QWORD, __int64, _QWORD); // rax
  char v55; // al
  _DWORD *v56; // rax
  _DWORD *v57; // rax
  int v58; // ecx
  char v59; // [rsp+40h] [rbp-C0h]
  char v60; // [rsp+44h] [rbp-BCh]
  char v61; // [rsp+44h] [rbp-BCh]
  int v62; // [rsp+48h] [rbp-B8h]
  unsigned int v63; // [rsp+4Ch] [rbp-B4h] BYREF
  int v64; // [rsp+50h] [rbp-B0h]
  int v65; // [rsp+54h] [rbp-ACh]
  __int64 v66; // [rsp+58h] [rbp-A8h]
  int v67; // [rsp+60h] [rbp-A0h]
  int v68; // [rsp+64h] [rbp-9Ch] BYREF
  int v69; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v70; // [rsp+70h] [rbp-90h]
  _DWORD *v71; // [rsp+78h] [rbp-88h]
  unsigned int v72; // [rsp+80h] [rbp-80h]
  int v73; // [rsp+84h] [rbp-7Ch]
  int v74; // [rsp+88h] [rbp-78h]
  __int64 v75; // [rsp+90h] [rbp-70h] BYREF
  char *v76; // [rsp+98h] [rbp-68h]
  _QWORD *v77; // [rsp+A0h] [rbp-60h]
  __int64 v78; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v79; // [rsp+B0h] [rbp-50h]
  __int64 v80; // [rsp+B8h] [rbp-48h]
  __int64 v81; // [rsp+C0h] [rbp-40h]
  __int64 v82; // [rsp+C8h] [rbp-38h]
  _DWORD *v83; // [rsp+D0h] [rbp-30h]
  __int64 v84; // [rsp+D8h] [rbp-28h]
  unsigned __int8 *v85; // [rsp+E0h] [rbp-20h]
  __int64 v86; // [rsp+E8h] [rbp-18h]
  _DWORD *v87; // [rsp+F0h] [rbp-10h] BYREF
  int v88; // [rsp+F8h] [rbp-8h]
  int v89; // [rsp+FCh] [rbp-4h]
  _DWORD *v90; // [rsp+100h] [rbp+0h] BYREF
  int v91; // [rsp+108h] [rbp+8h]
  int v92; // [rsp+10Ch] [rbp+Ch]
  _BYTE v93[176]; // [rsp+110h] [rbp+10h] BYREF

  v8 = *(_QWORD *)(a1 + 23936);
  v10 = PpmPlatformStates;
  v11 = 0;
  v83 = a5;
  v84 = a6;
  v86 = a7;
  v76 = a8;
  v82 = *(_QWORD *)(a1 + 23944);
  v66 = a1;
  v80 = 0xFFFFFFFFLL;
  v79 = 0LL;
  v63 = 0;
  v70 = 0LL;
  v64 = 0;
  v71 = 0LL;
  v62 = 0;
  v68 = 0;
  v75 = 0LL;
  v78 = 0LL;
  v69 = 0;
  v74 = PopFxSystemLatencyHint;
  v85 = a4;
  v77 = a3;
  v60 = 1;
  LOBYTE(v65) = 0;
  v59 = 0;
  *a2 = PpmIdleEvaluateConstraints(a1, a3);
  *(_QWORD *)(v8 + 240) = 1310721LL;
  memset((void *)(v8 + 248), 0, 0xA0uLL);
  PpmComputeIdleDurationHint(a1, 0LL, *v77);
  v67 = -1;
  v12 = *(__int64 (__fastcall **)(_QWORD, __int64))(v8 + 432);
  if ( v12 )
    v67 = v12(*(_QWORD *)(v8 + 488), v8 + 496);
  if ( *(_BYTE *)(a1 + 23997) )
    v67 = 0;
  if ( v10 )
  {
    PoCopyDeepIdleMask((_DWORD *)(v8 + 576));
    KeAddProcessorAffinityEx((_WORD *)(v8 + 576), *(_DWORD *)(a1 + 36));
    v30 = v8 + 792;
    v31 = *(_DWORD **)(v8 + 752);
    v81 = *(_QWORD *)(v10 + 48);
    v32 = *(_DWORD *)v10;
    v70 = v31;
    memset(v31, 0, 4 * v32 + 8);
    LODWORD(v13) = v63;
    v33 = 0LL;
    v34 = v70;
    v73 = 0;
    if ( *(_DWORD *)(v8 + 776) )
    {
      while ( 1 )
      {
        v35 = *(_QWORD *)(v8 + 784) + 24 * v33;
        if ( *(_BYTE *)(v35 + 1) )
        {
          v37 = *(_DWORD *)(v35 + 4);
          v38 = v66;
          v72 = v37;
          if ( PpmDripsStateIndex == -1
            || v37 < PpmDripsStateIndex
            || !(unsigned __int8)PpmCheckPreConditionsForDeepSleep(v66, v35, v34) )
          {
            v39 = v60;
            if ( v11 == 1 )
              v39 = 1;
            v11 = 0;
          }
          else
          {
            v39 = v60;
            if ( !v11 )
              v39 = 1;
            v11 = 1;
          }
          v60 = v39;
          if ( v39 )
          {
            v60 = 0;
            PpmEstimateIdleDuration(v38, v11, *v77, 0, (__int64)&v75, (__int64)&v78, (__int64)&v69, (__int64)&v68);
            v38 = v66;
          }
          v40 = v75;
          v41 = v74;
          v42 = v67;
          v63 = -1;
          *(_DWORD *)(v30 + 4) = 0;
          v43 = PpmIdleCheckCoordinatedStateEligibility(v38, v42, v41, v40, v37, v37, (__int64)&v63, v30);
          v44 = v43;
          LODWORD(v13) = v63;
          if ( !*(_BYTE *)(v10 + 12) && !v43 )
          {
            v45 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v10 + 16);
            if ( v45 )
              v44 = v45(*(_QWORD *)(v8 + 488), v63, v72);
          }
          PpmIdleUpdateSelectionStatistics(v44, 1008LL * v72 + v81 + 72);
          v47 = 0xFFFFFFFFLL;
          v48 = v10 + 384 * v46;
          if ( v44 != 0xFFFFFFFFLL )
          {
            v79 = *(_QWORD *)(v48 + 64);
            v47 = 0xFFFFFFFFLL;
          }
          if ( !v44 )
          {
            v51 = v70;
            v26 = v76;
            *v76 = 1;
            *v51 = v46;
            if ( *(_BYTE *)(v48 + 121) )
              v47 = (unsigned int)v46;
            v80 = v47;
            if ( (unsigned int)KeSubtractAffinityEx(
                                 (unsigned __int16 *)(v8 + 240),
                                 (unsigned __int16 *)(v48 + 128),
                                 v93) )
              PpmUnlockProcessors(v8 + 240, v93);
            v14 = v71;
            v23 = (unsigned int)v71;
LABEL_81:
            v25 = 1;
            goto LABEL_23;
          }
          if ( v44 == 2147483651LL )
          {
            v59 = 1;
          }
          else
          {
            v49 = (unsigned __int8)v65;
            if ( v44 == 2147483656LL )
              v49 = 1;
            v65 = v49;
          }
          PpmIdleRollbackCoordinatedSelection(v8 + 792, 0LL);
          v36 = v64;
          v34 = v70;
          v70[v64 + 2] = v44;
          v30 = v8 + 792;
        }
        else
        {
          v36 = v64;
          v34[v64 + 2] = -2;
        }
        v50 = v36 + 1;
        v33 = (unsigned int)(v73 + 1);
        v64 = v50;
        v73 = v33;
        if ( (unsigned int)v33 >= *(_DWORD *)(v8 + 776) )
        {
          v64 = v50;
          break;
        }
      }
    }
    *(_DWORD *)(v30 + 4) = 0;
    *v34 = -1;
    PpmUnlockProcessors(v8 + 240, v8 + 240);
  }
  else
  {
    LODWORD(v13) = v63;
  }
  v15 = *(_DWORD *)(v8 + 28);
  v11 = 0;
  v61 = 1;
  v71 = *(_DWORD **)(v8 + 744);
  v14 = v71;
  memset(v71, 0, 4 * v15 + 8);
  v18 = 0LL;
  v79 = *(_QWORD *)(v8 + 40);
  if ( !*(_DWORD *)(v8 + 760) )
  {
    v26 = v76;
    v23 = 0LL;
    goto LABEL_81;
  }
  while ( 1 )
  {
    v13 = *(unsigned int *)(*(_QWORD *)(v8 + 768) + 8 * ((unsigned int)v18 + 2 * v18) + 4);
    v19 = v66;
    if ( !v10
      && (_DWORD)v13 == *(_DWORD *)(v8 + 28) - 1
      && *(_BYTE *)(v8 + 540)
      && (unsigned __int8)PpmCheckPreConditionsForDeepSleep(v66, v16, v17) )
    {
      v53 = v11 == 0;
      v20 = v61;
      v11 = 1;
      if ( v53 )
        v20 = v52;
      v61 = v20;
    }
    else
    {
      if ( v11 == 1 )
      {
        v20 = 1;
        v61 = 1;
      }
      else
      {
        v20 = v61;
      }
      v11 = 0;
    }
    if ( v20 )
    {
      v61 = 0;
      PpmEstimateIdleDuration(v19, v11, *v77, 0, (__int64)&v75, (__int64)&v78, (__int64)&v69, (__int64)&v68);
    }
    if ( (_DWORD)v13 )
    {
      v21 = PpmIdleCheckProcessorStateEligibility(v66, v67, v74, v75, v13, 0);
      if ( !v21 )
      {
        v54 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(v8 + 440);
        if ( v54 )
          v21 = v54(*(_QWORD *)(v8 + 488), (unsigned int)v13, 0xFFFFFFFFLL, 0LL);
      }
    }
    else
    {
      v21 = 0LL;
    }
    PpmIdleUpdateSelectionStatistics(v21, 1000 * v13 + v82 + 80);
    if ( !v22 )
      break;
    v25 = 1;
    if ( v22 == 2147483651LL )
    {
      v59 = 1;
    }
    else
    {
      v55 = v65;
      if ( v22 == 2147483656LL )
        v55 = 1;
      LOBYTE(v65) = v55;
    }
    v56 = v71;
    v71[v18 + 2] = v22;
    v18 = (unsigned int)(v18 + 1);
    if ( (unsigned int)v18 >= *(_DWORD *)(v8 + 760) )
    {
      v26 = v76;
      v14 = v56;
      v23 = 0LL;
      goto LABEL_23;
    }
  }
  v14 = v71;
  v23 = (unsigned int)v18;
  *v71 = v13;
  v62 = v18;
  if ( *(_BYTE *)(248 * v13 + v8 + 1058) && (!v10 || *(_BYTE *)(248 * v13 + v8 + 1061) && !(_DWORD)v13) )
  {
    v24 = 0;
    v25 = 1;
  }
  else
  {
    v25 = 1;
    v24 = 1;
  }
  v26 = v76;
  *v76 = v24;
LABEL_23:
  if ( *v26 )
  {
    LOBYTE(v23) = 1;
    PpmIdleSetSynchronizationState(v66 + 24000, v23);
    LODWORD(v23) = v62;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x200000) != 0 )
  {
    v57 = v70;
    if ( v70 )
    {
      v58 = v64;
      v70[1] = v64;
      v87 = v57;
      v89 = 0;
      v88 = 4 * v58 + 8;
      EtwTraceKernelEvent((int)&v87, v25, 0x40200000u, 4670, 1538);
      LODWORD(v23) = v62;
      v25 = 1;
    }
    if ( v14 )
    {
      v14[1] = v23;
      v91 = 4 * v23 + 8;
      v90 = v14;
      v92 = 0;
      EtwTraceKernelEvent((int)&v90, v25, 0x40200000u, 4669, 1538);
    }
  }
  *(_WORD *)(v8 + 48) |= v68;
  v27 = (_DWORD *)v84;
  *(_BYTE *)(v8 + 7) = v65;
  *(_BYTE *)(v8 + 6) = v59;
  *(_QWORD *)(v8 + 520) = v78;
  *(_QWORD *)(v8 + 512) = v75;
  *(_BYTE *)(v8 + 541) = v69;
  *v83 = v13;
  *v27 = v80;
  v28 = (_QWORD *)v86;
  *v85 = v11;
  result = v79;
  *v28 = v79;
  return result;
}
