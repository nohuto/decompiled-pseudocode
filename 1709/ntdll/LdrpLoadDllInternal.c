/*
 * XREFs of LdrpLoadDllInternal @ 0x18002DFFC
 * Callers:
 *     LdrpLoadForwardedDll @ 0x18002BF34 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDll @ 0x1800317B0 (LdrpLoadDll.c)
 * Callees:
 *     LdrpDetectDetour @ 0x180006720 (LdrpDetectDetour.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180010E84 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpPinModule @ 0x180011838 (LdrpPinModule.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800203DC (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpPrepareModuleForExecution @ 0x180021864 (LdrpPrepareModuleForExecution.c)
 *     LdrpDereferenceModule @ 0x180029804 (LdrpDereferenceModule.c)
 *     LdrpFastpthReloadedDll @ 0x18002E270 (LdrpFastpthReloadedDll.c)
 *     LdrpBuildForwarderLink @ 0x18002E6E0 (LdrpBuildForwarderLink.c)
 *     LdrpDrainWorkQueue @ 0x18004AAA4 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x18004B1EC (LdrpDropLastInProgressCount.c)
 *     LdrpProcessWork @ 0x18004B260 (LdrpProcessWork.c)
 *     LdrpFreeReplacedModule @ 0x18006D4E0 (LdrpFreeReplacedModule.c)
 *     LdrpFreeLoadContextOfNode @ 0x18006D510 (LdrpFreeLoadContextOfNode.c)
 *     LdrpHandleReplacedModule @ 0x18006D66C (LdrpHandleReplacedModule.c)
 *     LdrpCondenseGraph @ 0x180074A7C (LdrpCondenseGraph.c)
 *     LdrpLogError @ 0x180083E08 (LdrpLogError.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 */

int __fastcall LdrpLoadDllInternal(
        PUNICODE_STRING a1,
        int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        PVOID *a7,
        int *a8)
{
  int result; // eax
  int *v12; // rbx
  char v13; // di
  int v14; // eax
  __int64 v15; // rdx
  PVOID v16; // rax
  int v17; // eax
  int v18; // eax
  PVOID BaseAddress; // [rsp+48h] [rbp-30h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      427,
      (unsigned int)"LdrpLoadDllInternal",
      3,
      "DLL name: %wZ\n",
      a1);
  *a7 = 0LL;
  BaseAddress = 0LL;
  result = LdrpFastpthReloadedDll(a1, a3, a6, a7);
  if ( result < 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v13 = 1;
    }
    else
    {
      v13 = 0;
      LdrpDrainWorkQueue(0LL);
    }
    if ( !a6 || v13 || *(_DWORD *)(*(_QWORD *)(a6 + 152) + 24LL) )
    {
      LdrpDetectDetour();
      v12 = a8;
      v14 = LdrpFindOrPrepareLoadingModule(a1, a2, a3, a4, a5, &BaseAddress, (__int64)a8);
      if ( v14 == -1073741515 )
      {
        LOBYTE(v15) = 1;
        LdrpProcessWork(*((_QWORD *)BaseAddress + 22), v15);
      }
      else if ( v14 != -1073741267 && v14 < 0 )
      {
        *a8 = v14;
      }
    }
    else
    {
      v12 = a8;
      *a8 = -1073741515;
    }
    result = LdrpDrainWorkQueue(1LL);
    if ( BaseAddress )
    {
      v16 = (PVOID)LdrpHandleReplacedModule();
      *a7 = v16;
      if ( BaseAddress != v16 )
      {
        LdrpFreeReplacedModule(BaseAddress);
        BaseAddress = *a7;
      }
      if ( *((_QWORD *)BaseAddress + 22) )
        LdrpCondenseGraph(*((_QWORD *)BaseAddress + 19));
      if ( *v12 >= 0 )
      {
        v17 = LdrpPrepareModuleForExecution((__int64)BaseAddress, (__int64)v12);
        *v12 = v17;
        if ( v17 >= 0 )
        {
          v18 = LdrpBuildForwarderLink(a6, BaseAddress);
          *v12 = v18;
          if ( v18 >= 0 && !LdrInitState )
            LdrpPinModule((__int64)BaseAddress);
        }
      }
      LdrpFreeLoadContextOfNode(*((_QWORD *)BaseAddress + 19), v12);
      result = ~*v12;
      if ( *v12 < 0 )
      {
        *a7 = 0LL;
        LdrpDecrementModuleLoadCountEx((__int64)BaseAddress, 0);
        result = LdrpDereferenceModule((char *)BaseAddress);
      }
    }
    else
    {
      *v12 = -1073741801;
    }
    if ( !v13 )
      result = LdrpDropLastInProgressCount();
  }
  else
  {
    v12 = a8;
    *a8 = result;
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    return LdrpLogDbgPrint(
             (unsigned int)"minkernel\\ntdll\\ldrapi.c",
             657,
             (unsigned int)"LdrpLoadDllInternal",
             4,
             "Status: 0x%08lx\n",
             *v12);
  return result;
}
