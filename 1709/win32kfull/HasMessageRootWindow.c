/*
 * XREFs of HasMessageRootWindow @ 0x1C000BA90
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 * Callees:
 *     _GetAncestor @ 0x1C0113990 (_GetAncestor.c)
 */

__int64 __fastcall HasMessageRootWindow(__int64 a1)
{
  unsigned int v1; // r10d
  __int64 Ancestor; // rax
  __int64 v3; // r11

  v1 = 0;
  if ( a1 )
  {
    Ancestor = GetAncestor(a1, 4LL);
    if ( Ancestor == v3 )
      return 1;
  }
  return v1;
}
