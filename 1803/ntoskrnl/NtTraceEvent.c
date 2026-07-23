/*
 * XREFs of NtTraceEvent @ 0x1400611F0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpTraceMessageVa @ 0x140061BC0 (EtwpTraceMessageVa.c)
 *     EtwpOpenLogger @ 0x140062124 (EtwpOpenLogger.c)
 *     EtwpCloseLogger @ 0x1400621D0 (EtwpCloseLogger.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     EtwpLogSystemEventUnsafe @ 0x140172664 (EtwpLogSystemEventUnsafe.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     EtwTraceEvent @ 0x1402AD70C (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1402ADB24 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x1404D3060 (EtwpWriteUserEvent.c)
 *     EtwpUpdateEnableMask @ 0x14058F384 (EtwpUpdateEnableMask.c)
 *     EtwpAccessCheck @ 0x14058F44C (EtwpAccessCheck.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405906D4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405907D0 (EtwpFindGuidEntryByGuid.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     EtwpSetMark @ 0x1407A8C0C (EtwpSetMark.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtTraceEvent(
        ULONG TraceHandle,
        ULONG Flags,
        ULONG TraceHeaderLength,
        PEVENT_TRACE_HEADER TraceHeader)
{
  __int64 v5; // r15
  unsigned int v7; // edi
  ULONG v8; // eax
  ULONG64 ProcessorTime; // r13
  PEVENT_TRACE_HEADER v10; // r12
  int v11; // r15d
  _WORD *v12; // rdi
  ULONG v13; // esi
  __int64 v14; // rax
  PVOID v15; // rcx
  int v16; // edx
  int v17; // edx
  __int64 GuidPtr_high; // rcx
  volatile unsigned __int64 CycleTime; // rdi
  __int64 v21; // r10
  __int64 v22; // rsi
  unsigned __int8 v23; // r14
  __int64 v24; // rax
  int v25; // r9d
  int v26; // ecx
  __int64 v27; // rax
  __int64 GuidEntryByGuid; // rax
  _QWORD *v29; // r13
  struct _KTHREAD *v30; // rax
  __int64 v31; // r8
  __int64 v32; // rcx
  unsigned int v33; // eax
  unsigned int v34; // edi
  char *v35; // rax
  unsigned int CurrentThread; // ebx
  __int64 CurrentServerSiloGlobals; // rax
  __int64 v38; // rax
  unsigned __int8 v39; // [rsp+80h] [rbp-128h] BYREF
  unsigned __int8 v40; // [rsp+81h] [rbp-127h] BYREF
  char v41; // [rsp+82h] [rbp-126h]
  PEVENT_TRACE_HEADER v42; // [rsp+88h] [rbp-120h]
  unsigned int Data1; // [rsp+90h] [rbp-118h]
  unsigned __int8 v45; // [rsp+96h] [rbp-112h]
  USHORT Version; // [rsp+98h] [rbp-110h]
  ULONG LowPart; // [rsp+9Ch] [rbp-10Ch]
  unsigned __int64 v48; // [rsp+A0h] [rbp-108h]
  __int64 v49; // [rsp+A8h] [rbp-100h]
  int v50; // [rsp+B0h] [rbp-F8h]
  ULONG v51; // [rsp+B4h] [rbp-F4h]
  PVOID Object; // [rsp+B8h] [rbp-F0h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-E8h] BYREF
  __int64 v54; // [rsp+C8h] [rbp-E0h]
  int v55; // [rsp+D8h] [rbp-D0h]
  int v56; // [rsp+DCh] [rbp-CCh]
  ULONG64 v57; // [rsp+E0h] [rbp-C8h]
  __int64 v58; // [rsp+E8h] [rbp-C0h]
  PEVENT_TRACE_HEADER v59; // [rsp+F0h] [rbp-B8h]
  ULONG v60; // [rsp+F8h] [rbp-B0h]
  ULONGLONG *v61; // [rsp+110h] [rbp-98h]
  ULONG64 v62; // [rsp+118h] [rbp-90h]
  __int64 v63; // [rsp+120h] [rbp-88h]
  ULONGLONG *v64; // [rsp+128h] [rbp-80h] BYREF
  int v65; // [rsp+130h] [rbp-78h]
  int v66; // [rsp+134h] [rbp-74h]
  __int128 v67; // [rsp+138h] [rbp-70h] BYREF
  _BYTE v68[32]; // [rsp+148h] [rbp-60h] BYREF

  v5 = TraceHeaderLength;
  LOWORD(v7) = TraceHandle;
  v8 = Flags & 0xFF00;
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
    v62 = ProcessorTime;
    LODWORD(v42) = *((_DWORD *)&TraceHeader[1].GuidPtr + 3);
    v56 = (int)v42;
    v54 = *((unsigned __int16 *)&TraceHeader[1].GuidPtr + 5);
    LowPart = TraceHeader[2].TimeStamp.LowPart;
    v60 = LowPart;
    v49 = *(_QWORD *)&TraceHeader[1].Size;
    v63 = v49;
    v39 = TraceHeader->Flags;
    v45 = v39;
    v10 = 0LL;
    v59 = 0LL;
    if ( TraceHeader[1].Guid.Data4[0] )
    {
      v10 = TraceHeader + 2;
      v59 = TraceHeader + 2;
    }
    v11 = ObReferenceObjectByHandle(*(HANDLE *)&TraceHandle, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
    if ( v11 >= 0 )
    {
      v53 = 0LL;
      v12 = Object;
      v48 = *((_QWORD *)Object + 4);
      v64 = (ULONGLONG *)*((_QWORD *)Object + 5);
      v13 = Flags >> 31;
      memset(v68, 0, sizeof(v68));
      v14 = *((_QWORD *)Object + 13);
      v15 = (PVOID)(v14 + 28);
      if ( !v14 )
        v15 = 0LL;
      Object = v15;
      v16 = *((unsigned __int8 *)v12 + 100);
      if ( (_BYTE)v16 )
      {
        v11 = EtwpWriteUserEvent(
                v48,
                v16,
                (unsigned __int16)v13,
                v54,
                LowPart,
                (__int64)TraceHeader,
                (__int64)v10,
                v39,
                v49,
                (_DWORD)v42,
                ProcessorTime,
                (__int64)v68,
                0LL,
                v12[49],
                (__int64)v15,
                (__int64)&v53);
        v15 = Object;
      }
      v17 = *((unsigned __int8 *)v12 + 101);
      if ( (_BYTE)v17 )
        v11 = EtwpWriteUserEvent(
                v48,
                v17,
                (unsigned __int16)v13,
                v54,
                LowPart,
                (__int64)TraceHeader,
                (__int64)v10,
                v39,
                v49,
                (_DWORD)v42,
                ProcessorTime,
                (__int64)v68,
                (__int64)v64,
                v12[49],
                (__int64)v15,
                (__int64)&v53);
      ObfDereferenceObjectWithTag(v12, 0x746C6644u);
    }
    return v11;
  }
  if ( v8 == 1536 )
  {
    v22 = *(_QWORD *)(PsGetCurrentServerSiloGlobals() + 864);
    v7 = (unsigned __int16)v7;
    if ( (unsigned __int16)v7 == 0xFFFF || !(_WORD)v7 )
      v7 = *(unsigned __int8 *)(v22 + 4172);
    if ( v7 >= *(_DWORD *)(v22 + 16) )
      return -1073741816;
    v23 = KeGetCurrentThread()->gap0[10];
    v24 = EtwpOpenLogger(v7, v22, v23, &v40);
    v26 = v24;
    if ( !v24 )
      return -1073741816;
    if ( (*(_DWORD *)(v24 + 12) & 0x2000000) != 0 )
    {
      v38 = v22 + 32 * (*(unsigned __int8 *)(v24 + 834) + 132LL);
      if ( v38 && (*(_DWORD *)(v38 + 4) & 0x28) != 0 )
        LOBYTE(v25) = 1;
      else
        v25 = 0;
      v11 = EtwpSetMark(v26, (int)TraceHeader, v5, v25, v23);
    }
    else
    {
      v11 = -1073741811;
    }
    EtwpCloseLogger(v7, v22, v40);
    return v11;
  }
  if ( v8 <= 0x600 )
  {
    switch ( v8 )
    {
      case 0x200u:
        v49 = *(_QWORD *)&TraceHandle;
        v48 = 0LL;
        if ( TraceHeaderLength == 40 )
        {
          if ( KeGetCurrentThread()->PreviousMode == 1 )
          {
            v42 = TraceHeader;
            if ( ((unsigned __int8)TraceHeader & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)&v42->ProcessorTime > 0x7FFFFFFF0000LL || &v42->KernelTime < (ULONG *)v42 )
              MEMORY[0x7FFFFFFF0000] = 0;
            Data1 = v42->Guid.Data1;
            if ( (Flags & 0x80000000) != 0 )
            {
              LODWORD(v48) = *((_DWORD *)&v42->GuidPtr + 2);
              Data1 |= 0x80u;
            }
            else
            {
              v48 = *(&v42->GuidPtr + 1);
            }
            GuidPtr_high = HIDWORD(v42->GuidPtr);
            LowPart = GuidPtr_high;
            if ( (unsigned int)GuidPtr_high <= 0x10000 )
            {
              if ( (_DWORD)GuidPtr_high && (v48 + GuidPtr_high > 0x7FFFFFFF0000LL || v48 + GuidPtr_high < v48) )
                MEMORY[0x7FFFFFFF0000] = 0;
              HIDWORD(v49) = GuidPtr_high;
              return EtwpTraceMessageVa(v49, Data1 | 0x40, (int)v42 + 8, LOWORD(v42->Version), v48, 1);
            }
            v11 = -1073741811;
            v55 = -1073741811;
            return v11;
          }
          return -1073741637;
        }
        return -1073741811;
      case 0x100u:
        return EtwTraceEvent(
                 TraceHandle,
                 TraceHeader,
                 48LL,
                 (((int)Flags >> 31) & 0xFFF60000) - 1072431104,
                 KeGetCurrentThread()->PreviousMode);
      case 0x400u:
        v32 = *(_QWORD *)(PsGetCurrentServerSiloGlobals() + 864);
        v33 = (unsigned __int16)v7;
        v34 = 0;
        if ( v33 != 0xFFFF )
          v34 = v33;
        if ( v34 < *(_DWORD *)(v32 + 16) )
        {
          if ( (unsigned int)v5 > 0xFFDF )
            return -1073741675;
          if ( KeGetCurrentThread()->PreviousMode == 1 )
          {
            if ( ((unsigned __int8)TraceHeader & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v35 = (char *)&TraceHeader->Guid.Data4[v5];
            if ( (unsigned __int64)v35 > 0x7FFFFFFF0000LL || v35 < (char *)TraceHeader )
              MEMORY[0x7FFFFFFF0000] = 0;
            v61 = &TraceHeader->GuidPtr + 1;
            Version = TraceHeader->Class.Version;
            v64 = &TraceHeader->GuidPtr + 1;
            v65 = v5;
            v66 = 0;
            CurrentThread = (unsigned int)KeGetCurrentThread();
            CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
            EtwpLogSystemEventUnsafe(
              *(_QWORD *)(CurrentServerSiloGlobals + 864),
              (unsigned int)&v64,
              CurrentThread,
              v34,
              1,
              Version,
              Flags & 0xC00F00FF | 0x3100);
            return 0;
          }
          return -1073741637;
        }
        return -1073741811;
      case 0x500u:
        CycleTime = KeGetCurrentThread()[1].CycleTime;
        v21 = *(_QWORD *)(PsGetCurrentServerSiloGlobals() + 864);
        if ( *(_DWORD *)(v21 + 4048) == (_DWORD)CycleTime )
        {
          if ( ((unsigned __int8)TraceHeader & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&TraceHeader[2].GuidPtr > 0x7FFFFFFF0000LL
            || &TraceHeader[2].Guid < (GUID *)TraceHeader )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
          }
          return EtwpWriteUserEvent(
                   (int)v21 + 24,
                   *(unsigned __int8 *)(v21 + 4040),
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
        return -1073741790;
    }
    return -1073741811;
  }
  if ( v8 != 1792 )
  {
    if ( v8 == 2048 )
      return EtwTraceEvent(
               TraceHandle,
               TraceHeader,
               72LL,
               (((int)Flags >> 31) & 0xFFF60000) - 1072365568,
               KeGetCurrentThread()->PreviousMode);
    if ( v8 == 2304 )
    {
      if ( Flags == 2304 && TraceHeaderLength && TraceHeader )
        return EtwTraceRaw(TraceHandle, TraceHeader, TraceHeaderLength, (unsigned __int8)KeGetCurrentThread()->gap0[10]);
      return -1073741811;
    }
    return -1073741811;
  }
  if ( !*(_QWORD *)&TraceHandle )
    return -1073741811;
  if ( ((unsigned __int8)TraceHeader & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)&TraceHeader[2].GuidPtr > 0x7FFFFFFF0000LL || &TraceHeader[2].Guid < (GUID *)TraceHeader )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( (TraceHandle & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)(*(_QWORD *)&TraceHandle + 16LL) > 0x7FFFFFFF0000LL
    || (unsigned __int64)(*(_QWORD *)&TraceHandle + 16LL) < *(_QWORD *)&TraceHandle )
  {
    MEMORY[0x7FFFFFFF0000] = 0;
  }
  v57 = TraceHeader[1].ProcessorTime;
  v50 = *((_DWORD *)&TraceHeader[1].GuidPtr + 3);
  v51 = TraceHeader[2].TimeStamp.LowPart;
  v58 = *(_QWORD *)&TraceHeader[1].Size;
  v41 = TraceHeader->Flags;
  v67 = **(_OWORD **)&TraceHandle;
  v27 = PsGetCurrentServerSiloGlobals();
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(*(_QWORD *)(v27 + 864), &v67, 0LL);
  v29 = (_QWORD *)GuidEntryByGuid;
  if ( GuidEntryByGuid )
  {
    if ( *(_DWORD *)(GuidEntryByGuid + 80) )
    {
      v11 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(GuidEntryByGuid + 56), 0x800u, 0LL);
      if ( v11 >= 0 )
      {
        v39 = 0;
        v30 = KeGetCurrentThread();
        --v30->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v29 + 48), 0LL);
        v29[49] = KeGetCurrentThread();
        LOBYTE(v31) = 1;
        EtwpUpdateEnableMask(v29, 0LL, v31, &v39);
        v29[49] = 0LL;
        ExReleasePushLockEx((ULONG_PTR)(v29 + 48), 0LL);
        KeLeaveCriticalRegionThread(KeGetCurrentThread());
        v11 = EtwpWriteUserEvent(
                (_DWORD)v29,
                v39,
                Flags >> 31,
                0,
                v51,
                (__int64)TraceHeader,
                0LL,
                v41,
                v58,
                v50,
                v57,
                0LL,
                0LL,
                0,
                0LL,
                0LL);
      }
      EtwpUnreferenceGuidEntry(v29);
      return v11;
    }
    EtwpUnreferenceGuidEntry((PVOID)GuidEntryByGuid);
  }
  return -1073741054;
}
