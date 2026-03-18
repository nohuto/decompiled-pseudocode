/*
 * XREFs of PspSetupUserProcessAddressSpace @ 0x14049BA50
 * Callers:
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 * Callees:
 *     PspWow64SetupUserProcessAddressSpace @ 0x1400638F0 (PspWow64SetupUserProcessAddressSpace.c)
 *     PsGetProcessServerSilo @ 0x140085020 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x14017E240 (ZwAllocateVirtualMemory.c)
 *     PspLocateInPEManifest @ 0x1404294F4 (PspLocateInPEManifest.c)
 *     PspGetStandardHandleList @ 0x140459D48 (PspGetStandardHandleList.c)
 *     PspPrepareSystemDllInitBlock @ 0x14049BCB0 (PspPrepareSystemDllInitBlock.c)
 *     PspMapSiloSharedDataView @ 0x14049BEE0 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x14049BF18 (MmMapApiSetView.c)
 *     PspCopyAndFixupParameters @ 0x14049C2C0 (PspCopyAndFixupParameters.c)
 *     PspWritePebAffinityInfo @ 0x1404ED074 (PspWritePebAffinityInfo.c)
 *     PsWow64GetProcessMachine @ 0x14053B210 (PsWow64GetProcessMachine.c)
 */

__int64 __fastcall PspSetupUserProcessAddressSpace(
        __int64 a1,
        _KPROCESS *a2,
        $5BC46E0569261879018906DEC3127961 *a3,
        __int64 a4)
{
  _BYTE *v5; // r12
  unsigned int *v6; // rdi
  int v8; // ecx
  unsigned int v11; // r14d
  int v12; // ecx
  int v13; // r15d
  __int64 ProcessServerSilo; // rax
  int inited; // ebx
  ULONG_PTR v16; // rax
  __int64 result; // rax
  unsigned __int16 ProcessMachine; // ax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-88h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-80h]
  $5BC46E0569261879018906DEC3127961 *v21; // [rsp+40h] [rbp-78h]
  _BYTE v22[24]; // [rsp+48h] [rbp-70h] BYREF

  v5 = 0LL;
  v6 = *(unsigned int **)(a4 + 208);
  v8 = *(unsigned __int8 *)(a4 + 9) >> 2;
  v21 = a3;
  v11 = 3;
  CurrentThread = KeGetCurrentThread();
  v12 = (v8 & 3) - 1;
  if ( v12 )
  {
    if ( v12 == 1 )
      v5 = v6 + 8;
  }
  else if ( *(_DWORD *)(a4 + 80) == *(_DWORD *)(a4 + 288) )
  {
    v5 = v22;
    result = PspGetStandardHandleList(a1, (__int64)v22);
    if ( (int)result < 0 )
      return result;
  }
  v13 = v6[2] & 0x60;
  if ( (PspGlobalFlags & 1) != 0 )
    v6[2] |= 0x8000u;
  if ( !v6[259] )
    v6[259] = PsDefaultLoaderThreads;
  ProcessServerSilo = PsGetProcessServerSilo((__int64)a2);
  if ( *((_BYTE *)PsGetServerSiloGlobals(ProcessServerSilo) + 1008) )
    v6[2] |= 0x20000000u;
  KiStackAttachProcess(a2, 0, (__int64)a3);
  if ( (*(_BYTE *)(a4 + 8) & 0x10) == 0 || (inited = PspLocateInPEManifest((__int64)a2, a4), inited >= 0) )
  {
    v16 = *((_QWORD *)v6 + 126) + *v6;
    RegionSize = v16;
    if ( !v13 )
    {
      if ( v16 < 0x20000 )
        v16 = 0x20000LL;
      RegionSize = v16;
    }
    *(_QWORD *)(a4 + 216) = 0LL;
    inited = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(a4 + 216), 0LL, &RegionSize, 0x3000u, 4u);
    if ( inited >= 0 )
    {
      inited = PspCopyAndFixupParameters(a1, v5, a4);
      if ( inited >= 0 )
      {
        if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
          inited = PspPrepareSystemDllInitBlock(0LL, a4);
        if ( inited >= 0 )
        {
          inited = PspWow64SetupUserProcessAddressSpace((__int64)a2, a4);
          if ( inited >= 0 )
          {
            if ( a2[1].ActiveProcessors.Bitmap[7] )
            {
              ProcessMachine = PsWow64GetProcessMachine(a2);
              if ( ProcessMachine == 452 )
              {
                v11 = 2;
              }
              else if ( ProcessMachine != 34404 )
              {
                v11 = 1;
              }
              inited = PspPrepareSystemDllInitBlock(v11, a4);
            }
            if ( inited >= 0 )
            {
              PspWritePebAffinityInfo(CurrentThread, a2);
              inited = MmMapApiSetView(a2);
              if ( inited >= 0 )
                inited = PspMapSiloSharedDataView(a2);
            }
          }
        }
      }
    }
  }
  KiUnstackDetachProcess(v21, 0LL);
  return (unsigned int)inited;
}
