/*
 * XREFs of RtlpGetStackTraceAddressEx @ 0x180061570
 * Callers:
 *     RtlDeleteCriticalSection @ 0x180061480 (RtlDeleteCriticalSection.c)
 *     RtlCheckHeldCriticalSections @ 0x1800815EC (RtlCheckHeldCriticalSections.c)
 *     RtlpGetStackTraceAddress @ 0x1800FA4C0 (RtlpGetStackTraceAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetStackTraceAddressEx(unsigned __int16 a1, unsigned __int16 a2)
{
  unsigned int v2; // r8d

  v2 = a1 + (a2 << 16);
  if ( RtlpStackTraceDatabase && v2 && v2 <= *(_DWORD *)(RtlpStackTraceDatabase + 180) )
    return *(_QWORD *)(*(_QWORD *)(RtlpStackTraceDatabase + 184) - 8LL * v2);
  else
    return 0LL;
}
