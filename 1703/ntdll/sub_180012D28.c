/*
 * XREFs of sub_180012D28 @ 0x180012D28
 * Callers:
 *     RtlCreateTimer @ 0x180011110 (RtlCreateTimer.c)
 *     RtlQueueWorkItem @ 0x180012480 (RtlQueueWorkItem.c)
 *     RtlRegisterWait @ 0x180012DA0 (RtlRegisterWait.c)
 * Callees:
 *     ZwDuplicateToken @ 0x1800A5B40 (ZwDuplicateToken.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180105340 (TpSetDefaultPoolMaxThreads.c)
 */

__int64 __fastcall sub_180012D28(__int64 a1, unsigned int a2, __int64 a3)
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
  result = ZwDuplicateToken(a3, 4LL, 0LL);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
