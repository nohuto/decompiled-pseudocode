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

__int64 __fastcall sub_18006DE80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdx
  volatile uint64_t EnvironmentVersion; // rdi
  int v7; // eax
  __int64 v8; // rbx

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  EnvironmentVersion = ProcessParameters->EnvironmentVersion;
  if ( *((_QWORD *)&xmmword_18015CFE8 + 1) )
  {
    RtlAcquireSRWLockShared(&qword_18015D3E0, (char *)ProcessParameters, a3, a4);
    if ( *((_QWORD *)&xmmword_18015CFE8 + 1) )
    {
      v8 = sub_18006DF50(&unk_180115710, 4LL, a1);
      RtlReleaseSRWLockShared(&qword_18015D3E0);
      goto LABEL_5;
    }
    RtlReleaseSRWLockShared(&qword_18015D3E0);
  }
  v7 = dword_18015D280;
  if ( !dword_18015D280 )
    v7 = sub_18006E5A4(L"\"$", 1LL, &dword_18015D280);
  v8 = sub_18006DF50((char *)&unk_1801156E0 + 16 * v7, 4LL, a1);
LABEL_5:
  if ( v8 )
  {
    *(_QWORD *)(v8 + 88) = EnvironmentVersion;
    *(_BYTE *)(v8 + 100) = 0;
  }
  return v8;
}
