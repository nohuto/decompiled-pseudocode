/*
 * XREFs of RtlDestroyHeap @ 0x1405F0AA0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x1400772C0 (DbgPrint.c)
 *     ExDeleteResourceLite @ 0x1400E29B0 (ExDeleteResourceLite.c)
 *     ZwFreeVirtualMemory @ 0x1401A7880 (ZwFreeVirtualMemory.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     RtlpLogHeapFailure @ 0x1402932C0 (RtlpLogHeapFailure.c)
 *     RtlpHeapHandleError @ 0x14029364C (RtlpHeapHandleError.c)
 */

PVOID __stdcall RtlDestroyHeap(PVOID HeapHandle)
{
  int v3; // eax
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rax
  int v6; // eax
  __int64 *v7; // r8
  __int64 *v8; // rdi
  __int64 v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // r9
  void *v12; // rax
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp+10h] BYREF
  ULONG_PTR v15; // [rsp+60h] [rbp+18h] BYREF
  PVOID v16; // [rsp+68h] [rbp+20h] BYREF

  if ( HeapHandle )
  {
    if ( *((_DWORD *)HeapHandle + 4) != -857879331 )
    {
      v3 = *((_DWORD *)HeapHandle + 36);
      if ( v3 && (_WORD)v3 == 1 )
        ((void (__fastcall *)(PVOID, _QWORD, __int64))RtlpInterceptorRoutines)(HeapHandle, 0LL, 8LL);
      v4 = (_QWORD *)*((_QWORD *)HeapHandle + 34);
      while ( (char *)HeapHandle + 272 != (char *)v4 )
      {
        v5 = (unsigned __int64)v4;
        v4 = (_QWORD *)*v4;
        RegionSize = 0LL;
        BaseAddress = (PVOID)(v5 & 0xFFFFFFFFFFFF0000uLL);
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
      }
      v6 = *((_DWORD *)HeapHandle + 28);
      if ( (v6 & 1) == 0 )
      {
        if ( v6 >= 0 )
          ExDeleteResourceLite(*((PERESOURCE *)HeapHandle + 44));
        *((_QWORD *)HeapHandle + 44) = 0LL;
      }
      do
      {
        v7 = (__int64 *)*((_QWORD *)HeapHandle + 37);
        v8 = v7 - 3;
        if ( (*((_DWORD *)v7 - 1) & 1) == 0 )
        {
          v9 = *v7;
          v10 = (__int64 *)v7[1];
          v11 = *(_QWORD *)(*v7 + 8);
          if ( *v10 == v11 && (__int64 *)*v10 == v7 )
          {
            *v10 = v9;
            *(_QWORD *)(v9 + 8) = v10;
          }
          else
          {
            RtlpLogHeapFailure(13, 0LL, (ULONG_PTR)v7, v11, *v10);
          }
          v12 = (void *)v8[6];
          v15 = 0LL;
          v16 = v12;
          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v16, &v15, 0x8000u);
        }
      }
      while ( v8 != HeapHandle );
    }
  }
  else if ( RtlpHeapErrorHandlerThreshold >= 2 )
  {
    DbgPrint("(HeapHandle != NULL)");
    RtlpHeapHandleError();
  }
  return 0LL;
}
