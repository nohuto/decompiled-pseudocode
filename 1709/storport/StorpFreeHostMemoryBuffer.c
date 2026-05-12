/*
 * XREFs of StorpFreeHostMemoryBuffer @ 0x1C0035074
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CB50 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpFreeHostMemoryBuffer(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // rsi
  struct _MDL *v3; // rdi
  struct _MDL *Next; // rbx

  v1 = *(__int64 **)(a1 - 16);
  v2 = *v1;
  v3 = *(struct _MDL **)(*v1 + 5680);
  if ( !v3 )
    return 3238002689LL;
  do
  {
    Next = v3->Next;
    MmFreePagesFromMdl(v3);
    ExFreePoolWithTag(v3, 0);
    v3 = Next;
  }
  while ( Next );
  *(_QWORD *)(v2 + 5680) = 0LL;
  return 0LL;
}
