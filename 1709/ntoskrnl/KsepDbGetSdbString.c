/*
 * XREFs of KsepDbGetSdbString @ 0x1405E8DD0
 * Callers:
 *     KsepDbGetDriverShims @ 0x140546B28 (KsepDbGetDriverShims.c)
 *     KsepDbGetShimInfo @ 0x1405E8B58 (KsepDbGetShimInfo.c)
 * Callees:
 *     SdbGetStringTagPtr @ 0x1404F5740 (SdbGetStringTagPtr.c)
 *     KsepStringDuplicate @ 0x1405464B4 (KsepStringDuplicate.c)
 */

__int64 __fastcall KsepDbGetSdbString(__int64 a1, unsigned int a2, __int64 a3)
{
  _WORD *StringTagPtr; // rax

  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, a2);
  if ( StringTagPtr )
    return KsepStringDuplicate(a3, StringTagPtr);
  else
    return 3221225485LL;
}
