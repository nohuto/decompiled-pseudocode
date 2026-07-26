/*
 * XREFs of ndisReadParameter @ 0x1C00CA650
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 */

__int64 __fastcall ndisReadParameter(__int64 a1, int a2, const void *a3, unsigned int a4, _DWORD *a5, void **a6)
{
  __int64 v6; // rbx
  PVOID PoolWithTag; // rax

  v6 = a4;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a4 + 4LL, 0x6472444Eu);
  *a6 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v6 + 4);
  memmove(*a6, a3, (unsigned int)v6);
  if ( a5 )
  {
    *a5 = a2;
    a5[1] = v6;
  }
  return 0LL;
}
