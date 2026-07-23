/*
 * XREFs of NtTraceEvent @ 0x140091AC0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     EtwpTraceMessageVa @ 0x140092350 (EtwpTraceMessageVa.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpCloseLogger @ 0x14012B268 (EtwpCloseLogger.c)
 *     EtwTraceEvent @ 0x14015331C (EtwTraceEvent.c)
 *     EtwpOpenLogger @ 0x14015377C (EtwpOpenLogger.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     EtwTraceRaw @ 0x14027A94C (EtwTraceRaw.c)
 *     EtwpLogSystemEventUnsafe @ 0x14027C4F4 (EtwpLogSystemEventUnsafe.c)
 *     EtwpUpdateEnableMask @ 0x14048E324 (EtwpUpdateEnableMask.c)
 *     EtwpAccessCheck @ 0x140490118 (EtwpAccessCheck.c)
 *     EtwpUnreferenceGuidEntry @ 0x140491D2C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140491E20 (EtwpFindGuidEntryByGuid.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     EtwpWriteUserEvent @ 0x1404CC5B0 (EtwpWriteUserEvent.c)
 *     EtwpSetMark @ 0x1407474E0 (EtwpSetMark.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtTraceEvent(
        ULONG TraceHandle,
        ULONG Flags,
        ULONG TraceHeaderLength,
        PEVENT_TRACE_HEADER TraceHeader)
{
  __int64 v5; // rdi
  unsigned int v7; // r15d
  ULONG v8; // eax
  __int64 GuidPtr_high; // rcx
  int v10; // r15d
  ULONG64 ProcessorTime; // r13
  PEVENT_TRACE_HEADER v13; // r12
  _WORD *v14; // rdi
  ULONG v15; // esi
  __int64 v16; // rax
  PVOID v17; // rcx
  int v18; // edx
  int v19; // edx
  volatile unsigned __int64 CycleTime; // rdi
  __int64 v21; // r10
  __int64 CurrentServerSiloGlobals; // rax
  ULONG_PTR GuidEntryByGuid; // rax
  ULONG_PTR v25; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v27; // r8
  __int64 v28; // r14
  unsigned int v29; // esi
  unsigned __int8 v30; // r15
  __int64 v31; // rax
  int v32; // r9d
  __int64 v33; // r9
  __int64 v34; // r8
  PEVENT_TRACE_HEADER v35; // rdx
  __int64 v36; // rcx
  char *v37; // rax
  unsigned int v38; // ebx
  __int64 v39; // rax
  __int64 v40; // rdx
  char Object; // [rsp+20h] [rbp-188h]
  unsigned __int8 v42; // [rsp+80h] [rbp-128h] BYREF
  unsigned __int8 v43; // [rsp+81h] [rbp-127h] BYREF
  char v44; // [rsp+82h] [rbp-126h]
  PEVENT_TRACE_HEADER v45; // [rsp+88h] [rbp-120h]
  unsigned int Data1; // [rsp+90h] [rbp-118h]
  unsigned __int8 v48; // [rsp+96h] [rbp-112h]
  USHORT Version; // [rsp+98h] [rbp-110h]
  ULONG LowPart; // [rsp+9Ch] [rbp-10Ch]
  unsigned __int64 v51; // [rsp+A0h] [rbp-108h]
  __int64 v52; // [rsp+A8h] [rbp-100h]
  int v53; // [rsp+B0h] [rbp-F8h]
  ULONG v54; // [rsp+B4h] [rbp-F4h]
  PVOID v55; // [rsp+B8h] [rbp-F0h] BYREF
  __int64 v56; // [rsp+C0h] [rbp-E8h] BYREF
  __int64 v57; // [rsp+C8h] [rbp-E0h]
  int v58; // [rsp+D8h] [rbp-D0h]
  ULONG v59; // [rsp+DCh] [rbp-CCh]
  ULONG64 v60; // [rsp+E0h] [rbp-C8h]
  __int64 v61; // [rsp+E8h] [rbp-C0h]
  PEVENT_TRACE_HEADER v62; // [rsp+F0h] [rbp-B8h]
  int v63; // [rsp+F8h] [rbp-B0h]
  ULONGLONG *v64; // [rsp+110h] [rbp-98h]
  ULONG64 v65; // [rsp+118h] [rbp-90h]
  unsigned __int64 v66; // [rsp+120h] [rbp-88h]
  ULONGLONG *v67; // [rsp+128h] [rbp-80h] BYREF
  int v68; // [rsp+130h] [rbp-78h]
  int v69; // [rsp+134h] [rbp-74h]
  __int128 v70; // [rsp+138h] [rbp-70h] BYREF
  _BYTE v71[32]; // [rsp+148h] [rbp-60h] BYREF

  v5 = TraceHeaderLength;
  LOWORD(v7) = TraceHandle;
  v8 = Flags & 0xFF00;
  if ( v8 != 512 )
  {
    if ( v8 == 768 )
    {
      if ( KeGetCurrentThread()->PreviousMode )
      {
        if ( ((unsigned __int8)TraceHeader & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&TraceHeader[2].GuidPtr > 0x7FFFFFFF0000LL || &TraceHeader[2].Guid < (GUID *)TraceHeader )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      ProcessorTime = TraceHeader[1].ProcessorTime;
      v65 = ProcessorTime;
      LODWORD(v45) = *((_DWORD *)&TraceHeader[1].GuidPtr + 3);
      v58 = (int)v45;
      v57 = *((unsigned __int16 *)&TraceHeader[1].GuidPtr + 5);
      LowPart = TraceHeader[2].TimeStamp.LowPart;
      v59 = LowPart;
      v51 = *(_QWORD *)&TraceHeader[1].Size;
      v66 = v51;
      v42 = TraceHeader->Flags;
      v48 = v42;
      v13 = 0LL;
      v62 = 0LL;
      if ( TraceHeader[1].Guid.Data4[0] )
      {
        v13 = TraceHeader + 2;
        v62 = TraceHeader + 2;
      }
      v10 = ObReferenceObjectByHandle(*(HANDLE *)&TraceHandle, 0x800u, EtwpRegistrationObjectType, 1, &v55, 0LL);
      if ( v10 >= 0 )
      {
        v56 = 0LL;
        v14 = v55;
        v52 = *((_QWORD *)v55 + 4);
        v67 = (ULONGLONG *)*((_QWORD *)v55 + 5);
        v15 = Flags >> 31;
        memset(v71, 0, sizeof(v71));
        v16 = *((_QWORD *)v55 + 13);
        v17 = (PVOID)(v16 + 28);
        if ( !v16 )
          v17 = 0LL;
        v55 = v17;
        v18 = *((unsigned __int8 *)v14 + 100);
        if ( (_BYTE)v18 )
        {
          v10 = EtwpWriteUserEvent(
                  v52,
                  v18,
                  (unsigned __int16)v15,
                  v57,
                  LowPart,
                  (__int64)TraceHeader,
                  (__int64)v13,
                  v42,
                  v51,
                  (_DWORD)v45,
                  ProcessorTime,
                  (__int64)v71,
                  0LL,
                  v14[49],
                  (__int64)v17,
                  (__int64)&v56);
          v17 = v55;
        }
        v19 = *((unsigned __int8 *)v14 + 101);
        if ( (_BYTE)v19 )
          v10 = EtwpWriteUserEvent(
                  v52,
                  v19,
                  (unsigned __int16)v15,
                  v57,
                  LowPart,
                  (__int64)TraceHeader,
                  (__int64)v13,
                  v42,
                  v51,
                  (_DWORD)v45,
                  ProcessorTime,
                  (__int64)v71,
                  (__int64)v67,
                  v14[49],
                  (__int64)v17,
                  (__int64)&v56);
        ObfDereferenceObjectWithTag(v14, 0x746C6644u);
      }
      return v10;
    }
    if ( v8 > 0x600 )
    {
      if ( v8 == 1792 )
      {
        if ( *(_QWORD *)&TraceHandle )
        {
          if ( ((unsigned __int8)TraceHeader & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&TraceHeader[2].GuidPtr > 0x7FFFFFFF0000LL
            || &TraceHeader[2].Guid < (GUID *)TraceHeader )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
          }
          if ( (TraceHandle & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)(*(_QWORD *)&TraceHandle + 16LL) > 0x7FFFFFFF0000LL
            || (unsigned __int64)(*(_QWORD *)&TraceHandle + 16LL) < *(_QWORD *)&TraceHandle )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
          }
          v60 = TraceHeader[1].ProcessorTime;
          v53 = *((_DWORD *)&TraceHeader[1].GuidPtr + 3);
          v54 = TraceHeader[2].TimeStamp.LowPart;
          v61 = *(_QWORD *)&TraceHeader[1].Size;
          v44 = TraceHeader->Flags;
          v70 = **(_OWORD **)&TraceHandle;
          CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
          GuidEntryByGuid = EtwpFindGuidEntryByGuid(*(_QWORD *)(CurrentServerSiloGlobals + 864), &v70, 0LL);
          v25 = GuidEntryByGuid;
          if ( GuidEntryByGuid )
          {
            if ( *(_DWORD *)(GuidEntryByGuid + 80) )
            {
              v10 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(GuidEntryByGuid + 56), 0x800u);
              if ( v10 >= 0 )
              {
                v42 = 0;
                CurrentThread = KeGetCurrentThread();
                --CurrentThread->KernelApcDisable;
                ExAcquirePushLockExclusiveEx(v25 + 384, 0LL);
                *(_QWORD *)(v25 + 392) = KeGetCurrentThread();
                LOBYTE(v27) = 1;
                EtwpUpdateEnableMask(v25, 0LL, v27, &v42);
                *(_QWORD *)(v25 + 392) = 0LL;
                ExReleasePushLockEx(v25 + 384, 0LL);
                KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                v10 = EtwpWriteUserEvent(
                        v25,
                        v42,
                        (Flags & 0x80000000) != 0,
                        0,
                        v54,
                        (__int64)TraceHeader,
                        0LL,
                        v44,
                        v61,
                        v53,
                        v60,
                        0LL,
                        0LL,
                        0,
                        0LL,
                        0LL);
              }
              EtwpUnreferenceGuidEntry(v25);
              return v10;
            }
            EtwpUnreferenceGuidEntry(GuidEntryByGuid);
          }
          return -1073741054;
        }
        return -1073741811;
      }
      if ( v8 != 2048 )
      {
        if ( v8 != 2304 )
          return -1073741811;
        if ( Flags != 2304 || !TraceHeaderLength || !TraceHeader )
          return -1073741811;
        return EtwTraceRaw(TraceHandle, TraceHeader, TraceHeaderLength, (unsigned __int8)KeGetCurrentThread()->gap0[10]);
      }
      v33 = (((int)Flags >> 31) & 0xFFF60000) - 1072365568;
      Object = KeGetCurrentThread()->PreviousMode;
      v34 = 72LL;
      v35 = TraceHeader;
    }
    else
    {
      if ( v8 == 1536 )
      {
        v28 = *(_QWORD *)(PsGetCurrentServerSiloGlobals() + 864);
        v29 = (unsigned __int16)v7;
        if ( (unsigned __int16)v7 == 0xFFFF || !(_WORD)v7 )
          v29 = *(unsigned __int8 *)(v28 + 4156);
        if ( v29 >= *(_DWORD *)(v28 + 8) )
          return -1073741816;
        v30 = KeGetCurrentThread()->gap0[10];
        v31 = EtwpOpenLogger(v29, v28, v30, &v43);
        if ( !v31 )
          return -1073741816;
        if ( (*(_DWORD *)(v31 + 12) & 0x2000000) != 0 )
        {
          v40 = 32LL * *(unsigned __int8 *)(v31 + 834) + v28 + 4208;
          if ( v40 && (*(_DWORD *)(v40 + 4) & 0x28) != 0 )
            LOBYTE(v32) = 1;
          else
            v32 = 0;
          v10 = EtwpSetMark(v31, (int)TraceHeader, v5, v32, v30);
        }
        else
        {
          v10 = -1073741811;
        }
        EtwpCloseLogger(v29, v28, v43);
        return v10;
      }
      if ( v8 != 256 )
      {
        if ( v8 != 1024 )
        {
          if ( v8 == 1280 )
          {
            CycleTime = KeGetCurrentThread()[1].CycleTime;
            v21 = *(_QWORD *)(PsGetCurrentServerSiloGlobals() + 864);
            if ( *(_DWORD *)(v21 + 4040) != (_DWORD)CycleTime )
              return -1073741790;
            if ( ((unsigned __int8)TraceHeader & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)&TraceHeader[2].GuidPtr > 0x7FFFFFFF0000LL
              || &TraceHeader[2].Guid < (GUID *)TraceHeader )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
            }
            return EtwpWriteUserEvent(
                     (int)v21 + 16,
                     *(unsigned __int8 *)(v21 + 4032),
                     0,
                     0,
                     TraceHeader[2].TimeStamp.LowPart,
                     (__int64)TraceHeader,
                     0LL,
                     TraceHeader->Flags,
                     *(_QWORD *)&TraceHeader[1].Size,
                     *((_DWORD *)&TraceHeader[1].GuidPtr + 3),
                     TraceHeader[1].ProcessorTime,
                     0LL,
                     0LL,
                     0,
                     0LL,
                     0LL);
          }
          return -1073741811;
        }
        v36 = *(_QWORD *)(PsGetCurrentServerSiloGlobals() + 864);
        v7 = (unsigned __int16)v7;
        if ( (unsigned __int16)v7 == 0xFFFF )
          v7 = 0;
        if ( v7 < *(_DWORD *)(v36 + 8) )
        {
          if ( (unsigned int)v5 > 0xFFDF )
            return -1073741675;
          if ( KeGetCurrentThread()->PreviousMode == 1 )
          {
            if ( ((unsigned __int8)TraceHeader & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v37 = (char *)&TraceHeader->Guid.Data4[v5];
            if ( (unsigned __int64)v37 > 0x7FFFFFFF0000LL || v37 < (char *)TraceHeader )
              MEMORY[0x7FFFFFFF0000] = 0;
            v64 = &TraceHeader->GuidPtr + 1;
            Version = TraceHeader->Class.Version;
            v67 = &TraceHeader->GuidPtr + 1;
            v68 = v5;
            v69 = 0;
            v38 = (unsigned int)KeGetCurrentThread();
            v39 = PsGetCurrentServerSiloGlobals();
            EtwpLogSystemEventUnsafe(
              *(_QWORD *)(v39 + 864),
              (unsigned int)&v67,
              v38,
              v7,
              1,
              Version,
              Flags & 0xC00F00FF | 0x3100);
            return 0;
          }
          return -1073741637;
        }
        return -1073741811;
      }
      if ( (Flags & 0x80000000) != 0 )
        v33 = 3221880832LL;
      else
        v33 = 3222536192LL;
      Object = KeGetCurrentThread()->PreviousMode;
      v34 = 48LL;
      v35 = TraceHeader;
    }
    return EtwTraceEvent(TraceHandle, v35, v34, v33, Object);
  }
  v52 = *(_QWORD *)&TraceHandle;
  v51 = 0LL;
  if ( TraceHeaderLength != 40 )
    return -1073741811;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741637;
  v45 = TraceHeader;
  if ( ((unsigned __int8)TraceHeader & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)&v45->ProcessorTime > 0x7FFFFFFF0000LL || &v45->KernelTime < (ULONG *)v45 )
    MEMORY[0x7FFFFFFF0000] = 0;
  Data1 = v45->Guid.Data1;
  if ( (Flags & 0x80000000) != 0 )
  {
    LODWORD(v51) = *((_DWORD *)&v45->GuidPtr + 2);
    Data1 |= 0x80u;
  }
  else
  {
    v51 = *(&v45->GuidPtr + 1);
  }
  GuidPtr_high = HIDWORD(v45->GuidPtr);
  LowPart = GuidPtr_high;
  if ( (unsigned int)GuidPtr_high > 0x10000 )
  {
    v10 = -1073741811;
    v63 = -1073741811;
    return v10;
  }
  if ( (_DWORD)GuidPtr_high && (v51 + GuidPtr_high > 0x7FFFFFFF0000LL || v51 + GuidPtr_high < v51) )
    MEMORY[0x7FFFFFFF0000] = 0;
  HIDWORD(v52) = GuidPtr_high;
  return EtwpTraceMessageVa(v52, Data1 | 0x40, (int)v45 + 8, LOWORD(v45->Version), v51, 1);
}
