/*
 * XREFs of sub_18004FA70 @ 0x18004FA70
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     sub_18004D108 @ 0x18004D108 (sub_18004D108.c)
 *     sub_18005021C @ 0x18005021C (sub_18005021C.c)
 */

int *__fastcall sub_18004FA70(wchar_t *a1)
{
  ULONG_PTR EnvironmentVersion; // rdi
  int v3; // eax
  int *v4; // rbx

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( stru_18015BF60.Buffer )
  {
    RtlAcquireSRWLockShared(&SRWLock);
    if ( stru_18015BF60.Buffer )
    {
      v4 = sub_18004D108(dword_1801147B0, 4u, a1, 0);
      RtlReleaseSRWLockShared(&SRWLock);
      goto LABEL_5;
    }
    RtlReleaseSRWLockShared(&SRWLock);
  }
  v3 = dword_18015C240;
  if ( !dword_18015C240 )
    v3 = sub_18005021C((PUNICODE_STRING)&stru_1801103B0);
  v4 = sub_18004D108(&dword_180114780[4 * v3], 4u, a1, 0);
LABEL_5:
  if ( v4 )
  {
    *((_QWORD *)v4 + 11) = EnvironmentVersion;
    *((_BYTE *)v4 + 100) = 0;
  }
  return v4;
}
