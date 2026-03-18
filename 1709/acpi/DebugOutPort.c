/*
 * XREFs of DebugOutPort @ 0x1C005E21C
 * Callers:
 *     DebugO @ 0x1C005E1C0 (DebugO.c)
 *     DebugOD @ 0x1C005E1E0 (DebugOD.c)
 *     DebugOW @ 0x1C005E200 (DebugOW.c)
 * Callees:
 *     WriteSystemIO @ 0x1C001886C (WriteSystemIO.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     _strtoui64_0 @ 0x1C002BCA2 (_strtoui64_0.c)
 *     IsNumber @ 0x1C005E6FC (IsNumber.c)
 */

__int64 __fastcall DebugOutPort(const char *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // esi

  v2 = 0;
  if ( !a1 )
  {
    if ( dword_1C007A2E4 == 2 )
    {
LABEL_9:
      dword_1C007A2E4 = 0;
      return v2;
    }
LABEL_8:
    PrintDebugMessage(224, 0LL, 0LL, 0LL, 0LL);
    v2 = -2;
    goto LABEL_9;
  }
  v5 = strtoui64_0(a1, 0LL, 16);
  if ( ++dword_1C007A2E4 > 2 || !(unsigned __int8)IsNumber(a1, 16LL) )
    goto LABEL_8;
  if ( dword_1C007A2E4 == 1 )
    dword_1C007A084 = v5;
  else
    WriteSystemIO(dword_1C007A084, a2, v5);
  return v2;
}
