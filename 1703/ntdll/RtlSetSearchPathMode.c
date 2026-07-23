/*
 * XREFs of RtlSetSearchPathMode @ 0x180089180
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180089230 @ 0x180089230 (sub_180089230.c)
 */

NTSTATUS __cdecl RtlSetSearchPathMode(ULONG Flags)
{
  ULONG v2; // edx
  bool v3; // bl
  char v4; // al
  NTSTATUS v5; // edi
  void *v6; // rbx

  if ( (Flags & 0xFFFE7FFE) != 0 )
    return -1073741811;
  if ( (Flags & 1) == 0 )
  {
    if ( (Flags & 0x18000) == 0x10000 )
      goto LABEL_4;
    return -1073741811;
  }
  if ( (Flags & 0x10000) != 0 )
    return -1073741811;
LABEL_4:
  RtlAcquireSRWLockExclusive(&stru_18015C230);
  v2 = dword_18015BF5C;
  v3 = (Flags & 0x8000) == 0 && (dword_18015BF5C & 0x8000) != 0;
  if ( !v3 )
    v2 = Flags;
  v4 = -((Flags & 0x8000) == 0 && (dword_18015BF5C & 0x8000) != 0);
  dword_18015BF5C = v2;
  v5 = v4 != 0 ? 0xC0000022 : 0;
  RtlReleaseSRWLockExclusive(&stru_18015C230);
  if ( !v3 )
  {
    RtlAcquireSRWLockExclusive(&stru_18015C3A0);
    v6 = (void *)sub_180089230(&qword_18015A2D8);
    RtlReleaseSRWLockExclusive(&stru_18015C3A0);
    if ( v6 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  }
  return v5;
}
