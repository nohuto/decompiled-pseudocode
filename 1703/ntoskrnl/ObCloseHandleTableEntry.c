/*
 * XREFs of ObCloseHandleTableEntry @ 0x140530A90
 * Callers:
 *     ExSweepHandleTable @ 0x14042F3C0 (ExSweepHandleTable.c)
 *     ObpCloseHandle @ 0x1404F9CCC (ObpCloseHandle.c)
 *     NtClose @ 0x14052EB10 (NtClose.c)
 * Callees:
 *     PsDereferenceSiloContext @ 0x14003ABD0 (PsDereferenceSiloContext.c)
 *     ObpLockDirectoryExclusive @ 0x14004439C (ObpLockDirectoryExclusive.c)
 *     PsDetachSiloFromCurrentThread @ 0x14006F590 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14006F5B0 (PsAttachSiloToCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140085020 (PsGetProcessServerSilo.c)
 *     ObpReleaseLookupContext @ 0x140087EE4 (ObpReleaseLookupContext.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     KeIsAttachedProcess @ 0x1400FCB20 (KeIsAttachedProcess.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14017DAD0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KeRaiseUserException @ 0x1401FE6D0 (KeRaiseUserException.c)
 *     ObpDeleteDirectoryEntry @ 0x140441E08 (ObpDeleteDirectoryEntry.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x14044E6F4 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x14045D4F8 (ObpDeleteSymbolicLinkName.c)
 *     ObpLookupDirectoryEntryEx @ 0x1404F72C0 (ObpLookupDirectoryEntryEx.c)
 *     SeCloseObjectAuditAlarm @ 0x1406F5100 (SeCloseObjectAuditAlarm.c)
 *     EtwpTraceHandle @ 0x14070C11C (EtwpTraceHandle.c)
 *     ExpGetHandleExtraInfo @ 0x1407172E0 (ExpGetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x140717598 (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ObCloseHandleTableEntry(
        __int64 a1,
        volatile signed __int64 *a2,
        _KPROCESS *a3,
        ULONG_PTR a4,
        unsigned __int8 a5,
        char a6)
{
  char v7; // r13
  unsigned __int64 v8; // rbp
  ULONG_PTR v11; // r10
  unsigned __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rdi
  char v15; // di
  int v16; // r14d
  char v17; // r12
  unsigned int Number; // eax
  ULONG_PTR v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r8
  unsigned int v22; // edi
  __int64 v23; // rbx
  signed __int64 v24; // r12
  char v25; // si
  __int64 v26; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v29; // rdx
  __int64 ProcessServerSilo; // rax
  __int64 v31; // rax
  __int64 v32; // rdi
  struct _KTHREAD *v33; // rax
  PVOID v34; // r15
  struct _KTHREAD *v35; // rax
  int v36; // ecx
  void *v37; // r12
  __int64 v38; // rdx
  _QWORD *HandleExtraInfo; // rax
  __int64 v40; // rax
  signed __int32 v41[8]; // [rsp+0h] [rbp-138h] BYREF
  char v42; // [rsp+30h] [rbp-108h]
  ULONG_PTR v43; // [rsp+38h] [rbp-100h]
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-F8h]
  unsigned __int64 v45; // [rsp+48h] [rbp-F0h]
  unsigned __int64 v46; // [rsp+50h] [rbp-E8h]
  __int128 v47; // [rsp+58h] [rbp-E0h] BYREF
  __int16 v48; // [rsp+76h] [rbp-C2h]
  int v49; // [rsp+78h] [rbp-C0h]
  $5BC46E0569261879018906DEC3127961 v50; // [rsp+80h] [rbp-B8h] BYREF
  $5BC46E0569261879018906DEC3127961 v51; // [rsp+B0h] [rbp-88h] BYREF

  v7 = 0;
  v8 = (*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  v43 = a4;
  v42 = 0;
  v11 = a4;
  v12 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(v8 + 24);
  BugCheckParameter1 = (ULONG_PTR)a3;
  v46 = BYTE1(v8);
  v13 = ObTypeIndexTable[BYTE1(v8) ^ v12];
  if ( *(_QWORD *)(v13 + 168) )
  {
    if ( KeGetCurrentThread()->ApcState.Process != a3 )
    {
      KiStackAttachProcess(a3, 0, (__int64)&v50);
      v11 = v43;
      v7 = 1;
      v42 = 1;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_KPROCESS *, unsigned __int64, ULONG_PTR, _QWORD))(v13 + 168))(
            a3,
            v8 + 48,
            v11,
            a5) )
    {
      _InterlockedExchangeAdd64(a2, 1uLL);
      _InterlockedOr(v41, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
      KeLeaveCriticalRegion();
      if ( v7 )
        KiUnstackDetachProcess(&v50, 0LL);
      return 3221226037LL;
    }
    v11 = v43;
  }
  v14 = ((__int64)*(unsigned int *)a2 >> 17) & 7;
  if ( (a2[1] & 0x2000000) != 0 )
    LOBYTE(v14) = v14 | 8;
  v15 = v14 & 5;
  if ( (v15 & 1) != 0 && !a6 )
  {
    if ( !a5 )
      KeBugCheckEx(0x93u, v11, 0LL, 0LL, 0LL);
    _InterlockedExchangeAdd64(a2, 1uLL);
    _InterlockedOr(v41, 0);
    if ( *(_QWORD *)(a1 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
    KeLeaveCriticalRegion();
    if ( v7 )
      KiUnstackDetachProcess(&v50, 0LL);
    if ( !KeIsAttachedProcess()
      && ((NtGlobalFlag & 0x400000) != 0
       || KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[6]
       || *(_QWORD *)(a1 + 96)) )
    {
      return KeRaiseUserException(0xC0000235);
    }
    else
    {
      return 3221226037LL;
    }
  }
  if ( (xmmword_1403E4010 & 0x40) != 0 )
  {
    v38 = v11;
    if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
      v38 = v11 | 0x80000000;
    EtwpTraceHandle(4385LL, v38, v8 + 48, v13);
    v11 = v43;
  }
  if ( a6 )
  {
    v16 = (unsigned __int16)((unsigned __int64)*(unsigned int *)a2 >> 1);
    *a2 = 0LL;
    _InterlockedOr(v41, 0);
    if ( *(_QWORD *)(a1 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  }
  else
  {
    if ( *(_QWORD *)(a1 + 96) )
    {
      ExpUpdateDebugInfo(a1, KeGetCurrentThread(), v11, 2LL);
      v11 = v43;
    }
    v16 = (unsigned __int16)((unsigned __int64)*(unsigned int *)a2 >> 1);
    *a2 = 0LL;
    _InterlockedOr(v41, 0);
    if ( *(_QWORD *)(a1 + 48) )
    {
      ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
      v11 = v43;
    }
    v45 = v11 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( *(_DWORD *)(a1 + 4) )
    {
      HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(a1, v45);
      if ( HandleExtraInfo )
        *HandleExtraInfo = 0LL;
    }
    *((_QWORD *)a2 + 1) = 0LL;
    v17 = *(_BYTE *)(a1 + 44) & 1;
    if ( v17 )
      Number = 0;
    else
      Number = KeGetPcr()->Prcb.Number;
    v19 = a1 + ((Number + 1LL) << 6);
    ExAcquirePushLockExclusiveEx(v19, 0LL);
    if ( v17 )
    {
      v40 = *(_QWORD *)(v19 + 16);
      if ( v40 )
        *(_QWORD *)(v40 + 8) = a2;
      else
        *(_QWORD *)(v19 + 8) = a2;
      *(_QWORD *)(v19 + 16) = a2;
    }
    else
    {
      v20 = *(_QWORD *)(v19 + 8);
      *((_QWORD *)a2 + 1) = v20;
      if ( !v20 )
        *(_QWORD *)(v19 + 16) = a2;
      *(_QWORD *)(v19 + 8) = a2;
    }
    --*(_DWORD *)(v19 + 24);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v19);
    KeAbPostRelease(v19);
  }
  KeLeaveCriticalRegion();
  if ( (v15 & 4) != 0 )
  {
    LOBYTE(v21) = 1;
    SeCloseObjectAuditAlarm(v8 + 48, v43 & 0xFFFFFFFFFFFFFFFCuLL, v21);
  }
  v22 = 0;
  v23 = ObTypeIndexTable[v46 ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(v8 + 24)];
  if ( (*(_BYTE *)(v23 + 66) & 0x10) != 0 || (*(_BYTE *)(v8 + 27) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
    v45 = *(_QWORD *)(v8 + 8);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1
      && (*(_BYTE *)(v8 + 27) & 8) != 0 )
    {
      *(_QWORD *)(v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 0x1F]) = 0LL;
    }
    if ( (*(_BYTE *)(v23 + 66) & 0x10) == 0 )
      goto LABEL_48;
    if ( (*(_BYTE *)(v8 + 26) & 4) != 0 )
      v29 = v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 7];
    else
      v29 = 0LL;
    if ( (*(_BYTE *)(v8 + 27) & 0x40) == 0 )
    {
      v36 = **(_DWORD **)v29;
      v29 = *(_QWORD *)v29 + 8LL;
      if ( !v36 )
        goto LABEL_45;
      while ( (*(_DWORD *)(v29 + 8) & 0xFFFFFF) == 0 || *(_QWORD *)v29 != BugCheckParameter1 )
      {
        v29 += 16LL;
        if ( !--v36 )
          goto LABEL_45;
      }
    }
    v22 = *(_DWORD *)(v29 + 8) & 0xFFFFFF;
    *(_DWORD *)(v29 + 8) ^= (*(_DWORD *)(v29 + 8) ^ (*(_DWORD *)(v29 + 8) - 1)) & 0xFFFFFF;
LABEL_45:
    if ( !*(_BYTE *)(v29 + 11) && (*(_DWORD *)(v29 + 8) & 0xFFFFFF) == 0 )
      *(_QWORD *)v29 = 0LL;
LABEL_48:
    ExReleasePushLockEx(v8 + 16, 0LL);
    KeLeaveCriticalRegion();
    v24 = v45;
    goto LABEL_26;
  }
  v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 8), 0xFFFFFFFFFFFFFFFFuLL);
LABEL_26:
  if ( *(_QWORD *)(v23 + 128) )
  {
    v25 = 0;
    v26 = 0LL;
    if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
    {
      v25 = 1;
      ProcessServerSilo = PsGetProcessServerSilo(BugCheckParameter1);
      v26 = PsAttachSiloToCurrentThread(ProcessServerSilo);
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v51);
    }
    (*(void (__fastcall **)(ULONG_PTR, unsigned __int64, _QWORD, signed __int64))(v23 + 128))(
      BugCheckParameter1,
      v8 + 48,
      v22,
      v24);
    if ( v25 )
    {
      KiUnstackDetachProcess(&v51, 0LL);
      PsDetachSiloFromCurrentThread(v26);
    }
  }
  if ( (*(_BYTE *)(v8 + 26) & 2) != 0 )
  {
    v31 = ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 3];
    v32 = v8 - v31;
    if ( v8 != v31 )
    {
      while ( 1 )
      {
        v33 = KeGetCurrentThread();
        --v33->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
        v34 = *(PVOID *)v32;
        if ( !*(_QWORD *)v32 || (*(_BYTE *)(v8 + 27) & 0x10) != 0 || *(_QWORD *)(v8 + 8) )
        {
          ExReleasePushLockEx(v8 + 16, 0LL);
          KeLeaveCriticalRegion();
          goto LABEL_32;
        }
        ObfReferenceObject(*(PVOID *)v32);
        ExReleasePushLockEx(v8 + 16, 0LL);
        KeLeaveCriticalRegion();
        v48 = 0;
        v49 = -60876;
        v47 = 0LL;
        ObpLockDirectoryExclusive((__int64)&v47, (__int64)v34);
        v35 = KeGetCurrentThread();
        --v35->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
        if ( *(PVOID *)v32 == v34 && (*(_BYTE *)(v8 + 27) & 0x10) == 0 && !*(_QWORD *)(v8 + 8) )
          break;
        ObpReleaseLookupContext((__int64)&v47);
        ExReleasePushLockEx(v8 + 16, 0LL);
        KeLeaveCriticalRegion();
        PsDereferenceSiloContext(v34);
      }
      v37 = 0LL;
      if ( !*(_DWORD *)(v32 + 24) )
      {
        v46 = ObTypeIndexTable[v46 ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(v8 + 24)];
        if ( (POBJECT_TYPE)v46 == ObpSymbolicLinkObjectType )
          ObpDeleteSymbolicLinkName(v8 + 48);
        v37 = (void *)ObpLookupDirectoryEntryEx(*(void **)v32, (unsigned __int16 *)(v32 + 8), 0, 0, 0, (__int64)&v47);
        if ( (POBJECT_TYPE)v46 == ObpDirectoryObjectType )
          ObfReferenceObject(v37);
        else
          v37 = 0LL;
        ObpDeleteDirectoryEntry((__int64)&v47);
      }
      ObpReleaseLookupContext((__int64)&v47);
      ExReleasePushLockEx(v8 + 16, 0LL);
      KeLeaveCriticalRegion();
      PsDereferenceSiloContext(v34);
      if ( v37 )
      {
        ObpMarkDirectoryTreeTemporary(v37);
        PsDereferenceSiloContext(v37);
      }
    }
  }
LABEL_32:
  _InterlockedDecrement((volatile signed __int32 *)(v23 + 48));
  if ( v42 )
    KiUnstackDetachProcess(&v50, 0LL);
  if ( v16 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v8, -v16);
  ObfDereferenceObjectWithTag((PVOID)(v8 + 48), 0x6E48624Fu);
  return 0LL;
}
