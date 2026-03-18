/*
 * XREFs of EtwpCheckForPoolTagFilterExtension @ 0x140748F80
 * Callers:
 *     EtwpUpdateTrace @ 0x140450B18 (EtwpUpdateTrace.c)
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 * Callees:
 *     EtwpGetFlagExtension @ 0x1404ECD34 (EtwpGetFlagExtension.c)
 *     EtwpUpdateTagFilter @ 0x140749E5C (EtwpUpdateTagFilter.c)
 */

__int64 __fastcall EtwpCheckForPoolTagFilterExtension(__int64 a1, __int64 a2, char a3)
{
  unsigned __int16 *FlagExtension; // rax
  __int64 v5; // r11
  __int64 v6; // rdx
  unsigned __int16 *v8; // r8
  unsigned __int16 *v9; // rcx

  FlagExtension = EtwpGetFlagExtension(a2, 4);
  if ( FlagExtension )
  {
    v6 = *FlagExtension;
    LOWORD(v6) = (unsigned __int16)(4 * v6 - 4) >> 2;
    if ( (unsigned __int16)v6 > 4u )
      return 3221225485LL;
    v8 = &EtwpPoolTagFilter[10 * v5];
    v9 = FlagExtension + 2;
    goto LABEL_7;
  }
  if ( a3 )
  {
    v6 = 0LL;
    v8 = &EtwpPoolTagFilter[10 * v5];
    v9 = 0LL;
LABEL_7:
    EtwpUpdateTagFilter(v9, v6, v8);
  }
  return 0LL;
}
