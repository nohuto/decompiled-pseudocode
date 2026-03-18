/*
 * XREFs of SetUnavailableInputSource @ 0x1C007B9C0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004AFA0 (xxxCreateThreadInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall SetUnavailableInputSource(_DWORD *a1)
{
  if ( a1 )
  {
    *a1 = 0;
    a1[1] = 0;
  }
}
