/*
 * XREFs of MmSetPermanentCacheAttribute @ 0x1406B5F50
 * Callers:
 *     <none>
 * Callees:
 *     KeGenericCallDpc @ 0x1400229D0 (KeGenericCallDpc.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmSetPermanentCacheAttribute(unsigned __int64 a1, unsigned __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  PVOID PoolWithTag; // rax
  void *v8; // rbx
  PVOID v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]

  if ( KeGetCurrentIrql() )
    return 3221225485LL;
  if ( (a4 & 0xFFFFFFFE) != 0 )
    return 3221225714LL;
  if ( (a1 & 0xFFF) != 0 )
    return 3221225711LL;
  if ( (a2 & 0xFFF) != 0 )
    return 3221225712LL;
  v5 = a1 >> 12;
  v6 = a2 >> 12;
  if ( !(a2 >> 12) )
    return 3221225712LL;
  if ( a3 != 1 )
    return 3221225713LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6F49694Du);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *((_QWORD *)PoolWithTag + 3) = v5;
  *((_DWORD *)PoolWithTag + 10) = 1;
  *((_QWORD *)PoolWithTag + 4) = v6 + v5 - 1;
  v10 = 0;
  v9 = PoolWithTag;
  KeGenericCallDpc((__int64)MiMakeIoRangePermanentDpc, (__int64)&v9);
  result = (unsigned int)v10;
  if ( v10 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
    return (unsigned int)v10;
  }
  return result;
}
