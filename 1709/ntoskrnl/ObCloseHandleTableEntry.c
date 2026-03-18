/*
 * XREFs of ObCloseHandleTableEntry @ 0x1404B1D60
 * Callers:
 *     NtClose @ 0x1404AE620 (NtClose.c)
 *     ObpCloseHandle @ 0x1404D4BEC (ObpCloseHandle.c)
 *     ExSweepHandleTable @ 0x1404DD240 (ExSweepHandleTable.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x14001908C (ObpReleaseLookupContext.c)
 *     ObpLockDirectoryExclusive @ 0x140024034 (ObpLockDirectoryExclusive.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PsGetProcessServerSilo @ 0x1400893E0 (PsGetProcessServerSilo.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     PsDetachSiloFromCurrentThread @ 0x1400AF180 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1400AF1A0 (PsAttachSiloToCurrentThread.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     PsDereferenceSiloContext @ 0x1401262F0 (PsDereferenceSiloContext.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14017D4F0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KeRaiseUserException @ 0x1402049C0 (KeRaiseUserException.c)
 *     ObpLookupDirectoryEntryEx @ 0x14056EC10 (ObpLookupDirectoryEntryEx.c)
 *     ObpDeleteDirectoryEntry @ 0x140579D2C (ObpDeleteDirectoryEntry.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x1405874B0 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x140587728 (ObpDeleteSymbolicLinkName.c)
 *     SeCloseObjectAuditAlarm @ 0x14072CB50 (SeCloseObjectAuditAlarm.c)
 *     EtwpTraceHandle @ 0x140747764 (EtwpTraceHandle.c)
 *     ExpGetHandleExtraInfo @ 0x140756A50 (ExpGetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x140756D18 (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ObCloseHandleTableEntry(
        __int64 a1,
        volatile signed __int64 *a2,
        _KPROCESS *a3,
        ULONG_PTR a4,
        unsigned __int8 a5,
        char a6)
{
  char v7; // bl
  unsigned __int64 v8; // rdi
  ULONG_PTR v9; // r15
  unsigned __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // rbp
  unsigned __int64 v15; // r13
  __int64 v16; // r10
  bool v17; // zf
  char v18; // r15
  unsigned int Number; // eax
  ULONG_PTR v20; // rbx
  __int64 v21; // rax
  int v22; // ebx
  __int64 v23; // r8
  unsigned int v24; // ebp
  __int64 v25; // rsi
  signed __int64 v26; // r13
  char v27; // r14
  _KPROCESS *v28; // r12
  __int64 v29; // r15
  struct _KTHREAD *v31; // rax
  __int64 v32; // rdx
  int v33; // eax
  __int64 ProcessServerSilo; // rax
  __int64 v35; // rax
  __int64 v36; // r14
  struct _KTHREAD *CurrentThread; // rax
  PVOID v38; // r15
  char v39; // al
  int v40; // ecx
  struct _KTHREAD *v41; // rax
  void *v43; // r12
  struct _OBJECT_TYPE *v44; // r13
  void *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  _QWORD *HandleExtraInfo; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  signed __int32 v51[8]; // [rsp+0h] [rbp-138h] BYREF
  char v52; // [rsp+30h] [rbp-108h]
  ULONG_PTR BugCheckParameter1; // [rsp+38h] [rbp-100h]
  ULONG_PTR v54; // [rsp+40h] [rbp-F8h]
  __int64 v55; // [rsp+48h] [rbp-F0h]
  ULONG_PTR v56; // [rsp+50h] [rbp-E8h]
  __int64 v57[2]; // [rsp+58h] [rbp-E0h] BYREF
  __int16 v58; // [rsp+76h] [rbp-C2h]
  int v59; // [rsp+78h] [rbp-C0h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v60; // [rsp+80h] [rbp-B8h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v61; // [rsp+B0h] [rbp-88h] BYREF

  v7 = 0;
  v8 = (*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  v56 = a4;
  BugCheckParameter1 = (ULONG_PTR)a3;
  v9 = a4;
  v55 = BYTE1(v8);
  v12 = *(unsigned __int8 *)(v8 + 24) ^ (unsigned __int64)BYTE1(v8);
  v52 = 0;
  v13 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v12];
  if ( *(_QWORD *)(v13 + 168) )
  {
    if ( KeGetCurrentThread()->ApcState.Process != a3 )
    {
      KiStackAttachProcess(a3, 0, (__int64)&v60);
      v7 = 1;
      v52 = 1;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_KPROCESS *, unsigned __int64, ULONG_PTR, _QWORD))(v13 + 168))(
            a3,
            v8 + 48,
            v9,
            a5) )
    {
      _InterlockedExchangeAdd64(a2, 1uLL);
      _InterlockedOr(v51, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
      KeLeaveCriticalRegion();
      if ( v7 )
        KiUnstackDetachProcess(&v60, 0LL);
      return 3221226037LL;
    }
  }
  v14 = ((__int64)*(unsigned int *)a2 >> 17) & 7;
  if ( (((__int64)*(unsigned int *)a2 >> 17) & 1) == 0 || a6 )
  {
    if ( (xmmword_140401150 & 0x40) != 0 )
    {
      v49 = v9;
      if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
        v49 = v9 | 0x80000000;
      EtwpTraceHandle(4385LL, v49, v8 + 48, v13);
    }
    if ( a6 )
    {
      v15 = (unsigned __int64)*a2 >> 1;
      *a2 = 0LL;
      _InterlockedOr(v51, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
    }
    else
    {
      if ( *(_QWORD *)(a1 + 96) )
        ExpUpdateDebugInfo(a1, KeGetCurrentThread(), v9, 2LL);
      v15 = (unsigned __int64)*a2 >> 1;
      v16 = 0LL;
      *a2 = 0LL;
      _InterlockedOr(v51, 0);
      if ( *(_QWORD *)(a1 + 48) )
      {
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
        v16 = 0LL;
      }
      v54 = v9;
      v17 = *(_DWORD *)(a1 + 4) == 0;
      LODWORD(v54) = v9 & 0xFFFFFFFC;
      if ( !v17 )
      {
        HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(a1, v54, a3, a4);
        if ( HandleExtraInfo )
          *HandleExtraInfo = 0LL;
      }
      *((_QWORD *)a2 + 1) = v16;
      v18 = *(_BYTE *)(a1 + 44) & 1;
      if ( v18 )
        Number = v16;
      else
        Number = KeGetPcr()->Prcb.Number;
      v20 = a1 + ((Number + 1LL) << 6);
      ExAcquirePushLockExclusiveEx(v20, 0LL);
      if ( v18 )
      {
        v50 = *(_QWORD *)(v20 + 16);
        if ( v50 )
          *(_QWORD *)(v50 + 8) = a2;
        else
          *(_QWORD *)(v20 + 8) = a2;
        *(_QWORD *)(v20 + 16) = a2;
      }
      else
      {
        v21 = *(_QWORD *)(v20 + 8);
        *((_QWORD *)a2 + 1) = v21;
        if ( !v21 )
          *(_QWORD *)(v20 + 16) = a2;
        *(_QWORD *)(v20 + 8) = a2;
      }
      --*(_DWORD *)(v20 + 24);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v20);
      KeAbPostRelease(v20);
      v9 = v56;
    }
    v22 = (unsigned __int16)v15;
    KeLeaveCriticalRegion();
    if ( (v14 & 4) != 0 )
    {
      LOBYTE(v23) = 1;
      SeCloseObjectAuditAlarm(v8 + 48, v9 & 0xFFFFFFFFFFFFFFFCuLL, v23);
    }
    v24 = 0;
    v25 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v55 ^ (unsigned __int64)*(unsigned __int8 *)(v8 + 24)];
    if ( (*(_BYTE *)(v25 + 66) & 0x10) == 0 && (*(_BYTE *)(v8 + 27) & 8) == 0 )
    {
      v26 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 8), 0xFFFFFFFFFFFFFFFFuLL);
LABEL_24:
      if ( *(_QWORD *)(v25 + 128) )
      {
        v27 = 0;
        v28 = (_KPROCESS *)BugCheckParameter1;
        v29 = 0LL;
        if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
        {
          v27 = 1;
          ProcessServerSilo = PsGetProcessServerSilo(BugCheckParameter1);
          v29 = PsAttachSiloToCurrentThread(ProcessServerSilo);
          KiStackAttachProcess(v28, 0, (__int64)&v61);
        }
        (*(void (__fastcall **)(_KPROCESS *, unsigned __int64, _QWORD, signed __int64))(v25 + 128))(
          v28,
          v8 + 48,
          v24,
          v26);
        if ( v27 )
        {
          KiUnstackDetachProcess(&v61, 0LL);
          PsDetachSiloFromCurrentThread(v29);
        }
      }
      if ( (*(_BYTE *)(v8 + 26) & 2) != 0 )
      {
        v35 = ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 3];
        v36 = v8 - v35;
        if ( v8 != v35 )
        {
          while ( 1 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
            v38 = *(PVOID *)v36;
            if ( !*(_QWORD *)v36
              || ((*(_BYTE *)(v8 + 27) & 0x10) != 0 || *(_QWORD *)(v8 + 8) ? (v39 = 0) : (v39 = 1), !v39) )
            {
              ExReleasePushLockEx(v8 + 16, 0LL);
              KeLeaveCriticalRegion();
              goto LABEL_30;
            }
            ObfReferenceObject(*(PVOID *)v36);
            ExReleasePushLockEx(v8 + 16, 0LL);
            KeLeaveCriticalRegion();
            v58 = 0;
            v59 = -60876;
            *(_OWORD *)v57 = 0LL;
            ObpLockDirectoryExclusive((__int64)v57, v38);
            v41 = KeGetCurrentThread();
            --v41->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
            if ( *(PVOID *)v36 == v38 && (*(_BYTE *)(v8 + 27) & 0x10) == 0 && !*(_QWORD *)(v8 + 8) )
              break;
            ObpReleaseLookupContext((__int64)v57);
            ExReleasePushLockEx(v8 + 16, 0LL);
            KeLeaveCriticalRegion();
            PsDereferenceSiloContext(v38);
          }
          v43 = 0LL;
          if ( !*(_DWORD *)(v36 + 24) )
          {
            v44 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v55 ^ (unsigned __int64)*(unsigned __int8 *)(v8 + 24)];
            if ( v44 == ObpSymbolicLinkObjectType )
              ObpDeleteSymbolicLinkName(v8 + 48);
            v45 = (void *)ObpLookupDirectoryEntryEx(*(PVOID *)v36, 0, (__int64)v57);
            v43 = v45;
            if ( v44 == ObpDirectoryObjectType )
              ObfReferenceObject(v45);
            else
              v43 = 0LL;
            ObpDeleteDirectoryEntry(v57, v46, v47);
          }
          ObpReleaseLookupContext((__int64)v57);
          ExReleasePushLockEx(v8 + 16, 0LL);
          KeLeaveCriticalRegion();
          PsDereferenceSiloContext(v38);
          if ( v43 )
          {
            ObpMarkDirectoryTreeTemporary(v43);
            PsDereferenceSiloContext(v43);
          }
        }
      }
LABEL_30:
      _InterlockedDecrement((volatile signed __int32 *)(v25 + 48));
      if ( v52 )
        KiUnstackDetachProcess(&v60, 0LL);
      if ( v22 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)v8, -v22);
      ObfDereferenceObjectWithTag((PVOID)(v8 + 48), 0x6E48624Fu);
      return 0LL;
    }
    v31 = KeGetCurrentThread();
    --v31->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
    v26 = *(_QWORD *)(v8 + 8);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1
      && (*(_BYTE *)(v8 + 27) & 8) != 0 )
    {
      *(_QWORD *)(v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 0x1F]) = 0LL;
    }
    if ( (*(_BYTE *)(v25 + 66) & 0x10) == 0 )
    {
LABEL_47:
      ExReleasePushLockEx(v8 + 16, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_24;
    }
    if ( (*(_BYTE *)(v8 + 26) & 4) != 0 )
      v32 = v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 7];
    else
      v32 = 0LL;
    if ( (*(_BYTE *)(v8 + 27) & 0x40) != 0 )
    {
      v24 = *(_DWORD *)(v32 + 8) & 0xFFFFFF;
      v33 = *(_DWORD *)(v32 + 8) ^ (*(_DWORD *)(v32 + 8) ^ (*(_DWORD *)(v32 + 8) - 1)) & 0xFFFFFF;
    }
    else
    {
      v40 = **(_DWORD **)v32;
      v32 = *(_QWORD *)v32 + 8LL;
      if ( !v40 )
        goto LABEL_44;
      while ( (*(_DWORD *)(v32 + 8) & 0xFFFFFF) == 0 || *(_QWORD *)v32 != BugCheckParameter1 )
      {
        v32 += 16LL;
        if ( !--v40 )
          goto LABEL_44;
      }
      v24 = *(_DWORD *)(v32 + 8) & 0xFFFFFF;
      v33 = *(_DWORD *)(v32 + 8) ^ (*(_DWORD *)(v32 + 8) ^ (*(_DWORD *)(v32 + 8) - 1)) & 0xFFFFFF;
    }
    *(_DWORD *)(v32 + 8) = v33;
LABEL_44:
    if ( !*(_BYTE *)(v32 + 11) && (*(_DWORD *)(v32 + 8) & 0xFFFFFF) == 0 )
      *(_QWORD *)v32 = 0LL;
    goto LABEL_47;
  }
  if ( !a5 )
    KeBugCheckEx(0x93u, v9, 0LL, 0LL, 0LL);
  _InterlockedExchangeAdd64(a2, 1uLL);
  _InterlockedOr(v51, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  KeLeaveCriticalRegion();
  if ( v52 )
    KiUnstackDetachProcess(&v60, 0LL);
  if ( KeGetCurrentThread()->ApcStateIndex == 1
    || (NtGlobalFlag & 0x400000) == 0
    && !KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[6]
    && !*(_QWORD *)(a1 + 96) )
  {
    return 3221226037LL;
  }
  return KeRaiseUserException(0xC0000235);
}
