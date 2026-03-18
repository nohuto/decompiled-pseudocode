/*
 * XREFs of EtwWriteKMSecurityEvent @ 0x14017E53C
 * Callers:
 *     AdtpWriteToEtwEx @ 0x1402C4458 (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x14063D16C (AdtpWriteToEtw.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpEventWriteFull @ 0x1400EFAB0 (EtwpEventWriteFull.c)
 */

__int64 __fastcall EtwWriteKMSecurityEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  _QWORD *CurrentServerSiloGlobals; // rax

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  return EtwpEventWriteFull(
           CurrentServerSiloGlobals[108] + 24LL,
           *(_BYTE *)(CurrentServerSiloGlobals[108] + 4040LL),
           0LL,
           0,
           a1,
           0,
           0,
           0LL,
           0LL,
           a3,
           a4,
           0LL,
           0LL,
           0LL,
           0,
           0LL,
           0LL);
}
