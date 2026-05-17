/*
 * XREFs of sub_180061ED0 @ 0x180061ED0
 * Callers:
 *     RtlDestroyHeap @ 0x18005D440 (RtlDestroyHeap.c)
 * Callees:
 *     sub_18005E1FC @ 0x18005E1FC (sub_18005E1FC.c)
 *     sub_180061F40 @ 0x180061F40 (sub_180061F40.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

void __fastcall sub_180061ED0(__int64 a1)
{
  signed __int64 v2; // r8
  _QWORD v3[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( (byte_18015D028 & 2) != 0 && sub_18005E1FC(a1) )
  {
    memset(v3, 0, 0x30uLL);
    while ( 1 )
    {
      LOBYTE(v2) = 1;
      if ( (int)sub_180061F40(a1, v3, v2) < 0 )
        break;
      if ( (BYTE2(v3[2]) & 0x11) == 0x11 )
        v2 = _InterlockedExchangeAdd64(
               (volatile signed __int64 *)(*(_QWORD *)(qword_18015AA38 + 8LL * LOWORD(v3[4]) - 8) + 32LL),
               -v3[1]);
    }
  }
}
