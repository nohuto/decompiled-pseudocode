/*
 * XREFs of PfSnNameRemove @ 0x140021FFC
 * Callers:
 *     PfSnNameRemoveAll @ 0x14048BD50 (PfSnNameRemoveAll.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     RtlRbRemoveNode @ 0x140048460 (RtlRbRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnNameRemove(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v2; // rbp
  unsigned int v5; // edi
  KIRQL v6; // r14
  unsigned __int64 v7; // rbx
  _RTL_BALANCED_NODE *v8; // rax
  unsigned __int64 v9; // rax
  _QWORD *v11; // rcx
  unsigned __int64 v12; // rdx

  v2 = (volatile LONG *)(a1 + 576);
  v5 = 0;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576));
  v7 = *(_QWORD *)(a1 + 520);
  while ( 1 )
  {
    if ( !v7 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v2);
      __writecr8(v6);
      return v5;
    }
    v8 = *(_RTL_BALANCED_NODE **)(v7 + 24);
    if ( (unsigned __int64)v8 <= a2 )
      break;
    v9 = *(_QWORD *)v7;
LABEL_6:
    if ( (*(_BYTE *)(a1 + 528) & 1) != 0 && v9 )
      v7 ^= v9;
    else
      v7 = v9;
  }
  if ( (unsigned __int64)v8 < a2 )
  {
    v9 = *(_QWORD *)(v7 + 8);
    goto LABEL_6;
  }
  RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 520), (PRTL_BALANCED_NODE)v7);
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  __writecr8(v6);
  v11 = (_QWORD *)(a1 + 488);
  v12 = 0LL;
  if ( (a1 + 520 >= (unsigned __int64)(a1 + 488) ? 4 : 0) != 0 )
  {
    do
    {
      if ( *v11 == a2 )
        *v11 = 0LL;
      ++v11;
      ++v12;
    }
    while ( v12 < (a1 + 520 >= (unsigned __int64)(a1 + 488) ? 4 : 0) );
  }
  v5 = 1;
  ExFreePoolWithTag((PVOID)v7, 0);
  return v5;
}
