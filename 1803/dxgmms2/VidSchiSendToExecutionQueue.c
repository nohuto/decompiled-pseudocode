/*
 * XREFs of VidSchiSendToExecutionQueue @ 0x1C00082B0
 * Callers:
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C00558D4 (VidSchiSendToExecutionQueueWithWait.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0074C50 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C0074F20 (VidSchiSubmitRenderVirtualCommand.c)
 * Callees:
 *     VidSchiFillSubmitCommandData @ 0x1C00038A8 (VidSchiFillSubmitCommandData.c)
 *     VidSchiFillSubmitCommandDataVirtual @ 0x1C00069B0 (VidSchiFillSubmitCommandDataVirtual.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000A8D0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C000CE10 (VidSchiUpdateContextStatus.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0012DA4 (VidSchiMarkDeviceAsError.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     McTemplateK0piixqq @ 0x1C0028BAC (McTemplateK0piixqq.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C0034008 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchIsVSyncEnabled @ 0x1C0056B50 (VidSchIsVSyncEnabled.c)
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
  LARGE_INTEGER *v17; // r15
  LARGE_INTEGER PerformanceCounter; // rax
  int v19; // r9d
  LARGE_INTEGER v20; // rbx
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
  __int64 v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // rbx
  char v47; // bl
  KIRQL v48; // r12
  DWORD v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  DWORD v53; // r14d
  __int64 v54; // rdx
  unsigned int v55; // r15d
  LARGE_INTEGER *v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rbx
  _QWORD *v62; // rax
  LARGE_INTEGER *v63; // rcx
  _QWORD *v64; // rax
  __int64 v65; // rax
  _QWORD *v66; // rax
  bool v67; // al
  __int64 v68; // r8
  _QWORD *v69; // rax
  _BOOL8 v70; // r8
  KIRQL v71; // [rsp+50h] [rbp-79h]
  char v72; // [rsp+51h] [rbp-78h] BYREF
  char v73; // [rsp+52h] [rbp-77h]
  __int64 v74; // [rsp+58h] [rbp-71h]
  int v75; // [rsp+60h] [rbp-69h]
  LARGE_INTEGER *v76; // [rsp+68h] [rbp-61h]
  LARGE_INTEGER *v77; // [rsp+70h] [rbp-59h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-51h] BYREF
  __int128 v79; // [rsp+90h] [rbp-39h] BYREF
  __int128 v80; // [rsp+A0h] [rbp-29h]
  __int128 v81; // [rsp+B0h] [rbp-19h]
  __int128 v82; // [rsp+C0h] [rbp-9h]
  __int128 v83; // [rsp+D0h] [rbp+7h]
  __int128 v84; // [rsp+E0h] [rbp+17h]

  v2 = *(_QWORD *)(a1 + 48);
  v73 = a2;
  v75 = 0;
  v4 = *(_QWORD *)(v2 + 96);
  v5 = *(_QWORD *)(v2 + 104);
  v74 = v5;
  v6 = *(unsigned int *)(v4 + 488);
  v7 = *(_QWORD *)(v4 + 24);
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
        v5 = v74;
        goto LABEL_12;
      }
      v5 = v74;
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
    v54 = *(_QWORD *)(a1 + 56);
    if ( (*(_DWORD *)(v54 + 72) & 0x4000) != 0
      && ((*(_DWORD *)(v5 + 48) & 2) != 0 || *(int *)(v54 + 392) >= 4 || *(_BYTE *)(v7 + 136)) )
    {
      *(_DWORD *)(a1 + 92) = v16 | 0x200;
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 988));
      VidSchIsVSyncEnabled(v7, *(unsigned int *)(*(_QWORD *)(a1 + 56) + 160LL));
    }
  }
  v71 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1904), &LockHandle);
  v77 = (LARGE_INTEGER *)(*(_QWORD *)(v4 + 184) + 112LL * *(unsigned int *)(v4 + 196));
  v17 = v77;
  memset(v77, 0, 0x70uLL);
  *(_DWORD *)(v4 + 196) = (*(_DWORD *)(v4 + 196) + 1) & (*(_DWORD *)(v4 + 192) - 1);
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 2828));
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 9;
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 968));
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v17[1] = PerformanceCounter;
  v20 = PerformanceCounter;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v4 + 2824)) == 1 )
  {
    v21 = *(unsigned int *)(v2 + 404);
    v22 = gulPriorityToYieldPriorityBand[v21];
    if ( gulPriorityToYieldPriorityBand[v21] )
    {
      v23 = (LARGE_INTEGER *)(v4 + 1904 + 8 * v22);
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
  if ( _InterlockedIncrement((volatile signed __int32 *)(v2 + 780)) == 1 )
  {
    if ( v74 == *(_QWORD *)(v7 + 216) )
      VidSchiUpdateContextStatus(v2, 1LL, 5474LL);
    *(_DWORD *)(v2 + 184) |= 2u;
    v24 = *(unsigned int *)(v2 + 404);
    if ( ++*(_DWORD *)(v4 + 4 * v24 + 1744) == 1 )
      *(_DWORD *)(v4 + 1740) |= 1 << *(_DWORD *)(v2 + 404);
    v75 = 1;
  }
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 2836));
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 2840));
    if ( *(_DWORD *)(v4 + 1552) != *(_DWORD *)(v4 + 1544) )
    {
      v55 = *(_DWORD *)(v4 + 1552);
      do
      {
        v56 = *(LARGE_INTEGER **)(v4 + 8LL * v55 + 1560);
        v76 = v56;
        if ( (v56[23].LowPart & 8) == 0 )
        {
          VidSchiUpdateContextStatus(v56, 2LL, 5536LL);
          if ( v55 == *(_DWORD *)(v4 + 1552) && !v76[62].QuadPart )
            v76[62] = v20;
        }
        v55 = ((_BYTE)v55 + 1) & 0xF;
      }
      while ( v55 != *(_DWORD *)(v4 + 1544) );
      v17 = v77;
    }
    *(_QWORD *)(v4 + 392) = MEMORY[0xFFFFF78000000320];
    KeResetEvent((PRKEVENT)(v4 + 352));
    v57 = *(unsigned __int16 *)(v4 + 4);
    v38 = ++*(_QWORD *)(*(_QWORD *)(v7 + 8 * v57 + 440) + 104LL);
    v58 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 104) = v38;
    v36 = *(_QWORD *)(v58 + 96);
    v37 = *(_QWORD *)(v36 + 24);
    v79 = (unsigned int)v38;
    DWORD1(v79) = *(unsigned __int16 *)(*(_QWORD *)(v37 + 8LL * *(unsigned __int16 *)(v36 + 4) + 440) + 8LL);
    DWORD2(v79) = *(unsigned __int16 *)(*(_QWORD *)(v37 + 8LL * *(unsigned __int16 *)(v36 + 4) + 440) + 6LL);
    LODWORD(v38) = _InterlockedExchange((volatile __int32 *)(v4 + 160), v38);
    v59 = *(_QWORD *)(v7 + 424);
    _bittestandreset64(&v59, *(unsigned __int16 *)(v4 + 4));
    *(_QWORD *)(v7 + 424) = v59;
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
        v60 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 160LL);
        v61 = v60;
        v77 = *(LARGE_INTEGER **)(v7 + 8 * v60 + 3032);
        if ( ((v77->HighPart - 3) & 0xFFFFFFFD) == 0 )
        {
          v62 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v60, v26, v27);
          v62[3] = 281LL;
          v62[4] = 3072LL;
          v62[5] = *(_QWORD *)(a1 + 56);
          v63 = v77;
          v62[6] = v61;
          v62[7] = v63->HighPart;
          WdLogEvent5_WdCriticalError(v62);
          JUMPOUT(0x1C001B454LL);
        }
      }
      v28 = *(_QWORD *)(a1 + 56);
      v29 = *(_QWORD *)(v28 + 88);
      v30 = *(_QWORD *)(v29 + 160);
      if ( v30 && *(_QWORD *)(v28 + 112) <= v30 )
      {
        v64 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29, v27);
        v64[3] = 281LL;
        v64[4] = 1792LL;
        v64[5] = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 112LL);
        v64[6] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 88LL) + 160LL);
        v64[7] = 0LL;
        WdLogEvent5_WdCriticalError(v64);
        JUMPOUT(0x1C001B49ELL);
      }
      *(_QWORD *)(v29 + 152) = *(_QWORD *)(v28 + 112);
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 64LL) |= 8u;
    }
    if ( (*(_DWORD *)(a1 + 92) & 0x2000) != 0 )
      VidSchiFillSubmitCommandDataVirtual(a1, &v79);
    else
      VidSchiFillSubmitCommandData(a1, &v79);
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
    v65 = WdLogNewEntry5_WdAssertion(v40, v36);
    *(_QWORD *)(v65 + 24) = v7;
    *(_QWORD *)(v65 + 32) = a1;
    WdLogEvent5_WdAssertion(v65);
  }
  _InterlockedExchange((volatile __int32 *)(v4 + 1544), ((_BYTE)v39 + 1) & 0xF);
  if ( v75 )
  {
    v41 = *(_QWORD *)(v2 + 96);
    v72 = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v41 + 24) + 24LL),
      VidSchiStartContextRunningTimeAtISR,
      v2,
      *(unsigned int *)(*(_QWORD *)(v41 + 24) + 32LL),
      &v72);
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
        *(_QWORD *)(v2 + 448),
        *(_QWORD *)(v2 + 440),
        *(_QWORD *)(v4 + 1984),
        *(_DWORD *)(v2 + 436),
        3);
  }
  _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 436), 1, 0);
  VidSchiProfilePerformanceTick(7, v7, v4, v38, 0LL, 0LL, a1, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v44 = *(unsigned int *)(v4 + 1400);
  v45 = v44;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8 * v44 + 1416), a1, 0LL) )
  {
    v66 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v44, v42, v43);
    v66[6] = v4 + 1416 + 8 * v45;
    v66[3] = 281LL;
    v66[4] = 2048LL;
    v66[5] = v45;
    v66[7] = a1;
    WdLogEvent5_WdCriticalError(v66);
    JUMPOUT(0x1C001B534LL);
  }
  v46 = v74;
  _InterlockedExchange((volatile __int32 *)(v4 + 1400), ((_BYTE)v44 + 1) & 0xF);
  if ( *(_DWORD *)(v7 + 2860)
    || (*(_BYTE *)(v46 + 188) || _InterlockedCompareExchange((volatile signed __int32 *)(v46 + 184), 0, 0))
    && !*(_DWORD *)(a1 + 88) )
  {
    KeLowerIrql(v71);
    v17->LowPart = 7;
    v17[2] = *(LARGE_INTEGER *)(v4 + 152);
    LOBYTE(v17[3].LowPart) = *(_BYTE *)(v7 + 2884) & 1;
    BYTE1(v17[3].LowPart) = *(_DWORD *)(v7 + 2860) != 0;
    v67 = *(_BYTE *)(v46 + 188) || _InterlockedCompareExchange((volatile signed __int32 *)(v46 + 184), 0, 0);
    BYTE2(v17[3].u.LowPart) = v67;
    v70 = (*(_BYTE *)(v7 + 2884) & 1) == 0 && !*(_DWORD *)(v7 + 2860);
    VidSchiCompletePendingCommandInNodeHwQueue(v4, *(_QWORD *)(v4 + 152), v70);
    return;
  }
  *(_DWORD *)(a1 + 92) |= 0x20u;
  v47 = 1;
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    if ( *(_BYTE *)(v7 + 49) )
    {
      KeLowerIrql(v71);
      v47 = 0;
    }
    _InterlockedExchange((volatile __int32 *)(v4 + 480), 1);
    *(_DWORD *)(v4 + 176) = v79;
    v17->LowPart = 3;
    *(_OWORD *)&v17[2].LowPart = v79;
    v49 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[27])(*(_QWORD *)(v7 + 8), &v79);
    goto LABEL_74;
  }
  *(_QWORD *)(v4 + 168) = *(_QWORD *)(a1 + 104);
  if ( (*(_DWORD *)(a1 + 92) & 0x2000) == 0 )
  {
    v49 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[26])(*(_QWORD *)(v7 + 8), &v79);
    v17->LowPart = 1;
    *(_OWORD *)&v17[2].LowPart = v79;
    *(_OWORD *)&v17[4].LowPart = v80;
    *(_OWORD *)&v17[6].LowPart = v81;
    *(_OWORD *)&v17[8].LowPart = v82;
    *(_OWORD *)&v17[10].LowPart = v83;
    *(_OWORD *)&v17[12].LowPart = v84;
LABEL_74:
    v48 = v71;
    goto LABEL_47;
  }
  v48 = v71;
  KeLowerIrql(v71);
  v47 = 0;
  v49 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[51])(*(_QWORD *)(v7 + 8), &v79);
  v17->LowPart = 2;
  *(_OWORD *)&v17[2].LowPart = v79;
  *(_OWORD *)&v17[4].LowPart = v80;
  *(_OWORD *)&v17[6].LowPart = v81;
  *(_OWORD *)&v17[8].LowPart = v82;
  v17[10].LowPart = v49;
LABEL_47:
  v53 = v49;
  if ( v49 )
  {
    if ( !v73 )
    {
      v69 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v51, v50, v52);
      v69[5] = (int)v53;
      v69[6] = &v79;
      v69[3] = 281LL;
      v69[4] = 2LL;
      v69[7] = a1;
      WdLogEvent5_WdCriticalError(v69);
      JUMPOUT(0x1C001B60FLL);
    }
    VidSchiMarkDeviceAsError(v74, 19LL);
    LOBYTE(v68) = 1;
    VidSchiCompletePendingCommandInNodeHwQueue(v4, *(_QWORD *)(v4 + 152), v68);
    *(_QWORD *)(v4 + 72) = *(_QWORD *)(v4 + 152);
  }
  ++*(_QWORD *)(v7 + 400);
  if ( v47 )
    KeLowerIrql(v48);
}
