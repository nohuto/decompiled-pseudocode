/*
 * XREFs of KsepDbGetSdbString @ 0x1405995B0
 * Callers:
 *     KsepDbGetDriverShims @ 0x1404B502C (KsepDbGetDriverShims.c)
 *     KsepDbGetShimInfo @ 0x140599338 (KsepDbGetShimInfo.c)
 * Callees:
 *     SdbGetStringTagPtr @ 0x1405BC274 (SdbGetStringTagPtr.c)
 */

__int64 __fastcall KsepDbGetSdbString(__int64 a1, __int64 a2, __int64 a3)
{
  _WORD *StringTagPtr; // rax

  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, a2);
  if ( StringTagPtr )
    return KsepStringDuplicate(a3, StringTagPtr);
  else
    return 3221225485LL;
}
