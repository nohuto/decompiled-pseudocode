/*
 * XREFs of ?UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z @ 0x180048EA8
 * Callers:
 *     ?InvalidateKeyboardModifiers@KeyboardProcessor@@AEAAJXZ @ 0x180049244 (-InvalidateKeyboardModifiers@KeyboardProcessor@@AEAAJXZ.c)
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800494A0 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?SetValueForKey@?$FixedSizeMap@KK$07@@QEAAJAEBK0@Z @ 0x180048F9C (-SetValueForKey@-$FixedSizeMap@KK$07@@QEAAJAEBK0@Z.c)
 */

__int64 __fastcall KeyboardModifierState::UpdateKeyModifierArray(_DWORD *a1, int a2, char a3)
{
  _DWORD *v3; // r9
  unsigned int v4; // ebx
  int v5; // r9d
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rcx
  int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+48h] [rbp+10h] BYREF

  v3 = a1;
  if ( a2 == a1[20] )
  {
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v4;
    v5 = 115;
  }
  else
  {
    v6 = 0LL;
    a1 += 4;
    do
    {
      if ( *a1 == a2 )
      {
        v8 = v3[2 * v6 + 5];
        v13 = v8;
        if ( a3 )
        {
          v3[21] |= a2;
          v13 = v8 + 1;
        }
        else if ( v8 )
        {
          v13 = v8 - 1;
          if ( v8 == 1 )
            v3[21] &= ~a2;
        }
        v12 = a2;
        v9 = FixedSizeMap<unsigned long,unsigned long,8>::SetValueForKey(v3 + 4, &v12, &v13);
        v4 = v9;
        if ( v9 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, 175, v9);
        return v4;
      }
      v6 = (unsigned int)(v6 + 1);
      a1 += 2;
    }
    while ( (unsigned int)v6 < 8 );
    v4 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v4;
    v5 = 132;
  }
  McTemplateU0qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, v5, v4);
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 156, v4);
  return v4;
}
