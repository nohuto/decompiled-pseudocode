/*
 * XREFs of ?_GetNavDirFromKey@CSwitchItemGrid@@AEAAIIW4ModifierKeys@@@Z @ 0x180290390
 * Callers:
 *     ?KeyDown@CSwitchItemGrid@@UEAA_NIW4ModifierKeys@@@Z @ 0x18028F0A0 (-KeyDown@CSwitchItemGrid@@UEAA_NIW4ModifierKeys@@@Z.c)
 * Callees:
 *     ?MapToChildNavDir@ElementHelpers@@YAII@Z @ 0x18028F1F0 (-MapToChildNavDir@ElementHelpers@@YAII@Z.c)
 */

__int64 __fastcall CSwitchItemGrid::_GetNavDirFromKey(__int64 a1, int a2, char a3)
{
  __int64 result; // rax
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx

  result = 0LL;
  v4 = a2 - 9;
  if ( v4 )
  {
    v5 = v4 - 28;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 == 1 )
            result = 2LL;
        }
        else
        {
          result = 4LL;
        }
      }
      else
      {
        result = 1LL;
      }
    }
    else
    {
      result = 3LL;
    }
  }
  else
  {
    result = (unsigned int)((a3 & 4) != 0) + 5;
  }
  if ( !*(_QWORD *)(a1 + 168) )
    return ElementHelpers::MapToChildNavDir((ElementHelpers *)(unsigned int)result);
  return result;
}
