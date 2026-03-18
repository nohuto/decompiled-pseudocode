/*
 * XREFs of RtlpHpFreeHeap @ 0x140294A24
 * Callers:
 *     ExFreeLargePool @ 0x1400DB3B0 (ExFreeLargePool.c)
 *     ExFreeHeapPages @ 0x1400E17DC (ExFreeHeapPages.c)
 *     RtlpHpMetadataFree @ 0x140295D08 (RtlpHpMetadataFree.c)
 *     ExAllocateHeapPool @ 0x1402BCFE4 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402BD494 (ExFreeHeapPool.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     RtlpLogHeapFailure @ 0x1402932C0 (RtlpLogHeapFailure.c)
 *     RtlpHpExtrasGet @ 0x140294918 (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeap @ 0x140295EF0 (RtlpHpSizeHeap.c)
 *     RtlpHpSizeHeapInternal @ 0x140295F94 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpSegFree @ 0x140297E14 (RtlpHpSegFree.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x14029D380 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeFree @ 0x14029E80C (RtlpHpLargeFree.c)
 *     RtlpHpEnvGetHeapManager @ 0x1402BD820 (RtlpHpEnvGetHeapManager.c)
 */

__int64 __fastcall RtlpHpFreeHeap(ULONG_PTR a1, ULONG_PTR a2, int a3, __int64 *a4)
{
  unsigned int v5; // ebx
  __int64 *v7; // r14
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // esi
  unsigned __int64 v12; // rax
  char v13; // cl
  int v14; // ecx
  int v15; // eax
  __int64 HeapManager; // rax
  __int64 v17; // rax
  int v18; // eax
  __int128 v20; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0;
  v7 = a4;
  v8 = a3 | *(_DWORD *)(a1 + 20) & 0x11000001;
  v9 = 0LL;
  v10 = *(unsigned int *)(a1 + 64);
  if ( (_DWORD)v10 )
    LOBYTE(v9) = (_DWORD)v10 == KeGetCurrentThread()[1].CurrentRunTime;
  v11 = v8 | 1;
  if ( !(_DWORD)v9 )
    v11 = v8;
  if ( a4 )
    *a4 = RtlpHpSizeHeapInternal(a1, a2, v11, 0LL);
  if ( (v11 & 0x1000000) != 0
    || !*(_DWORD *)(a1 + 56)
    || (v12 = RtlpHpExtrasGet(a1, a2, v11, v7), a4 = (__int64 *)v12, v12 - 1 > 0xFFFFFFFFFFFFFFFDuLL)
    || (v13 = *(_BYTE *)(v12 + 2), (v13 & 0xF) == 0)
    || ((v14 = v13 & 0xF) == 0 || (_WORD)v14 != 1
      ? (v15 = -1073741823)
      : (v15 = ((__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, __int64, unsigned __int64))RtlpInterceptorRoutines)(
                 a1,
                 a2,
                 3LL,
                 v12 + 16)),
        v15 >= 0) )
  {
    if ( (*(_DWORD *)(a1 + 20) & 0x10000000) != 0 && RtlpHpSizeHeap(a1, a2, v11, a4) == -1 )
    {
      RtlpLogHeapFailure(9, a1, a2, 0LL, 0LL);
      return v5;
    }
    if ( (_WORD)a2 )
    {
      v18 = 0;
    }
    else
    {
      v20 = *(_OWORD *)a1;
      HeapManager = RtlpHpEnvGetHeapManager(&v20, v9, v10, a4);
      v17 = RtlCSparseBitmapBitmaskRead(HeapManager + 8, 2 * ((a2 - *(_QWORD *)(HeapManager + 72)) >> 20));
      if ( !v17 )
      {
LABEL_24:
        LOBYTE(v5) = RtlpHpLargeFree(a1, a2, v11) != 0;
        return v5;
      }
      v18 = v17 - 1;
    }
    if ( v18 != 2 )
      return (unsigned int)RtlpHpSegFree(a1 + 120LL * v18 + 112, a2, v11);
    goto LABEL_24;
  }
  return v5;
}
