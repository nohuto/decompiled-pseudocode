/*
 * XREFs of RtlpComputeDllPath @ 0x18007E410
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     RtlpComputePath @ 0x18004CA08 (RtlpComputePath.c)
 *     RtlpLookupCurDirSetting @ 0x18007E4E0 (RtlpLookupCurDirSetting.c)
 */

_WORD *__fastcall RtlpComputeDllPath(wchar_t *a1)
{
  unsigned __int64 EnvironmentVersion; // rdi
  int v3; // eax
  _WORD *v4; // rbx

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( LdrpDllDirectory.Buffer )
  {
    RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
    if ( LdrpDllDirectory.Buffer )
    {
      v4 = RtlpComputePath(dword_180118C60, 4u, a1, 0);
      RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
      goto LABEL_5;
    }
    RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  }
  v3 = dword_180160310;
  if ( !dword_180160310 )
    v3 = RtlpLookupCurDirSetting((PUNICODE_STRING)&stru_180113770);
  v4 = RtlpComputePath(&dword_180118C30[4 * v3], 4u, a1, 0);
LABEL_5:
  if ( v4 )
  {
    *((_QWORD *)v4 + 11) = EnvironmentVersion;
    *((_BYTE *)v4 + 100) = 0;
  }
  return v4;
}
