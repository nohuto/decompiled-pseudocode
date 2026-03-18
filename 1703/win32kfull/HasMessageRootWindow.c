/*
 * XREFs of HasMessageRootWindow @ 0x1C0006410
 * Callers:
 *     xxxSetParentWorker @ 0x1C0018034 (xxxSetParentWorker.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 * Callees:
 *     _GetAncestor @ 0x1C00178E0 (_GetAncestor.c)
 */

__int64 __fastcall HasMessageRootWindow(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r9d
  __int64 Ancestor; // rax
  __int64 v5; // r10

  v3 = 0;
  if ( a1 )
  {
    Ancestor = GetAncestor(a1, 4LL, a3, 0LL);
    if ( Ancestor == v5 )
      return 1;
  }
  return v3;
}
