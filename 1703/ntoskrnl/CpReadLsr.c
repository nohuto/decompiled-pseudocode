/*
 * XREFs of CpReadLsr @ 0x14026AD88
 * Callers:
 *     CpGetByte @ 0x14026AB90 (CpGetByte.c)
 *     CpPutByte @ 0x14026ACE0 (CpPutByte.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall CpReadLsr(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v4; // si

  v4 = ((__int64 (__fastcall *)(__int64))READ_UCHAR[0])(*(_QWORD *)a1 + 5 * CpRegisterWidth);
  if ( (v4 & a2) == 0 )
  {
    byte_14038C525 |= 2
                    - ((((__int64 (__fastcall *)(__int64))READ_UCHAR[0])(*(_QWORD *)a1 + 6 * CpRegisterWidth) & 0x40) != 0);
    if ( byte_14038C525 == 3 )
      *(_WORD *)(a1 + 12) |= 2u;
  }
  return v4;
}
