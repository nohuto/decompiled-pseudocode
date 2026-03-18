/*
 * XREFs of SdbReadGUIDTag @ 0x1405E8E04
 * Callers:
 *     KsepDbGetDriverShims @ 0x140546B28 (KsepDbGetDriverShims.c)
 *     KsepDbGetShimInfo @ 0x1405E8B58 (KsepDbGetShimInfo.c)
 * Callees:
 *     SdbReadBinaryTag @ 0x1404F5BE0 (SdbReadBinaryTag.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
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
