/*
 * XREFs of EtwWriteKMSecurityEvent @ 0x14014C514
 * Callers:
 *     AdtpWriteToEtwEx @ 0x14028E7F0 (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x1405D08F8 (AdtpWriteToEtw.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x140087F40 (EtwpEventWriteFull.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall EtwWriteKMSecurityEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  _QWORD *CurrentServerSiloGlobals; // rax

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  return EtwpEventWriteFull(
           CurrentServerSiloGlobals[108] + 16LL,
           *(_BYTE *)(CurrentServerSiloGlobals[108] + 4032LL),
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
