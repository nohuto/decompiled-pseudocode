/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x18004D9D0
 * Callers:
 *     RtlpGetMUIRedirectedFilePath @ 0x18001BBFC (RtlpGetMUIRedirectedFilePath.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18002AD00 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSearchPath @ 0x18004D43C (LdrpSearchPath.c)
 *     LdrpFindKnownDll @ 0x18004D750 (LdrpFindKnownDll.c)
 *     RtlpWin32NtNameToNtPathName @ 0x18004D868 (RtlpWin32NtNameToNtPathName.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180053240 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpGetRegistryHandle @ 0x180067320 (RtlpGetRegistryHandle.c)
 *     LdrpCodeAuthzInitialize @ 0x18007E7AC (LdrpCodeAuthzInitialize.c)
 *     LdrpLoadWow64 @ 0x1800846F4 (LdrpLoadWow64.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085378 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800DA724 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DB028 (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800DB92C (AvrfMiniLoadDll.c)
 *     RtlpHpOverrideGCInterval @ 0x1800F0948 (RtlpHpOverrideGCInterval.c)
 * Callees:
 *     memmove @ 0x1800A6940 (memmove.c)
 */

__int64 __fastcall RtlAppendUnicodeStringToString(unsigned __int16 *a1, __int16 *a2)
{
  unsigned __int16 v2; // si
  unsigned __int64 v4; // rcx
  void *v5; // r14

  v2 = *a2;
  if ( !*a2 )
    return 0LL;
  v4 = *a1;
  if ( (unsigned int)v4 + v2 <= a1[1] )
  {
    v5 = (void *)(*((_QWORD *)a1 + 1) + 2 * (v4 >> 1));
    memmove(v5, *((const void **)a2 + 1), v2);
    *a1 += v2;
    if ( (unsigned int)*a1 + 1 < a1[1] )
      *((_WORD *)v5 + ((unsigned __int64)v2 >> 1)) = 0;
    return 0LL;
  }
  return 3221225507LL;
}
