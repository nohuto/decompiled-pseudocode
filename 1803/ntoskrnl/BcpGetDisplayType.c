/*
 * XREFs of BcpGetDisplayType @ 0x1402C6F18
 * Callers:
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x1402C70B0 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1402C7278 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BcpGetDisplayType(_DWORD *a1)
{
  _DWORD *v1; // r8
  __int64 result; // rax

  v1 = &unk_14039B89C;
  result = 0LL;
  do
  {
    if ( *a1 < *(v1 - 1) )
      break;
    if ( a1[1] < *v1 )
      break;
    result = (unsigned int)(result + 1);
    v1 += 18;
  }
  while ( (__int64)v1 < (__int64)dword_14039B9BC );
  return result;
}
