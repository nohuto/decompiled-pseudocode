/*
 * XREFs of sub_18006DE80 @ 0x18006DE80
 * Callers:
 *     sub_18002534C @ 0x18002534C (sub_18002534C.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     sub_18006DF50 @ 0x18006DF50 (sub_18006DF50.c)
 *     sub_18006E5A4 @ 0x18006E5A4 (sub_18006E5A4.c)
 */

__int64 __fastcall sub_18006DE80(__int64 a1)
{
  ULONG_PTR EnvironmentVersion; // rdi
  int v3; // eax
  __int64 v4; // rbx

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( stru_18015CFE8.Buffer )
  {
    RtlAcquireSRWLockShared(&SRWLock);
    if ( stru_18015CFE8.Buffer )
    {
      v4 = sub_18006DF50(&unk_180115710, 4LL, a1);
      RtlReleaseSRWLockShared(&SRWLock);
      goto LABEL_5;
    }
    RtlReleaseSRWLockShared(&SRWLock);
  }
  v3 = dword_18015D280;
  if ( !dword_18015D280 )
    v3 = sub_18006E5A4((PUNICODE_STRING)&stru_180110760);
  v4 = sub_18006DF50((char *)&unk_1801156E0 + 16 * v3, 4LL, a1);
LABEL_5:
  if ( v4 )
  {
    *(_QWORD *)(v4 + 88) = EnvironmentVersion;
    *(_BYTE *)(v4 + 100) = 0;
  }
  return v4;
}
