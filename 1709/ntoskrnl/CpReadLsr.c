/*
 * XREFs of CpReadLsr @ 0x1402951F8
 * Callers:
 *     CpGetByte @ 0x140295000 (CpGetByte.c)
 *     CpPutByte @ 0x140295150 (CpPutByte.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall CpReadLsr(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v4; // si

  v4 = ((__int64 (__fastcall *)(__int64))READ_UCHAR)(*(_QWORD *)a1 + 5 * CpRegisterWidth);
  if ( (v4 & a2) == 0 )
  {
    byte_1403A8141 |= 2
                    - ((((__int64 (__fastcall *)(__int64))READ_UCHAR)(*(_QWORD *)a1 + 6 * CpRegisterWidth) & 0x40) != 0);
    if ( byte_1403A8141 == 3 )
      *(_WORD *)(a1 + 12) |= 2u;
  }
  return v4;
}
