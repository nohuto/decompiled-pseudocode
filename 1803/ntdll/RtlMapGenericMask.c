/*
 * XREFs of RtlMapGenericMask @ 0x180037EF0
 * Callers:
 *     sub_180037A68 @ 0x180037A68 (sub_180037A68.c)
 *     sub_180071344 @ 0x180071344 (sub_180071344.c)
 *     sub_180078B08 @ 0x180078B08 (sub_180078B08.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800D2110 (RtlNewSecurityGrantedAccess.c)
 *     sub_1800E0A40 @ 0x1800E0A40 (sub_1800E0A40.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlMapGenericMask(PACCESS_MASK AccessMask, PGENERIC_MAPPING GenericMapping)
{
  ACCESS_MASK v2; // r8d

  v2 = *AccessMask;
  if ( (*AccessMask & 0x80000000) != 0 )
  {
    v2 |= GenericMapping->GenericRead;
    *AccessMask = v2;
  }
  if ( (v2 & 0x40000000) != 0 )
  {
    v2 |= GenericMapping->GenericWrite;
    *AccessMask = v2;
  }
  if ( (v2 & 0x20000000) != 0 )
  {
    v2 |= GenericMapping->GenericExecute;
    *AccessMask = v2;
  }
  if ( (v2 & 0x10000000) != 0 )
  {
    v2 |= GenericMapping->GenericAll;
    *AccessMask = v2;
  }
  *AccessMask = v2 & 0xFFFFFFF;
}
