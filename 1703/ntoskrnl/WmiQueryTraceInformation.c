/*
 * XREFs of WmiQueryTraceInformation @ 0x140467C00
 * Callers:
 *     WdipSemGetLoggerDroppedEventCount @ 0x140467B9C (WdipSemGetLoggerDroppedEventCount.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140749D60 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x140467800 (EtwQueryTraceHandleByLoggerName.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404F2C44 (EtwpAcquireLoggerContextByLoggerId.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall WmiQueryTraceInformation(
        TRACE_INFORMATION_CLASS TraceInformationClass,
        PVOID TraceInformation,
        ULONG TraceInformationLength,
        PULONG RequiredLength,
        PVOID Buffer)
{
  unsigned __int64 v6; // rbx
  __int32 v8; // ecx
  __int32 v9; // ecx
  __int32 v10; // ecx
  __int32 v11; // ecx
  int v12; // ecx
  int v13; // ecx
  unsigned int v14; // ebx
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v16; // rax
  int v17; // ebx
  __int64 *v18; // rax
  __int32 v19; // ecx
  __int32 v20; // ecx
  __int32 v21; // ecx
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int32 v25; // ecx
  int v26; // ecx
  __int64 v27; // r13
  unsigned int v28; // r15d
  unsigned int j; // r14d
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  int v32; // ecx
  NTSTATUS result; // eax
  _QWORD *v34; // rax
  unsigned int *v35; // rax
  __int64 v36; // rbx
  unsigned int v37; // eax
  __int16 v38; // cx
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  __int64 v41; // r15
  unsigned int v42; // ebx
  _QWORD *v43; // rax
  __int64 v44; // r9
  unsigned int i; // r8d
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v47; // rax
  _DWORD *v48; // rax
  NTSTATUS v49; // [rsp+24h] [rbp-44h]
  unsigned int v50; // [rsp+28h] [rbp-40h]
  unsigned int v51; // [rsp+28h] [rbp-40h]
  __int64 v52; // [rsp+38h] [rbp-30h] BYREF
  __int64 v53; // [rsp+40h] [rbp-28h]

  v6 = TraceInformationLength;
  v49 = 0;
  if ( RequiredLength )
    *RequiredLength = 0;
  if ( TraceInformationClass > TraceHandleByNameClass )
  {
    v8 = TraceInformationClass - 8;
    if ( !v8 )
    {
      if ( TraceInformationLength != 4 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      v14 = *(_DWORD *)Buffer;
      CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
      v16 = EtwpAcquireLoggerContextByLoggerId(CurrentServerSiloGlobals[108], v14, 0LL);
      if ( !v16 )
        return -1073741275;
      v17 = *(_DWORD *)(v16 + 240);
      EtwpReleaseLoggerContext(v16, 0LL);
      if ( TraceInformation )
        *(_DWORD *)TraceInformation = v17;
      if ( RequiredLength )
        *RequiredLength = 4;
      return v49;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      if ( !Buffer )
        return -1073741581;
      if ( !RequiredLength )
        return -1073741582;
      *RequiredLength = 32;
      if ( TraceInformationLength < 0x20 )
        return -1073741820;
      if ( !TraceInformation )
        return -1073741584;
      v52 = *(_QWORD *)Buffer;
      v51 = (unsigned __int16)v52;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v47 = PsGetCurrentServerSiloGlobals();
      v48 = (_DWORD *)EtwpAcquireLoggerContextByLoggerId(v47[108], v51, 0LL);
      if ( v48 )
      {
        *(_DWORD *)TraceInformation = 1;
        *((_DWORD *)TraceInformation + 1) = v48[1];
        *((_DWORD *)TraceInformation + 2) = v48[56];
        *((_DWORD *)TraceInformation + 3) = v48[59];
        *((_DWORD *)TraceInformation + 4) = v48[3];
        *((_DWORD *)TraceInformation + 5) = v48[52];
        *((_DWORD *)TraceInformation + 7) = v48[50];
        *((_DWORD *)TraceInformation + 6) = v48[53];
        EtwpReleaseLoggerContext(v48, 0LL);
      }
      else
      {
        v49 = -1073741162;
      }
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return v49;
    }
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( !v11 )
      {
        if ( RequiredLength )
          *RequiredLength = 8;
        if ( TraceInformationLength != 8 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        v18 = &EtwpDiskIoNotifyRoutines;
        goto LABEL_23;
      }
      v12 = v11 - 1;
      if ( !v12 )
      {
        if ( RequiredLength )
          *RequiredLength = 120;
        if ( TraceInformationLength != 120 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        *(_OWORD *)TraceInformation = *(_OWORD *)EtwpAllNotifyRoutines;
        *((_OWORD *)TraceInformation + 1) = *(_OWORD *)off_14074D200;
        *((_OWORD *)TraceInformation + 2) = *(_OWORD *)&off_14074D210;
        *((_OWORD *)TraceInformation + 3) = *(_OWORD *)&off_14074D220;
        *((_OWORD *)TraceInformation + 4) = *(_OWORD *)off_14074D230;
        *((_OWORD *)TraceInformation + 5) = *(_OWORD *)&off_14074D240;
        *((_OWORD *)TraceInformation + 6) = *(_OWORD *)off_14074D250;
        *((_QWORD *)TraceInformation + 14) = EtwpTraceRedirectedIo;
        return 0;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
        if ( RequiredLength )
          *RequiredLength = 8;
        if ( TraceInformationLength != 8 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        v18 = (__int64 *)&EtwpFltIoNotifyRoutines;
        goto LABEL_23;
      }
      if ( v13 == 2 )
      {
        if ( RequiredLength )
          *RequiredLength = 8;
        if ( TraceInformationLength != 8 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        v18 = (__int64 *)&EtwpWdfNotifyRoutines;
LABEL_23:
        *(_QWORD *)TraceInformation = v18;
        return 0;
      }
      return -1073741821;
    }
    v41 = 0LL;
    v53 = 0LL;
    if ( TraceInformationLength != 8 )
      return -1073741820;
    if ( !Buffer )
      return -1073741776;
    v42 = *(_DWORD *)Buffer;
    v50 = *(_DWORD *)Buffer;
    v43 = PsGetCurrentServerSiloGlobals();
    v44 = EtwpAcquireLoggerContextByLoggerId(v43[108], v42, 0LL);
    if ( !v44 )
      return -1073741275;
    for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
    {
      v41 += *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v44 + 944) + 5104LL) + 8 * (v50 + ((unsigned __int64)i << 7)) + 512);
      v53 = v41;
    }
    EtwpReleaseLoggerContext(v44, 0LL);
    if ( TraceInformation )
      *(_QWORD *)TraceInformation = v41;
    goto LABEL_80;
  }
  if ( TraceInformationClass != TraceHandleByNameClass )
  {
    if ( TraceInformationClass )
    {
      v19 = TraceInformationClass - 1;
      if ( !v19 )
      {
        if ( TraceInformationLength != 8 )
          return -1073741820;
        if ( !Buffer )
          return -1073741776;
        v37 = *(_DWORD *)Buffer;
        if ( *(_DWORD *)Buffer >= 0x40u )
          return -1073741816;
        v52 = 0LL;
        v38 = v37;
        if ( !v37 )
          v38 = -1;
        LOWORD(v52) = v38;
        if ( TraceInformation )
          *(_QWORD *)TraceInformation = v52;
        if ( RequiredLength )
          *RequiredLength = 8;
        return v49;
      }
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          v25 = v21 - 1;
          if ( v25 )
          {
            v26 = v25 - 1;
            if ( !v26 )
              return -1073741821;
            if ( v26 == 1 )
            {
              if ( TraceInformationLength < 8 || !TraceInformation )
                return -1073741820;
              v27 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
              v28 = 0;
              for ( j = 1; j < 0x40; ++j )
              {
                v30 = EtwpAcquireLoggerContextByLoggerId(v27, j, 0LL);
                if ( v30 )
                {
                  if ( 8 * (unsigned __int64)(v28 + 1) <= v6 )
                    *((_QWORD *)TraceInformation + v28) = j;
                  EtwpReleaseLoggerContext(v30, 0LL);
                  ++v28;
                }
              }
              v31 = 8LL * v28;
              v32 = 0;
              if ( v31 > v6 )
                v32 = 261;
              v49 = v32;
              if ( RequiredLength )
                *RequiredLength = v31;
              return v49;
            }
            return -1073741821;
          }
          if ( TraceInformationLength != 8 )
            return -1073741820;
          v34 = PsGetCurrentServerSiloGlobals();
          v35 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(v34[108], 1LL, 0LL);
          if ( !v35 )
            return -1073741275;
          v36 = *v35;
          v52 = v36;
          EtwpReleaseLoggerContext(v35, 0LL);
          if ( TraceInformation )
            *(_QWORD *)TraceInformation = v36;
LABEL_80:
          if ( RequiredLength )
            *RequiredLength = 8;
          return v49;
        }
        if ( TraceInformationLength < 4 )
          return -1073741820;
        if ( !Buffer )
          return -1073741776;
        v22 = *((_QWORD *)Buffer + 1);
        v52 = v22;
        if ( !v22 || v22 == 0xFFFFFFFFLL )
          return -1073741816;
        if ( TraceInformation )
          *(_DWORD *)TraceInformation = BYTE2(v22);
LABEL_48:
        if ( RequiredLength )
          *RequiredLength = 4;
        return v49;
      }
      if ( TraceInformationLength < 4 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      v23 = *((_QWORD *)Buffer + 1);
      v52 = v23;
      if ( !v23 || v23 == 0xFFFFFFFF )
        return -1073741816;
      v24 = HIDWORD(v23);
    }
    else
    {
      if ( TraceInformationLength != 4 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      v24 = *((_QWORD *)Buffer + 1);
      v52 = v24;
      if ( !v24 || v24 == 0xFFFFFFFF )
        return -1073741816;
      LODWORD(v24) = (unsigned __int16)v24;
      if ( (unsigned __int16)v24 >= 0x40u )
        return -1073741816;
    }
    if ( TraceInformation )
      *(_DWORD *)TraceInformation = v24;
    goto LABEL_48;
  }
  if ( KeGetCurrentThread()->PreviousMode && *(_WORD *)Buffer )
  {
    v39 = *((_QWORD *)Buffer + 1);
    if ( (v39 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v40 = v39 + *(unsigned __int16 *)Buffer;
    if ( v40 > 0x7FFFFFFF0000LL || v40 < v39 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( TraceInformationLength != 8 )
    return -1073741820;
  v52 = 0LL;
  result = EtwQueryTraceHandleByLoggerName((__int64)Buffer, &v52);
  v49 = result;
  if ( result >= 0 )
  {
    if ( TraceInformation )
      *(_QWORD *)TraceInformation = v52;
    goto LABEL_80;
  }
  return result;
}
