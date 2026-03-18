/*
 * XREFs of ObCloseHandleTableEntry @ 0x1405A4E20
 * Callers:
 *     ObpCloseHandle @ 0x1404B5E0C (ObpCloseHandle.c)
 *     ExSweepHandleTable @ 0x1405541A0 (ExSweepHandleTable.c)
 *     NtClose @ 0x1405A2660 (NtClose.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ObpReleaseLookupContext @ 0x1400610F8 (ObpReleaseLookupContext.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     PsGetProcessServerSilo @ 0x14006CFF0 (PsGetProcessServerSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x140073540 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140073560 (PsAttachSiloToCurrentThread.c)
 *     ObpLockDirectoryExclusive @ 0x1400A5628 (ObpLockDirectoryExclusive.c)
 *     PsDereferenceSiloContext @ 0x1400C5610 (PsDereferenceSiloContext.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1401A70F0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KeRaiseUserException @ 0x1402421A0 (KeRaiseUserException.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x140551288 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x1405514F0 (ObpDeleteSymbolicLinkName.c)
 *     ObpLookupDirectoryEntryEx @ 0x140558350 (ObpLookupDirectoryEntryEx.c)
 *     ObpDeleteDirectoryEntry @ 0x140567F78 (ObpDeleteDirectoryEntry.c)
 *     SeCloseObjectAuditAlarm @ 0x140790E00 (SeCloseObjectAuditAlarm.c)
 *     EtwpTraceHandle @ 0x1407A8E90 (EtwpTraceHandle.c)
 *     ExpGetHandleExtraInfo @ 0x1407BD4E4 (ExpGetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x1407BD7BC (ExpUpdateDebugInfo.c)
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
  unsigned __int8 (__fastcall *v14)(_KPROCESS *, unsigned __int64, ULONG_PTR, _QWORD); // r10
  __int64 v15; // rbp
  unsigned __int64 v16; // r13
  __int64 v17; // r10
  bool v18; // zf
  char v19; // r15
  unsigned int Number; // eax
  ULONG_PTR v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  int v26; // ebx
  __int64 v27; // r8
  unsigned int v28; // ebp
  __int64 v29; // rsi
  signed __int64 v30; // r13
  void (__fastcall *v31)(ULONG_PTR, unsigned __int64, _QWORD, signed __int64); // r10
  char v32; // r14
  _KPROCESS *v33; // r12
  __int64 v34; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v37; // r8
  ULONG_PTR v38; // r9
  __int64 v39; // rdx
  int v40; // eax
  __int64 ProcessServerSilo; // rax
  __int64 v42; // rax
  __int64 v43; // r14
  struct _KTHREAD *v44; // rax
  __int64 v45; // r8
  __int64 v46; // r9
  PVOID v47; // r15
  char v48; // al
  int v49; // ecx
  __int64 v50; // r8
  __int64 v51; // r9
  struct _KTHREAD *v52; // rax
  PVOID v53; // r10
  void *v55; // r12
  struct _OBJECT_TYPE *v56; // r13
  void *v57; // rax
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // r8
  __int64 v61; // r9
  _QWORD *HandleExtraInfo; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  signed __int32 v65[8]; // [rsp+0h] [rbp-138h] BYREF
  char v66; // [rsp+30h] [rbp-108h]
  ULONG_PTR BugCheckParameter1; // [rsp+38h] [rbp-100h]
  ULONG_PTR v68; // [rsp+40h] [rbp-F8h]
  __int64 v69; // [rsp+48h] [rbp-F0h]
  ULONG_PTR v70; // [rsp+50h] [rbp-E8h]
  __int64 v71[2]; // [rsp+58h] [rbp-E0h] BYREF
  __int16 v72; // [rsp+76h] [rbp-C2h]
  int v73; // [rsp+78h] [rbp-C0h]
  _BYTE v74[48]; // [rsp+80h] [rbp-B8h] BYREF
  _BYTE v75[48]; // [rsp+B0h] [rbp-88h] BYREF

  v7 = 0;
  v8 = (*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  v70 = a4;
  BugCheckParameter1 = (ULONG_PTR)a3;
  v9 = a4;
  v12 = BYTE1(v8) ^ (unsigned __int64)*(unsigned __int8 *)(v8 + 24);
  v69 = BYTE1(v8);
  v66 = 0;
  v13 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v12];
  v14 = *(unsigned __int8 (__fastcall **)(_KPROCESS *, unsigned __int64, ULONG_PTR, _QWORD))(v13 + 168);
  if ( v14 )
  {
    if ( KeGetCurrentThread()->ApcState.Process != a3 )
    {
      KiStackAttachProcess(a3, 0, (__int64)v74);
      v14 = *(unsigned __int8 (__fastcall **)(_KPROCESS *, unsigned __int64, ULONG_PTR, _QWORD))(v13 + 168);
      v7 = 1;
      v66 = 1;
    }
    if ( !v14(a3, v8 + 48, v9, a5) )
    {
      _InterlockedExchangeAdd64(a2, 1uLL);
      _InterlockedOr(v65, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
      KeLeaveCriticalRegion();
      if ( v7 )
        KiUnstackDetachProcess((__int64)v74, 0LL);
      return 3221226037LL;
    }
  }
  v15 = ((__int64)*(unsigned int *)a2 >> 17) & 7;
  if ( (((__int64)*(unsigned int *)a2 >> 17) & 1) == 0 || a6 )
  {
    if ( (xmmword_14044C2D0 & 0x40) != 0 )
    {
      v63 = v9;
      if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
        v63 = v9 | 0x80000000;
      EtwpTraceHandle(4385LL, v63, v8 + 48, v13);
    }
    if ( a6 )
    {
      v16 = (unsigned __int64)*a2 >> 1;
      *a2 = 0LL;
      _InterlockedOr(v65, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
    }
    else
    {
      if ( *(_QWORD *)(a1 + 96) )
        ExpUpdateDebugInfo(a1, KeGetCurrentThread(), v9, 2LL);
      v16 = (unsigned __int64)*a2 >> 1;
      v17 = 0LL;
      *a2 = 0LL;
      _InterlockedOr(v65, 0);
      if ( *(_QWORD *)(a1 + 48) )
      {
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
        v17 = 0LL;
      }
      v68 = v9;
      v18 = *(_DWORD *)(a1 + 4) == 0;
      LODWORD(v68) = v9 & 0xFFFFFFFC;
      if ( !v18 )
      {
        HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(a1, v68);
        if ( HandleExtraInfo )
          *HandleExtraInfo = 0LL;
      }
      *((_QWORD *)a2 + 1) = v17;
      v19 = *(_BYTE *)(a1 + 44) & 1;
      if ( v19 )
        Number = v17;
      else
        Number = KeGetPcr()->Prcb.Number;
      v21 = a1 + ((Number + 1LL) << 6);
      ExAcquirePushLockExclusiveEx(v21, 0LL);
      if ( v19 )
      {
        v64 = *(_QWORD *)(v21 + 16);
        if ( v64 )
          *(_QWORD *)(v64 + 8) = a2;
        else
          *(_QWORD *)(v21 + 8) = a2;
        *(_QWORD *)(v21 + 16) = a2;
      }
      else
      {
        v25 = *(_QWORD *)(v21 + 8);
        *((_QWORD *)a2 + 1) = v25;
        if ( !v25 )
          *(_QWORD *)(v21 + 16) = a2;
        *(_QWORD *)(v21 + 8) = a2;
      }
      --*(_DWORD *)(v21 + 24);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v21, v22, v23, v24);
      KeAbPostRelease(v21);
      v9 = v70;
    }
    v26 = (unsigned __int16)v16;
    KeLeaveCriticalRegion();
    if ( (v15 & 4) != 0 )
    {
      LOBYTE(v27) = 1;
      SeCloseObjectAuditAlarm(v8 + 48, v9 & 0xFFFFFFFFFFFFFFFCuLL, v27);
    }
    v28 = 0;
    v29 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v69 ^ (unsigned __int64)*(unsigned __int8 *)(v8 + 24)];
    if ( (*(_BYTE *)(v29 + 66) & 0x10) == 0 && (*(_BYTE *)(v8 + 27) & 8) == 0 )
    {
      v30 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 8), 0xFFFFFFFFFFFFFFFFuLL);
      goto LABEL_24;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
    v30 = *(_QWORD *)(v8 + 8);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1
      && (*(_BYTE *)(v8 + 27) & 8) != 0 )
    {
      *(_QWORD *)(v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 0x1F]) = 0LL;
    }
    if ( (*(_BYTE *)(v29 + 66) & 0x10) == 0 )
    {
LABEL_47:
      ExReleasePushLockEx(v8 + 16, 0LL, v37, v38);
      KeLeaveCriticalRegion();
LABEL_24:
      v31 = *(void (__fastcall **)(ULONG_PTR, unsigned __int64, _QWORD, signed __int64))(v29 + 128);
      if ( v31 )
      {
        v32 = 0;
        v33 = (_KPROCESS *)BugCheckParameter1;
        v34 = 0LL;
        if ( KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
        {
          v31(BugCheckParameter1, v8 + 48, v28, v30);
        }
        else
        {
          v32 = 1;
          ProcessServerSilo = PsGetProcessServerSilo(BugCheckParameter1);
          v34 = PsAttachSiloToCurrentThread(ProcessServerSilo);
          KiStackAttachProcess(v33, 0, (__int64)v75);
          (*(void (__fastcall **)(_KPROCESS *, unsigned __int64, _QWORD, signed __int64))(v29 + 128))(
            v33,
            v8 + 48,
            v28,
            v30);
        }
        if ( v32 )
        {
          KiUnstackDetachProcess((__int64)v75, 0LL);
          PsDetachSiloFromCurrentThread(v34);
        }
      }
      if ( (*(_BYTE *)(v8 + 26) & 2) != 0 )
      {
        v42 = ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 3];
        v43 = v8 - v42;
        if ( v8 != v42 )
        {
          while ( 1 )
          {
            v44 = KeGetCurrentThread();
            --v44->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
            v47 = *(PVOID *)v43;
            if ( !*(_QWORD *)v43
              || ((*(_BYTE *)(v8 + 27) & 0x10) != 0 || *(_QWORD *)(v8 + 8) ? (v48 = 0) : (v48 = 1), !v48) )
            {
              ExReleasePushLockEx(v8 + 16, 0LL, v45, v46);
              KeLeaveCriticalRegion();
              goto LABEL_30;
            }
            ObfReferenceObject(*(PVOID *)v43);
            ExReleasePushLockEx(v8 + 16, 0LL, v50, v51);
            KeLeaveCriticalRegion();
            v72 = 0;
            v73 = -60876;
            *(_OWORD *)v71 = 0LL;
            ObpLockDirectoryExclusive((__int64)v71, v47);
            v52 = KeGetCurrentThread();
            --v52->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
            v53 = *(PVOID *)v43;
            if ( *(PVOID *)v43 == v47 && (*(_BYTE *)(v8 + 27) & 0x10) == 0 && !*(_QWORD *)(v8 + 8) )
              break;
            ObpReleaseLookupContext((__int64)v71);
            ExReleasePushLockEx(v8 + 16, 0LL, v60, v61);
            KeLeaveCriticalRegion();
            PsDereferenceSiloContext(v47);
          }
          v55 = 0LL;
          if ( !*(_DWORD *)(v43 + 24) )
          {
            v56 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v69 ^ (unsigned __int64)*(unsigned __int8 *)(v8 + 24)];
            if ( v56 == ObpSymbolicLinkObjectType )
            {
              ObpDeleteSymbolicLinkName(v8 + 48);
              v53 = *(PVOID *)v43;
            }
            v57 = (void *)ObpLookupDirectoryEntryEx(v53, (unsigned __int16 *)(v43 + 8), 0, 0LL, 0, (__int64)v71);
            v55 = v57;
            if ( v56 == ObpDirectoryObjectType )
              ObfReferenceObject(v57);
            else
              v55 = 0LL;
            ObpDeleteDirectoryEntry((__int64)v71);
          }
          ObpReleaseLookupContext((__int64)v71);
          ExReleasePushLockEx(v8 + 16, 0LL, v58, v59);
          KeLeaveCriticalRegion();
          PsDereferenceSiloContext(v47);
          if ( v55 )
          {
            ObpMarkDirectoryTreeTemporary(v55);
            PsDereferenceSiloContext(v55);
          }
        }
      }
LABEL_30:
      _InterlockedDecrement((volatile signed __int32 *)(v29 + 48));
      if ( v66 )
        KiUnstackDetachProcess((__int64)v74, 0LL);
      if ( v26 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)v8, -v26);
      ObfDereferenceObjectWithTag((PVOID)(v8 + 48), 0x6E48624Fu);
      return 0LL;
    }
    if ( (*(_BYTE *)(v8 + 26) & 4) != 0 )
      v39 = v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 7];
    else
      v39 = 0LL;
    if ( (*(_BYTE *)(v8 + 27) & 0x40) != 0 )
    {
      v28 = *(_DWORD *)(v39 + 8) & 0xFFFFFF;
      v40 = *(_DWORD *)(v39 + 8) ^ (*(_DWORD *)(v39 + 8) ^ (*(_DWORD *)(v39 + 8) - 1)) & 0xFFFFFF;
    }
    else
    {
      v49 = **(_DWORD **)v39;
      v39 = *(_QWORD *)v39 + 8LL;
      if ( !v49 )
        goto LABEL_44;
      v38 = BugCheckParameter1;
      while ( 1 )
      {
        v37 = *(unsigned int *)(v39 + 8);
        if ( (*(_DWORD *)(v39 + 8) & 0xFFFFFF) != 0 && *(_QWORD *)v39 == BugCheckParameter1 )
          break;
        v39 += 16LL;
        if ( !--v49 )
          goto LABEL_44;
      }
      v28 = *(_DWORD *)(v39 + 8) & 0xFFFFFF;
      v40 = v37 ^ (v37 ^ (v37 - 1)) & 0xFFFFFF;
    }
    *(_DWORD *)(v39 + 8) = v40;
LABEL_44:
    if ( !*(_BYTE *)(v39 + 11) && (*(_DWORD *)(v39 + 8) & 0xFFFFFF) == 0 )
      *(_QWORD *)v39 = 0LL;
    goto LABEL_47;
  }
  if ( !a5 )
    KeBugCheckEx(0x93u, v9, 0LL, 0LL, 0LL);
  _InterlockedExchangeAdd64(a2, 1uLL);
  _InterlockedOr(v65, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  KeLeaveCriticalRegion();
  if ( v66 )
    KiUnstackDetachProcess((__int64)v74, 0LL);
  if ( KeGetCurrentThread()->ApcStateIndex == 1
    || (NtGlobalFlag & 0x400000) == 0
    && !KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[6]
    && !*(_QWORD *)(a1 + 96) )
  {
    return 3221226037LL;
  }
  return KeRaiseUserException(0xC0000235);
}
