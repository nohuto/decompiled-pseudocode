/*
 * XREFs of ObpFreeObject @ 0x140520A70
 * Callers:
 *     ObpRemoveObjectRoutine @ 0x140520990 (ObpRemoveObjectRoutine.c)
 * Callees:
 *     PspReturnResourceQuota @ 0x14002C5F0 (PspReturnResourceQuota.c)
 *     PspReturnQuota @ 0x1400DC8F0 (PspReturnQuota.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PspDereferenceQuotaBlock @ 0x1404F5B0C (PspDereferenceQuotaBlock.c)
 *     SeReleaseSecurityDescriptor @ 0x14050B570 (SeReleaseSecurityDescriptor.c)
 *     PspRemoveQuotaBlock @ 0x1406DF914 (PspRemoveQuotaBlock.c)
 */

void __fastcall ObpFreeObject(unsigned __int64 a1)
{
  char v1; // al
  _QWORD *v3; // r15
  PVOID *v4; // r12
  int *v5; // rsi
  unsigned int *v6; // r14
  unsigned __int64 v7; // rdi
  __int64 v8; // rbp
  volatile signed __int32 *v9; // r15
  unsigned int v10; // r12d
  unsigned int v11; // r13d
  __int64 v12; // rsi
  ULONG v13; // edx
  __int64 v14; // rax
  void *v15; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  _SLIST_ENTRY *v17; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  void *v19; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rax
  signed int v23; // r12d
  char *v24; // r13
  __int64 v25; // r15
  __int64 v26; // r8
  BOOL v27; // r9d
  __int64 v28; // r8
  PVOID *v29; // [rsp+60h] [rbp+8h]
  unsigned __int64 v30; // [rsp+68h] [rbp+10h]
  PVOID *v31; // [rsp+70h] [rbp+18h]

  v1 = *(_BYTE *)(a1 + 26);
  if ( (v1 & 1) != 0 )
    v3 = (_QWORD *)(a1 - 32);
  else
    v3 = 0LL;
  if ( (v1 & 2) != 0 )
    v30 = a1 - ObpInfoMaskToOffset[v1 & 3];
  else
    v30 = 0LL;
  if ( (v1 & 4) != 0 )
    v4 = (PVOID *)(a1 - ObpInfoMaskToOffset[v1 & 7]);
  else
    v4 = 0LL;
  v29 = v4;
  if ( (v1 & 8) != 0 )
    v5 = (int *)(a1 - ObpInfoMaskToOffset[v1 & 0xF]);
  else
    v5 = 0LL;
  if ( (v1 & 0x20) != 0 )
    v31 = (PVOID *)(a1 - ObpInfoMaskToOffset[v1 & 0x3F]);
  else
    v31 = 0LL;
  v6 = (unsigned int *)(a1 - ObpInfoMaskToOffset[(unsigned __int8)v1]);
  if ( v1 < 0 )
    v6 = (unsigned int *)((char *)v6 + 4LL - *v6);
  v7 = a1 >> 8;
  v8 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ BYTE1(a1) ^ (unsigned __int64)*(unsigned __int8 *)(a1 + 24)];
  if ( v3 && (_QWORD *)*v3 != v3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v8 + 184, 0LL);
    v21 = *v3;
    v22 = (_QWORD *)v3[1];
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (_QWORD *)*v22 != v3 )
      __fastfail(3u);
    *v22 = v21;
    *(_QWORD *)(v21 + 8) = v22;
    ExReleasePushLockEx(v8 + 184, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  _InterlockedDecrement((volatile signed __int32 *)(v8 + 44));
  if ( (*(_BYTE *)(a1 + 27) & 1) != 0 )
  {
    v14 = *(_QWORD *)(a1 + 32);
    if ( !v14 )
      goto LABEL_26;
    v15 = *(void **)(v14 + 32);
    if ( v15 )
    {
      SeReleaseSecurityDescriptor(v15, *(_BYTE *)(v14 + 16), 1);
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) = 0LL;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v17 = *(_SLIST_ENTRY **)(a1 + 32);
    P = CurrentPrcb->PPLookasideList[4].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[4].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v17);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v17);
    }
    goto LABEL_25;
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    if ( v5 )
    {
      v9 = (volatile signed __int32 *)*((_QWORD *)v5 + 2);
      v10 = *v5;
      v11 = v5[1];
      if ( (unsigned __int64)v9 > 1 )
      {
        if ( v5[2] )
          PspReturnQuota(*((char **)v5 + 2), 0LL, 1, (unsigned int)v5[2]);
        PspDereferenceQuotaBlock(v9);
      }
    }
    else
    {
      v10 = *(_DWORD *)(v8 + 104);
      v11 = *(_DWORD *)(v8 + 108);
    }
    v12 = *(_QWORD *)(a1 + 32);
    if ( v12 == 1 )
      goto LABEL_24;
    if ( v10 )
      PspReturnQuota(*(char **)(a1 + 32), 0LL, 1, v10);
    if ( v11 )
      PspReturnQuota((char *)v12, 0LL, 0, v11);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 512), 0xFFFFFFFF) != 1 )
    {
LABEL_24:
      v4 = v29;
LABEL_25:
      *(_QWORD *)(a1 + 32) = 0LL;
      goto LABEL_26;
    }
    v23 = 0;
    v24 = PspResourceFlags;
    v25 = v12 + 64;
    while ( 1 )
    {
      if ( (*v24 & 3) == 1 )
      {
        v26 = *(_QWORD *)v25;
        v27 = *(_QWORD *)(v25 + 16) != 0LL;
        if ( *(_QWORD *)v25 + *(_QWORD *)(v25 + 8) )
        {
          if ( *(_QWORD *)(v25 + 16) )
          {
            v28 = _InterlockedExchange64((volatile __int64 *)(v25 + 8), 0LL);
            v26 = _InterlockedExchange64((volatile __int64 *)v25, 0LL) + v28;
          }
          if ( v26 )
          {
LABEL_66:
            PspReturnResourceQuota(v23, v25 - 64, v26, v27);
            goto LABEL_67;
          }
        }
        else
        {
          v26 = 0LL;
        }
        if ( v27 )
          goto LABEL_66;
      }
LABEL_67:
      ++v23;
      v25 += 128LL;
      v24 += 8;
      if ( v23 >= 4 )
      {
        PspRemoveQuotaBlock(v12);
        ExFreePoolWithTag((PVOID)v12, 0);
        goto LABEL_24;
      }
    }
  }
LABEL_26:
  if ( v4 && (*(_BYTE *)(a1 + 27) & 0x40) == 0 )
  {
    ExFreePoolWithTag(*v4, 0);
    *v4 = 0LL;
  }
  if ( v30 )
  {
    v19 = *(void **)(v30 + 16);
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0);
      *(_QWORD *)(v30 + 16) = 0LL;
    }
  }
  if ( v31 && *v31 )
  {
    ExFreePoolWithTag(*v31, 0);
    *v31 = 0LL;
  }
  *(_BYTE *)(a1 + 24) = ObHeaderCookie ^ v7 ^ 1;
  if ( v8 )
    v13 = *(_DWORD *)(v8 + 192);
  else
    v13 = 1416258127;
  ExFreePoolWithTag(v6, v13);
}
