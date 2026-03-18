/*
 * XREFs of CalcWindowsFullScreen @ 0x1C0020080
 * Callers:
 *     <none>
 * Callees:
 *     CalcWindowFullScreen @ 0x1C0020C84 (CalcWindowFullScreen.c)
 */

__int64 __fastcall CalcWindowsFullScreen(__int64 a1)
{
  __int64 result; // rax
  __int64 *v2; // rbx

  result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 112LL);
  if ( result )
  {
    while ( 1 )
    {
      v2 = (__int64 *)(result + 88);
      if ( !*(_QWORD *)(result + 88) )
        break;
      CalcWindowFullScreen(result);
      result = *v2;
    }
  }
  return result;
}
