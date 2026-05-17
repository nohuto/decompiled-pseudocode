/*
 * XREFs of RtlpComputeSearchPath @ 0x18007E380
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputePath @ 0x18004CA08 (RtlpComputePath.c)
 *     RtlpLookupCurDirSetting @ 0x18007E4E0 (RtlpLookupCurDirSetting.c)
 */

unsigned __int64 RtlpComputeSearchPath()
{
  int v0; // eax
  unsigned __int64 EnvironmentVersion; // rbx
  unsigned __int64 result; // rax

  v0 = 1;
  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( (RtlpSearchPathMode & 1) == 0 )
  {
    if ( (RtlpSearchPathMode & 0x10000) != 0 )
    {
      v0 = 0;
    }
    else
    {
      v0 = dword_180160314;
      if ( !dword_180160314 )
        v0 = RtlpLookupCurDirSetting(L"*,", 0LL, &dword_180160314);
    }
  }
  result = RtlpComputePath(&dword_180118C30[4 * v0], 4u, 0LL, 0);
  if ( result )
  {
    *(_QWORD *)(result + 88) = EnvironmentVersion;
    *(_BYTE *)(result + 100) = 0;
  }
  return result;
}
