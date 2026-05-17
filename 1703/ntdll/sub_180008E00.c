/*
 * XREFs of sub_180008E00 @ 0x180008E00
 * Callers:
 *     RtlDeleteCriticalSection @ 0x180008D10 (RtlDeleteCriticalSection.c)
 *     sub_18008275C @ 0x18008275C (sub_18008275C.c)
 *     sub_1800F9090 @ 0x1800F9090 (sub_1800F9090.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180008E00(unsigned __int16 a1, unsigned __int16 a2)
{
  unsigned int v2; // r8d

  v2 = a1 + (a2 << 16);
  if ( qword_180159A08 && v2 && v2 <= *(_DWORD *)(qword_180159A08 + 180) )
    return *(_QWORD *)(*(_QWORD *)(qword_180159A08 + 184) - 8LL * v2);
  else
    return 0LL;
}
