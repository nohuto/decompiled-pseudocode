/*
 * XREFs of GetOperatorIndexByToken @ 0x140798AFC
 * Callers:
 *     LocalGetConditionForString @ 0x140799754 (LocalGetConditionForString.c)
 *     LocalpGetStringForCondition @ 0x14079B478 (LocalpGetStringForCondition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetOperatorIndexByToken(char a1)
{
  __int64 result; // rax
  _BYTE *i; // rdx

  result = 0LL;
  for ( i = &unk_1402F3CC8; *i != a1; i += 24 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 0x18 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
