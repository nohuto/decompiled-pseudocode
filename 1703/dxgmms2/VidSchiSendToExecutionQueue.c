/*
 * XREFs of VidSchiSendToExecutionQueue @ 0x1C0006B50
 * Callers:
 *     VidSchiSubmitPagingCommand @ 0x1C0069E70 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C006A150 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C006CF24 (VidSchiSendToExecutionQueueWithWait.c)
 * Callees:
 *     VidSchiFillSubmitCommandDataVirtual @ 0x1C0005E40 (VidSchiFillSubmitCommandDataVirtual.c)
 *     VidSchiProfilePerformanceTick @ 0x1C00093B0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C000A0C0 (VidSchiUpdateContextStatus.c)
 *     VidSchiFillSubmitCommandData @ 0x1C00125AC (VidSchiFillSubmitCommandData.c)
 *     VidSchiMarkDeviceAsError @ 0x1C00127A4 (VidSchiMarkDeviceAsError.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     Template_piixqq @ 0x1C0023EF4 (Template_piixqq.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C002AC84 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchIsVSyncEnabled @ 0x1C006B9F0 (VidSchIsVSyncEnabled.c)
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
  int v56; // eax
  unsigned int v57; // ebx
  LARGE_INTEGER *v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // r15
  _QWORD *v65; // rax
  LARGE_INTEGER *v66; // rcx
  _QWORD *v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rax
  _BOOL8 v70; // r8
  __int64 v71; // r8
  _QWORD *v72; // rax
  KIRQL v73; // [rsp+50h] [rbp-79h]
  char v74; // [rsp+51h] [rbp-78h] BYREF
  char v75; // [rsp+52h] [rbp-77h]
  __int64 v76; // [rsp+58h] [rbp-71h]
  int v77; // [rsp+60h] [rbp-69h]
  LARGE_INTEGER *v78; // [rsp+68h] [rbp-61h]
  LARGE_INTEGER *v79; // [rsp+70h] [rbp-59h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-51h] BYREF
  __int128 v81; // [rsp+90h] [rbp-39h] BYREF
  __int128 v82; // [rsp+A0h] [rbp-29h]
  __int128 v83; // [rsp+B0h] [rbp-19h]
  __int128 v84; // [rsp+C0h] [rbp-9h]
  __int128 v85; // [rsp+D0h] [rbp+7h]
  __int128 v86; // [rsp+E0h] [rbp+17h]

  v2 = *(_QWORD *)(a1 + 48);
  v75 = a2;
  v77 = 0;
  v4 = *(_QWORD *)(v2 + 96);
  v5 = *(_QWORD *)(v2 + 104);
  v76 = v5;
  v6 = *(unsigned int *)(v4 + 488);
  v7 = *(_QWORD *)(v4 + 24);
  v8 = (_BYTE *)(v4 + 56 * (v6 + 9));
  if ( v5 == *(_QWORD *)(*(_QWORD *)(v5 + 32) + 208LL) )
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
        v5 = v76;
        goto LABEL_12;
      }
      v5 = v76;
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
    if ( (*(_DWORD *)(v55 + 72) & 0x4000) != 0 )
    {
      if ( (*(_DWORD *)(v5 + 48) & 2) != 0
        || (v56 = *(_DWORD *)(v55 + 384), v56 >= 4)
        || *(_BYTE *)(v7 + 132) && v56 == 3 )
      {
        *(_DWORD *)(a1 + 92) = v16 | 0x200;
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 976));
        VidSchIsVSyncEnabled(v7, *(unsigned int *)(*(_QWORD *)(a1 + 56) + 152LL));
      }
    }
  }
  v73 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1880), &LockHandle);
  v79 = (LARGE_INTEGER *)(*(_QWORD *)(v4 + 184) + 112LL * *(unsigned int *)(v4 + 196));
  v17 = v79;
  memset(v79, 0, 0x70uLL);
  *(_DWORD *)(v4 + 196) = (*(_DWORD *)(v4 + 196) + 1) & (*(_DWORD *)(v4 + 192) - 1);
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 2772));
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 9;
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 952));
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v17[1] = PerformanceCounter;
  v20 = PerformanceCounter;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v4 + 2768)) == 1 )
  {
    v21 = *(unsigned int *)(v2 + 396);
    v22 = gulPriorityToYieldPriorityBand[v21];
    if ( gulPriorityToYieldPriorityBand[v21] )
    {
      v23 = (LARGE_INTEGER *)(v4 + 1856 + 8 * v22);
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
  if ( _InterlockedIncrement((volatile signed __int32 *)(v2 + 796)) == 1 )
  {
    if ( v76 == *(_QWORD *)(v7 + 208) )
      VidSchiUpdateContextStatus(v2, 1LL, 5467LL);
    *(_DWORD *)(v2 + 176) |= 2u;
    v24 = *(unsigned int *)(v2 + 396);
    if ( ++*(_DWORD *)(v4 + 4 * v24 + 1696) == 1 )
      *(_DWORD *)(v4 + 1692) |= 1 << *(_DWORD *)(v2 + 396);
    v77 = 1;
  }
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 2780));
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 2784));
    if ( *(_DWORD *)(v4 + 1552) != *(_DWORD *)(v4 + 1544) )
    {
      v57 = *(_DWORD *)(v4 + 1552);
      do
      {
        v58 = *(LARGE_INTEGER **)(v4 + 8LL * v57 + 1560);
        v78 = v58;
        if ( (v58[22].LowPart & 8) == 0 )
        {
          VidSchiUpdateContextStatus(v58, 2LL, 5529LL);
          if ( v57 == *(_DWORD *)(v4 + 1552) && !v78[64].QuadPart )
            v78[64] = v20;
        }
        v57 = ((_BYTE)v57 + 1) & 0xF;
      }
      while ( v57 != *(_DWORD *)(v4 + 1544) );
      v17 = v79;
    }
    *(_QWORD *)(v4 + 392) = MEMORY[0xFFFFF78000000320];
    KeResetEvent((PRKEVENT)(v4 + 352));
    v59 = *(unsigned __int16 *)(v4 + 4);
    v60 = ++*(_QWORD *)(*(_QWORD *)(v7 + 8 * v59 + 416) + 104LL);
    v61 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 104) = v60;
    v36 = *(_QWORD *)(v61 + 96);
    v37 = *(_QWORD *)(v36 + 24);
    v81 = (unsigned int)v60;
    DWORD1(v81) = *(unsigned __int16 *)(*(_QWORD *)(v37 + 8LL * *(unsigned __int16 *)(v36 + 4) + 416) + 8LL);
    DWORD2(v81) = *(unsigned __int16 *)(*(_QWORD *)(v37 + 8LL * *(unsigned __int16 *)(v36 + 4) + 416) + 6LL);
    LODWORD(v38) = _InterlockedExchange((volatile __int32 *)(v4 + 160), v60);
    v62 = *(_QWORD *)(v7 + 400);
    _bittestandreset64(&v62, *(unsigned __int16 *)(v4 + 4));
    *(_QWORD *)(v7 + 400) = v62;
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
        v63 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 152LL);
        v64 = v63;
        v79 = *(LARGE_INTEGER **)(v7 + 8 * v63 + 2992);
        if ( ((v79->HighPart - 3) & 0xFFFFFFFD) == 0 )
        {
          v65 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v63, v26, v27);
          v65[3] = 281LL;
          v65[4] = 3072LL;
          v65[5] = *(_QWORD *)(a1 + 56);
          v66 = v79;
          v65[6] = v64;
          v65[7] = v66->HighPart;
          WdLogEvent5_WdCriticalError(v65);
          JUMPOUT(0x1C00182EELL);
        }
      }
      v28 = *(_QWORD *)(a1 + 56);
      v29 = *(_QWORD *)(v28 + 88);
      v30 = *(_QWORD *)(v29 + 152);
      if ( v30 && *(_QWORD *)(v28 + 104) <= v30 )
      {
        v67 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29, v27);
        v67[3] = 281LL;
        v67[4] = 1792LL;
        v67[5] = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 104LL);
        v67[6] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 88LL) + 152LL);
        v67[7] = 0LL;
        WdLogEvent5_WdCriticalError(v67);
        JUMPOUT(0x1C0018339LL);
      }
      *(_QWORD *)(v29 + 144) = *(_QWORD *)(v28 + 104);
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 64LL) |= 8u;
    }
    if ( (*(_DWORD *)(a1 + 92) & 0x2000) != 0 )
      VidSchiFillSubmitCommandDataVirtual(a1, &v81);
    else
      VidSchiFillSubmitCommandData(a1, &v81);
    _InterlockedExchange64((volatile __int64 *)(v4 + 152), *(_QWORD *)(a1 + 104));
    v33 = (_QWORD *)WdLogNewEntry5_WdEvent(v32, v31);
    v33[3] = a1;
    v33[4] = *(_QWORD *)(a1 + 104);
    v33[5] = *(_QWORD *)(a1 + 56);
    v33[6] = *(int *)(a1 + 88);
    v34 = *(_QWORD *)(a1 + 56);
    if ( v34 )
      v35 = *(_QWORD *)(v34 + 104);
    else
      v35 = 0LL;
    v33[7] = v35;
    WdLogEvent5_WdEvent(v33);
  }
  v39 = *(unsigned int *)(v4 + 1544);
  v40 = v4 + 8 * v39;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v40 + 1560), v2, 0LL) )
  {
    v68 = WdLogNewEntry5_WdAssertion(v40, v36);
    *(_QWORD *)(v68 + 24) = v7;
    *(_QWORD *)(v68 + 32) = a1;
    WdLogEvent5_WdAssertion(v68);
  }
  _InterlockedExchange((volatile __int32 *)(v4 + 1544), ((_BYTE)v39 + 1) & 0xF);
  if ( v77 )
  {
    v41 = *(_QWORD *)(v2 + 96);
    v74 = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v41 + 24) + 24LL),
      VidSchiStartContextRunningTimeAtISR,
      v2,
      *(unsigned int *)(*(_QWORD *)(v41 + 24) + 32LL),
      &v74);
  }
  else if ( bTracingEnabled )
  {
    v38 = *(_QWORD *)(v2 + 56);
    if ( !v38 || (*(_DWORD *)(v2 + 112) & 0x40) != 0 )
      LODWORD(v38) = v2;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_piixqq(
        v40,
        v36,
        v37,
        v38,
        *(_QWORD *)(v2 + 464),
        *(_QWORD *)(v2 + 456),
        *(_QWORD *)(v4 + 1936),
        *(_DWORD *)(v2 + 448),
        3);
  }
  _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 448), 1, 0);
  v42 = 0;
  VidSchiProfilePerformanceTick(7, v7, v4, v38, 0LL, 0LL, a1, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v45 = *(unsigned int *)(v4 + 1400);
  v46 = v45;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8 * v45 + 1416), a1, 0LL) )
  {
    v69 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v45, v43, v44);
    v69[6] = v4 + 1416 + 8 * v46;
    v69[3] = 281LL;
    v69[4] = 2048LL;
    v69[5] = v46;
    v69[7] = a1;
    WdLogEvent5_WdCriticalError(v69);
    JUMPOUT(0x1C00183F1LL);
  }
  v47 = v76;
  _InterlockedExchange((volatile __int32 *)(v4 + 1400), ((_BYTE)v45 + 1) & 0xF);
  if ( *(_DWORD *)(v7 + 2820)
    || (*(_BYTE *)(v47 + 164) || _InterlockedCompareExchange((volatile signed __int32 *)(v47 + 160), 0, 0))
    && !*(_DWORD *)(a1 + 88) )
  {
    KeLowerIrql(v73);
    v17->LowPart = 7;
    v17[2] = *(LARGE_INTEGER *)(v4 + 152);
    LOBYTE(v17[3].LowPart) = *(_BYTE *)(v7 + 2844) & 1;
    BYTE1(v17[3].LowPart) = *(_DWORD *)(v7 + 2820) != 0;
    if ( *(_BYTE *)(v47 + 164) || _InterlockedCompareExchange((volatile signed __int32 *)(v47 + 160), 0, 0) )
      v42 = 1;
    BYTE2(v17[3].u.LowPart) = v42;
    v70 = (*(_BYTE *)(v7 + 2844) & 1) == 0 && !*(_DWORD *)(v7 + 2820);
    VidSchiCompletePendingCommandInNodeHwQueue(v4, *(_QWORD *)(v4 + 152), v70);
    return;
  }
  *(_DWORD *)(a1 + 92) |= 0x20u;
  v48 = 1;
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    if ( *(_BYTE *)(v7 + 49) )
    {
      KeLowerIrql(v73);
      v48 = 0;
    }
    _InterlockedExchange((volatile __int32 *)(v4 + 480), 1);
    *(_DWORD *)(v4 + 176) = v81;
    v17->LowPart = 3;
    *(_OWORD *)&v17[2].LowPart = v81;
    v50 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[22])(*(_QWORD *)(v7 + 8), &v81);
    goto LABEL_71;
  }
  *(_QWORD *)(v4 + 168) = *(_QWORD *)(a1 + 104);
  if ( (*(_DWORD *)(a1 + 92) & 0x2000) == 0 )
  {
    v50 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[21])(*(_QWORD *)(v7 + 8), &v81);
    v17->LowPart = 1;
    *(_OWORD *)&v17[2].LowPart = v81;
    *(_OWORD *)&v17[4].LowPart = v82;
    *(_OWORD *)&v17[6].LowPart = v83;
    *(_OWORD *)&v17[8].LowPart = v84;
    *(_OWORD *)&v17[10].LowPart = v85;
    *(_OWORD *)&v17[12].LowPart = v86;
LABEL_71:
    v49 = v73;
    goto LABEL_47;
  }
  v49 = v73;
  KeLowerIrql(v73);
  v48 = 0;
  v50 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[41])(*(_QWORD *)(v7 + 8), &v81);
  v17->LowPart = 2;
  *(_OWORD *)&v17[2].LowPart = v81;
  *(_OWORD *)&v17[4].LowPart = v82;
  *(_OWORD *)&v17[6].LowPart = v83;
  *(_OWORD *)&v17[8].LowPart = v84;
  v17[10].LowPart = v50;
LABEL_47:
  v54 = v50;
  if ( v50 )
  {
    if ( !v75 )
    {
      v72 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v52, v51, v53);
      v72[5] = (int)v54;
      v72[6] = &v81;
      v72[3] = 281LL;
      v72[4] = 2LL;
      v72[7] = a1;
      WdLogEvent5_WdCriticalError(v72);
      JUMPOUT(0x1C00184EALL);
    }
    VidSchiMarkDeviceAsError(v76, 19LL);
    LOBYTE(v71) = 1;
    VidSchiCompletePendingCommandInNodeHwQueue(v4, *(_QWORD *)(v4 + 152), v71);
    *(_QWORD *)(v4 + 72) = *(_QWORD *)(v4 + 152);
  }
  ++*(_QWORD *)(v7 + 376);
  if ( v48 )
    KeLowerIrql(v49);
}
