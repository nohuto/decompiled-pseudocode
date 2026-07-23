/*
 * XREFs of LdrRemoveDllDirectory @ 0x18008D020
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180089230 @ 0x180089230 (sub_180089230.c)
 */

NTSTATUS __cdecl LdrRemoveDllDirectory(DLL_DIRECTORY_COOKIE Cookie)
{
  _QWORD *v2; // rdx
  DLL_DIRECTORY_COOKIE *v3; // rax
  void *v4; // rdi

  if ( (dword_180158674 & 4) == 0 )
    return -1073741811;
  RtlAcquireSRWLockExclusive(&SRWLock);
  v2 = *(_QWORD **)Cookie;
  v3 = (DLL_DIRECTORY_COOKIE *)*((_QWORD *)Cookie + 1);
  if ( *(DLL_DIRECTORY_COOKIE *)(*(_QWORD *)Cookie + 8LL) != Cookie || *v3 != Cookie )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  word_1801553E8 += -2 - *((_WORD *)Cookie + 8);
  RtlReleaseSRWLockExclusive(&SRWLock);
  RtlAcquireSRWLockExclusive(&stru_18015C3A0);
  v4 = (void *)sub_180089230(&qword_18015A2D0);
  RtlReleaseSRWLockExclusive(&stru_18015C3A0);
  if ( v4 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Cookie);
  return 0;
}
