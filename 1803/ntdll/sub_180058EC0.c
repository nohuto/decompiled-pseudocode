/*
 * XREFs of sub_180058EC0 @ 0x180058EC0
 * Callers:
 *     RtlQueueWorkItem @ 0x180057A90 (RtlQueueWorkItem.c)
 *     RtlCreateTimer @ 0x180057FF0 (RtlCreateTimer.c)
 *     RtlRegisterWait @ 0x180058640 (RtlRegisterWait.c)
 * Callees:
 *     ZwDuplicateToken @ 0x18009B300 (ZwDuplicateToken.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180108120 (TpSetDefaultPoolMaxThreads.c)
 */

__int64 __fastcall sub_180058EC0(__int64 a1, unsigned int a2, __int64 a3)
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
  result = ZwDuplicateToken(a3, 4LL, 0LL, 0LL, 2, a1);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
