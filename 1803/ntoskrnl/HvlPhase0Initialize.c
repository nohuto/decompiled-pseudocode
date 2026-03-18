/*
 * XREFs of HvlPhase0Initialize @ 0x140628830
 * Callers:
 *     KiInitializeKernel @ 0x14047A5D0 (KiInitializeKernel.c)
 * Callees:
 *     PsGetHostSilo @ 0x14006CDB0 (PsGetHostSilo.c)
 *     HviIsAnyHypervisorPresent @ 0x14016D110 (HviIsAnyHypervisorPresent.c)
 *     HvlpTryConfigureInterface @ 0x140172250 (HvlpTryConfigureInterface.c)
 *     HvlQueryConnection @ 0x140173020 (HvlQueryConnection.c)
 *     strstr @ 0x140187E10 (strstr.c)
 *     HvlpInitializeBootProcessor @ 0x140227A0C (HvlpInitializeBootProcessor.c)
 *     HvlpSetupBootProcessorEarlyHypercallPages @ 0x140228488 (HvlpSetupBootProcessorEarlyHypercallPages.c)
 *     HvlpAllocateEarlyPages @ 0x14022DE80 (HvlpAllocateEarlyPages.c)
 *     HvlpMapEarlyPages @ 0x14022DF5C (HvlpMapEarlyPages.c)
 *     HvlpDetermineEnlightenments @ 0x14022DF7C (HvlpDetermineEnlightenments.c)
 *     HviGetHypervisorVersion @ 0x1402C0C70 (HviGetHypervisorVersion.c)
 */

__int64 __fastcall HvlPhase0Initialize(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rbx
  __int64 EarlyPages; // r8
  unsigned int v6; // ebx
  __int64 v7; // [rsp+38h] [rbp+10h]

  HvlpFlags = (HviIsAnyHypervisorPresent() ? 0x1000 : 0) | HvlpFlags & 0xFFFFEFFF;
  if ( (int)HvlQueryConnection(0LL) < 0 )
  {
    result = HvlpTryConfigureInterface(a1);
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result == -1070264320 )
        return 0LL;
      return result;
    }
  }
  result = HvlpSetupBootProcessorEarlyHypercallPages(a1);
  if ( (int)result >= 0 )
  {
    HvlHypervisorConnected = 1;
    HvlpDetermineEnlightenments();
    result = PsGetHostSilo();
    if ( (int)result >= 0 )
    {
      if ( (HvlpFlags & 2) != 0 && strstr(*(const char **)(KeLoaderBlock_0 + 216), "HYPERVISORDBG") )
        HvlpRootFlags |= 8u;
      if ( (((unsigned int)HvlpFlags >> 1) & 1) != 0
        && (*(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3132LL) & 0x2000) != 0 )
      {
        HvlpRootFlags |= 0x800u;
      }
      if ( (HvlEnlightenments & 0x100) != 0 )
      {
        v3 = __readmsr(0x40000021u);
        v4 = v3 | 1;
        if ( (((unsigned int)HvlpFlags >> 1) & 1) != 0 )
        {
          EarlyPages = HvlpMapEarlyPages(v3 & 0xFFFFFFFFFFFFF000uLL);
          if ( !EarlyPages )
            return 3221225626LL;
        }
        else
        {
          EarlyPages = HvlpAllocateEarlyPages();
          if ( !EarlyPages )
            return 3221225626LL;
          v4 = v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)v4) & 0xFFF;
        }
        __writemsr(0x40000021u, v4);
        HvlpReferenceTscPage = EarlyPages;
      }
      result = HvlpInitializeBootProcessor(a1);
      v6 = result;
      if ( (int)result >= 0 )
      {
        HviGetHypervisorVersion(HvlpHypervisorVersion);
        return v6;
      }
    }
  }
  return result;
}
