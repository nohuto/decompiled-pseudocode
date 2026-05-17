/*
 * XREFs of RtlCompleteProcessCloning @ 0x1800D1950
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlWakeAllConditionVariable @ 0x1800735E0 (RtlWakeAllConditionVariable.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18007EBA0 (RtlAcquireReleaseSRWLockExclusive.c)
 *     sub_1800D0858 @ 0x1800D0858 (sub_1800D0858.c)
 *     sub_1800D09C4 @ 0x1800D09C4 (sub_1800D09C4.c)
 *     sub_1800D0C68 @ 0x1800D0C68 (sub_1800D0C68.c)
 *     sub_1800D1EA8 @ 0x1800D1EA8 (sub_1800D1EA8.c)
 *     sub_1800EBBBC @ 0x1800EBBBC (sub_1800EBBBC.c)
 */

void __fastcall RtlCompleteProcessCloning(unsigned int a1)
{
  int v2; // edi
  HANDLE UniqueThread; // rdx
  unsigned __int64 v4; // rdx
  unsigned __int64 *v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // r8
  __int64 v9; // r9

  if ( a1 )
  {
    qword_18015D258 = 1LL;
    v2 = 1;
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_18015BE98 = 0LL;
    qword_18015BE90 = (__int64)UniqueThread;
    dword_18015BE88 = -2;
    dword_18015BE8C = 1;
    qword_18015D260 = 1LL;
  }
  else
  {
    byte_18015BEB9 = 0;
    v2 = 2;
    RtlReleaseSRWLockExclusive(&qword_18015D248);
  }
  RtlReleaseSRWLockExclusive(&qword_18015D258);
  sub_1800D0C68(v2, v4, v5, v6);
  if ( v2 == 1 )
    qword_18015D2D0 = 1LL;
  else
    RtlReleaseSRWLockExclusive(&qword_18015D2D0);
  sub_1800EBBBC(a1);
  sub_1800D09C4(a1);
  RtlLeaveCriticalSection((__int64)&unk_18015BE80);
  sub_1800D1EA8(a1);
  RtlReleaseSRWLockExclusive(&qword_18015D260);
  sub_1800D0858(a1);
  if ( a1 )
  {
    byte_18015BEB9 = 0;
    RtlAcquireReleaseSRWLockExclusive(&qword_18015D248, v7, v8, v9);
    RtlWakeAllConditionVariable(&qword_18015D250);
  }
}
