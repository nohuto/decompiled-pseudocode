/*
 * XREFs of ObpIncrementHandleCountEx @ 0x1404B1770
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x140486408 (ObpInsertOrLocateNamedObject.c)
 *     ObpCreateHandle @ 0x1404AE7E0 (ObpCreateHandle.c)
 *     ObCompleteObjectDuplication @ 0x140506594 (ObCompleteObjectDuplication.c)
 *     ObCaptureObjectStateForDuplication @ 0x140506A7C (ObCaptureObjectStateForDuplication.c)
 *     ObInheritObjectHandle @ 0x140507048 (ObInheritObjectHandle.c)
 *     ObDuplicateObject @ 0x140507760 (ObDuplicateObject.c)
 * Callees:
 *     PspChargeQuota @ 0x14003AE80 (PspChargeQuota.c)
 *     PspReturnQuota @ 0x140070050 (PspReturnQuota.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PsGetProcessServerSilo @ 0x1400893E0 (PsGetProcessServerSilo.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     PsDetachSiloFromCurrentThread @ 0x1400AF180 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1400AF1A0 (PsAttachSiloToCurrentThread.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     OBJECT_HEADER_TO_PROCESS_INFO @ 0x14012FF68 (OBJECT_HEADER_TO_PROCESS_INFO.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     SeComputeQuotaInformationSize @ 0x140485560 (SeComputeQuotaInformationSize.c)
 *     PsReturnSharedPoolQuota @ 0x140486060 (PsReturnSharedPoolQuota.c)
 *     ObpDeleteNameCheck @ 0x1404873F0 (ObpDeleteNameCheck.c)
 *     ObpUnlockHandleDatabaseEntry @ 0x14056B3F0 (ObpUnlockHandleDatabaseEntry.c)
 *     ObpLockHandleDataBaseEntry @ 0x14056B470 (ObpLockHandleDataBaseEntry.c)
 */

__int64 __fastcall ObpIncrementHandleCountEx(
        unsigned int a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        unsigned __int8 a5,
        __int16 a6,
        __int64 a7)
{
  __int64 v7; // rbx
  unsigned __int8 v8; // r12
  struct _KPROCESS *v9; // rbp
  unsigned __int64 v10; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rdi
  char v13; // cl
  _DWORD *v14; // r15
  char v15; // al
  char v16; // r13
  __int64 v17; // r14
  unsigned __int64 v18; // rcx
  unsigned int v19; // r10d
  unsigned int v20; // r11d
  unsigned __int64 v21; // rcx
  __int64 v22; // rbp
  int v23; // ebp
  ULONG_PTR v24; // r8
  bool v25; // zf
  unsigned int v26; // r12d
  unsigned __int32 v27; // esi
  __int64 v29; // rdx
  _KPROCESS *v30; // r13
  struct _KTHREAD *v31; // rax
  unsigned int v32; // edx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 ProcessServerSilo; // rax
  int *v38; // rax
  _DWORD *v39; // rdx
  int v40; // ecx
  _DWORD *i; // rax
  char v42; // r8
  _QWORD *v43; // rax
  __int64 *v44; // rbx
  char *v45; // rcx
  struct _KTHREAD *v46; // rax
  __int64 **v47; // rax
  char v48; // [rsp+40h] [rbp-C8h]
  unsigned int v49; // [rsp+44h] [rbp-C4h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+48h] [rbp-C0h]
  unsigned int v51; // [rsp+50h] [rbp-B8h]
  unsigned int v52; // [rsp+54h] [rbp-B4h]
  unsigned __int64 v53; // [rsp+58h] [rbp-B0h]
  int v54; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v55; // [rsp+68h] [rbp-A0h]
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-98h]
  __int64 v57; // [rsp+78h] [rbp-90h]
  __int64 v58; // [rsp+80h] [rbp-88h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v59; // [rsp+88h] [rbp-80h] BYREF

  v7 = a4 - 48;
  v55 = a7;
  v52 = a1;
  v8 = 1;
  v53 = (unsigned __int8)((unsigned __int16)(a4 - 48) >> 8);
  v9 = (struct _KPROCESS *)a3;
  v58 = a4;
  v10 = *(unsigned __int8 *)(a4 - 48 + 24) ^ (unsigned __int8)ObHeaderCookie ^ v53;
  BugCheckParameter1 = a3;
  if ( (a6 & 0x400) == 0 )
    v8 = a5;
  v57 = a2;
  CurrentThread = KeGetCurrentThread();
  v12 = ObTypeIndexTable[v10];
  --CurrentThread->KernelApcDisable;
  BugCheckParameter2 = v7 + 16;
  ExAcquirePushLockExclusiveEx(v7 + 16, 0LL);
  v13 = *(_BYTE *)(v7 + 27);
  v14 = 0LL;
  v15 = *(_BYTE *)(v7 + 26);
  v16 = v13 & 1;
  v49 = 0;
  if ( (v15 & 8) != 0 )
    v17 = v7 - ObpInfoMaskToOffset[v15 & 0xF];
  else
    v17 = 0LL;
  if ( v16 )
  {
    *(_BYTE *)(v7 + 27) = v13 & 0xFE;
    if ( v17 )
    {
      v18 = v55;
      v19 = *(_DWORD *)v17;
      v20 = *(_DWORD *)(v17 + 4);
      v51 = *(_DWORD *)v17;
      LODWORD(v53) = v20;
      if ( v55 || *(_QWORD *)(v7 + 40) && (v18 = *(_QWORD *)(v7 + 40) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        v23 = SeComputeQuotaInformationSize(v18, &v49);
        if ( v23 < 0 )
          goto LABEL_97;
        v32 = v49;
        v9 = (struct _KPROCESS *)BugCheckParameter1;
        if ( v49 )
        {
          if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
          {
            v35 = 1LL;
          }
          else
          {
            v33 = *(_QWORD *)(BugCheckParameter1 + 1040);
            v55 = v33;
            v34 = PspChargeQuota(v33, 0LL, 1, v49);
            v19 = v51;
            v20 = v53;
            if ( v34 < 0 )
            {
              v35 = 0LL;
            }
            else
            {
              v35 = v55;
              _InterlockedIncrement((volatile signed __int32 *)(v55 + 512));
            }
            v32 = v49;
          }
          *(_QWORD *)(v17 + 16) = v35;
          if ( !v35 )
            goto LABEL_89;
        }
        *(_DWORD *)(v17 + 8) = v32;
      }
    }
    else
    {
      v49 = 0;
      v36 = ObTypeIndexTable[*(unsigned __int8 *)(v7 + 24) ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)(unsigned __int8)v53];
      v19 = *(_DWORD *)(v36 + 104);
      v20 = *(_DWORD *)(v36 + 108);
      v51 = v19;
    }
    v21 = v20;
    v55 = v20;
    if ( v9 == PsInitialSystemProcess )
    {
      v22 = 1LL;
    }
    else
    {
      v22 = v9[1].ActiveProcessors.Bitmap[4];
      if ( !v19 )
      {
LABEL_13:
        if ( v21 && (int)PspChargeQuota(v22, 0LL, 0, v21) < 0 )
        {
          if ( v51 )
            PspReturnQuota((char *)v22, 0LL, 1u, v51);
          v22 = 0LL;
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)(v22 + 512));
        }
        goto LABEL_16;
      }
      if ( (int)PspChargeQuota(v22, 0LL, 1, v19) >= 0 )
      {
        v21 = v55;
        goto LABEL_13;
      }
      v22 = 0LL;
    }
LABEL_16:
    *(_QWORD *)(v7 + 32) = v22;
    if ( v22 )
      goto LABEL_17;
    if ( v17 )
    {
      v45 = *(char **)(v17 + 16);
      if ( v45 )
        PsReturnSharedPoolQuota(v45, v49, 0LL);
    }
LABEL_89:
    v23 = -1073741756;
    goto LABEL_97;
  }
LABEL_17:
  v23 = 0;
  if ( (a6 & 0x20) != 0 )
  {
    v42 = *(_BYTE *)(v7 + 27) & 8;
    if ( v42 == 0 || (a6 & 2) != 0 )
    {
      v23 = -1073741811;
      goto LABEL_97;
    }
    if ( (!v42 || !*(_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v7)) && *(_QWORD *)(v7 + 8) )
      goto LABEL_91;
    if ( v42 )
    {
      v43 = (_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v7);
      v24 = BugCheckParameter1;
      if ( *v43 && *v43 != BugCheckParameter1 )
        goto LABEL_91;
    }
    else
    {
      v24 = BugCheckParameter1;
    }
    *(_QWORD *)(v7 - ObpInfoMaskToOffset[*(_BYTE *)(v7 + 26) & 0x1F]) = v24;
  }
  else
  {
    if ( (*(_BYTE *)(v7 + 27) & 8) != 0 && *(_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v7) )
      goto LABEL_91;
    v24 = BugCheckParameter1;
  }
  if ( v8 && (*(_BYTE *)(v7 + 27) & 4) != 0 )
  {
LABEL_91:
    v23 = -1073741790;
    goto LABEL_97;
  }
  if ( !*(_QWORD *)(v7 + 8)
    && !v16
    && (*(_BYTE *)(v12 + 66) & 0x10) != 0
    && !*(_QWORD *)(v12 + 120)
    && *(_QWORD *)(v12 + 128) )
  {
    v23 = -1073741823;
    goto LABEL_97;
  }
  v25 = (*(_BYTE *)(v12 + 66) & 0x10) == 0;
  v54 = 0;
  if ( !v25 )
  {
    v23 = ObpLockHandleDataBaseEntry(v7, BugCheckParameter1, &v54);
    if ( v23 >= 0 )
    {
      v24 = BugCheckParameter1;
      goto LABEL_25;
    }
LABEL_97:
    ExReleasePushLockEx(BugCheckParameter2, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v23;
  }
LABEL_25:
  _InterlockedIncrement64((volatile signed __int64 *)(v7 + 8));
  if ( !*(_QWORD *)(v12 + 120) )
  {
    v26 = v52;
LABEL_27:
    if ( (*(_BYTE *)(v12 + 66) & 0x10) != 0 )
    {
      v29 = v7 - ObpInfoMaskToOffset[*(_BYTE *)(v7 + 26) & 7];
      if ( (*(_BYTE *)(v7 + 27) & 0x40) != 0 )
      {
        --*(_BYTE *)(v29 + 11);
        *(_DWORD *)(v29 + 8) ^= (*(_DWORD *)(v29 + 8) ^ (*(_DWORD *)(v29 + 8) + 1)) & 0xFFFFFF;
      }
      else
      {
        v38 = *(int **)v29;
        v39 = 0LL;
        v40 = *v38;
        for ( i = v38 + 2; v40; --v40 )
        {
          if ( *(_QWORD *)i == v24 )
          {
            if ( !v39 )
              v39 = i;
            v14 = i;
            if ( *((_BYTE *)i + 11) != 0xFF )
              break;
          }
          i += 4;
        }
        v39[2] ^= (v39[2] ^ (v39[2] + 1)) & 0xFFFFFF;
        --*((_BYTE *)v14 + 11);
      }
    }
    ExReleasePushLockEx(v7 + 16, 0LL);
    KeLeaveCriticalRegion();
    if ( !v26 && (*(_BYTE *)(v7 + 26) & 1) != 0 )
    {
      v44 = (__int64 *)(v7 - 32);
      if ( v44 )
      {
        v46 = KeGetCurrentThread();
        --v46->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(v12 + 184, 0LL);
        v47 = *(__int64 ***)(v12 + 8);
        if ( *v47 != (__int64 *)v12 )
          __fastfail(3u);
        *v44 = v12;
        v44[1] = (__int64)v47;
        *v47 = v44;
        *(_QWORD *)(v12 + 8) = v44;
        ExReleasePushLockEx(v12 + 184, 0LL);
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      }
    }
    v27 = _InterlockedIncrement((volatile signed __int32 *)(v12 + 48));
    if ( v27 > *(_DWORD *)(v12 + 56) )
      *(_DWORD *)(v12 + 56) = v27;
    return (unsigned int)v23;
  }
  ExReleasePushLockEx(v7 + 16, 0LL);
  KeLeaveCriticalRegion();
  v30 = (_KPROCESS *)BugCheckParameter1;
  v26 = v52;
  v48 = 0;
  v53 = 0LL;
  if ( (_KPROCESS *)BugCheckParameter1 != KeGetCurrentThread()->ApcState.Process && v52 != 3 )
  {
    v48 = 1;
    ProcessServerSilo = PsGetProcessServerSilo(BugCheckParameter1);
    v53 = PsAttachSiloToCurrentThread(ProcessServerSilo);
    KiStackAttachProcess(v30, 0, (__int64)&v59);
  }
  v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _KPROCESS *, __int64, __int64, int))(v12 + 120))(
          v26,
          a5,
          v30,
          v58,
          v57,
          v54);
  if ( v48 )
  {
    KiUnstackDetachProcess(&v59, 0LL);
    PsDetachSiloFromCurrentThread(v53);
  }
  v31 = KeGetCurrentThread();
  --v31->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v7 + 16, 0LL);
  if ( v23 >= 0 )
  {
    v24 = (ULONG_PTR)v30;
    goto LABEL_27;
  }
  if ( (*(_BYTE *)(v12 + 66) & 0x10) != 0 )
    ObpUnlockHandleDatabaseEntry(v7, v30);
  _InterlockedDecrement64((volatile signed __int64 *)(v7 + 8));
  ExReleasePushLockEx(v7 + 16, 0LL);
  KeLeaveCriticalRegion();
  ObpDeleteNameCheck(v7);
  return (unsigned int)v23;
}
