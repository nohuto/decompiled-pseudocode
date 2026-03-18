/*
 * XREFs of ViKeObjectAcquired @ 0x1408277B4
 * Callers:
 *     VerifierKeWaitForMultipleObjects @ 0x140826ED0 (VerifierKeWaitForMultipleObjects.c)
 *     VerifierKeWaitForSingleObject @ 0x140827000 (VerifierKeWaitForSingleObject.c)
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140827CF8 (VfDeadlockAcquireResource.c)
 */

char __fastcall ViKeObjectAcquired(unsigned int a1, _BYTE **a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  char result; // al

  if ( a1 )
  {
    v5 = a1;
    do
    {
      result = **a2 & 0x7F;
      if ( result == 2 )
        result = VfDeadlockAcquireResource((unsigned int)*a2, 1, (unsigned int)KeGetCurrentThread(), a3 != 0, a4);
      ++a2;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
