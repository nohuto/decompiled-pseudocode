/*
 * XREFs of WmipSDRegistryQueryRoutine @ 0x140557000
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     SeValidSecurityDescriptor @ 0x140557640 (SeValidSecurityDescriptor.c)
 */

__int64 __fastcall WmipSDRegistryQueryRoutine(__int64 a1, int a2, void *a3, ULONG a4, __int64 a5, _QWORD *a6)
{
  unsigned int v6; // ebx
  SIZE_T v7; // rsi
  PVOID PoolWithTag; // rax

  v6 = 0;
  v7 = a4;
  if ( a2 == 3 && a3 && SeValidSecurityDescriptor(a4, a3) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x70696D57u);
    *a6 = PoolWithTag;
    if ( PoolWithTag )
      memmove(PoolWithTag, a3, v7);
    else
      return (unsigned int)-1073741670;
  }
  return v6;
}
