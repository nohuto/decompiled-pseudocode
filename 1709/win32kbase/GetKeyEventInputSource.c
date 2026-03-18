/*
 * XREFs of GetKeyEventInputSource @ 0x1C0010FF0
 * Callers:
 *     xxxKeyEvent @ 0x1C0010760 (xxxKeyEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetKeyEventInputSource(int a1, __int16 a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax
  bool v5; // di
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v5 = 0;
  *a4 = 1;
  if ( a2 != -3 )
  {
    if ( a3 )
    {
      v5 = *(_DWORD *)(a3 + 8) != 0;
    }
    else if ( gbEnforceUIPI && (result = (__int64)gptiCurrent, *(int *)(*((_QWORD *)gptiCurrent + 50) + 12LL) < 0)
           || (result = PsGetCurrentProcess(), (PVOID)result == gpepCSRSS) )
    {
      v5 = 1;
    }
  }
  a4[1] = 0;
  if ( !a1 || v5 )
  {
    a4[1] = 1;
  }
  else
  {
    result = 4LL;
    if ( a2 != -3 )
      result = 2LL;
    a4[1] = result;
  }
  return result;
}
