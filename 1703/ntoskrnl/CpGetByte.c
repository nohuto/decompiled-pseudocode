/*
 * XREFs of CpGetByte @ 0x14026AB90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CpReadLsr @ 0x14026AD88 (CpReadLsr.c)
 */

__int64 __fastcall CpGetByte(__int64 a1, _BYTE *a2, char a3, char a4)
{
  _BYTE *v5; // r14
  int v8; // edi
  char Lsr; // al

  v5 = a2;
  if ( !*(_QWORD *)a1 )
    return 1LL;
  v8 = a3 != 0 ? 204800 : 1;
  while ( 1 )
  {
    LOBYTE(a2) = 1;
    --v8;
    Lsr = CpReadLsr(a1, a2);
    if ( (Lsr & 1) == 0 )
      goto LABEL_9;
    if ( (Lsr & 0xC) != 0 )
      break;
    if ( a4 )
      return 0LL;
    *v5 = ((__int64 (__fastcall *)(_QWORD))READ_UCHAR[0])(*(_QWORD *)a1);
    if ( (*(_BYTE *)(a1 + 12) & 2) == 0
      || ((char (__fastcall *)(__int64))READ_UCHAR[0])(*(_QWORD *)a1 + 6 * CpRegisterWidth) < 0 )
    {
      return 0LL;
    }
LABEL_9:
    if ( !v8 )
    {
      CpReadLsr(a1, 0LL);
      return 1LL;
    }
  }
  *v5 = 0;
  return 2LL;
}
