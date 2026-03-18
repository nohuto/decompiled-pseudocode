/*
 * XREFs of FRemoveForegroundActivate @ 0x1C00CC160
 * Callers:
 *     xxxSetForegroundWindow @ 0x1C00CBA34 (xxxSetForegroundWindow.c)
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C00CC03C (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FRemoveForegroundActivate(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 400);
  if ( (*(_DWORD *)(v1 + 12) & 0x40) != 0 )
    ClearAppStarting(*(_QWORD *)(a1 + 400));
  result = *(_DWORD *)(a1 + 464) & 0x20;
  if ( (*(_DWORD *)(a1 + 464) & 0x20) != 0 )
    *(_DWORD *)(a1 + 464) &= ~0x20u;
  else
    result = *(_DWORD *)(v1 + 12) & 0x100;
  if ( (_DWORD)result )
    *(_DWORD *)(v1 + 12) &= ~0x100u;
  return result;
}
