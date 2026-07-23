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
  _RTL_BALANCED_NODE *v3; // rsi
  _RTL_BALANCED_NODE **v7; // rax
  _RTL_RB_TREE *v8; // r14
  KIRQL v9; // al
  unsigned __int64 Root; // rbx
  KIRQL v11; // r15
  _RTL_BALANCED_NODE *Min; // rax
  int v13; // ecx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  _RTL_BALANCED_NODE *PoolWithTag; // rbx
  KIRQL v17; // al
  _RTL_BALANCED_NODE *v18; // rcx
  KIRQL v19; // bp
  unsigned __int64 v20; // rax
  int v21; // edx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  BOOLEAN v24; // r15
  _RTL_BALANCED_NODE *v25; // rax
  unsigned __int64 v26; // rdx
  BOOLEAN v27; // r8
  int v28; // ecx
  unsigned __int64 v29; // rax
  int v30; // [rsp+58h] [rbp+10h]

  v2 = 0;
  v3 = (_RTL_BALANCED_NODE *)a2[3];
  v30 = 0;
  if ( (*(_DWORD *)(a2[1] + 52LL) & 0x10) != 0 )
    return 3221225659LL;
  v7 = (_RTL_BALANCED_NODE **)(a1 + 488);
  v8 = (_RTL_RB_TREE *)(a1 + 520);
  if ( a1 + 488 >= (unsigned __int64)(a1 + 520) )
  {
LABEL_6:
    v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 576));
    Root = (unsigned __int64)v8->Root;
    v11 = v9;
    Min = v8->Min;
    if ( ((unsigned __int8)Min & 1) != 0 )
    {
      if ( Root )
        Root ^= (unsigned __int64)v8;
      else
        Root = 0LL;
    }
    v13 = (unsigned __int8)Min & 1;
    while ( Root )
    {
      v14 = *(_QWORD *)(Root + 24);
      if ( v14 > (unsigned __int64)v3 )
      {
        v15 = *(_QWORD *)Root;
      }
      else
      {
        if ( v14 >= (unsigned __int64)v3 )
          break;
        v15 = *(_QWORD *)(Root + 8);
      }
      if ( v13 && v15 )
        Root ^= v15;
      else
        Root = v15;
    }
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
    __writecr8(v11);
    if ( Root )
    {
      *(_QWORD *)(a1 + 8LL * (++*(_BYTE *)(a1 + 580) & 3) + 488) = v3;
    }
    else
    {
      PoolWithTag = (_RTL_BALANCED_NODE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6E506343u);
      if ( !PoolWithTag )
      {
        if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
          _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
        return 3221225626LL;
      }
      PoolWithTag->Children[0] = 0LL;
      PoolWithTag->Children[1] = 0LL;
      PoolWithTag->ParentValue = 0LL;
      PoolWithTag[1].Children[0] = 0LL;
      PoolWithTag[1].Children[1] = 0LL;
      PoolWithTag[1].ParentValue = 0LL;
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      PoolWithTag[1].ParentValue = (unsigned __int64)a2;
      PoolWithTag[1].Children[0] = v3;
      v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576));
      v18 = v8->Min;
      v19 = v17;
      v20 = (unsigned __int64)v8->Root;
      if ( ((unsigned __int8)v18 & 1) != 0 )
      {
        if ( v20 )
          v20 ^= (unsigned __int64)v8;
        else
          v20 = 0LL;
      }
      v21 = (unsigned __int8)v18 & 1;
      while ( v20 )
      {
        v22 = *(_QWORD *)(v20 + 24);
        if ( v22 > (unsigned __int64)v3 )
        {
          v23 = *(_QWORD *)v20;
        }
        else
        {
          if ( v22 >= (unsigned __int64)v3 )
            goto LABEL_44;
          v23 = *(_QWORD *)(v20 + 8);
        }
        if ( v21 && v23 )
          v20 ^= v23;
        else
          v20 = v23;
      }
      if ( *(_QWORD *)(a1 + 568) )
      {
        v24 = 0;
      }
      else
      {
        v24 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 360));
        if ( !v24 )
        {
          v2 = -1073741431;
LABEL_44:
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
          __writecr8(v19);
          ObfDereferenceObject((PVOID)PoolWithTag[1].ParentValue);
          ExFreePoolWithTag(PoolWithTag, 0);
          return v2;
        }
        v30 = 1;
        *(_QWORD *)(a1 + 560) = PfSnNameQueryWorker;
        *(_QWORD *)(a1 + 568) = a1;
        *(_QWORD *)(a1 + 544) = 0LL;
      }
      PoolWithTag[1].Children[1] = *(_RTL_BALANCED_NODE **)(a1 + 536);
      *(_QWORD *)(a1 + 536) = (char *)PoolWithTag + 32;
      v25 = v8->Min;
      v26 = (unsigned __int64)v8->Root;
      if ( ((unsigned __int8)v25 & 1) != 0 )
      {
        if ( v26 )
          v26 ^= (unsigned __int64)v8;
        else
          v26 = 0LL;
      }
      v27 = 0;
      v28 = (unsigned __int8)v25 & 1;
      if ( v26 )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)(v26 + 24) > (unsigned __int64)v3 )
          {
            v29 = *(_QWORD *)v26;
            if ( v28 )
            {
              if ( !v29 )
                goto LABEL_63;
              v29 ^= v26;
            }
            if ( !v29 )
            {
LABEL_63:
              v27 = 0;
              break;
            }
          }
          else
          {
            v29 = *(_QWORD *)(v26 + 8);
            if ( v28 )
            {
              if ( !v29 )
                goto LABEL_57;
              v29 ^= v26;
            }
            if ( !v29 )
            {
LABEL_57:
              v27 = 1;
              break;
            }
          }
          v26 = v29;
        }
      }
      RtlRbInsertNodeEx(v8, (PRTL_BALANCED_NODE)v26, v27, PoolWithTag);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
      __writecr8(v19);
      if ( v30 )
      {
        v24 = 0;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 544), DelayedWorkQueue);
      }
      *(_QWORD *)(a1 + 8LL * (++*(_BYTE *)(a1 + 580) & 3) + 488) = v3;
      if ( v24 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 360));
    }
    return v2;
  }
  while ( *v7 != v3 )
  {
    if ( ++v7 >= (_RTL_BALANCED_NODE **)v8 )
      goto LABEL_6;
  }
  return 0LL;
}
