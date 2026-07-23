/*
 * XREFs of LdrRemoveDllDirectory @ 0x18008AB30
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18008367C @ 0x18008367C (sub_18008367C.c)
 */

NTSTATUS __cdecl LdrRemoveDllDirectory(DLL_DIRECTORY_COOKIE Cookie)
{
  _QWORD *v2; // rdx
  DLL_DIRECTORY_COOKIE *v3; // rax
  void *v4; // rdi

  if ( (dword_1801596D4 & 4) == 0 )
    return -1073741811;
  RtlAcquireSRWLockExclusive(&SRWLock);
  v2 = *(_QWORD **)Cookie;
  if ( *(DLL_DIRECTORY_COOKIE *)(*(_QWORD *)Cookie + 8LL) != Cookie
    || (v3 = (DLL_DIRECTORY_COOKIE *)*((_QWORD *)Cookie + 1), *v3 != Cookie) )
  {
    __fastfail(3u);
  }
  *v3 = v2;
  v2[1] = v3;
  word_1801564B8 += -2 - *((_WORD *)Cookie + 8);
  RtlReleaseSRWLockExclusive(&SRWLock);
  RtlAcquireSRWLockExclusive(&stru_18015D3D8);
  v4 = (void *)sub_18008367C(&qword_18015B2D0);
  RtlReleaseSRWLockExclusive(&stru_18015D3D8);
  if ( v4 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Cookie);
  return 0;
}
