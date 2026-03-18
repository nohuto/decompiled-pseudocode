/*
 * XREFs of CpPutByte @ 0x140295150
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CpReadLsr @ 0x1402951F8 (CpReadLsr.c)
 */

__int64 __fastcall CpPutByte(_QWORD *a1, __int64 a2)
{
  char v2; // si
  char v4; // di

  v2 = a2;
  while ( (*((_BYTE *)a1 + 12) & 2) != 0 )
  {
    v4 = ((__int64 (__fastcall *)(__int64))READ_UCHAR)(*a1 + 6 * CpRegisterWidth) & 0xB0;
    if ( v4 == -80 )
      break;
    if ( ((unsigned __int8)CpReadLsr(a1, 0LL) & ((unsigned __int8)~v4 >> 7)) != 0 )
      ((void (__fastcall *)(_QWORD))READ_UCHAR)(*a1);
  }
  do
    LOBYTE(a2) = 32;
  while ( (CpReadLsr(a1, a2) & 0x20) == 0 );
  LOBYTE(a2) = v2;
  return ((__int64 (__fastcall *)(_QWORD, __int64))WRITE_UCHAR[0])(*a1, a2);
}
