/*
 * XREFs of PspSetupUserProcessAddressSpace @ 0x14045F718
 * Callers:
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 * Callees:
 *     PspWow64SetupUserProcessAddressSpace @ 0x140014824 (PspWow64SetupUserProcessAddressSpace.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     PsGetProcessServerSilo @ 0x1400893E0 (PsGetProcessServerSilo.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x14017DBC0 (ZwAllocateVirtualMemory.c)
 *     PspCopyAndFixupParameters @ 0x14045F34C (PspCopyAndFixupParameters.c)
 *     PspWritePebAffinityInfo @ 0x14045F5C4 (PspWritePebAffinityInfo.c)
 *     PspPrepareSystemDllInitBlock @ 0x14045F94C (PspPrepareSystemDllInitBlock.c)
 *     PsWow64GetProcessNtdllType @ 0x14045FB98 (PsWow64GetProcessNtdllType.c)
 *     PspMapSiloSharedDataView @ 0x14045FBB0 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x14045FBE8 (MmMapApiSetView.c)
 *     PspLocateInPEManifest @ 0x1404DA970 (PspLocateInPEManifest.c)
 *     PspGetStandardHandleList @ 0x140599330 (PspGetStandardHandleList.c)
 */

__int64 __fastcall PspSetupUserProcessAddressSpace(
        ULONG_PTR a1,
        _KPROCESS *a2,
        $709EDFC2F9E0D4565D6AA3C4377BC643 *a3,
        __int64 a4)
{
  unsigned int *v5; // r15
  unsigned int *v6; // rsi
  int v9; // ecx
  int v11; // ecx
  int v12; // r14d
  __int64 ProcessServerSilo; // rax
  int inited; // ebx
  ULONG_PTR v15; // rax
  __int64 result; // rax
  unsigned int ProcessNtdllType; // eax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-78h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-70h]
  _BYTE v20[24]; // [rsp+40h] [rbp-68h] BYREF

  v5 = 0LL;
  v6 = *(unsigned int **)(a4 + 208);
  v9 = (*(unsigned __int8 *)(a4 + 9) >> 2) & 3;
  CurrentThread = KeGetCurrentThread();
  v11 = v9 - 1;
  if ( v11 )
  {
    if ( v11 == 1 )
      v5 = v6 + 8;
  }
  else if ( *(_DWORD *)(a4 + 80) == *(_DWORD *)(a4 + 288) )
  {
    v5 = (unsigned int *)v20;
    result = PspGetStandardHandleList(a1, v20);
    if ( (int)result < 0 )
      return result;
  }
  v12 = v6[2] & 0x60;
  if ( (PspGlobalFlags & 1) != 0 )
    v6[2] |= 0x8000u;
  if ( !v6[259] )
    v6[259] = PsDefaultLoaderThreads;
  ProcessServerSilo = PsGetProcessServerSilo((__int64)a2);
  if ( *((_BYTE *)PsGetServerSiloGlobals(ProcessServerSilo) + 1040) )
    v6[2] |= 0x20000000u;
  KiStackAttachProcess(a2, 0, (__int64)a3);
  if ( (*(_BYTE *)(a4 + 8) & 0x10) == 0 || (inited = PspLocateInPEManifest(a2, a4), inited >= 0) )
  {
    v15 = *((_QWORD *)v6 + 126) + *v6;
    RegionSize = v15;
    if ( !v12 )
    {
      if ( v15 < 0x20000 )
        v15 = 0x20000LL;
      RegionSize = v15;
    }
    *(_QWORD *)(a4 + 216) = 0LL;
    inited = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(a4 + 216), 0LL, &RegionSize, 0x3000u, 4u);
    if ( inited >= 0 )
    {
      inited = PspCopyAndFixupParameters(a1, v5, a4);
      if ( inited >= 0 )
      {
        if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) == 0 )
          inited = PspPrepareSystemDllInitBlock(0LL, a4);
        if ( inited >= 0 )
        {
          inited = PspWow64SetupUserProcessAddressSpace((__int64)a2, a4);
          if ( inited >= 0 )
          {
            if ( a2[1].ActiveProcessors.Bitmap[7] )
            {
              ProcessNtdllType = PsWow64GetProcessNtdllType(a2);
              inited = PspPrepareSystemDllInitBlock(ProcessNtdllType, a4);
            }
            if ( inited >= 0 )
            {
              PspWritePebAffinityInfo((__int64)CurrentThread, (__int64)a2);
              inited = MmMapApiSetView(a2);
              if ( inited >= 0 )
                inited = PspMapSiloSharedDataView(a2);
            }
          }
        }
      }
    }
  }
  KiUnstackDetachProcess(a3, 0LL);
  return (unsigned int)inited;
}
