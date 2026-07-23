/*
 * XREFs of PfSnGetFileInformation @ 0x1400B7690
 * Callers:
 *     PfSnLogPageFaultCommon @ 0x1400B5710 (PfSnLogPageFaultCommon.c)
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x14004A340 (RtlRbInsertNodeEx.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnGetFileInformation(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  _RTL_BALANCED_NODE *v3; // rbx
  BOOLEAN v4; // r15
  int v7; // r12d
  _RTL_BALANCED_NODE **v8; // rax
  unsigned __int64 i; // rcx
  KIRQL v10; // r13
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  char *PoolWithTag; // rax
  char *v16; // r14
  KIRQL v17; // al
  __int64 v18; // r10
  KIRQL v19; // si
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  BOOLEAN v23; // r8
  _RTL_BALANCED_NODE *v24; // rdx
  _RTL_BALANCED_NODE *v25; // rax

  v2 = 0;
  v3 = (_RTL_BALANCED_NODE *)a2[3];
  v4 = 0;
  v7 = 0;
  if ( (*(_DWORD *)(a2[1] + 52LL) & 0x10) != 0 )
    return 3221225659LL;
  v8 = (_RTL_BALANCED_NODE **)(a1 + 488);
  for ( i = a1 + 520; (unsigned __int64)v8 < i; ++v8 )
  {
    if ( *v8 == v3 )
      return 0LL;
  }
  v10 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 576));
  v11 = *(_QWORD *)(a1 + 520);
  while ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 24);
    if ( v12 > (unsigned __int64)v3 )
    {
      v13 = *(_QWORD *)v11;
      if ( (*(_BYTE *)(a1 + 528) & 1) != 0 && v13 )
        goto LABEL_48;
    }
    else
    {
      if ( v12 >= (unsigned __int64)v3 )
        break;
      v13 = *(_QWORD *)(v11 + 8);
      if ( (*(_BYTE *)(a1 + 528) & 1) != 0 && v13 )
      {
LABEL_48:
        v11 ^= v13;
        continue;
      }
    }
    v11 = v13;
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
  __writecr8(v10);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 8LL * (++*(_BYTE *)(a1 + 580) & 3) + 488) = v3;
    return 0LL;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6E506343u);
  v16 = PoolWithTag;
  if ( !PoolWithTag )
  {
    if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
      _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
    return 3221225626LL;
  }
  memset(PoolWithTag, 0, 0x30uLL);
  ObfReferenceObjectWithTag(a2, 0x746C6644u);
  *((_QWORD *)v16 + 5) = a2;
  *((_QWORD *)v16 + 3) = v3;
  v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576));
  v18 = a1 + 520;
  v19 = v17;
  v20 = *(_QWORD *)(a1 + 520);
  while ( v20 )
  {
    v21 = *(_QWORD *)(v20 + 24);
    if ( v21 > (unsigned __int64)v3 )
    {
      v22 = *(_QWORD *)v20;
      if ( (*(_BYTE *)(a1 + 528) & 1) != 0 && v22 )
        goto LABEL_55;
    }
    else
    {
      if ( v21 >= (unsigned __int64)v3 )
        goto LABEL_43;
      v22 = *(_QWORD *)(v20 + 8);
      if ( (*(_BYTE *)(a1 + 528) & 1) != 0 && v22 )
      {
LABEL_55:
        v20 ^= v22;
        continue;
      }
    }
    v20 = v22;
  }
  if ( !*(_QWORD *)(a1 + 568) )
  {
    v4 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 360));
    if ( !v4 )
    {
      v2 = -1073741431;
LABEL_43:
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
      __writecr8(v19);
      ObfDereferenceObject(*((PVOID *)v16 + 5));
      ExFreePoolWithTag(v16, 0);
      return v2;
    }
    *(_QWORD *)(a1 + 568) = a1;
    *(_QWORD *)(a1 + 560) = PfSnNameQueryWorker;
    v18 = a1 + 520;
    v7 = 1;
    *(_QWORD *)(a1 + 544) = 0LL;
  }
  *((_QWORD *)v16 + 4) = *(_QWORD *)(a1 + 536);
  v23 = 0;
  *(_QWORD *)(a1 + 536) = v16 + 32;
  v24 = *(_RTL_BALANCED_NODE **)v18;
  if ( !*(_QWORD *)v18 )
    goto LABEL_39;
  while ( v24[1].Children[0] > v3 )
  {
    v25 = v24->Children[0];
    if ( (*(_BYTE *)(v18 + 8) & 1) != 0 )
    {
      if ( !v25 )
      {
LABEL_37:
        v23 = 0;
        goto LABEL_39;
      }
      v25 = (_RTL_BALANCED_NODE *)((unsigned __int64)v24 ^ (unsigned __int64)v25);
    }
    if ( !v25 )
      goto LABEL_37;
LABEL_32:
    v24 = v25;
  }
  v25 = v24->Children[1];
  if ( (*(_BYTE *)(v18 + 8) & 1) == 0 )
  {
LABEL_31:
    if ( !v25 )
      goto LABEL_38;
    goto LABEL_32;
  }
  if ( v25 )
  {
    v25 = (_RTL_BALANCED_NODE *)((unsigned __int64)v24 ^ (unsigned __int64)v25);
    goto LABEL_31;
  }
LABEL_38:
  v23 = 1;
LABEL_39:
  RtlRbInsertNodeEx((PRTL_RB_TREE)v18, v24, v23, (PRTL_BALANCED_NODE)v16);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
  __writecr8(v19);
  if ( v7 )
  {
    v4 = 0;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 544), DelayedWorkQueue);
  }
  *(_QWORD *)(a1 + 8LL * (++*(_BYTE *)(a1 + 580) & 3) + 488) = v3;
  if ( v4 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 360));
  return 0LL;
}
