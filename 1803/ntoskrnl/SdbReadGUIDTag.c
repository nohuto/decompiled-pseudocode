/*
 * XREFs of SdbReadGUIDTag @ 0x1407D7374
 * Callers:
 *     KsepDbGetDriverShims @ 0x1405FC67C (KsepDbGetDriverShims.c)
 *     KsepDbGetShimInfo @ 0x140744DE8 (KsepDbGetShimInfo.c)
 * Callees:
 *     SdbReadBinaryTag @ 0x1405FFA10 (SdbReadBinaryTag.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

_OWORD *__fastcall SdbReadGUIDTag(_OWORD *a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  if ( !(unsigned int)SdbReadBinaryTag(a2, a3, (__int64)a1, 0x10u) )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbReadGUIDTag", 167, (unsigned int)"Failed to read GUID");
    *a1 = *a4;
  }
  return a1;
}
