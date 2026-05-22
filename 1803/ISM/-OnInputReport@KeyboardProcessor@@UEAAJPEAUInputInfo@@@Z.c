/*
 * XREFs of ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180069D60
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z @ 0x18003AB6C (-UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z.c)
 *     ?OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18006B0D0 (-OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 */

__int64 __fastcall KeyboardProcessor::OnInputReport(KeyboardProcessor *this, struct InputInfo *a2)
{
  unsigned __int16 v4; // r8
  __int64 result; // rax
  __int16 v6; // dx
  int v7; // ebx
  char v8; // di
  int v9; // eax

  v4 = 0;
  if ( (*(_DWORD *)a2 & 4) == 0 )
    return 2147942487LL;
  v6 = *((_WORD *)a2 + 262);
  v7 = 4;
  if ( (v6 & 0x10E7) != 4327 && (v6 & 0x40) == 0 )
  {
    v4 = *((_WORD *)a2 + 261) | 0xE000;
    if ( (v6 & 2) == 0 )
      v4 = *((_WORD *)a2 + 261);
    if ( (v6 & 4) != 0 )
      v4 |= 0xE100u;
  }
  switch ( v4 )
  {
    case 0x1Du:
      v7 = 1;
      break;
    case 0x2Au:
      v7 = 2;
      break;
    case 0x36u:
      v7 = 32;
      break;
    default:
      if ( v4 != 56 )
      {
        switch ( v4 )
        {
          case 0xE01Du:
            v7 = 16;
            break;
          case 0xE038u:
            v7 = 64;
            break;
          case 0xE05Bu:
            v7 = 8;
            break;
          case 0xE05Cu:
            v7 = 128;
            break;
          default:
            return NonPointerProcessor::OnInputReport(this, a2);
        }
      }
      break;
  }
  v8 = (v6 & 1) == 0;
  if ( (v6 & 1) != 0 || (v7 & *((_DWORD *)this + 14)) == 0 )
  {
    result = KeyboardModifierState::UpdateKeyModifierArray(*((_DWORD **)this + 6), v7, v8);
    if ( (int)result < 0 )
      return result;
    v9 = *((_DWORD *)this + 14);
    if ( v8 )
      *((_DWORD *)this + 14) = v7 | v9;
    else
      *((_DWORD *)this + 14) = v9 & ~v7;
  }
  return NonPointerProcessor::OnInputReport(this, a2);
}
