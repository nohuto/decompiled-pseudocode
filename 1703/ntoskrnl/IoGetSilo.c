/*
 * XREFs of IoGetSilo @ 0x140050BD0
 * Callers:
 *     <none>
 * Callees:
 *     IopGetFileObjectExtension @ 0x1400511D0 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetSilo(__int64 a1)
{
  __int64 result; // rax

  result = IopGetFileObjectExtension(a1, 7LL);
  if ( result )
    return *(_QWORD *)(result + 8);
  return result;
}
