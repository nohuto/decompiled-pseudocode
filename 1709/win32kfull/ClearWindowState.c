/*
 * XREFs of ClearWindowState @ 0x1C00D61A0
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     ?ValidateState@@YAHK@Z @ 0x1C00D61F8 (-ValidateState@@YAHK@Z.c)
 */

__int64 __fastcall ClearWindowState(__int64 a1, unsigned int a2)
{
  unsigned __int16 v2; // r10
  _DWORD *v3; // r11

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) == *(_QWORD *)(gptiCurrent + 400LL) && (unsigned int)ValidateState(a2) )
    SetOrClrWF(0, v3, v2, 1);
  return 1LL;
}
