/*
 * XREFs of SetWindowState @ 0x1C00F65F0
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     ?ValidateState@@YAHK@Z @ 0x1C00F66A8 (-ValidateState@@YAHK@Z.c)
 */

__int64 __fastcall SetWindowState(__int64 a1, unsigned int a2)
{
  unsigned __int16 v2; // r10
  _DWORD *v3; // r11

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) == *(_QWORD *)(gptiCurrent + 376LL) && (unsigned int)ValidateState(a2) )
    SetOrClrWF(1, v3, v2, 1);
  return 1LL;
}
