/*
 * XREFs of ?NotifyRailsConfigurationChanged@CManipulation@@UEAAX_NW4RailsAxis@@@Z @ 0x1801706B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall CManipulation::NotifyRailsConfigurationChanged(__int64 a1, char a2, int a3)
{
  unsigned __int8 result; // al
  char v4; // r9
  char v5; // al
  char v6; // dl

  result = *(_BYTE *)(a1 + 348);
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
    *(_BYTE *)(a1 + 348) = v6 | v5;
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(a1 - 64) + 64LL))(a1 - 64, 12LL, a1 - 64);
  }
  return result;
}
