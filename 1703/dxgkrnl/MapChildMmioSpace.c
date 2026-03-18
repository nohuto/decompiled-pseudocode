/*
 * XREFs of MapChildMmioSpace @ 0x1C00340A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MapChildMmioSpace(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  PVOID PoolWithTag; // rax
  void *v10; // rbx
  int v12; // edi

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x4B677844u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  v12 = VmbChannelMapChildMmioSpace(*(_QWORD *)(a1 + 408), a2 + 48, a3 >> 12, a4, PoolWithTag);
  if ( v12 >= 0 )
    *a5 = v10;
  else
    ExFreePoolWithTag(v10, 0x4B677844u);
  return (unsigned int)v12;
}
