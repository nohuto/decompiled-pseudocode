/*
 * XREFs of RtlpCreateLowFragHeap @ 0x180006FD8
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x180006DF0 (RtlpActivateLowFragmentationHeap.c)
 * Callees:
 *     RtlpInitializeLowFragHeap @ 0x1800071B0 (RtlpInitializeLowFragHeap.c)
 *     RtlQueryResourcePolicy @ 0x180007560 (RtlQueryResourcePolicy.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18004A630 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpInitializeLfhRandomDataArray @ 0x18004AE8C (RtlpInitializeLfhRandomDataArray.c)
 *     RtlpGetHeapProtection @ 0x18004B238 (RtlpGetHeapProtection.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x1801013E4 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180101658 (RtlpLogHeapExtendEvent.c)
 */

__int64 __fastcall RtlpCreateLowFragHeap(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // ecx
  __int64 v4; // rcx
  int HeapProtection; // eax
  int v6; // eax
  __int64 v7; // r14
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v16; // [rsp+70h] [rbp+38h] BYREF
  __int64 v17; // [rsp+78h] [rbp+40h] BYREF
  __int64 v18; // [rsp+80h] [rbp+48h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp+50h] BYREF

  v2 = 0;
  if ( (int)RtlQueryResourcePolicy(0LL, 0LL, &v16, 4LL) >= 0 && v16 <= 10 )
    v2 = 3;
  if ( (*(_DWORD *)(a1 + 112) & 0x75010F63) != 2 || (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v4 = 0LL;
  }
  else
  {
    v3 = RtlpAffinityState;
    if ( (v2 & 1) != 0 )
      v3 = 1;
    v4 = 48 * ((unsigned int)(v3 - 1) + 69LL + 4LL * (unsigned int)(129 * v3));
  }
  v17 = 0LL;
  v18 = v4;
  HeapProtection = RtlpGetHeapProtection(a1, 1LL);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v17, 0LL, &v18, 0x2000, HeapProtection) < 0 )
    return 0LL;
  v6 = RtlpAffinityState;
  if ( (v2 & 1) != 0 )
    v6 = 1;
  v7 = 48LL * (unsigned int)(v6 - 1);
  v19 = (v7 + 7407) & 0xFFFFFFFFFFFFF000uLL;
  v8 = RtlpGetHeapProtection(a1, 1LL);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v17, 0LL, &v19, 4096, v8) < 0 )
  {
    v18 = 0LL;
    RtlpSecMemFreeVirtualMemory(v10, &v17, &v18, 0x8000LL);
    return 0LL;
  }
  v12 = 2147353472LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v10, v9) )
    v13 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v13 = 2147353472LL;
  if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v13, v11) )
      v12 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent(a1, v17, v19, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v12);
    RtlpLogHeapCommit(a1, v17, v19, 9LL);
  }
  RtlpInitializeLowFragHeap(a1, v2, v17);
  *(_QWORD *)(*(_QWORD *)(v17 + 24) + 536LL) += v18;
  *(_QWORD *)(*(_QWORD *)(v17 + 24) + 544LL) += v19;
  *(_QWORD *)(v17 + 48) = v17 + v18;
  *(_QWORD *)(v17 + 40) = v17 + v19;
  v14 = v17;
  *(_QWORD *)(v17 + 32) = v7 + v17 + 3312;
  if ( (RtlpLowFragHeapGlobalFlags & 3) == 0 )
  {
    RtlpLowFragHeapGlobalFlags |= 1u;
    RtlpInitializeLfhRandomDataArray(v14);
  }
  *(_DWORD *)(v17 + 672) = v2;
  return v17;
}
