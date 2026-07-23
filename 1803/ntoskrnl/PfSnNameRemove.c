/*
 * XREFs of PfSnNameRemove @ 0x14008B770
 * Callers:
 *     PfSnNameRemoveAll @ 0x140537C08 (PfSnNameRemoveAll.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     RtlRbRemoveNode @ 0x1400E9770 (RtlRbRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnNameRemove(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v2; // rbp
  unsigned int v5; // edi
  KIRQL v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  int v9; // ecx
  _RTL_BALANCED_NODE *v10; // rax
  unsigned __int64 v11; // rax
  _QWORD *v12; // rcx
  unsigned __int64 v13; // rdx

  v2 = (volatile LONG *)(a1 + 576);
  v5 = 0;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576));
  v7 = *(_QWORD *)(a1 + 528);
  v8 = *(_QWORD *)(a1 + 520);
  if ( (v7 & 1) != 0 )
  {
    if ( v8 )
      v8 ^= a1 + 520;
    else
      v8 = 0LL;
  }
  v9 = v7 & 1;
  while ( 1 )
  {
    if ( !v8 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v2);
      __writecr8(v6);
      return v5;
    }
    v10 = *(_RTL_BALANCED_NODE **)(v8 + 24);
    if ( (unsigned __int64)v10 <= a2 )
      break;
    v11 = *(_QWORD *)v8;
LABEL_11:
    if ( v9 && v11 )
      v8 ^= v11;
    else
      v8 = v11;
  }
  if ( (unsigned __int64)v10 < a2 )
  {
    v11 = *(_QWORD *)(v8 + 8);
    goto LABEL_11;
  }
  RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 520), (PRTL_BALANCED_NODE)v8);
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  __writecr8(v6);
  v12 = (_QWORD *)(a1 + 488);
  v13 = 0LL;
  if ( (a1 + 520 >= (unsigned __int64)(a1 + 488) ? 4 : 0) != 0 )
  {
    do
    {
      if ( *v12 == a2 )
        *v12 = 0LL;
      ++v12;
      ++v13;
    }
    while ( v13 < (a1 + 520 >= (unsigned __int64)(a1 + 488) ? 4 : 0) );
  }
  v5 = 1;
  ExFreePoolWithTag((PVOID)v8, 0);
  return v5;
}
