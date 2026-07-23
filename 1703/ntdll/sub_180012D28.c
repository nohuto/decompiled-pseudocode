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

NTSTATUS __fastcall sub_180012D28(HANDLE *NewTokenHandle, unsigned int a2, void *a3)
{
  __int16 v4; // bx
  NTSTATUS result; // eax

  *NewTokenHandle = 0LL;
  *((_DWORD *)NewTokenHandle + 2) = a2;
  v4 = a2;
  if ( (a2 & 0xFFFF0000) != 0 )
    TpSetDefaultPoolMaxThreads(HIWORD(a2));
  if ( !a3 )
    return 0;
  if ( (v4 & 0x100) == 0 )
    return 0;
  result = ZwDuplicateToken(a3, 4u, 0LL, 0, TokenImpersonation, NewTokenHandle);
  if ( result >= 0 )
    return 0;
  return result;
}
