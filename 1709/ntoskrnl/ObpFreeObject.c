/*
 * XREFs of ObpFreeObject @ 0x1404A3CE0
 * Callers:
 *     ObpRemoveObjectRoutine @ 0x1404A3C00 (ObpRemoveObjectRoutine.c)
 * Callees:
 *     PspReturnQuota @ 0x140070050 (PspReturnQuota.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PspReturnResourceQuota @ 0x1400F14B8 (PspReturnResourceQuota.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PspDereferenceQuotaBlock @ 0x1404860AC (PspDereferenceQuotaBlock.c)
 *     SeReleaseSecurityDescriptor @ 0x14049CFE0 (SeReleaseSecurityDescriptor.c)
 *     PspRemoveQuotaBlock @ 0x140715D8C (PspRemoveQuotaBlock.c)
 */

void __fastcall ObpFreeObject(__int64 a1)
{
  char v2; // cl
  _QWORD *v3; // r15
  PVOID *v4; // r12
  int *v5; // rsi
  unsigned int *v6; // r14
  __int64 v7; // rbp
  volatile signed __int32 *v8; // r15
  unsigned int v9; // r12d
  unsigned int v10; // r13d
  __int64 v11; // rsi
  ULONG v12; // edx
  __int64 v13; // rax
  void *v14; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  _SLIST_ENTRY *v16; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  void *v18; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rax
  signed int v22; // r12d
  char *v23; // r13
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r8
  PVOID *v28; // [rsp+60h] [rbp+8h]
  __int64 v29; // [rsp+68h] [rbp+10h]
  PVOID *v30; // [rsp+70h] [rbp+18h]

  v2 = *(_BYTE *)(a1 + 26);
  if ( (v2 & 1) != 0 )
    v3 = (_QWORD *)(a1 - 32);
  else
    v3 = 0LL;
  if ( (v2 & 2) != 0 )
    v29 = a1 - ObpInfoMaskToOffset[v2 & 3];
  else
    v29 = 0LL;
  if ( (v2 & 4) != 0 )
    v4 = (PVOID *)(a1 - ObpInfoMaskToOffset[v2 & 7]);
  else
    v4 = 0LL;
  v28 = v4;
  if ( (v2 & 8) != 0 )
    v5 = (int *)(a1 - ObpInfoMaskToOffset[v2 & 0xF]);
  else
    v5 = 0LL;
  if ( (v2 & 0x20) != 0 )
    v30 = (PVOID *)(a1 - ObpInfoMaskToOffset[v2 & 0x3F]);
  else
    v30 = 0LL;
  v6 = (unsigned int *)(a1 - ObpInfoMaskToOffset[(unsigned __int8)v2]);
  if ( v2 < 0 )
    v6 = (unsigned int *)((char *)v6 + 4LL - *v6);
  v7 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ BYTE1(a1) ^ (unsigned __int64)*(unsigned __int8 *)(a1 + 24)];
  if ( v3 && (_QWORD *)*v3 != v3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v7 + 184, 0LL);
    v20 = *v3;
    v21 = (_QWORD *)v3[1];
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (_QWORD *)*v21 != v3 )
      __fastfail(3u);
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
    ExReleasePushLockEx(v7 + 184, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  _InterlockedDecrement((volatile signed __int32 *)(v7 + 44));
  if ( (*(_BYTE *)(a1 + 27) & 1) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 32);
    if ( !v13 )
      goto LABEL_26;
    v14 = *(void **)(v13 + 32);
    if ( v14 )
    {
      SeReleaseSecurityDescriptor(v14, *(_BYTE *)(v13 + 16), 1);
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) = 0LL;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v16 = *(_SLIST_ENTRY **)(a1 + 32);
    P = CurrentPrcb->PPLookasideList[4].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[4].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v16);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v16);
    }
    goto LABEL_25;
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    if ( v5 )
    {
      v8 = (volatile signed __int32 *)*((_QWORD *)v5 + 2);
      v9 = *v5;
      v10 = v5[1];
      if ( (unsigned __int64)v8 > 1 )
      {
        if ( v5[2] )
          PspReturnQuota(*((char **)v5 + 2), 0LL, 1u, (unsigned int)v5[2]);
        PspDereferenceQuotaBlock(v8);
      }
    }
    else
    {
      v9 = *(_DWORD *)(v7 + 104);
      v10 = *(_DWORD *)(v7 + 108);
    }
    v11 = *(_QWORD *)(a1 + 32);
    if ( v11 == 1 )
      goto LABEL_24;
    if ( v9 )
      PspReturnQuota(*(char **)(a1 + 32), 0LL, 1u, v9);
    if ( v10 )
      PspReturnQuota((char *)v11, 0LL, 0, v10);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 512), 0xFFFFFFFF) != 1 )
    {
LABEL_24:
      v4 = v28;
LABEL_25:
      *(_QWORD *)(a1 + 32) = 0LL;
      goto LABEL_26;
    }
    v22 = 0;
    v23 = PspResourceFlags;
    v24 = v11 + 64;
    while ( 1 )
    {
      if ( (*v23 & 3) == 1 )
      {
        v25 = *(_QWORD *)(v24 + 16);
        v26 = *(_QWORD *)v24;
        if ( *(_QWORD *)v24 + *(_QWORD *)(v24 + 8) )
        {
          if ( v25 )
          {
            v27 = _InterlockedExchange64((volatile __int64 *)(v24 + 8), 0LL);
            v26 = _InterlockedExchange64((volatile __int64 *)v24, 0LL) + v27;
          }
          if ( v26 )
          {
LABEL_67:
            PspReturnResourceQuota(v22, v24 - 64, v26, v25 != 0);
            goto LABEL_68;
          }
        }
        else
        {
          v26 = 0LL;
        }
        if ( v25 )
          goto LABEL_67;
      }
LABEL_68:
      ++v22;
      v24 += 128LL;
      v23 += 8;
      if ( v22 >= 4 )
      {
        PspRemoveQuotaBlock(v11);
        ExFreePoolWithTag((PVOID)v11, 0);
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
  if ( v29 )
  {
    v18 = *(void **)(v29 + 16);
    if ( v18 )
    {
      ExFreePoolWithTag(v18, 0);
      *(_QWORD *)(v29 + 16) = 0LL;
    }
  }
  if ( v30 && *v30 )
  {
    ExFreePoolWithTag(*v30, 0);
    *v30 = 0LL;
  }
  *(_BYTE *)(a1 + 24) = ObHeaderCookie ^ BYTE1(a1) ^ 1;
  if ( v7 )
    v12 = *(_DWORD *)(v7 + 192);
  else
    v12 = 1416258127;
  ExFreePoolWithTag(v6, v12);
}
