/*
 * XREFs of LdrQueryImageFileExecutionOptions @ 0x18004AF80
 * Callers:
 *     <none>
 * Callees:
 *     LdrQueryImageFileExecutionOptionsEx @ 0x18004AFC0 (LdrQueryImageFileExecutionOptionsEx.c)
 */

__int64 __fastcall LdrQueryImageFileExecutionOptions(int a1, int a2, int a3, int a4, int a5, __int64 a6)
{
  if ( byte_18015C298 )
    return 3221225524LL;
  else
    return LdrQueryImageFileExecutionOptionsEx(a1, a2, a3, a4, a5, a6);
}
