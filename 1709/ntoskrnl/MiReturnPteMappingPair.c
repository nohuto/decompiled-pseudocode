/*
 * XREFs of MiReturnPteMappingPair @ 0x140234C68
 * Callers:
 *     MiSlowRotateCopy @ 0x14021C23C (MiSlowRotateCopy.c)
 *     MiCopyDirectMapHeader @ 0x1406E40C0 (MiCopyDirectMapHeader.c)
 * Callees:
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 */

__int64 __fastcall MiReturnPteMappingPair(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax

  LOBYTE(result) = *(_BYTE *)(a1 + 8);
  if ( (_BYTE)result == 17 )
    return MiReleasePtes((__int64)&qword_140389360, *(_QWORD *)(a1 + 16), 2u, a4);
  result = (unsigned __int8)result;
  __writecr8((unsigned __int8)result);
  return result;
}
