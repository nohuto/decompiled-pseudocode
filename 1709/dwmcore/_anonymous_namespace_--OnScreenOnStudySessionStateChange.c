/*
 * XREFs of _anonymous_namespace_::OnScreenOnStudySessionStateChange @ 0x180124AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall anonymous_namespace_::OnScreenOnStudySessionStateChange(__int128 *a1)
{
  DWORD CurrentThreadId; // eax
  __int128 v3; // xmm0

  AcquireSRWLockExclusive(&SRWLock);
  CurrentThreadId = GetCurrentThreadId();
  byte_18026EBA9 = 1;
  dword_18026EE70 = CurrentThreadId;
  v3 = *a1;
  dword_18026EE70 = 0;
  xmmword_180272968 = v3;
  ReleaseSRWLockExclusive(&SRWLock);
}
