/*
 * XREFs of EtwWriteKMSecurityEvent @ 0x140155E64
 * Callers:
 *     AdtpWriteToEtwEx @ 0x1402644A4 (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x1405AB9F4 (AdtpWriteToEtw.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpEventWriteFull @ 0x140085400 (EtwpEventWriteFull.c)
 */

__int64 __fastcall EtwWriteKMSecurityEvent(__int16 *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  _QWORD *CurrentServerSiloGlobals; // rax

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  return EtwpEventWriteFull(
           (_QWORD *)(CurrentServerSiloGlobals[108] + 8LL),
           *(_BYTE *)(CurrentServerSiloGlobals[108] + 5032LL),
           0,
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
