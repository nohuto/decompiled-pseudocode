/*
 * XREFs of PpmPerfResizeHistory @ 0x14076120C
 * Callers:
 *     PpmPerfResizeHistoryAll @ 0x1407612EC (PpmPerfResizeHistoryAll.c)
 * Callees:
 *     PpmGetHeterogeneousClass @ 0x14014BE50 (PpmGetHeterogeneousClass.c)
 *     PpmPerfResetHistory @ 0x14017FF08 (PpmPerfResetHistory.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PpmPerfResizeHistory(__int64 a1)
{
  unsigned int v2; // ebx
  bool HeterogeneousClass; // al
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  int v6; // edi
  int v7; // ebp
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rdi

  v2 = 0;
  HeterogeneousClass = PpmGetHeterogeneousClass(a1);
  v5 = *(_DWORD **)(v4 + 24216);
  v6 = *((unsigned __int8 *)&PpmCurrentProfile[336 * dword_1403AAA2C + 8] + HeterogeneousClass);
  v7 = v6;
  if ( v5 )
  {
    if ( *v5 == v6 )
      return v2;
    ExFreePoolWithTag(v5, 0x704D5050u);
    *(_QWORD *)(a1 + 24216) = 0LL;
  }
  if ( (unsigned __int8)v6 > 1u )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(8 * v6 + 28), 0x704D5050u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)(8 * v7 + 28));
      *v9 = v7;
      *(_QWORD *)(a1 + 24216) = v9;
      PpmPerfResetHistory(a1);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
