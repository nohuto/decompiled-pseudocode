/*
 * XREFs of VfIrpDatabaseInit @ 0x14082B65C
 * Callers:
 *     VfInitVerifierComponents @ 0x140814500 (VfInitVerifierComponents.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

_QWORD *VfIrpDatabaseInit()
{
  _QWORD *result; // rax
  __int64 v1; // rcx

  ViIrpDatabaseLock = 0;
  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2000uLL, 0x74546F49u);
  ViIrpDatabase = (__int64)result;
  if ( result )
  {
    v1 = 256LL;
    do
    {
      result[1] = result;
      *result = result;
      result += 2;
      --v1;
    }
    while ( v1 );
    ViIrpDatabaseAddressRanges = (__int64)result;
    result = memset(result, 0, 0x1000uLL);
    _InterlockedExchange(&VfIrpDatabaseInitialized, 1);
  }
  return result;
}
