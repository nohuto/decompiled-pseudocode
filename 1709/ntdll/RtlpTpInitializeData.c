/*
 * XREFs of RtlpTpInitializeData @ 0x180011910
 * Callers:
 *     RtlCreateTimer @ 0x180011160 (RtlCreateTimer.c)
 *     RtlQueueWorkItem @ 0x1800113D0 (RtlQueueWorkItem.c)
 *     RtlRegisterWait @ 0x180011CC0 (RtlRegisterWait.c)
 * Callees:
 *     NtDuplicateToken @ 0x1800A0900 (NtDuplicateToken.c)
 *     TpSetDefaultPoolMaxThreads @ 0x18010A920 (TpSetDefaultPoolMaxThreads.c)
 */

__int64 __fastcall RtlpTpInitializeData(__int64 a1, unsigned int a2, __int64 a3)
{
  __int16 v4; // bx
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = a2;
  v4 = a2;
  if ( (a2 & 0xFFFF0000) != 0 )
    TpSetDefaultPoolMaxThreads(HIWORD(a2));
  if ( !a3 )
    return 0LL;
  if ( (v4 & 0x100) == 0 )
    return 0LL;
  result = NtDuplicateToken(a3, 4LL, 0LL, 0LL, 2, a1);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
