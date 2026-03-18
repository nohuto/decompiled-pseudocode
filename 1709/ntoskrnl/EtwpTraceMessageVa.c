/*
 * XREFs of EtwpTraceMessageVa @ 0x140092350
 * Callers:
 *     NtTraceEvent @ 0x140091AC0 (NtTraceEvent.c)
 *     WmiTraceMessage @ 0x1401300F0 (WmiTraceMessage.c)
 *     WmiTraceMessageVa @ 0x14027ABA0 (WmiTraceMessageVa.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     EtwpReserveTraceBuffer @ 0x140092980 (EtwpReserveTraceBuffer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA300 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400FA3C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     EtwpCloseLogger @ 0x14012B268 (EtwpCloseLogger.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     EtwpSendTraceEvent @ 0x14027E3AC (EtwpSendTraceEvent.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14027EEAC (EtwpGetReserveTraceBufferStatus.c)
 */

__int64 __fastcall EtwpTraceMessageVa(__int64 a1, char a2, signed __int32 *a3, __int16 a4, __int64 a5, char a6)
{
  unsigned __int16 v7; // di
  unsigned __int64 v8; // r12
  __int64 v10; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rdx
  int v13; // eax
  char v14; // si
  char v15; // r14
  __int64 v16; // rdi
  unsigned __int64 v17; // r13
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  int v22; // ecx
  int v23; // r11d
  int v24; // r9d
  int v25; // eax
  int v26; // r8d
  unsigned int v27; // ecx
  __int64 v28; // rbx
  __int64 v29; // r8
  volatile signed __int32 *v30; // rax
  signed __int32 v31; // edx
  __int16 v32; // cx
  signed __int32 *v33; // rbx
  struct _KTHREAD *v34; // rcx
  unsigned __int64 v35; // rdi
  char *v36; // rdx
  size_t v37; // r15
  int v38; // ecx
  signed __int64 *v39; // roff
  signed __int64 v40; // rax
  unsigned __int64 v41; // rdx
  signed __int64 v42; // rtt
  struct _KTHREAD *v43; // rcx
  unsigned int ReserveTraceBufferStatus; // [rsp+30h] [rbp-D8h]
  char v47; // [rsp+34h] [rbp-D4h]
  char v48; // [rsp+35h] [rbp-D3h]
  _DWORD *v49; // [rsp+38h] [rbp-D0h]
  __int64 v50; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v51; // [rsp+50h] [rbp-B8h]
  __int64 v52; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v53; // [rsp+78h] [rbp-90h]
  _DWORD v54[2]; // [rsp+88h] [rbp-80h] BYREF
  unsigned int CurrentRunTime; // [rsp+90h] [rbp-78h]
  int CycleTime; // [rsp+94h] [rbp-74h]
  unsigned __int64 v57; // [rsp+98h] [rbp-70h]
  __int64 v58; // [rsp+A0h] [rbp-68h]
  __int64 v59; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v60; // [rsp+B0h] [rbp-58h] BYREF
  signed __int64 *v61; // [rsp+B8h] [rbp-50h]
  unsigned int v62; // [rsp+110h] [rbp+8h]
  unsigned int v63; // [rsp+114h] [rbp+Ch]
  unsigned __int8 v66; // [rsp+138h] [rbp+30h]

  v63 = HIDWORD(a1);
  v7 = a1;
  v8 = 0LL;
  ReserveTraceBufferStatus = 0;
  v51 = 0LL;
  if ( a6 )
    v10 = *(_QWORD *)(PsGetCurrentServerSiloGlobals() + 864);
  else
    v10 = EtwpHostSiloState;
  v50 = v10;
  if ( (unsigned int)v7 >= *(_DWORD *)(v10 + 8) )
    return (unsigned int)-1073741816;
  v66 = 0;
  if ( a6 == 1 || KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v10 + 416) + 8LL * v7),
            1u) )
    {
      KeLeaveCriticalRegion();
      return (unsigned int)-1073741816;
    }
    v66 = 1;
  }
  _mm_lfence();
  v59 = v7;
  v12 = *(_QWORD *)(*(_QWORD *)(v10 + 424) + 8LL * v7);
  v52 = v12;
  if ( (v12 & 1) != 0 )
  {
    EtwpCloseLogger(v7, v10, v66);
    return (unsigned int)-1073741816;
  }
  v58 = *(_QWORD *)(*(_QWORD *)(v10 + 424) + 8LL * v7);
  if ( !v12 )
    return (unsigned int)-1073741816;
  v13 = *(_DWORD *)(v12 + 12);
  if ( (v13 & 0x80u) != 0 )
  {
    ReserveTraceBufferStatus = -1073741790;
    goto LABEL_90;
  }
  if ( !a6 && (v13 & 0x1000000) != 0 )
  {
    ReserveTraceBufferStatus = -1073741637;
    goto LABEL_90;
  }
  v14 = a2 & 0x40;
  v47 = a2 & 0x40;
  v15 = a2 & 0x80;
  v48 = a2 & 0x80;
  v16 = a5;
  if ( (a2 & 0x40) != 0 )
  {
    v17 = a5 + v63;
    v51 = v17;
  }
  else
  {
    v17 = 0LL;
  }
  v53 = 0LL;
  v18 = a5;
  while ( 1 )
  {
    if ( !v14 )
    {
      v19 = v18 + 8;
LABEL_17:
      v20 = *(_QWORD *)(v19 - 8);
      goto LABEL_18;
    }
    if ( !v15 )
    {
      v19 = v18 + 8;
      if ( v19 > v17 )
      {
        ReserveTraceBufferStatus = -1073741306;
        v10 = v50;
        goto LABEL_90;
      }
      goto LABEL_17;
    }
    v19 = v18 + 4;
    if ( v19 > v17 )
    {
      ReserveTraceBufferStatus = -1073741306;
      v10 = v50;
      goto LABEL_90;
    }
    v20 = *(unsigned int *)(v19 - 4);
LABEL_18:
    if ( !v20 )
      break;
    if ( v14 && v15 )
    {
      v18 = v19 + 4;
      v21 = *(unsigned int *)(v18 - 4);
    }
    else
    {
      v18 = v19 + 8;
      v21 = *(_QWORD *)(v18 - 8);
    }
    if ( v21 )
    {
      v8 += v21;
      v53 = v8;
      if ( v8 < v21 )
      {
        ReserveTraceBufferStatus = -1073741675;
        v10 = v50;
        goto LABEL_90;
      }
    }
  }
  if ( !*(_QWORD *)(v12 + 280) )
    a2 &= ~1u;
  v22 = 4;
  if ( (a2 & 1) != 0 )
    v23 = 4;
  else
    v23 = 0;
  if ( (a2 & 2) != 0 )
    v24 = 16;
  else
    v24 = 0;
  if ( (a2 & 4) == 0 )
    v22 = 0;
  v25 = 8;
  if ( (a2 & 0x18) != 0 )
    v26 = 8;
  else
    v26 = 0;
  if ( (a2 & 0x20) == 0 )
    v25 = 0;
  v27 = v8 + v23 + v24 + v26 + v25 + 8 + v22;
  v62 = v27;
  if ( v8 > v27 )
  {
    ReserveTraceBufferStatus = -1073741306;
LABEL_117:
    v10 = v50;
    goto LABEL_90;
  }
  v28 = EtwpReserveTraceBuffer(v12, v27, (unsigned int)&v60, (unsigned int)v54, 0);
  v29 = v52;
  v30 = *(volatile signed __int32 **)(v52 + 280);
  if ( v30 )
  {
    v31 = _InterlockedIncrement(v30);
    v17 = v51;
    v14 = v47;
    v15 = v48;
    v8 = v53;
    v29 = v52;
  }
  else
  {
    v31 = 0;
  }
  if ( !v28 )
  {
    ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v29, v62);
    goto LABEL_117;
  }
  *(_DWORD *)v28 = -1879048192;
  *(_WORD *)v28 = v62;
  *(_WORD *)(v28 + 4) = a4;
  if ( v15 )
    v32 = 64;
  else
    v32 = 128;
  *(_WORD *)(v28 + 6) = v32 | a2 & 0x3F;
  v33 = (signed __int32 *)(v28 + 8);
  v49 = v33;
  if ( (a2 & 1) != 0 )
  {
    *v33++ = v31;
    v49 = v33;
  }
  if ( (a2 & 4) != 0 )
  {
    *v33++ = *a3;
LABEL_58:
    v49 = v33;
  }
  else if ( (a2 & 2) != 0 )
  {
    *(_OWORD *)v33 = *(_OWORD *)a3;
    v33 += 4;
    goto LABEL_58;
  }
  if ( (a2 & 8) != 0 )
  {
    v33[1] = v54[1];
    *v33 = v54[0];
    v33 += 2;
    v49 = v33;
  }
  if ( (a2 & 0x20) != 0 )
  {
    v34 = KeGetCurrentThread();
    CurrentRunTime = v34[1].CurrentRunTime;
    *v49 = CurrentRunTime;
    CycleTime = v34[1].CycleTime;
    v49[1] = CycleTime;
    v33 = v49 + 2;
    v17 = v51;
    v14 = v47;
    v15 = v48;
    v8 = v53;
  }
  v57 = v8;
  while ( 1 )
  {
    do
    {
      if ( v14 && v15 )
      {
        v35 = v16 + 4;
        v36 = (char *)*(unsigned int *)(v35 - 4);
      }
      else
      {
        v35 = v16 + 8;
        v36 = *(char **)(v35 - 8);
      }
      if ( !v36 )
      {
        v38 = 0;
        goto LABEL_86;
      }
      if ( !v14 )
        goto LABEL_71;
      if ( v35 >= v17 )
      {
        v38 = -1073741306;
        ReserveTraceBufferStatus = -1073741306;
        goto LABEL_86;
      }
      if ( v15 )
      {
        v16 = v35 + 4;
        v37 = *(unsigned int *)(v16 - 4);
      }
      else
      {
LABEL_71:
        v16 = v35 + 8;
        v37 = *(_QWORD *)(v16 - 8);
      }
    }
    while ( !v37 );
    if ( v37 > v8 )
      break;
    if ( v14 && ((unsigned __int64)&v36[v37] > 0x7FFFFFFF0000LL || &v36[v37] < v36) )
      MEMORY[0x7FFFFFFF0000] = 0;
    memmove(v33, v36, v37);
    v8 -= v37;
    v57 = v8;
    v33 = (signed __int32 *)((char *)v33 + v37);
  }
  v38 = -1073741306;
  ReserveTraceBufferStatus = -1073741306;
LABEL_86:
  v10 = v50;
  if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
    && (*(_DWORD *)(v52 + 12) & 0x80000) != 0
    && v38 >= 0 )
  {
    EtwpSendTraceEvent(v52, &v60);
  }
  v39 = v61;
  _m_prefetchw(v61);
  v40 = *v39;
  v41 = v60;
  if ( (*v39 ^ v60) >= 0xF )
  {
LABEL_116:
    _InterlockedDecrement((volatile signed __int32 *)(v41 + 12));
  }
  else
  {
    while ( 1 )
    {
      v42 = v40;
      v40 = _InterlockedCompareExchange64(v61, v40 + 1, v40);
      if ( v42 == v40 )
        break;
      v41 = v60;
      if ( (v40 ^ v60) >= 0xF )
        goto LABEL_116;
    }
  }
LABEL_90:
  if ( v66 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v10 + 416) + 8 * v59), 1u);
    v43 = KeGetCurrentThread();
    if ( v43->KernelApcDisable++ == -1
      && ($B476B70DB57F76B110DA5B9238C3E934 *)v43->ApcState.ApcListHead[0].Flink != &v43->152
      && !v43->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return ReserveTraceBufferStatus;
}
