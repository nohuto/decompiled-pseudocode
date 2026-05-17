/*
 * XREFs of RtlMapGenericMask @ 0x18004A040
 * Callers:
 *     sub_180049BCC @ 0x180049BCC (sub_180049BCC.c)
 *     sub_18004AC04 @ 0x18004AC04 (sub_18004AC04.c)
 *     sub_18004C608 @ 0x18004C608 (sub_18004C608.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800D9180 (RtlNewSecurityGrantedAccess.c)
 *     sub_1800E5D78 @ 0x1800E5D78 (sub_1800E5D78.c)
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
