/*
 * XREFs of VmpFaultEntryInsert @ 0x140251D30
 * Callers:
 *     VmAccessFault @ 0x1402519D0 (VmAccessFault.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14004A340 (RtlRbInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall VmpFaultEntryInsert(__int64 a1, _RTL_BALANCED_NODE *a2)
{
  unsigned __int8 CurrentIrql; // bp
  BOOLEAN v5; // cl
  _RTL_BALANCED_NODE *v6; // rdx
  _RTL_BALANCED_NODE *v7; // rax
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v5 = 0;
  v6 = *(_RTL_BALANCED_NODE **)(a1 + 48);
  if ( v6 )
  {
    while ( 1 )
    {
      if ( a2[1].Children[0] >= v6[1].Children[0] )
      {
        v7 = v6->Children[1];
        if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
        {
          if ( !v7 )
            goto LABEL_13;
          v7 = (_RTL_BALANCED_NODE *)((unsigned __int64)v6 ^ (unsigned __int64)v7);
        }
        if ( !v7 )
        {
LABEL_13:
          v5 = 1;
          break;
        }
      }
      else
      {
        v7 = v6->Children[0];
        if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
        {
          if ( !v7 )
            break;
          v7 = (_RTL_BALANCED_NODE *)((unsigned __int64)v6 ^ (unsigned __int64)v7);
        }
        if ( !v7 )
          break;
      }
      v6 = v7;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 48), v6, v5, a2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
