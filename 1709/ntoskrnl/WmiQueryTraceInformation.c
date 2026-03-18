/*
 * XREFs of WmiQueryTraceInformation @ 0x1405EE200
 * Callers:
 *     WdipSemWriteSemActionsEvent @ 0x14073F9BC (WdipSemWriteSemActionsEvent.c)
 *     EtwpEventTracingCounterSetCallback @ 0x14078C4C0 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404921A4 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14049227C (EtwpReleaseLoggerContext.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x1405ABA5C (EtwQueryTraceHandleByLoggerName.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall WmiQueryTraceInformation(
        TRACE_INFORMATION_CLASS TraceInformationClass,
        PVOID TraceInformation,
        ULONG TraceInformationLength,
        PULONG RequiredLength,
        PVOID Buffer)
{
  unsigned __int64 v6; // r15
  __int64 v9; // rdx
  __int32 v10; // ebx
  __int32 v11; // ebx
  __int32 v12; // ebx
  __int32 v13; // ebx
  int v14; // ebx
  int v15; // ebx
  __int64 *v16; // rax
  __int32 v17; // ebx
  __int32 v18; // ebx
  __int32 v19; // ebx
  __int32 v20; // ebx
  unsigned int v21; // ebx
  __int64 v22; // r12
  unsigned int v23; // r14d
  unsigned int *v24; // rax
  unsigned __int64 v25; // rdx
  int v26; // ecx
  NTSTATUS result; // eax
  _QWORD *v28; // rax
  unsigned int *v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned int v34; // eax
  __int16 v35; // cx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  __int64 v38; // r12
  unsigned int v39; // ebx
  _QWORD *v40; // rax
  __int64 v41; // r9
  unsigned int i; // r8d
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned int *v45; // rax
  unsigned int v46; // ebx
  _QWORD *v47; // rax
  unsigned int *v48; // rax
  unsigned int v49; // ebx
  NTSTATUS v50; // [rsp+24h] [rbp-44h]
  unsigned int v51; // [rsp+28h] [rbp-40h]
  unsigned int v52; // [rsp+28h] [rbp-40h]
  __int64 v53; // [rsp+38h] [rbp-30h] BYREF
  __int64 v54; // [rsp+40h] [rbp-28h]

  v6 = TraceInformationLength;
  v50 = 0;
  v9 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  if ( RequiredLength )
    *RequiredLength = 0;
  if ( TraceInformationClass > TraceHandleByNameClass )
  {
    v10 = TraceInformationClass - 8;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( !v11 )
      {
        if ( !Buffer )
          return -1073741581;
        if ( !RequiredLength )
          return -1073741582;
        *RequiredLength = 32;
        if ( (unsigned int)v6 < 0x20 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        v53 = *(_QWORD *)Buffer;
        v52 = (unsigned __int16)v53;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
        v45 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(CurrentServerSiloGlobals[108], v52, 0);
        if ( v45 )
        {
          *(_DWORD *)TraceInformation = 1;
          *((_DWORD *)TraceInformation + 1) = v45[1];
          *((_DWORD *)TraceInformation + 2) = v45[60];
          *((_DWORD *)TraceInformation + 3) = v45[63];
          *((_DWORD *)TraceInformation + 4) = v45[3];
          *((_DWORD *)TraceInformation + 5) = v45[56];
          *((_DWORD *)TraceInformation + 7) = v45[54];
          *((_DWORD *)TraceInformation + 6) = v45[57];
          EtwpReleaseLoggerContext(v45, 0);
        }
        else
        {
          v50 = -1073741162;
        }
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        return v50;
      }
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( !v13 )
        {
          if ( RequiredLength )
            *RequiredLength = 8;
          if ( (_DWORD)v6 != 8 )
            return -1073741820;
          if ( !TraceInformation )
            return -1073741584;
          v16 = &EtwpDiskIoNotifyRoutines;
          goto LABEL_15;
        }
        v14 = v13 - 1;
        if ( !v14 )
        {
          if ( RequiredLength )
            *RequiredLength = 120;
          if ( (_DWORD)v6 != 120 )
            return -1073741820;
          if ( !TraceInformation )
            return -1073741584;
          *(_OWORD *)TraceInformation = *(_OWORD *)EtwpAllNotifyRoutines;
          *((_OWORD *)TraceInformation + 1) = *(_OWORD *)off_14078FA50;
          *((_OWORD *)TraceInformation + 2) = *(_OWORD *)&off_14078FA60;
          *((_OWORD *)TraceInformation + 3) = *(_OWORD *)&off_14078FA70;
          *((_OWORD *)TraceInformation + 4) = *(_OWORD *)off_14078FA80;
          *((_OWORD *)TraceInformation + 5) = *(_OWORD *)&off_14078FA90;
          *((_OWORD *)TraceInformation + 6) = *(_OWORD *)off_14078FAA0;
          *((_QWORD *)TraceInformation + 14) = EtwpTraceRedirectedIo;
          return 0;
        }
        v15 = v14 - 1;
        if ( !v15 )
        {
          if ( RequiredLength )
            *RequiredLength = 8;
          if ( (_DWORD)v6 != 8 )
            return -1073741820;
          if ( !TraceInformation )
            return -1073741584;
          v16 = (__int64 *)&EtwpFltIoNotifyRoutines;
          goto LABEL_15;
        }
        if ( v15 == 2 )
        {
          if ( RequiredLength )
            *RequiredLength = 8;
          if ( (_DWORD)v6 != 8 )
            return -1073741820;
          if ( !TraceInformation )
            return -1073741584;
          v16 = (__int64 *)&EtwpWdfNotifyRoutines;
LABEL_15:
          *(_QWORD *)TraceInformation = v16;
          return 0;
        }
        return -1073741821;
      }
      v38 = 0LL;
      v54 = 0LL;
      if ( (_DWORD)v6 != 8 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      v39 = *(_DWORD *)Buffer;
      v51 = *(_DWORD *)Buffer;
      v40 = PsGetCurrentServerSiloGlobals();
      v41 = EtwpAcquireLoggerContextByLoggerId(v40[108], v39, 0);
      if ( !v41 )
        return -1073741275;
      for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
      {
        v38 += *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v41 + 2256) + 4104LL) + ((unsigned __int64)i << 6) + 8)
                         + 8LL * v51);
        v54 = v38;
      }
      EtwpReleaseLoggerContext((unsigned int *)v41, 0);
      if ( TraceInformation )
        *(_QWORD *)TraceInformation = v38;
      goto LABEL_88;
    }
    if ( (_DWORD)v6 != 4 )
      return -1073741820;
    if ( !Buffer )
      return -1073741776;
    v46 = *(_DWORD *)Buffer;
    v47 = PsGetCurrentServerSiloGlobals();
    v48 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(v47[108], v46, 0);
    if ( !v48 )
      return -1073741275;
    v49 = v48[64];
    EtwpReleaseLoggerContext(v48, 0);
    if ( TraceInformation )
      *(_DWORD *)TraceInformation = v49;
    goto LABEL_154;
  }
  if ( TraceInformationClass != TraceHandleByNameClass )
  {
    if ( TraceInformationClass == TraceIdClass )
    {
      if ( (_DWORD)v6 != 4 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      v33 = *((_QWORD *)Buffer + 1);
      v53 = v33;
      if ( !v33 || v33 == 0xFFFFFFFF )
        return -1073741816;
      LODWORD(v33) = (unsigned __int16)v33;
      if ( (unsigned int)(unsigned __int16)v33 >= *(_DWORD *)(v9 + 8) )
        return -1073741816;
      goto LABEL_74;
    }
    v17 = TraceInformationClass - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( !v21 )
              return -1073741821;
            if ( v21 == 1 )
            {
              if ( (unsigned int)v6 < 8 || !TraceInformation )
                return -1073741820;
              v22 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
              v23 = 0;
              while ( v21 < *(_DWORD *)(v22 + 8) )
              {
                v24 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(v22, v21, 0);
                if ( v24 )
                {
                  if ( 8 * (unsigned __int64)(v23 + 1) <= v6 )
                    *((_QWORD *)TraceInformation + v23) = v21;
                  EtwpReleaseLoggerContext(v24, 0);
                  ++v23;
                }
                ++v21;
              }
              v25 = 8LL * v23;
              v26 = 0;
              if ( v25 > v6 )
                v26 = 261;
              v50 = v26;
              if ( RequiredLength )
                *RequiredLength = v25;
              return v50;
            }
            return -1073741821;
          }
          if ( (_DWORD)v6 != 8 )
            return -1073741820;
          v28 = PsGetCurrentServerSiloGlobals();
          v29 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(v28[108], 1u, 0);
          if ( !v29 )
            return -1073741275;
          v30 = *v29;
          v53 = v30;
          EtwpReleaseLoggerContext(v29, 0);
          if ( TraceInformation )
            *(_QWORD *)TraceInformation = v30;
LABEL_88:
          if ( RequiredLength )
            *RequiredLength = 8;
          return v50;
        }
        if ( (unsigned int)v6 < 4 )
          return -1073741820;
        if ( !Buffer )
          return -1073741776;
        v31 = *((_QWORD *)Buffer + 1);
        v53 = v31;
        if ( !v31 || v31 == 0xFFFFFFFFLL )
          return -1073741816;
        if ( TraceInformation )
          *(_DWORD *)TraceInformation = BYTE2(v31);
LABEL_154:
        if ( RequiredLength )
          *RequiredLength = 4;
        return v50;
      }
      if ( (unsigned int)v6 < 4 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      v32 = *((_QWORD *)Buffer + 1);
      v53 = v32;
      if ( !v32 || v32 == 0xFFFFFFFF )
        return -1073741816;
      v33 = HIDWORD(v32);
LABEL_74:
      if ( TraceInformation )
        *(_DWORD *)TraceInformation = v33;
      goto LABEL_154;
    }
    if ( (_DWORD)v6 != 8 )
      return -1073741820;
    if ( !Buffer )
      return -1073741776;
    v34 = *(_DWORD *)Buffer;
    if ( *(_DWORD *)Buffer >= *(_DWORD *)(v9 + 8) )
      return -1073741816;
    v53 = 0LL;
    v35 = v34;
    if ( !v34 )
      v35 = -1;
    LOWORD(v53) = v35;
LABEL_86:
    if ( TraceInformation )
      *(_QWORD *)TraceInformation = v53;
    goto LABEL_88;
  }
  if ( KeGetCurrentThread()->PreviousMode && *(_WORD *)Buffer )
  {
    v36 = *((_QWORD *)Buffer + 1);
    if ( (v36 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v37 = v36 + *(unsigned __int16 *)Buffer;
    if ( v37 > 0x7FFFFFFF0000LL || v37 < v36 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( (_DWORD)v6 != 8 )
    return -1073741820;
  v53 = 0LL;
  result = EtwQueryTraceHandleByLoggerName((const UNICODE_STRING *)Buffer, &v53);
  v50 = result;
  if ( result >= 0 )
    goto LABEL_86;
  return result;
}
