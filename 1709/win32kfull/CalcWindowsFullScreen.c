/*
 * XREFs of CalcWindowsFullScreen @ 0x1C0112050
 * Callers:
 *     <none>
 * Callees:
 *     CalcWindowFullScreen @ 0x1C0066940 (CalcWindowFullScreen.c)
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
      CalcWindowFullScreen((struct tagWND *)result);
      result = *v2;
    }
  }
  return result;
}
