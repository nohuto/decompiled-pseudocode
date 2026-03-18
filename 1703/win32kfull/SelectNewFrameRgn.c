/*
 * XREFs of SelectNewFrameRgn @ 0x1C0016D60
 * Callers:
 *     xxxSetParentWorker @ 0x1C0018034 (xxxSetParentWorker.c)
 *     NtUserSetWindowRgnEx @ 0x1C01E01D0 (NtUserSetWindowRgnEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SelectNewFrameRgn(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 224);
  if ( v4 )
  {
    result = GreDeleteObject(v4);
    *(_QWORD *)(a1 + 224) = 0LL;
  }
  if ( a2 )
  {
    result = GreSetRegionOwner(a2, 0LL);
    *(_QWORD *)(a1 + 224) = a2;
  }
  return result;
}
