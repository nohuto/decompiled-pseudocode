/*
 * XREFs of VmpFaultEntryInsert @ 0x140278B6C
 * Callers:
 *     VmpAccessFaultBatch @ 0x1402786D8 (VmpAccessFaultBatch.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14005E640 (RtlRbInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall VmpFaultEntryInsert(__int64 a1, _RTL_BALANCED_NODE *a2, unsigned int a3)
{
  _RTL_BALANCED_NODE *v3; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // r14
  BOOLEAN v7; // r8
  _RTL_BALANCED_NODE *v8; // rdx
  _RTL_BALANCED_NODE *v9; // rax
  __int64 result; // rax

  v3 = a2;
  v5 = (unsigned __int64)a2 + 32 * a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( (unsigned __int64)v3 >= v5 )
    goto LABEL_16;
  do
  {
    v7 = 0;
    v8 = *(_RTL_BALANCED_NODE **)(a1 + 48);
    if ( !v8 )
      goto LABEL_15;
    while ( 1 )
    {
      if ( ((unsigned __int64)v3[1].Children[0] & 0xFFFFFFFFFFFFFLL) < ((unsigned __int64)v8[1].Children[0] & 0xFFFFFFFFFFFFFLL) )
      {
        v9 = v8->Children[0];
        if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
        {
          if ( !v9 )
            goto LABEL_8;
          v9 = (_RTL_BALANCED_NODE *)((unsigned __int64)v8 ^ (unsigned __int64)v9);
        }
        if ( !v9 )
        {
LABEL_8:
          v7 = 0;
          goto LABEL_15;
        }
        goto LABEL_13;
      }
      v9 = v8->Children[1];
      if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
      {
        if ( !v9 )
          break;
        v9 = (_RTL_BALANCED_NODE *)((unsigned __int64)v8 ^ (unsigned __int64)v9);
      }
      if ( !v9 )
        break;
LABEL_13:
      v8 = v9;
    }
    v7 = 1;
LABEL_15:
    RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 48), v8, v7, v3);
    v3 = (_RTL_BALANCED_NODE *)((char *)v3 + 32);
  }
  while ( (unsigned __int64)v3 < v5 );
LABEL_16:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
