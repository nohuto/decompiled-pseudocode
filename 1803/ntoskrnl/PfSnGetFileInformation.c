/*
 * XREFs of PfSnGetFileInformation @ 0x14008E100
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     PfSnLogPageFaultCommon @ 0x14008DFB4 (PfSnLogPageFaultCommon.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfSnGetFileInformation(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r12d
  unsigned __int64 v3; // rsi
  _QWORD *v7; // rax
  unsigned __int64 v8; // r14
  KIRQL v9; // al
  unsigned __int64 v10; // rbx
  KIRQL v11; // r15
  __int64 v12; // rax
  int v13; // ecx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  _QWORD *PoolWithTag; // rbx
  KIRQL v17; // al
  __int64 v18; // r8
  __int64 v19; // rcx
  KIRQL v20; // bp
  unsigned __int64 v21; // rax
  int v22; // edx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  BOOLEAN v25; // r15
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  int v28; // ecx
  unsigned __int64 v29; // rax
  int v30; // [rsp+58h] [rbp+10h]

  v2 = 0;
  v3 = a2[3];
  v30 = 0;
  if ( (*(_DWORD *)(a2[1] + 52LL) & 0x10) != 0 )
    return 3221225659LL;
  v7 = (_QWORD *)(a1 + 488);
  v8 = a1 + 520;
  if ( a1 + 488 >= (unsigned __int64)(a1 + 520) )
  {
LABEL_6:
    v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 576));
    v10 = *(_QWORD *)v8;
    v11 = v9;
    v12 = *(_QWORD *)(v8 + 8);
    if ( (v12 & 1) != 0 )
    {
      if ( v10 )
        v10 ^= v8;
      else
        v10 = 0LL;
    }
    v13 = v12 & 1;
    while ( v10 )
    {
      v14 = *(_QWORD *)(v10 + 24);
      if ( v14 > v3 )
      {
        v15 = *(_QWORD *)v10;
      }
      else
      {
        if ( v14 >= v3 )
          break;
        v15 = *(_QWORD *)(v10 + 8);
      }
      if ( v13 && v15 )
        v10 ^= v15;
      else
        v10 = v15;
    }
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
    __writecr8(v11);
    if ( v10 )
    {
      *(_QWORD *)(a1 + 8LL * (++*(_BYTE *)(a1 + 580) & 3) + 488) = v3;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6E506343u);
      if ( !PoolWithTag )
      {
        if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
          _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
        return 3221225626LL;
      }
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      PoolWithTag[3] = 0LL;
      PoolWithTag[4] = 0LL;
      PoolWithTag[5] = 0LL;
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      PoolWithTag[5] = a2;
      PoolWithTag[3] = v3;
      v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576));
      v19 = *(_QWORD *)(v8 + 8);
      v20 = v17;
      v21 = *(_QWORD *)v8;
      if ( (v19 & 1) != 0 )
      {
        if ( v21 )
          v21 ^= v8;
        else
          v21 = 0LL;
      }
      v22 = v19 & 1;
      while ( v21 )
      {
        v23 = *(_QWORD *)(v21 + 24);
        if ( v23 > v3 )
        {
          v24 = *(_QWORD *)v21;
        }
        else
        {
          if ( v23 >= v3 )
            goto LABEL_44;
          v24 = *(_QWORD *)(v21 + 8);
        }
        if ( v22 && v24 )
          v21 ^= v24;
        else
          v21 = v24;
      }
      if ( *(_QWORD *)(a1 + 568) )
      {
        v25 = 0;
      }
      else
      {
        v25 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 360));
        if ( !v25 )
        {
          v2 = -1073741431;
LABEL_44:
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
          __writecr8(v20);
          ObfDereferenceObject((PVOID)PoolWithTag[5]);
          ExFreePoolWithTag(PoolWithTag, 0);
          return v2;
        }
        v30 = 1;
        *(_QWORD *)(a1 + 560) = PfSnNameQueryWorker;
        *(_QWORD *)(a1 + 568) = a1;
        *(_QWORD *)(a1 + 544) = 0LL;
      }
      PoolWithTag[4] = *(_QWORD *)(a1 + 536);
      *(_QWORD *)(a1 + 536) = PoolWithTag + 4;
      v26 = *(_QWORD *)(v8 + 8);
      v27 = *(_QWORD *)v8;
      if ( (v26 & 1) != 0 )
      {
        if ( v27 )
          v27 ^= v8;
        else
          v27 = 0LL;
      }
      LOBYTE(v18) = 0;
      v28 = v26 & 1;
      if ( v27 )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)(v27 + 24) > v3 )
          {
            v29 = *(_QWORD *)v27;
            if ( v28 )
            {
              if ( !v29 )
                goto LABEL_63;
              v29 ^= v27;
            }
            if ( !v29 )
            {
LABEL_63:
              LOBYTE(v18) = 0;
              break;
            }
          }
          else
          {
            v29 = *(_QWORD *)(v27 + 8);
            if ( v28 )
            {
              if ( !v29 )
                goto LABEL_57;
              v29 ^= v27;
            }
            if ( !v29 )
            {
LABEL_57:
              LOBYTE(v18) = 1;
              break;
            }
          }
          v27 = v29;
        }
      }
      RtlRbInsertNodeEx(v8, v27, v18, PoolWithTag);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
      __writecr8(v20);
      if ( v30 )
      {
        v25 = 0;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 544), DelayedWorkQueue);
      }
      *(_QWORD *)(a1 + 8LL * (++*(_BYTE *)(a1 + 580) & 3) + 488) = v3;
      if ( v25 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 360));
    }
    return v2;
  }
  while ( *v7 != v3 )
  {
    if ( (unsigned __int64)++v7 >= v8 )
      goto LABEL_6;
  }
  return 0LL;
}
