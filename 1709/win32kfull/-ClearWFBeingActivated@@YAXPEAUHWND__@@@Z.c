/*
 * XREFs of ?ClearWFBeingActivated@@YAXPEAUHWND__@@@Z @ 0x1C000D270
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 */

void __fastcall ClearWFBeingActivated(HWND a1)
{
  __int64 v1; // rax

  v1 = ValidateHwnd(a1);
  if ( v1 )
    SetOrClrWF(0LL, v1, 528LL, 1LL);
}
