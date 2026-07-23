/*
 * XREFs of LdrpIsModuleUnderSystem32 @ 0x18007F564
 * Callers:
 *     LdrpCfgProcessLoadConfig @ 0x18002B994 (LdrpCfgProcessLoadConfig.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180049F70 (RtlCompareUnicodeStrings.c)
 */

char __fastcall LdrpIsModuleUnderSystem32(__int64 a1)
{
  char v1; // bl
  SIZE_T v3; // rdx

  if ( *(unsigned __int16 *)(a1 + 72) - (unsigned int)*(unsigned __int16 *)(a1 + 88) <= (unsigned int)(unsigned __int16)LdrpSystem32
                                                                                      + 2 )
    return 0;
  v3 = (unsigned __int64)(unsigned __int16)LdrpSystem32 >> 1;
  if ( *(_WORD *)(*(_QWORD *)(a1 + 80) + 2 * v3) != 92 )
    return 0;
  v1 = 1;
  if ( RtlCompareUnicodeStrings(*(PCWCH *)(a1 + 80), v3, *((PCWCH *)&LdrpSystem32 + 1), v3, 1u) )
    return 0;
  return v1;
}
