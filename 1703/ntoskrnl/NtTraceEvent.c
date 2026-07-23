/*
 * XREFs of NtTraceEvent @ 0x1400860F0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpLogSystemEventUnsafe @ 0x14006B670 (EtwpLogSystemEventUnsafe.c)
 *     EtwpTraceMessageVa @ 0x140087260 (EtwpTraceMessageVa.c)
 *     EtwpOpenLogger @ 0x1400877F4 (EtwpOpenLogger.c)
 *     EtwpCloseLogger @ 0x14008788C (EtwpCloseLogger.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     EtwTraceEvent @ 0x140150C60 (EtwTraceEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     EtwTraceRaw @ 0x140252FC0 (EtwTraceRaw.c)
 *     EtwpUnreferenceGuidEntry @ 0x140480BE4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140480CD0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpWriteUserEvent @ 0x1404F0990 (EtwpWriteUserEvent.c)
 *     EtwpUpdateEnableMask @ 0x1404F1D24 (EtwpUpdateEnableMask.c)
 *     EtwpAccessCheck @ 0x1404F2AB8 (EtwpAccessCheck.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     EtwpSetMark @ 0x14070BE9C (EtwpSetMark.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtTraceEvent(
        ULONG TraceHandle,
        ULONG Flags,
        ULONG TraceHeaderLength,
        PEVENT_TRACE_HEADER TraceHeader)
{
  ULONG v7; // eax
  PEVENT_TRACE_HEADER v8; // r13
  int v9; // r15d
  unsigned __int8 *v10; // rdi
  void *v11; // rcx
  __int64 v12; // r8
  ULONG v13; // esi
  __int64 v14; // r12
  __int64 v15; // rax
  int v16; // edx
  int v17; // edx
  __int64 GuidPtr_high; // rcx
  __int64 v20; // rdi
  __int64 v21; // r10
  unsigned int v22; // esi
  unsigned __int8 v23; // r15
  __int64 v24; // r14
  __int64 v25; // rax
  int v26; // r9d
  _QWORD *v27; // rax
  ULONG_PTR GuidEntryByGuid; // rax
  ULONG_PTR v29; // r13
  struct _KTHREAD *v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int v33; // r15d
  char *v34; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *CurrentServerSiloGlobals; // rax
  char *v37; // rax
  unsigned __int8 v38; // [rsp+80h] [rbp-118h] BYREF
  unsigned __int8 v39; // [rsp+81h] [rbp-117h] BYREF
  char v40; // [rsp+82h] [rbp-116h]
  PEVENT_TRACE_HEADER v41; // [rsp+88h] [rbp-110h]
  unsigned int Data1; // [rsp+90h] [rbp-108h]
  unsigned __int8 v44; // [rsp+96h] [rbp-102h]
  USHORT Version; // [rsp+98h] [rbp-100h]
  ULONG LowPart; // [rsp+9Ch] [rbp-FCh]
  unsigned __int64 v47; // [rsp+A0h] [rbp-F8h]
  ULONG64 ProcessorTime; // [rsp+A8h] [rbp-F0h]
  int v49; // [rsp+B0h] [rbp-E8h]
  ULONG v50; // [rsp+B4h] [rbp-E4h]
  PVOID Object; // [rsp+B8h] [rbp-E0h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-D8h] BYREF
  __int64 v53; // [rsp+C8h] [rbp-D0h] BYREF
  __int64 v54; // [rsp+D0h] [rbp-C8h]
  int v55; // [rsp+DCh] [rbp-BCh]
  int v56; // [rsp+E0h] [rbp-B8h]
  ULONG v57; // [rsp+E4h] [rbp-B4h]
  ULONG64 v58; // [rsp+E8h] [rbp-B0h]
  __int64 v59; // [rsp+F0h] [rbp-A8h]
  PEVENT_TRACE_HEADER v60; // [rsp+F8h] [rbp-A0h]
  ULONGLONG *v61; // [rsp+118h] [rbp-80h]
  ULONG64 v62; // [rsp+120h] [rbp-78h]
  unsigned __int64 v63; // [rsp+128h] [rbp-70h]
  ULONGLONG *v64; // [rsp+130h] [rbp-68h] BYREF
  ULONG v65; // [rsp+138h] [rbp-60h]
  int v66; // [rsp+13Ch] [rbp-5Ch]
  __int128 v67; // [rsp+140h] [rbp-58h] BYREF

  v7 = Flags & 0xFF00;
  switch ( v7 )
  {
    case 0x300u:
      if ( KeGetCurrentThread()->PreviousMode )
      {
        if ( ((unsigned __int8)TraceHeader & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&TraceHeader[2].GuidPtr > 0x7FFFFFFF0000LL || &TraceHeader[2].Guid < (GUID *)TraceHeader )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      ProcessorTime = TraceHeader[1].ProcessorTime;
      v62 = ProcessorTime;
      LODWORD(v41) = *((_DWORD *)&TraceHeader[1].GuidPtr + 3);
      v56 = (int)v41;
      v54 = *((unsigned __int16 *)&TraceHeader[1].GuidPtr + 5);
      LowPart = TraceHeader[2].TimeStamp.LowPart;
      v57 = LowPart;
      v47 = *(_QWORD *)&TraceHeader[1].Size;
      v63 = v47;
      v38 = TraceHeader->Flags;
      v44 = v38;
      v8 = 0LL;
      v60 = 0LL;
      if ( TraceHeader[1].Guid.Data4[0] )
      {
        v8 = TraceHeader + 2;
        v60 = TraceHeader + 2;
      }
      v9 = ObReferenceObjectByHandle(*(HANDLE *)&TraceHandle, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
      if ( v9 >= 0 )
      {
        v52 = 0LL;
        v10 = (unsigned __int8 *)Object;
        v11 = (void *)*((_QWORD *)Object + 4);
        Object = v11;
        v12 = *((_QWORD *)v10 + 5);
        v64 = (ULONGLONG *)v12;
        v13 = Flags >> 31;
        v53 = 0LL;
        v14 = 0LL;
        v15 = *((_QWORD *)v10 + 13);
        if ( v15 )
          v14 = v15 + 28;
        v16 = v10[100];
        if ( (_BYTE)v16 )
        {
          v9 = EtwpWriteUserEvent(
                 (_DWORD)v11,
                 v16,
                 (unsigned __int16)v13,
                 v54,
                 LowPart,
                 (__int64)TraceHeader,
                 (__int64)v8,
                 v38,
                 v47,
                 (_DWORD)v41,
                 ProcessorTime,
                 (__int64)&v53,
                 0LL,
                 v10[102],
                 v14,
                 (__int64)&v52);
          LODWORD(v11) = (_DWORD)Object;
          v12 = (__int64)v64;
        }
        v17 = v10[101];
        if ( (_BYTE)v17 )
          v9 = EtwpWriteUserEvent(
                 (_DWORD)v11,
                 v17,
                 (unsigned __int16)v13,
                 v54,
                 LowPart,
                 (__int64)TraceHeader,
                 (__int64)v8,
                 v38,
                 v47,
                 (_DWORD)v41,
                 ProcessorTime,
                 (__int64)&v53,
                 v12,
                 v10[102],
                 v14,
                 (__int64)&v52);
        ObfDereferenceObjectWithTag(v10, 0x746C6644u);
      }
      return v9;
    case 0x200u:
      ProcessorTime = *(_QWORD *)&TraceHandle;
      v47 = 0LL;
      if ( TraceHeaderLength == 40 )
      {
        if ( KeGetCurrentThread()->PreviousMode == 1 )
        {
          v41 = TraceHeader;
          if ( ((unsigned __int8)TraceHeader & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&v41->ProcessorTime > 0x7FFFFFFF0000LL || &v41->KernelTime < (ULONG *)v41 )
            MEMORY[0x7FFFFFFF0000] = 0;
          Data1 = v41->Guid.Data1;
          if ( (Flags & 0x80000000) != 0 )
          {
            LODWORD(v47) = *((_DWORD *)&v41->GuidPtr + 2);
            Data1 |= 0x80u;
          }
          else
          {
            v47 = *(&v41->GuidPtr + 1);
          }
          GuidPtr_high = HIDWORD(v41->GuidPtr);
          LowPart = GuidPtr_high;
          if ( (unsigned int)GuidPtr_high <= 0x10000 )
          {
            if ( (_DWORD)GuidPtr_high && (v47 + GuidPtr_high > 0x7FFFFFFF0000LL || v47 + GuidPtr_high < v47) )
              MEMORY[0x7FFFFFFF0000] = 0;
            HIDWORD(ProcessorTime) = GuidPtr_high;
            return EtwpTraceMessageVa(ProcessorTime, Data1 | 0x40, (int)v41 + 8, LOWORD(v41->Version), v47, 1);
          }
          v9 = -1073741811;
          v55 = -1073741811;
          return v9;
        }
        return -1073741637;
      }
      return -1073741811;
    case 0x600u:
      v22 = (unsigned __int16)TraceHandle;
      if ( (unsigned __int16)TraceHandle == 0xFFFF || !(_WORD)TraceHandle )
        v22 = (unsigned __int8)EtwpSystemLogger[0];
      if ( v22 >= 0x40 )
        return -1073741816;
      v23 = KeGetCurrentThread()->gap0[10];
      v24 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
      v25 = EtwpOpenLogger(v22, v24, v23, &v39);
      if ( !v25 )
        return -1073741816;
      if ( (*(_DWORD *)(v25 + 12) & 0x2000000) != 0 )
      {
        v37 = (char *)&EtwpGroupMasks + 32 * *(unsigned __int8 *)(v25 + 818);
        if ( v37 && (*((_DWORD *)v37 + 1) & 0x28) != 0 )
          LOBYTE(v26) = 1;
        else
          v26 = 0;
        v9 = EtwpSetMark(v22, (int)TraceHeader, TraceHeaderLength, v26, v23);
      }
      else
      {
        v9 = -1073741811;
      }
      EtwpCloseLogger(v22, v24, v39);
      return v9;
  }
  if ( v7 <= 0x600 )
  {
    switch ( v7 )
    {
      case 0x100u:
        if ( (Flags & 0x80000000) != 0 )
          v32 = 3221880832LL;
        else
          v32 = 3222536192LL;
        return EtwTraceEvent(TraceHandle, TraceHeader, 48LL, v32, KeGetCurrentThread()->PreviousMode);
      case 0x400u:
        v33 = (unsigned __int16)TraceHandle;
        if ( (unsigned __int16)TraceHandle == 0xFFFF )
        {
          v33 = 0;
        }
        else if ( (unsigned __int16)TraceHandle >= 0x40u )
        {
          return -1073741811;
        }
        if ( TraceHeaderLength > 0xFFDF )
          return -1073741675;
        if ( KeGetCurrentThread()->PreviousMode == 1 )
        {
          if ( ((unsigned __int8)TraceHeader & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v34 = (char *)&TraceHeader->GuidPtr + TraceHeaderLength + 8;
          if ( (unsigned __int64)v34 > 0x7FFFFFFF0000LL || v34 < (char *)TraceHeader )
            MEMORY[0x7FFFFFFF0000] = 0;
          v61 = &TraceHeader->GuidPtr + 1;
          Version = TraceHeader->Class.Version;
          v64 = &TraceHeader->GuidPtr + 1;
          v65 = TraceHeaderLength;
          v66 = 0;
          CurrentThread = KeGetCurrentThread();
          CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
          EtwpLogSystemEventUnsafe(
            CurrentServerSiloGlobals[108],
            (__int64)&v64,
            CurrentThread,
            v33,
            1u,
            Version,
            Flags & 0xC00F00FF | 0x3100);
          return 0;
        }
        return -1073741637;
      case 0x500u:
        v20 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
        v21 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
        if ( *(_DWORD *)(v21 + 5040) == (_DWORD)v20 )
        {
          if ( ((unsigned __int8)TraceHeader & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&TraceHeader[2].GuidPtr > 0x7FFFFFFF0000LL
            || &TraceHeader[2].Guid < (GUID *)TraceHeader )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
          }
          return EtwpWriteUserEvent(
                   (int)v21 + 8,
                   *(unsigned __int8 *)(v21 + 5032),
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
  if ( v7 != 1792 )
  {
    if ( v7 == 2048 )
      return EtwTraceEvent(
               TraceHandle,
               TraceHeader,
               72LL,
               (((int)Flags >> 31) & 0xFFF60000) - 1072365568,
               KeGetCurrentThread()->PreviousMode);
    if ( v7 == 2304 )
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
  v58 = TraceHeader[1].ProcessorTime;
  v49 = *((_DWORD *)&TraceHeader[1].GuidPtr + 3);
  v50 = TraceHeader[2].TimeStamp.LowPart;
  v59 = *(_QWORD *)&TraceHeader[1].Size;
  v40 = TraceHeader->Flags;
  v67 = **(_OWORD **)&TraceHandle;
  v27 = PsGetCurrentServerSiloGlobals();
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(v27[108], &v67, 0LL);
  v29 = GuidEntryByGuid;
  if ( GuidEntryByGuid )
  {
    if ( *(_DWORD *)(GuidEntryByGuid + 80) )
    {
      v9 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(GuidEntryByGuid + 56), 0x800u);
      if ( v9 >= 0 )
      {
        v38 = 0;
        v30 = KeGetCurrentThread();
        --v30->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v29 + 384, 0LL);
        *(_QWORD *)(v29 + 392) = KeGetCurrentThread();
        LOBYTE(v31) = 1;
        EtwpUpdateEnableMask(v29, 0LL, v31, &v38);
        *(_QWORD *)(v29 + 392) = 0LL;
        ExReleasePushLockEx(v29 + 384, 0LL);
        KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
        v9 = EtwpWriteUserEvent(
               v29,
               v38,
               Flags >> 31,
               0,
               v50,
               (__int64)TraceHeader,
               0LL,
               v40,
               v59,
               v49,
               v58,
               0LL,
               0LL,
               0,
               0LL,
               0LL);
      }
      EtwpUnreferenceGuidEntry(v29);
      return v9;
    }
    EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  }
  return -1073741054;
}
