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

unsigned __int64 __fastcall RtlpComputeDllPath(wchar_t *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdx
  unsigned __int64 EnvironmentVersion; // rdi
  int v7; // eax
  unsigned __int64 v8; // rbx

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  EnvironmentVersion = ProcessParameters->EnvironmentVersion;
  if ( *((_QWORD *)&LdrpDllDirectory + 1) )
  {
    RtlAcquireSRWLockShared(&LdrpDllDirectoryLock, (char *)ProcessParameters, a3, a4);
    if ( *((_QWORD *)&LdrpDllDirectory + 1) )
    {
      v8 = RtlpComputePath(dword_180118C60, 4u, a1, 0);
      RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
      goto LABEL_5;
    }
    RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  }
  v7 = dword_180160310;
  if ( !dword_180160310 )
    v7 = RtlpLookupCurDirSetting(L"\"$", 1LL, &dword_180160310);
  v8 = RtlpComputePath(&dword_180118C30[4 * v7], 4u, a1, 0);
LABEL_5:
  if ( v8 )
  {
    *(_QWORD *)(v8 + 88) = EnvironmentVersion;
    *(_BYTE *)(v8 + 100) = 0;
  }
  return v8;
}
