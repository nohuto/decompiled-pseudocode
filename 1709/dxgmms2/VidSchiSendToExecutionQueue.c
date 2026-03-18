/*
 * XREFs of VidSchiSendToExecutionQueue @ 0x1C0007950
 * Callers:
 *     VidSchiSubmitPagingCommand @ 0x1C006DC60 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C006DF30 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C0071BA4 (VidSchiSendToExecutionQueueWithWait.c)
 * Callees:
 *     VidSchiFillSubmitCommandDataVirtual @ 0x1C00068F0 (VidSchiFillSubmitCommandDataVirtual.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000A200 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C000B5B0 (VidSchiUpdateContextStatus.c)
 *     VidSchiMarkDeviceAsError @ 0x1C000F4C8 (VidSchiMarkDeviceAsError.c)
 *     VidSchiFillSubmitCommandData @ 0x1C0013638 (VidSchiFillSubmitCommandData.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     McTemplateK0piixqq @ 0x1C0025F78 (McTemplateK0piixqq.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C002C780 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchIsVSyncEnabled @ 0x1C0071EE0 (VidSchIsVSyncEnabled.c)
 */

void __fastcall VidSchiSendToExecutionQueue(__int64 a1, char a2)
{
  signed __int64 v2; // r14
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r15
  __int64 v7; // r13
  _BYTE *v8; // rbx
  __int64 v9; // rcx
  const char *ProcessImageFileName; // rax
  const char *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  char v14; // al
  __int64 v15; // rcx
  int v16; // ecx
  LARGE_INTEGER *v17; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  int v19; // r9d
  LARGE_INTEGER v20; // r15
  __int64 v21; // rcx
  __int64 v22; // rdx
  LARGE_INTEGER *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r15
  __int64 v40; // rcx
  __int64 v41; // rax
  char v42; // r15
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // r14
  __int64 v47; // r14
  char v48; // r14
  KIRQL v49; // r12
  DWORD v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  DWORD v54; // r15d
  __int64 v55; // rdx
  unsigned int i; // r13d
  LARGE_INTEGER *v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // r15
  __int64 v64; // r13
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rax
  _QWORD *v68; // rax
  _BOOL8 v69; // r8
  __int64 v70; // r8
  _QWORD *v71; // rax
  KIRQL v72; // [rsp+50h] [rbp-79h]
  char v73; // [rsp+51h] [rbp-78h] BYREF
  char v74; // [rsp+52h] [rbp-77h]
  __int64 v75; // [rsp+58h] [rbp-71h]
  int v76; // [rsp+60h] [rbp-69h]
  __int64 v77; // [rsp+68h] [rbp-61h]
  LARGE_INTEGER *v78; // [rsp+70h] [rbp-59h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-51h] BYREF
  __int128 v80; // [rsp+90h] [rbp-39h] BYREF
  __int128 v81; // [rsp+A0h] [rbp-29h]
  __int128 v82; // [rsp+B0h] [rbp-19h]
  __int128 v83; // [rsp+C0h] [rbp-9h]
  __int128 v84; // [rsp+D0h] [rbp+7h]
  __int128 v85; // [rsp+E0h] [rbp+17h]

  v2 = *(_QWORD *)(a1 + 48);
  v74 = a2;
  v76 = 0;
  v4 = *(_QWORD *)(v2 + 96);
  v5 = *(_QWORD *)(v2 + 104);
  v75 = v5;
  v6 = *(unsigned int *)(v4 + 488);
  v7 = *(_QWORD *)(v4 + 24);
  v77 = v7;
  v8 = (_BYTE *)(v4 + 56 * (v6 + 9));
  if ( v5 == *(_QWORD *)(*(_QWORD *)(v5 + 32) + 216LL) )
  {
    v11 = "System";
  }
  else
  {
    v9 = *(_QWORD *)(v5 + 40);
    if ( v9 && *(_QWORD *)(v9 + 8) )
    {
      ProcessImageFileName = (const char *)PsGetProcessImageFileName(*(_QWORD *)(v9 + 2648));
      v11 = ProcessImageFileName;
      if ( !ProcessImageFileName || !*ProcessImageFileName )
      {
        v5 = v75;
        goto LABEL_12;
      }
      v5 = v75;
    }
    else
    {
      v11 = "Unknown";
    }
  }
  v12 = 16LL;
  v13 = v11 - v8;
  while ( v12 != -2147483630 )
  {
    v14 = v8[v13];
    if ( !v14 )
      break;
    *v8++ = v14;
    if ( !--v12 )
    {
      --v8;
      break;
    }
  }
LABEL_12:
  *v8 = 0;
  v15 = 56 * v6 + v4 + 520;
  *(_DWORD *)v15 = *(_DWORD *)(a1 + 72);
  *(_QWORD *)(v15 + 8) = *(_QWORD *)(a1 + 80);
  *(_DWORD *)(v15 + 16) = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(v15 + 20) = *(_DWORD *)(a1 + 92);
  *(_DWORD *)(v15 + 24) = *(_DWORD *)(a1 + 96);
  *(_QWORD *)(v15 + 32) = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(v4 + 488) = ((_BYTE)v6 + 1) & 0xF;
  v16 = *(_DWORD *)(a1 + 92);
  if ( (v16 & 4) != 0 )
  {
    v55 = *(_QWORD *)(a1 + 56);
    if ( (*(_DWORD *)(v55 + 72) & 0x4000) != 0
      && ((*(_DWORD *)(v5 + 48) & 2) != 0 || *(int *)(v55 + 408) >= 4 || *(_BYTE *)(v7 + 132)) )
    {
      *(_DWORD *)(a1 + 92) = v16 | 0x200;
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 972));
      VidSchIsVSyncEnabled(v7, *(unsigned int *)(*(_QWORD *)(a1 + 56) + 176LL));
    }
  }
  v72 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1888), &LockHandle);
  v17 = (LARGE_INTEGER *)(*(_QWORD *)(v4 + 184) + 112LL * *(unsigned int *)(v4 + 196));
  memset(v17, 0, 0x70uLL);
  *(_DWORD *)(v4 + 196) = (*(_DWORD *)(v4 + 196) + 1) & (*(_DWORD *)(v4 + 192) - 1);
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 2796));
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 9;
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 952));
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v17[1] = PerformanceCounter;
  v20 = PerformanceCounter;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v4 + 2792)) == 1 )
  {
    v21 = *(unsigned int *)(v2 + 396);
    v22 = gulPriorityToYieldPriorityBand[v21];
    if ( gulPriorityToYieldPriorityBand[v21] )
    {
      v23 = (LARGE_INTEGER *)(v4 + 1872 + 8 * v22);
      do
      {
        if ( v23[-4].QuadPart )
          *v23 = v20;
        --v23;
        --v22;
      }
      while ( v22 );
    }
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)(v2 + 772)) == 1 )
  {
    if ( v75 == *(_QWORD *)(v7 + 216) )
      VidSchiUpdateContextStatus(v2, 1LL, 5520LL);
    *(_DWORD *)(v2 + 176) |= 2u;
    v24 = *(unsigned int *)(v2 + 396);
    if ( ++*(_DWORD *)(v4 + 4 * v24 + 1712) == 1 )
      *(_DWORD *)(v4 + 1708) |= 1 << *(_DWORD *)(v2 + 396);
    v76 = 1;
  }
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 2804));
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 2808));
    for ( i = *(_DWORD *)(v4 + 1552); i != *(_DWORD *)(v4 + 1544); i = ((_BYTE)i + 1) & 0xF )
    {
      v57 = *(LARGE_INTEGER **)(v4 + 8LL * i + 1560);
      v78 = v57;
      if ( (v57[22].LowPart & 8) == 0 )
      {
        VidSchiUpdateContextStatus(v57, 2LL, 5582LL);
        if ( i == *(_DWORD *)(v4 + 1552) && !v78[61].QuadPart )
          v78[61] = v20;
      }
    }
    *(_QWORD *)(v4 + 392) = MEMORY[0xFFFFF78000000320];
    KeResetEvent((PRKEVENT)(v4 + 352));
    v58 = *(unsigned __int16 *)(v4 + 4);
    v7 = v77;
    ++*(_QWORD *)(*(_QWORD *)(v77 + 8 * v58 + 424) + 104LL);
    v59 = *(_QWORD *)(*(_QWORD *)(v7 + 8 * v58 + 424) + 104LL);
    v60 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 104) = v59;
    v36 = *(_QWORD *)(v60 + 96);
    v37 = *(_QWORD *)(v36 + 24);
    v80 = (unsigned int)v59;
    DWORD1(v80) = *(unsigned __int16 *)(*(_QWORD *)(v37 + 8LL * *(unsigned __int16 *)(v36 + 4) + 424) + 8LL);
    DWORD2(v80) = *(unsigned __int16 *)(*(_QWORD *)(v37 + 8LL * *(unsigned __int16 *)(v36 + 4) + 424) + 6LL);
    LODWORD(v38) = _InterlockedExchange((volatile __int32 *)(v4 + 160), v59);
    v61 = *(_QWORD *)(v7 + 408);
    _bittestandreset64(&v61, *(unsigned __int16 *)(v4 + 4));
    *(_QWORD *)(v7 + 408) = v61;
  }
  else
  {
    v25 = *(_QWORD *)(a1 + 56);
    if ( v25 )
    {
      VidSchiProfilePerformanceTick(6, v7, 0, v19, 0LL, v25, 0LL, 0LL);
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 52LL) = 9;
      if ( (*(_DWORD *)(a1 + 92) & 0x10) != 0 )
      {
        v62 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 176LL);
        v63 = v62;
        v64 = *(_QWORD *)(v7 + 8 * v62 + 3008);
        if ( ((*(_DWORD *)(v64 + 4) - 3) & 0xFFFFFFFD) == 0 )
        {
          v65 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v62, v26, v27);
          v65[3] = 281LL;
          v65[4] = 3072LL;
          v65[5] = *(_QWORD *)(a1 + 56);
          v65[6] = v63;
          v65[7] = *(int *)(v64 + 4);
          WdLogEvent5_WdCriticalError(v65);
          JUMPOUT(0x1C001A9BCLL);
        }
        v7 = v77;
      }
      v28 = *(_QWORD *)(a1 + 56);
      v29 = *(_QWORD *)(v28 + 88);
      v30 = *(_QWORD *)(v29 + 152);
      if ( v30 && *(_QWORD *)(v28 + 112) <= v30 )
      {
        v66 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29, v27);
        v66[3] = 281LL;
        v66[4] = 1792LL;
        v66[5] = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 112LL);
        v66[6] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 88LL) + 152LL);
        v66[7] = 0LL;
        WdLogEvent5_WdCriticalError(v66);
        JUMPOUT(0x1C001AA0BLL);
      }
      *(_QWORD *)(v29 + 144) = *(_QWORD *)(v28 + 112);
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 64LL) |= 8u;
    }
    if ( (*(_DWORD *)(a1 + 92) & 0x2000) != 0 )
      VidSchiFillSubmitCommandDataVirtual(a1, &v80);
    else
      VidSchiFillSubmitCommandData(a1, &v80);
    _InterlockedExchange64((volatile __int64 *)(v4 + 152), *(_QWORD *)(a1 + 104));
    v33 = (_QWORD *)WdLogNewEntry5_WdEvent(v32, v31);
    v33[3] = a1;
    v33[4] = *(_QWORD *)(a1 + 104);
    v33[5] = *(_QWORD *)(a1 + 56);
    v33[6] = *(int *)(a1 + 88);
    v34 = *(_QWORD *)(a1 + 56);
    if ( v34 )
      v35 = *(_QWORD *)(v34 + 112);
    else
      v35 = 0LL;
    v33[7] = v35;
    WdLogEvent5_WdEvent(v33);
  }
  v39 = *(unsigned int *)(v4 + 1544);
  v40 = v4 + 8 * v39;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v40 + 1560), v2, 0LL) )
  {
    v67 = WdLogNewEntry5_WdAssertion(v40, v36);
    *(_QWORD *)(v67 + 24) = v7;
    *(_QWORD *)(v67 + 32) = a1;
    WdLogEvent5_WdAssertion(v67);
  }
  _InterlockedExchange((volatile __int32 *)(v4 + 1544), ((_BYTE)v39 + 1) & 0xF);
  if ( v76 )
  {
    v41 = *(_QWORD *)(v2 + 96);
    v73 = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v41 + 24) + 24LL),
      VidSchiStartContextRunningTimeAtISR,
      v2,
      *(unsigned int *)(*(_QWORD *)(v41 + 24) + 32LL),
      &v73);
  }
  else if ( bTracingEnabled )
  {
    v38 = *(_QWORD *)(v2 + 56);
    if ( !v38 || (*(_DWORD *)(v2 + 112) & 0x40) != 0 )
      LODWORD(v38) = v2;
    if ( (char)Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0piixqq(
        v40,
        v36,
        v37,
        v38,
        *(_QWORD *)(v2 + 440),
        *(_QWORD *)(v2 + 432),
        *(_QWORD *)(v4 + 1952),
        *(_DWORD *)(v2 + 428),
        3);
  }
  _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 428), 1, 0);
  v42 = 0;
  VidSchiProfilePerformanceTick(7, v7, v4, v38, 0LL, 0LL, a1, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v45 = *(unsigned int *)(v4 + 1400);
  v46 = v45;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8 * v45 + 1416), a1, 0LL) )
  {
    v68 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v45, v43, v44);
    v68[6] = v4 + 1416 + 8 * v46;
    v68[3] = 281LL;
    v68[4] = 2048LL;
    v68[5] = v46;
    v68[7] = a1;
    WdLogEvent5_WdCriticalError(v68);
    JUMPOUT(0x1C001AAA1LL);
  }
  v47 = v75;
  _InterlockedExchange((volatile __int32 *)(v4 + 1400), ((_BYTE)v45 + 1) & 0xF);
  if ( *(_DWORD *)(v7 + 2836)
    || (*(_BYTE *)(v47 + 164) || _InterlockedCompareExchange((volatile signed __int32 *)(v47 + 160), 0, 0))
    && !*(_DWORD *)(a1 + 88) )
  {
    KeLowerIrql(v72);
    v17->LowPart = 7;
    v17[2] = *(LARGE_INTEGER *)(v4 + 152);
    LOBYTE(v17[3].LowPart) = *(_BYTE *)(v7 + 2860) & 1;
    BYTE1(v17[3].LowPart) = *(_DWORD *)(v7 + 2836) != 0;
    if ( *(_BYTE *)(v47 + 164) || _InterlockedCompareExchange((volatile signed __int32 *)(v47 + 160), 0, 0) )
      v42 = 1;
    BYTE2(v17[3].u.LowPart) = v42;
    v69 = (*(_BYTE *)(v7 + 2860) & 1) == 0 && !*(_DWORD *)(v7 + 2836);
    VidSchiCompletePendingCommandInNodeHwQueue(v4, *(_QWORD *)(v4 + 152), v69);
    return;
  }
  *(_DWORD *)(a1 + 92) |= 0x20u;
  v48 = 1;
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    if ( *(_BYTE *)(v7 + 49) )
    {
      KeLowerIrql(v72);
      v48 = 0;
    }
    _InterlockedExchange((volatile __int32 *)(v4 + 480), 1);
    *(_DWORD *)(v4 + 176) = v80;
    v17->LowPart = 3;
    *(_OWORD *)&v17[2].LowPart = v80;
    v50 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[22])(*(_QWORD *)(v7 + 8), &v80);
    goto LABEL_70;
  }
  *(_QWORD *)(v4 + 168) = *(_QWORD *)(a1 + 104);
  if ( (*(_DWORD *)(a1 + 92) & 0x2000) == 0 )
  {
    v50 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[21])(*(_QWORD *)(v7 + 8), &v80);
    v17->LowPart = 1;
    *(_OWORD *)&v17[2].LowPart = v80;
    *(_OWORD *)&v17[4].LowPart = v81;
    *(_OWORD *)&v17[6].LowPart = v82;
    *(_OWORD *)&v17[8].LowPart = v83;
    *(_OWORD *)&v17[10].LowPart = v84;
    *(_OWORD *)&v17[12].LowPart = v85;
LABEL_70:
    v49 = v72;
    goto LABEL_47;
  }
  v49 = v72;
  KeLowerIrql(v72);
  v48 = 0;
  v50 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[41])(*(_QWORD *)(v7 + 8), &v80);
  v17->LowPart = 2;
  *(_OWORD *)&v17[2].LowPart = v80;
  *(_OWORD *)&v17[4].LowPart = v81;
  *(_OWORD *)&v17[6].LowPart = v82;
  *(_OWORD *)&v17[8].LowPart = v83;
  v17[10].LowPart = v50;
LABEL_47:
  v54 = v50;
  if ( v50 )
  {
    if ( !v74 )
    {
      v71 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v52, v51, v53);
      v71[5] = (int)v54;
      v71[6] = &v80;
      v71[3] = 281LL;
      v71[4] = 2LL;
      v71[7] = a1;
      WdLogEvent5_WdCriticalError(v71);
      JUMPOUT(0x1C001AB9ALL);
    }
    VidSchiMarkDeviceAsError(v75, 19LL);
    LOBYTE(v70) = 1;
    VidSchiCompletePendingCommandInNodeHwQueue(v4, *(_QWORD *)(v4 + 152), v70);
    *(_QWORD *)(v4 + 72) = *(_QWORD *)(v4 + 152);
  }
  ++*(_QWORD *)(v7 + 384);
  if ( v48 )
    KeLowerIrql(v49);
}
