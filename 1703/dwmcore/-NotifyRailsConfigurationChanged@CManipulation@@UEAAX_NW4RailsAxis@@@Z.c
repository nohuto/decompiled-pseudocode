/*
 * XREFs of ?NotifyRailsConfigurationChanged@CManipulation@@UEAAX_NW4RailsAxis@@@Z @ 0x180167EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

unsigned __int8 __fastcall CManipulation::NotifyRailsConfigurationChanged(__int64 a1, char a2, int a3)
{
  unsigned __int8 result; // al
  char v4; // r9
  char v5; // al
  char v6; // dl

  result = *(_BYTE *)(a1 + 404);
  if ( a3 )
    v4 = result >> 4;
  else
    v4 = result >> 3;
  if ( (v4 & 1) != a2 )
  {
    if ( a3 )
    {
      v5 = result & 0xEF;
      v6 = 16 * a2;
    }
    else
    {
      v5 = result & 0xF7;
      v6 = 8 * a2;
    }
    *(_BYTE *)(a1 + 404) = v6 | v5;
    return CResource::NotifyOnChanged((_DWORD *)(a1 + 8), 12LL, a1 + 8);
  }
  return result;
}
