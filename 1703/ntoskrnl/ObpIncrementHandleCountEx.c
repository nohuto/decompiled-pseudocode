/*
 * XREFs of ObpIncrementHandleCountEx @ 0x1405311B0
 * Callers:
 *     ObInheritObjectHandle @ 0x14042BE2C (ObInheritObjectHandle.c)
 *     ObpInsertOrLocateNamedObject @ 0x1404F3FB0 (ObpInsertOrLocateNamedObject.c)
 *     ObCompleteObjectDuplication @ 0x140516CFC (ObCompleteObjectDuplication.c)
 *     ObCaptureObjectStateForDuplication @ 0x1405171E0 (ObCaptureObjectStateForDuplication.c)
 *     ObDuplicateObject @ 0x140517550 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x14052CD90 (ObpCreateHandle.c)
 * Callees:
 *     OBJECT_HEADER_TO_PROCESS_INFO @ 0x14003AB48 (OBJECT_HEADER_TO_PROCESS_INFO.c)
 *     PsDetachSiloFromCurrentThread @ 0x14006F590 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14006F5B0 (PsAttachSiloToCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140085020 (PsGetProcessServerSilo.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     PspChargeQuota @ 0x1400D0F50 (PspChargeQuota.c)
 *     PspReturnQuota @ 0x1400DC8F0 (PspReturnQuota.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ObpUnlockHandleDatabaseEntry @ 0x14041F4E8 (ObpUnlockHandleDatabaseEntry.c)
 *     ObpLockHandleDataBaseEntry @ 0x14042C280 (ObpLockHandleDataBaseEntry.c)
 *     SeComputeQuotaInformationSize @ 0x1404F5020 (SeComputeQuotaInformationSize.c)
 *     PsReturnSharedPoolQuota @ 0x1404F5AC0 (PsReturnSharedPoolQuota.c)
 *     ObpDeleteNameCheck @ 0x1404F5F80 (ObpDeleteNameCheck.c)
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
  __int64 v7; // rsi
  __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned __int8 v11; // r14
  struct _KTHREAD *CurrentThread; // rax
  char v13; // dl
  char v14; // al
  _DWORD *v15; // r15
  __int64 v16; // r12
  unsigned __int64 v17; // rcx
  unsigned int v18; // r11d
  unsigned int v19; // eax
  unsigned __int64 v20; // rcx
  __int64 v21; // rbp
  int v22; // ebp
  bool v23; // zf
  unsigned __int32 v24; // ebx
  __int64 v26; // rdx
  char v27; // r12
  unsigned int v28; // ebp
  __int64 v29; // r13
  struct _KTHREAD *v30; // rax
  unsigned int v31; // r8d
  __int64 v32; // rbp
  int v33; // eax
  __int64 ProcessServerSilo; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  int *v37; // rax
  _DWORD *v38; // rdx
  int v39; // ecx
  _DWORD *i; // rax
  char v41; // r8
  __int64 v42; // rcx
  __int64 *v43; // rsi
  char *v44; // rcx
  struct _KTHREAD *v45; // rax
  __int64 **v46; // rax
  bool v47; // [rsp+40h] [rbp-C8h]
  unsigned int v48; // [rsp+44h] [rbp-C4h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+48h] [rbp-C0h]
  unsigned int v50; // [rsp+50h] [rbp-B8h]
  unsigned int v51; // [rsp+54h] [rbp-B4h]
  int v52; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v53; // [rsp+5Ch] [rbp-ACh]
  __int64 v54; // [rsp+60h] [rbp-A8h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-A0h]
  __int64 v56; // [rsp+70h] [rbp-98h]
  __int64 v57; // [rsp+78h] [rbp-90h]
  $5BC46E0569261879018906DEC3127961 v58; // [rsp+80h] [rbp-88h] BYREF

  v7 = a4 - 48;
  v54 = a7;
  v56 = a2;
  v8 = (unsigned __int8)((unsigned __int16)(a4 - 48) >> 8);
  v9 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(a4 - 48 + 24);
  v57 = a4;
  BugCheckParameter1 = a3;
  v51 = a1;
  v10 = ObTypeIndexTable[v8 ^ v9];
  if ( (a6 & 0x400) != 0 )
    v11 = 1;
  else
    v11 = a5;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  BugCheckParameter2 = v7 + 16;
  ExAcquirePushLockExclusiveEx(v7 + 16, 0LL);
  v13 = *(_BYTE *)(v7 + 27);
  v14 = *(_BYTE *)(v7 + 26);
  v47 = (v13 & 1) != 0;
  v15 = 0LL;
  v48 = 0;
  if ( (v14 & 8) != 0 )
    v16 = v7 - ObpInfoMaskToOffset[v14 & 0xF];
  else
    v16 = 0LL;
  if ( (v13 & 1) != 0 )
  {
    *(_BYTE *)(v7 + 27) = v13 & 0xFE;
    if ( v16 )
    {
      v17 = v54;
      v18 = *(_DWORD *)v16;
      v19 = *(_DWORD *)(v16 + 4);
      v50 = *(_DWORD *)v16;
      v53 = v19;
      if ( v54 || *(_QWORD *)(v7 + 40) && (v17 = *(_QWORD *)(v7 + 40) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        v22 = SeComputeQuotaInformationSize(v17, &v48);
        if ( v22 < 0 )
        {
LABEL_94:
          ExReleasePushLockEx(BugCheckParameter2, 0LL);
          KeLeaveCriticalRegion();
          return (unsigned int)v22;
        }
        v31 = v48;
        if ( v48 )
        {
          if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
          {
            v32 = 1LL;
          }
          else
          {
            v32 = *(_QWORD *)(BugCheckParameter1 + 1040);
            v33 = PspChargeQuota(v32, 0LL, 1, v48);
            v18 = v50;
            if ( v33 < 0 )
              v32 = 0LL;
            else
              _InterlockedIncrement((volatile signed __int32 *)(v32 + 512));
            v31 = v48;
          }
          *(_QWORD *)(v16 + 16) = v32;
          if ( !v32 )
          {
LABEL_88:
            v22 = -1073741756;
            goto LABEL_94;
          }
        }
        v19 = v53;
        *(_DWORD *)(v16 + 8) = v31;
      }
    }
    else
    {
      v35 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(v7 + 24);
      v48 = 0;
      v36 = ObTypeIndexTable[v8 ^ v35];
      v18 = *(_DWORD *)(v36 + 104);
      v19 = *(_DWORD *)(v36 + 108);
      v50 = v18;
    }
    v20 = v19;
    v54 = v19;
    if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
    {
      v21 = 1LL;
    }
    else
    {
      v21 = *(_QWORD *)(BugCheckParameter1 + 1040);
      if ( !v18 )
      {
LABEL_13:
        if ( v20 && (int)PspChargeQuota(v21, 0LL, 0, v20) < 0 )
        {
          if ( v50 )
            PspReturnQuota((char *)v21, 0LL, 1, v50);
          v21 = 0LL;
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)(v21 + 512));
        }
        goto LABEL_16;
      }
      if ( (int)PspChargeQuota(v21, 0LL, 1, v18) >= 0 )
      {
        v20 = v54;
        goto LABEL_13;
      }
      v21 = 0LL;
    }
LABEL_16:
    *(_QWORD *)(v7 + 32) = v21;
    if ( v21 )
      goto LABEL_17;
    if ( v16 )
    {
      v44 = *(char **)(v16 + 16);
      if ( v44 )
        PsReturnSharedPoolQuota(v44, v48, 0LL);
    }
    goto LABEL_88;
  }
LABEL_17:
  v22 = 0;
  if ( (a6 & 0x20) != 0 )
  {
    v41 = *(_BYTE *)(v7 + 27) & 8;
    if ( v41 == 0 || (a6 & 2) != 0 )
    {
      v22 = -1073741811;
      goto LABEL_94;
    }
    if ( (!v41 || !*(_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v7)) && *(_QWORD *)(v7 + 8) )
      goto LABEL_90;
    if ( v41 )
    {
      v42 = *(_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v7);
      if ( v42 )
      {
        if ( v42 != BugCheckParameter1 )
          goto LABEL_90;
      }
    }
    *(_QWORD *)(v7 - ObpInfoMaskToOffset[*(_BYTE *)(v7 + 26) & 0x1F]) = BugCheckParameter1;
  }
  else if ( (*(_BYTE *)(v7 + 27) & 8) != 0 && *(_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v7) )
  {
    goto LABEL_90;
  }
  if ( v11 && (*(_BYTE *)(v7 + 27) & 4) != 0 )
  {
LABEL_90:
    v22 = -1073741790;
    goto LABEL_94;
  }
  if ( !v47
    && !*(_QWORD *)(v7 + 8)
    && (*(_BYTE *)(v10 + 66) & 0x10) != 0
    && !*(_QWORD *)(v10 + 120)
    && *(_QWORD *)(v10 + 128) )
  {
    v22 = -1073741823;
    goto LABEL_94;
  }
  v23 = (*(_BYTE *)(v10 + 66) & 0x10) == 0;
  v52 = 0;
  if ( !v23 )
  {
    v22 = ObpLockHandleDataBaseEntry(v7, (int *)BugCheckParameter1, &v52);
    if ( v22 < 0 )
      goto LABEL_94;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v7 + 8));
  if ( !*(_QWORD *)(v10 + 120) )
    goto LABEL_24;
  ExReleasePushLockEx(v7 + 16, 0LL);
  KeLeaveCriticalRegion();
  v27 = 0;
  v28 = v51;
  v29 = 0LL;
  if ( (_KPROCESS *)BugCheckParameter1 != KeGetCurrentThread()->ApcState.Process && v51 != 3 )
  {
    v27 = 1;
    ProcessServerSilo = PsGetProcessServerSilo(BugCheckParameter1);
    v29 = PsAttachSiloToCurrentThread(ProcessServerSilo);
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v58);
  }
  v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, __int64, __int64, int))(v10 + 120))(
          v28,
          a5,
          BugCheckParameter1,
          v57,
          v56,
          v52);
  if ( v27 )
  {
    KiUnstackDetachProcess(&v58, 0LL);
    PsDetachSiloFromCurrentThread(v29);
  }
  v30 = KeGetCurrentThread();
  --v30->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v7 + 16, 0LL);
  if ( v22 < 0 )
  {
    if ( (*(_BYTE *)(v10 + 66) & 0x10) != 0 )
      ObpUnlockHandleDatabaseEntry(v7);
    _InterlockedDecrement64((volatile signed __int64 *)(v7 + 8));
    ExReleasePushLockEx(v7 + 16, 0LL);
    KeLeaveCriticalRegion();
    ObpDeleteNameCheck(v7);
  }
  else
  {
LABEL_24:
    if ( (*(_BYTE *)(v10 + 66) & 0x10) != 0 )
    {
      v26 = v7 - ObpInfoMaskToOffset[*(_BYTE *)(v7 + 26) & 7];
      if ( (*(_BYTE *)(v7 + 27) & 0x40) != 0 )
      {
        --*(_BYTE *)(v26 + 11);
        *(_DWORD *)(v26 + 8) ^= (*(_DWORD *)(v26 + 8) ^ (*(_DWORD *)(v26 + 8) + 1)) & 0xFFFFFF;
      }
      else
      {
        v37 = *(int **)v26;
        v38 = 0LL;
        v39 = *v37;
        for ( i = v37 + 2; v39; --v39 )
        {
          if ( *(_QWORD *)i == BugCheckParameter1 )
          {
            if ( !v38 )
              v38 = i;
            v15 = i;
            if ( *((_BYTE *)i + 11) != 0xFF )
              break;
          }
          i += 4;
        }
        v38[2] ^= (v38[2] ^ (v38[2] + 1)) & 0xFFFFFF;
        --*((_BYTE *)v15 + 11);
      }
    }
    ExReleasePushLockEx(v7 + 16, 0LL);
    KeLeaveCriticalRegion();
    if ( !v51 && (*(_BYTE *)(v7 + 26) & 1) != 0 )
    {
      v43 = (__int64 *)(v7 - 32);
      if ( v43 )
      {
        v45 = KeGetCurrentThread();
        --v45->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(v10 + 184, 0LL);
        v46 = *(__int64 ***)(v10 + 8);
        if ( *v46 != (__int64 *)v10 )
          __fastfail(3u);
        *v43 = v10;
        v43[1] = (__int64)v46;
        *v46 = v43;
        *(_QWORD *)(v10 + 8) = v43;
        ExReleasePushLockEx(v10 + 184, 0LL);
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      }
    }
    v24 = _InterlockedIncrement((volatile signed __int32 *)(v10 + 48));
    if ( v24 > *(_DWORD *)(v10 + 56) )
      *(_DWORD *)(v10 + 56) = v24;
  }
  return (unsigned int)v22;
}
