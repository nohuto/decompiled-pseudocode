/*
 * XREFs of ?SetValueForKey@?$FixedSizeMap@KK$07@@QEAAJAEBK0@Z @ 0x18003ABE4
 * Callers:
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x18003A904 (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z @ 0x18003AB6C (-UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FixedSizeMap<unsigned long,unsigned long,8>::SetValueForKey(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // r9d
  int v4; // esi
  _DWORD *v5; // r10
  unsigned int v6; // ebp
  char v7; // bl
  char v8; // r11
  unsigned int v9; // eax

  v3 = 0;
  v4 = a1[16];
  v5 = a1;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( *a2 == v4 )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    v9 = 0;
    while ( *a1 != *a2 )
    {
      if ( !v8 && *a1 == v4 )
      {
        v6 = v9;
        v8 = 1;
      }
      ++v9;
      a1 += 2;
      if ( v9 >= 8 )
        goto LABEL_11;
    }
    v7 = 1;
    v5[2 * v9 + 1] = *a3;
LABEL_11:
    if ( !v7 )
    {
      if ( v8 )
      {
        v5[2 * v6] = *a2;
        v5[2 * v6 + 1] = *a3;
      }
      else
      {
        return (unsigned int)-2147467259;
      }
    }
  }
  return v3;
}
