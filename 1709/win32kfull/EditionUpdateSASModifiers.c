/*
 * XREFs of EditionUpdateSASModifiers @ 0x1C0086EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?VKTOMODIFIERS@@YAIE@Z @ 0x1C01A1B44 (-VKTOMODIFIERS@@YAIE@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall EditionUpdateSASModifiers(int a1, unsigned __int8 a2, __int16 a3)
{
  int result; // eax
  int v4; // r9d

  if ( !a1 || (result = gProtocolType, gProtocolType) && (result = gptiCurrent, gptiCurrent == gptiRit) )
  {
    result = 512;
    if ( (a3 & 0x200) == 0 )
    {
      result = VKTOMODIFIERS(a2);
      if ( v4 )
      {
        result = ~result;
        gfsSASModifiersDown &= result;
      }
      else
      {
        gfsSASModifiersDown |= result;
      }
    }
  }
  return result;
}
