/*
 * XREFs of ?UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z @ 0x18003AB6C
 * Callers:
 *     ?OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180069C00 (-OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180069D60 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?SetValueForKey@?$FixedSizeMap@KK$07@@QEAAJAEBK0@Z @ 0x18003ABE4 (-SetValueForKey@-$FixedSizeMap@KK$07@@QEAAJAEBK0@Z.c)
 */

__int64 __fastcall KeyboardModifierState::UpdateKeyModifierArray(_DWORD *a1, int a2, char a3)
{
  __int64 v5; // rax
  _DWORD *i; // r8
  int v7; // eax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 == a1[20] )
    return 2147942487LL;
  v5 = 0LL;
  for ( i = a1 + 4; *i != a2; i += 2 )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= 8 )
      return 2147500037LL;
  }
  v7 = a1[2 * v5 + 5];
  v9 = v7;
  if ( a3 )
  {
    a1[21] |= a2;
    v9 = v7 + 1;
  }
  else if ( v7 )
  {
    v9 = v7 - 1;
    if ( v7 == 1 )
      a1[21] &= ~a2;
  }
  v8 = a2;
  return FixedSizeMap<unsigned long,unsigned long,8>::SetValueForKey(a1 + 4, &v8, &v9);
}
