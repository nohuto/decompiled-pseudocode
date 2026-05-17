/*
 * XREFs of RtlMapGenericMask @ 0x1800564C0
 * Callers:
 *     RtlpCopyEffectiveAce @ 0x180055F34 (RtlpCopyEffectiveAce.c)
 *     RtlpCopyAces @ 0x180056560 (RtlpCopyAces.c)
 *     RtlpApplyAclToObject @ 0x1800578D8 (RtlpApplyAclToObject.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800D8080 (RtlNewSecurityGrantedAccess.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E53C0 (RtlpConvertAclToAutoInherit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlMapGenericMask(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  result = (unsigned int)*a1;
  if ( (int)result < 0 )
  {
    result = *a2 | (unsigned int)result;
    *a1 = result;
  }
  if ( (*a1 & 0x40000000) != 0 )
  {
    result = (unsigned int)a2[1];
    *a1 |= result;
  }
  if ( (*a1 & 0x20000000) != 0 )
  {
    result = (unsigned int)a2[2];
    *a1 |= result;
  }
  if ( (*a1 & 0x10000000) != 0 )
  {
    result = (unsigned int)a2[3];
    *a1 |= result;
  }
  *a1 &= 0xFFFFFFFu;
  return result;
}
