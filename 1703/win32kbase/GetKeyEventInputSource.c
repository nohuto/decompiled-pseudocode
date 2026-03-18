/*
 * XREFs of GetKeyEventInputSource @ 0x1C004DE10
 * Callers:
 *     xxxKeyEvent @ 0x1C004D5A0 (xxxKeyEvent.c)
 * Callees:
 *     <none>
 */

void __fastcall GetKeyEventInputSource(int a1, __int64 a2, _DWORD *a3)
{
  bool v3; // di

  v3 = 0;
  *a3 = 1;
  if ( a2 )
  {
    v3 = *(_DWORD *)(a2 + 8) != 0;
  }
  else if ( gbEnforceUIPI && *(int *)(*((_QWORD *)gptiCurrent + 47) + 12LL) < 0
         || (PVOID)PsGetCurrentProcess() == gpepCSRSS )
  {
    v3 = 1;
  }
  a3[1] = 0;
  if ( !a1 || v3 )
    a3[1] = 1;
  else
    a3[1] = 2;
}
