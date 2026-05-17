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

__int64 __fastcall RtlSetSearchPathMode(int a1)
{
  int v2; // edx
  bool v3; // bl
  char v4; // al
  unsigned int v5; // edi
  unsigned __int64 v6; // rbx

  if ( (a1 & 0xFFFE7FFE) != 0 )
    return 3221225485LL;
  if ( (a1 & 1) == 0 )
  {
    if ( (a1 & 0x18000) == 0x10000 )
      goto LABEL_4;
    return 3221225485LL;
  }
  if ( (a1 & 0x10000) != 0 )
    return 3221225485LL;
LABEL_4:
  RtlAcquireSRWLockExclusive(&qword_18015C230);
  v2 = dword_18015BF5C;
  v3 = (a1 & 0x8000) == 0 && (dword_18015BF5C & 0x8000) != 0;
  if ( !v3 )
    v2 = a1;
  v4 = -((a1 & 0x8000) == 0 && (dword_18015BF5C & 0x8000) != 0);
  dword_18015BF5C = v2;
  v5 = v4 != 0 ? 0xC0000022 : 0;
  RtlReleaseSRWLockExclusive(&qword_18015C230);
  if ( !v3 )
  {
    RtlAcquireSRWLockExclusive(&qword_18015C3A0);
    v6 = sub_180089230(&qword_18015A2D8);
    RtlReleaseSRWLockExclusive(&qword_18015C3A0);
    if ( v6 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
  }
  return v5;
}
