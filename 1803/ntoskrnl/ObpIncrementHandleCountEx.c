/*
 * XREFs of ObpIncrementHandleCountEx @ 0x1405AB080
 * Callers:
 *     ObDuplicateObject @ 0x1404B6D20 (ObDuplicateObject.c)
 *     ObpInsertOrLocateNamedObject @ 0x1404D4B8C (ObpInsertOrLocateNamedObject.c)
 *     ObInheritObjectHandle @ 0x14055384C (ObInheritObjectHandle.c)
 *     ObCompleteObjectDuplication @ 0x14055DE6C (ObCompleteObjectDuplication.c)
 *     ObCaptureObjectStateForDuplication @ 0x140560818 (ObCaptureObjectStateForDuplication.c)
 *     ObpCreateHandle @ 0x1405AB660 (ObpCreateHandle.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     PsGetProcessServerSilo @ 0x14006CFF0 (PsGetProcessServerSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x140073540 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140073560 (PsAttachSiloToCurrentThread.c)
 *     OBJECT_HEADER_TO_PROCESS_INFO @ 0x1400D0CE8 (OBJECT_HEADER_TO_PROCESS_INFO.c)
 *     PspReturnQuota @ 0x1400F8E70 (PspReturnQuota.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     PspChargeQuota @ 0x1401049D0 (PspChargeQuota.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     SeComputeQuotaInformationSize @ 0x1404EBE30 (SeComputeQuotaInformationSize.c)
 *     PsReturnSharedPoolQuota @ 0x1404EBEB8 (PsReturnSharedPoolQuota.c)
 *     ObpDeleteNameCheck @ 0x140519A30 (ObpDeleteNameCheck.c)
 *     ObpLockHandleDataBaseEntry @ 0x140554370 (ObpLockHandleDataBaseEntry.c)
 *     ObpUnlockHandleDatabaseEntry @ 0x1405C0CC0 (ObpUnlockHandleDatabaseEntry.c)
 */

__int64 __fastcall ObpIncrementHandleCountEx(
        unsigned int a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        unsigned __int8 a5,
        __int16 a6,
        unsigned __int64 a7)
{
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  unsigned __int8 v9; // r12
  unsigned __int64 v10; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rdi
  __int64 v13; // r8
  ULONG_PTR v14; // r9
  char v15; // cl
  _DWORD *v16; // r15
  char v17; // al
  char v18; // r13
  __int64 v19; // r14
  unsigned int v20; // r11d
  unsigned int v21; // eax
  __int64 v22; // rbp
  unsigned __int64 v23; // rcx
  __int64 v24; // rbp
  int v25; // ebp
  bool v26; // zf
  unsigned int v27; // r12d
  _KPROCESS *v28; // r13
  unsigned __int32 v29; // esi
  __int64 v31; // rdx
  struct _KTHREAD *v32; // rax
  unsigned int v33; // edx
  __int64 v34; // rbp
  int v35; // eax
  __int64 ProcessServerSilo; // rax
  __int64 v37; // rax
  int *v38; // rax
  _DWORD *v39; // rdx
  int v40; // ecx
  _DWORD *i; // rax
  _QWORD *v42; // rax
  char *v43; // rcx
  __int64 *v44; // rbx
  struct _KTHREAD *v45; // rax
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 **v48; // rax
  char v49; // [rsp+40h] [rbp-C8h]
  unsigned int v50; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v51; // [rsp+48h] [rbp-C0h]
  ULONG_PTR BugCheckParameter1; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v53; // [rsp+58h] [rbp-B0h]
  unsigned int v54; // [rsp+60h] [rbp-A8h]
  int v55; // [rsp+64h] [rbp-A4h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-A0h]
  __int64 v57; // [rsp+70h] [rbp-98h]
  __int64 v58; // [rsp+78h] [rbp-90h]
  _BYTE v59[48]; // [rsp+80h] [rbp-88h] BYREF

  v7 = a7;
  v8 = a4 - 48;
  v57 = a2;
  v58 = a4;
  v9 = 1;
  v53 = (unsigned __int8)((unsigned __int16)(a4 - 48) >> 8);
  BugCheckParameter1 = a3;
  v10 = *(unsigned __int8 *)(a4 - 48 + 24) ^ (unsigned __int8)ObHeaderCookie ^ v53;
  v54 = a1;
  if ( (a6 & 0x400) == 0 )
    v9 = a5;
  CurrentThread = KeGetCurrentThread();
  v12 = ObTypeIndexTable[v10];
  --CurrentThread->KernelApcDisable;
  BugCheckParameter2 = v8 + 16;
  ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
  v15 = *(_BYTE *)(v8 + 27);
  v16 = 0LL;
  v17 = *(_BYTE *)(v8 + 26);
  v18 = v15 & 1;
  v50 = 0;
  if ( (v17 & 8) != 0 )
    v19 = v8 - ObpInfoMaskToOffset[v17 & 0xF];
  else
    v19 = 0LL;
  if ( v18 )
  {
    *(_BYTE *)(v8 + 27) = v15 & 0xFE;
    if ( v19 )
    {
      v20 = *(_DWORD *)v19;
      v21 = *(_DWORD *)(v19 + 4);
      v51 = *(_DWORD *)v19;
      LODWORD(v53) = v21;
      if ( a7 || (v22 = *(_QWORD *)(v8 + 40)) != 0 && (v7 = v22 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        v25 = SeComputeQuotaInformationSize(v7, &v50);
        if ( v25 < 0 )
        {
LABEL_94:
          ExReleasePushLockEx(BugCheckParameter2, 0LL, v13, v14);
          KeLeaveCriticalRegion();
          return (unsigned int)v25;
        }
        v33 = v50;
        if ( v50 )
        {
          v14 = BugCheckParameter1;
          if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
          {
            v34 = 1LL;
          }
          else
          {
            v34 = *(_QWORD *)(BugCheckParameter1 + 1040);
            v35 = PspChargeQuota(v34, 0LL, 1, v50);
            v20 = v51;
            if ( v35 < 0 )
              v34 = 0LL;
            else
              _InterlockedIncrement((volatile signed __int32 *)(v34 + 512));
            v33 = v50;
          }
          *(_QWORD *)(v19 + 16) = v34;
          if ( !v34 )
            goto LABEL_88;
        }
        v21 = v53;
        *(_DWORD *)(v19 + 8) = v33;
      }
    }
    else
    {
      v50 = 0;
      v37 = ObTypeIndexTable[*(unsigned __int8 *)(v8 + 24) ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)(unsigned __int8)v53];
      v20 = *(_DWORD *)(v37 + 104);
      v21 = *(_DWORD *)(v37 + 108);
      v51 = v20;
    }
    v23 = v21;
    v53 = v21;
    if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
    {
      v24 = 1LL;
    }
    else
    {
      v24 = *(_QWORD *)(BugCheckParameter1 + 1040);
      if ( !v20 )
      {
LABEL_13:
        if ( v23 && (int)PspChargeQuota(v24, 0LL, 0, v23) < 0 )
        {
          v14 = v51;
          if ( v51 )
            PspReturnQuota((char *)v24, 0LL, 1, v51);
          v24 = 0LL;
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)(v24 + 512));
        }
        goto LABEL_16;
      }
      if ( (int)PspChargeQuota(v24, 0LL, 1, v20) >= 0 )
      {
        v23 = v53;
        goto LABEL_13;
      }
      v24 = 0LL;
    }
LABEL_16:
    *(_QWORD *)(v8 + 32) = v24;
    if ( v24 )
      goto LABEL_17;
    if ( v19 )
    {
      v43 = *(char **)(v19 + 16);
      if ( v43 )
        PsReturnSharedPoolQuota(v43, v50, 0LL);
    }
LABEL_88:
    v25 = -1073741756;
    goto LABEL_94;
  }
LABEL_17:
  v13 = *(unsigned __int8 *)(v8 + 27);
  v25 = 0;
  LOBYTE(v13) = v13 & 8;
  if ( (a6 & 0x20) != 0 )
  {
    if ( (_BYTE)v13 == 0 || (a6 & 2) != 0 )
    {
      v25 = -1073741811;
      goto LABEL_94;
    }
    if ( (!(_BYTE)v13 || !*(_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v8)) && *(_QWORD *)(v8 + 8) )
      goto LABEL_78;
    if ( (_BYTE)v13 )
    {
      v42 = (_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v8);
      v14 = BugCheckParameter1;
      if ( *v42 && *v42 != BugCheckParameter1 )
        goto LABEL_78;
    }
    else
    {
      v14 = BugCheckParameter1;
    }
    *(_QWORD *)(v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 0x1F]) = v14;
  }
  else
  {
    if ( (_BYTE)v13 && *(_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v8) )
      goto LABEL_78;
    v14 = BugCheckParameter1;
  }
  if ( v9 && (*(_BYTE *)(v8 + 27) & 4) != 0 )
  {
LABEL_78:
    v25 = -1073741790;
    goto LABEL_94;
  }
  if ( !*(_QWORD *)(v8 + 8)
    && !v18
    && (*(_BYTE *)(v12 + 66) & 0x10) != 0
    && !*(_QWORD *)(v12 + 120)
    && *(_QWORD *)(v12 + 128) )
  {
    v25 = -1073741823;
    goto LABEL_94;
  }
  v26 = (*(_BYTE *)(v12 + 66) & 0x10) == 0;
  v55 = 0;
  if ( !v26 )
  {
    v25 = ObpLockHandleDataBaseEntry(v8, (int *)v14, &v55);
    if ( v25 < 0 )
      goto LABEL_94;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v8 + 8));
  if ( !*(_QWORD *)(v12 + 120) )
  {
    v27 = v54;
    v28 = (_KPROCESS *)BugCheckParameter1;
LABEL_27:
    if ( (*(_BYTE *)(v12 + 66) & 0x10) != 0 )
    {
      v31 = v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 7];
      if ( (*(_BYTE *)(v8 + 27) & 0x40) != 0 )
      {
        --*(_BYTE *)(v31 + 11);
        *(_DWORD *)(v31 + 8) ^= (*(_DWORD *)(v31 + 8) ^ (*(_DWORD *)(v31 + 8) + 1)) & 0xFFFFFF;
      }
      else
      {
        v38 = *(int **)v31;
        v39 = 0LL;
        v40 = *v38;
        for ( i = v38 + 2; v40; --v40 )
        {
          if ( *(_KPROCESS **)i == v28 )
          {
            if ( !v39 )
              v39 = i;
            v16 = i;
            if ( *((_BYTE *)i + 11) != 0xFF )
              break;
          }
          i += 4;
        }
        v39[2] ^= (v39[2] ^ (v39[2] + 1)) & 0xFFFFFF;
        --*((_BYTE *)v16 + 11);
      }
    }
    ExReleasePushLockEx(v8 + 16, 0LL, v13, v14);
    KeLeaveCriticalRegion();
    if ( !v27 && (*(_BYTE *)(v8 + 26) & 1) != 0 )
    {
      v44 = (__int64 *)(v8 - 32);
      if ( v44 )
      {
        v45 = KeGetCurrentThread();
        --v45->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(v12 + 184, 0LL);
        v48 = *(__int64 ***)(v12 + 8);
        if ( *v48 != (__int64 *)v12 )
          __fastfail(3u);
        *v44 = v12;
        v44[1] = (__int64)v48;
        *v48 = v44;
        *(_QWORD *)(v12 + 8) = v44;
        ExReleasePushLockEx(v12 + 184, 0LL, v46, v47);
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      }
    }
    v29 = _InterlockedIncrement((volatile signed __int32 *)(v12 + 48));
    if ( v29 > *(_DWORD *)(v12 + 56) )
      *(_DWORD *)(v12 + 56) = v29;
    return (unsigned int)v25;
  }
  ExReleasePushLockEx(v8 + 16, 0LL, v13, v14);
  KeLeaveCriticalRegion();
  v28 = (_KPROCESS *)BugCheckParameter1;
  v27 = v54;
  v49 = 0;
  v53 = 0LL;
  if ( (_KPROCESS *)BugCheckParameter1 != KeGetCurrentThread()->ApcState.Process && v54 != 3 )
  {
    v49 = 1;
    ProcessServerSilo = PsGetProcessServerSilo(BugCheckParameter1);
    v53 = PsAttachSiloToCurrentThread(ProcessServerSilo);
    KiStackAttachProcess(v28, 0, (__int64)v59);
  }
  v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _KPROCESS *, __int64, __int64, int))(v12 + 120))(
          v27,
          a5,
          v28,
          v58,
          v57,
          v55);
  if ( v49 )
  {
    KiUnstackDetachProcess((__int64)v59, 0LL);
    PsDetachSiloFromCurrentThread(v53);
  }
  v32 = KeGetCurrentThread();
  --v32->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
  if ( v25 >= 0 )
    goto LABEL_27;
  if ( (*(_BYTE *)(v12 + 66) & 0x10) != 0 )
    ObpUnlockHandleDatabaseEntry(v8, v28);
  _InterlockedDecrement64((volatile signed __int64 *)(v8 + 8));
  ExReleasePushLockEx(v8 + 16, 0LL, v13, v14);
  KeLeaveCriticalRegion();
  ObpDeleteNameCheck(v8);
  return (unsigned int)v25;
}
