/*
 * XREFs of SmpDestroyControlBlock @ 0x140004BE4
 * Callers:
 *     SmpStopCsr @ 0x140001070 (SmpStopCsr.c)
 *     SmpStartCsr @ 0x140001DA0 (SmpStartCsr.c)
 *     SmpFinalizeClientContext @ 0x140004050 (SmpFinalizeClientContext.c)
 *     SmpHandleConnectionRequest @ 0x140004130 (SmpHandleConnectionRequest.c)
 * Callees:
 *     SmpTerminateCSR @ 0x1400010A8 (SmpTerminateCSR.c)
 *     SmpSessionIdToInitialSessionIndex @ 0x1400038A8 (SmpSessionIdToInitialSessionIndex.c)
 *     SmpReleaseControlBlock @ 0x140004C70 (SmpReleaseControlBlock.c)
 *     __security_check_cookie @ 0x14000C6C0 (__security_check_cookie.c)
 *     SmpTerminate @ 0x14001314C (SmpTerminate.c)
 */

__int64 __fastcall SmpDestroyControlBlock(HANDLE *BaseAddress, int a2)
{
  unsigned int v2; // esi
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  unsigned __int64 v7; // rdi
  unsigned __int64 v9; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 Parameters[4]; // [rsp+30h] [rbp-38h] BYREF

  v2 = 0;
  if ( (*(_BYTE *)BaseAddress & 2) == 0 )
  {
    _m_prefetchw(BaseAddress);
    v5 = *(_DWORD *)BaseAddress;
    do
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)BaseAddress, v5 | 2, v5);
    }
    while ( v6 != v5 );
    if ( (v5 & 2) == 0 )
    {
      v7 = *((unsigned int *)BaseAddress + 2);
      SmpReleaseControlBlock(BaseAddress);
      if ( a2 )
      {
        if ( (unsigned int)SmpSessionIdToInitialSessionIndex(v7) != -1
          && !*(_DWORD *)(SmpCoreProcessIds + 40LL * (unsigned int)SmpSessionIdToInitialSessionIndex(v7) + 4) )
        {
          v9 = (unsigned __int64)BaseAddress[2];
          RtlInitUnicodeString(&DestinationString, L"initial session process or");
          Parameters[0] = (unsigned __int64)&DestinationString;
          Parameters[1] = *(int *)(v9 + 4);
          Parameters[2] = v7;
          Parameters[3] = v9;
          SmpTerminate(Parameters, 1u, 4u);
          __debugbreak();
        }
        NtTerminateProcess(BaseAddress[6], -1073741823);
        v2 = SmpTerminateCSR((unsigned int)v7);
      }
    }
  }
  NtWaitForSingleObject(BaseAddress[6], 0, 0LL);
  return v2;
}
