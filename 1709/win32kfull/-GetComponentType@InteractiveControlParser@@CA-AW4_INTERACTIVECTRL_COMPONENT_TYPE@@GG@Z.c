/*
 * XREFs of ?GetComponentType@InteractiveControlParser@@CA?AW4_INTERACTIVECTRL_COMPONENT_TYPE@@GG@Z @ 0x1C02260C4
 * Callers:
 *     ?CreateAndLinkComponent@InteractiveControlParser@@CAJPEAU_HIDP_VALUE_CAPS@@HPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@@Z @ 0x1C0225B94 (-CreateAndLinkComponent@InteractiveControlParser@@CAJPEAU_HIDP_VALUE_CAPS@@HPEAU_INTERACTIVECTRL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InteractiveControlParser::GetComponentType(__int16 a1, unsigned __int16 a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  switch ( a1 )
  {
    case 1:
      if ( a2 >= 0x30u )
      {
        if ( a2 <= 0x35u )
        {
          return 1;
        }
        else
        {
          switch ( a2 )
          {
            case '6':
              return 2;
            case '7':
              return 3;
            case '8':
              return 4;
            case '9':
              return 6;
          }
        }
      }
      break;
    case 9:
      return 5;
    case 13:
      if ( a2 == 51 )
      {
        return 7;
      }
      else if ( (unsigned int)a2 - 72 <= 1 )
      {
        return 8;
      }
      break;
  }
  return v2;
}
