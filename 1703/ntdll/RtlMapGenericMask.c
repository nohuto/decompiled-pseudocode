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

void __cdecl RtlMapGenericMask(PACCESS_MASK AccessMask, PGENERIC_MAPPING GenericMapping)
{
  if ( (*AccessMask & 0x80000000) != 0 )
    *AccessMask |= GenericMapping->GenericRead;
  if ( (*AccessMask & 0x40000000) != 0 )
    *AccessMask |= GenericMapping->GenericWrite;
  if ( (*AccessMask & 0x20000000) != 0 )
    *AccessMask |= GenericMapping->GenericExecute;
  if ( (*AccessMask & 0x10000000) != 0 )
    *AccessMask |= GenericMapping->GenericAll;
  *AccessMask &= 0xFFFFFFFu;
}
