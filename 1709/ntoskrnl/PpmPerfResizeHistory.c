/*
 * XREFs of PpmPerfResizeHistory @ 0x1406F9D80
 * Callers:
 *     PpmPerfResizeHistoryAll @ 0x1406F9E60 (PpmPerfResizeHistoryAll.c)
 * Callees:
 *     PpmGetHeterogeneousClass @ 0x140130B1C (PpmGetHeterogeneousClass.c)
 *     PpmPerfResetHistory @ 0x140137B64 (PpmPerfResetHistory.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PpmPerfResizeHistory(__int64 a1)
{
  unsigned int v2; // ebx
  bool HeterogeneousClass; // al
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  unsigned __int8 v6; // di
  int v7; // ebp
  SIZE_T v8; // r14
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rdi

  v2 = 0;
  HeterogeneousClass = PpmGetHeterogeneousClass(a1);
  v5 = *(_DWORD **)(v4 + 24216);
  v6 = *(_BYTE *)(HeterogeneousClass + PpmCurrentProfile + 2688LL * dword_1403661AC + 64);
  if ( v5 )
  {
    if ( *v5 == v6 )
      return v2;
    ExFreePoolWithTag(v5, 0x704D5050u);
    *(_QWORD *)(a1 + 24216) = 0LL;
  }
  if ( v6 > 1u )
  {
    v7 = v6;
    v8 = 8 * (unsigned int)v6 + 28;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x704D5050u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v8);
      *v10 = v7;
      *(_QWORD *)(a1 + 24216) = v10;
      PpmPerfResetHistory(a1);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
