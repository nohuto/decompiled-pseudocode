/*
 * XREFs of RtlAppendUnicodeToString @ 0x18002C120
 * Callers:
 *     RtlpGetMUIRedirectedFilePath @ 0x18001BBFC (RtlpGetMUIRedirectedFilePath.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18002AD00 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18002DB10 (RtlFormatCurrentUserKeyPath.c)
 *     LdrpFindKnownDll @ 0x18004D750 (LdrpFindKnownDll.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180053240 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpGetRegistryHandle @ 0x180067320 (RtlpGetRegistryHandle.c)
 *     WerpGlobalFlagsForProcess @ 0x180076860 (WerpGlobalFlagsForProcess.c)
 *     LdrpCodeAuthzInitialize @ 0x18007E7AC (LdrpCodeAuthzInitialize.c)
 *     LdrpLoadWow64 @ 0x1800846F4 (LdrpLoadWow64.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085378 (LdrpInitializePerUserWindowsDirectory.c)
 *     WerEscalationLazyInit @ 0x18008F6D8 (WerEscalationLazyInit.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800DA724 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DB028 (AVrfpLoadAndInitializeProvider.c)
 *     LdrpMUIEtwOutput @ 0x1800E0A80 (LdrpMUIEtwOutput.c)
 * Callees:
 *     memmove @ 0x1800A6940 (memmove.c)
 */

__int64 __fastcall RtlAppendUnicodeToString(unsigned __int16 *a1, _WORD *a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int16 v4; // bx
  void *v5; // r14

  if ( !a2 )
    return 0LL;
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  if ( v3 <= 0x7FFE )
  {
    v4 = 2 * v3;
    if ( *a1 + (unsigned int)v4 <= a1[1] )
    {
      v5 = (void *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1));
      memmove(v5, a2, v4);
      *a1 += v4;
      if ( (unsigned int)*a1 + 1 < a1[1] )
        *((_WORD *)v5 + ((unsigned __int64)v4 >> 1)) = 0;
      return 0LL;
    }
  }
  return 3221225507LL;
}
