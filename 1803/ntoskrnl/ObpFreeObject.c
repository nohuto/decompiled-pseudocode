/*
 * XREFs of ObpFreeObject @ 0x14059CA30
 * Callers:
 *     ObpRemoveObjectRoutine @ 0x14059C950 (ObpRemoveObjectRoutine.c)
 * Callees:
 *     PspReturnResourceQuota @ 0x14007FF60 (PspReturnResourceQuota.c)
 *     PspReturnQuota @ 0x1400F8E70 (PspReturnQuota.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     SeReleaseSecurityDescriptor @ 0x1404C8E50 (SeReleaseSecurityDescriptor.c)
 *     PspDereferenceQuotaBlock @ 0x1404EBF04 (PspDereferenceQuotaBlock.c)
 *     PspRemoveQuotaBlock @ 0x140779F20 (PspRemoveQuotaBlock.c)
 */

void __fastcall ObpFreeObject(__int64 a1)
{
  char v1; // al
  _QWORD *v3; // r15
  PVOID *v4; // r12
  int *v5; // rsi
  unsigned int *v6; // r14
  char v7; // di
  __int64 v8; // rbp
  __int64 v9; // rcx
  volatile signed __int32 *v10; // r15
  unsigned int v11; // r12d
  unsigned int v12; // r13d
  __int64 v13; // rsi
  ULONG v14; // edx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // r8
  void *v17; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  _QWORD *v22; // rax
  signed int v23; // r12d
  char *v24; // r13
  __int64 v25; // r15
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r8
  PVOID *v29; // [rsp+60h] [rbp+8h]
  __int64 v30; // [rsp+68h] [rbp+10h]
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
  v7 = BYTE1(a1);
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
    ExReleasePushLockEx(v8 + 184, 0LL, v19, v20);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  _InterlockedDecrement((volatile signed __int32 *)(v8 + 44));
  v9 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(a1 + 27) & 1) != 0 )
  {
    if ( !v9 )
      goto LABEL_26;
    if ( *(_QWORD *)(v9 + 32) )
    {
      SeReleaseSecurityDescriptor(*(void **)(v9 + 32), *(_BYTE *)(v9 + 16), 1);
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) = 0LL;
      v9 = *(_QWORD *)(a1 + 32);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[4].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[4].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)v9);
    }
    else
    {
      ++P->FreeMisses;
      ((void (*)(void))P->FreeEx)();
    }
    goto LABEL_25;
  }
  if ( v9 )
  {
    if ( v5 )
    {
      v10 = (volatile signed __int32 *)*((_QWORD *)v5 + 2);
      v11 = *v5;
      v12 = v5[1];
      if ( (unsigned __int64)v10 > 1 )
      {
        if ( v5[2] )
          PspReturnQuota(*((char **)v5 + 2), 0LL, 1, (unsigned int)v5[2]);
        PspDereferenceQuotaBlock(v10);
      }
    }
    else
    {
      v11 = *(_DWORD *)(v8 + 104);
      v12 = *(_DWORD *)(v8 + 108);
    }
    v13 = *(_QWORD *)(a1 + 32);
    if ( v13 == 1 )
      goto LABEL_24;
    if ( v11 )
      PspReturnQuota(*(char **)(a1 + 32), 0LL, 1, v11);
    if ( v12 )
      PspReturnQuota((char *)v13, 0LL, 0, v12);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 512), 0xFFFFFFFF) != 1 )
    {
LABEL_24:
      v4 = v29;
LABEL_25:
      *(_QWORD *)(a1 + 32) = 0LL;
      goto LABEL_26;
    }
    v23 = 0;
    v24 = PspResourceFlags;
    v25 = v13 + 64;
    while ( 1 )
    {
      if ( (*v24 & 3) == 1 )
      {
        v26 = *(_QWORD *)(v25 + 16);
        v27 = *(_QWORD *)v25;
        if ( *(_QWORD *)v25 + *(_QWORD *)(v25 + 8) )
        {
          if ( v26 )
          {
            v28 = _InterlockedExchange64((volatile __int64 *)(v25 + 8), 0LL);
            v27 = _InterlockedExchange64((volatile __int64 *)v25, 0LL) + v28;
          }
          if ( v27 )
          {
LABEL_66:
            PspReturnResourceQuota(v23, v25 - 64, v27, v26 != 0);
            goto LABEL_67;
          }
        }
        else
        {
          v27 = 0LL;
        }
        if ( v26 )
          goto LABEL_66;
      }
LABEL_67:
      ++v23;
      v25 += 128LL;
      v24 += 8;
      if ( v23 >= 4 )
      {
        PspRemoveQuotaBlock(v13);
        ExFreePoolWithTag((PVOID)v13, 0);
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
    v17 = *(void **)(v30 + 16);
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0);
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
    v14 = *(_DWORD *)(v8 + 192);
  else
    v14 = 1416258127;
  ExFreePoolWithTag(v6, v14);
}
