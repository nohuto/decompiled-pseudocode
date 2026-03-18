/*
 * XREFs of IsolatedSurfaceLookasideListAllocateEx @ 0x1C00AA0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateType@?$CTypeIsolation@$0CIAAA@$0CIA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C0042614 (-AllocateType@-$CTypeIsolation@$0CIAAA@$0CIA@@NSInstrumentation@@QEAAPEAXXZ.c)
 */

PVOID __fastcall IsolatedSurfaceLookasideListAllocateEx(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        PLOOKASIDE_LIST_EX Lookaside)
{
  PVOID result; // rax

  result = 0LL;
  if ( *gpTypeIsolation )
    return (PVOID)NSInstrumentation::CTypeIsolation<163840,640>::AllocateType((__int64)*gpTypeIsolation);
  return result;
}
