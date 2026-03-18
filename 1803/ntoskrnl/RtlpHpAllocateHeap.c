/*
 * XREFs of RtlpHpAllocateHeap @ 0x1402945C8
 * Callers:
 *     ExAllocateHeapPages @ 0x1400D85A4 (ExAllocateHeapPages.c)
 *     ExpAllocateBigPool @ 0x1400D8A60 (ExpAllocateBigPool.c)
 *     RtlpHpMetadataAlloc @ 0x140295B48 (RtlpHpMetadataAlloc.c)
 *     ExAllocateHeapPool @ 0x1402BCFE4 (ExAllocateHeapPool.c)
 * Callees:
 *     RtlFreeHeap @ 0x1400AB340 (RtlFreeHeap.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     RtlpHpAllocateHeapInternal @ 0x14029477C (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpExtrasAppend @ 0x140294864 (RtlpHpExtrasAppend.c)
 */

void *__fastcall RtlpHpAllocateHeap(_DWORD *HeapHandle, unsigned __int64 a2, int a3, __int16 a4)
{
  unsigned int v5; // edi
  __int64 v6; // rcx
  int v8; // esi
  int v9; // r15d
  int v10; // eax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8
  __int64 HeapInternal; // rax
  int v15; // r9d
  void *v16; // rbx
  __int64 v17; // rax
  char v19; // [rsp+90h] [rbp+18h] BYREF
  unsigned int v20; // [rsp+98h] [rbp+20h] BYREF

  LOWORD(v20) = a4;
  v5 = (a3 | HeapHandle[5]) & 0x93000F0B;
  v6 = 0LL;
  v20 = 0;
  v8 = 0;
  v9 = -1073741823;
  if ( (v5 & 0x1000000) == 0 )
  {
    v8 = HeapHandle[14];
    if ( v8 )
    {
      v5 |= 8u;
      if ( (_WORD)v8 == 1 )
      {
        v10 = ((__int64 (__fastcall *)(_DWORD *, _QWORD, __int64, unsigned int *))RtlpInterceptorRoutines)(
                HeapHandle,
                0LL,
                1LL,
                &v20);
        v6 = v20;
      }
      else
      {
        v10 = -1073741823;
      }
      if ( v10 < 0 )
        return 0LL;
    }
  }
  v11 = a2 + v6;
  v12 = v11 + 16;
  if ( (v5 & 0x10000000) == 0 )
    v12 = v11;
  if ( (v5 & 0x20000F08) != 0 )
    v12 = ((v12 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  v13 = 1LL;
  if ( v12 )
    v13 = v12;
  if ( v13 < a2 || a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  HeapInternal = RtlpHpAllocateHeapInternal((_DWORD)HeapHandle, a2, v13, v5 & 0x13000003, (__int64)&v19);
  v16 = (void *)HeapInternal;
  if ( HeapInternal )
  {
    if ( (v5 & 0x30000F08) != 0 )
    {
      v17 = RtlpHpExtrasAppend((_DWORD)HeapHandle, HeapInternal, a2, v15, v20, v5, 0);
      if ( v8 )
      {
        *(_BYTE *)(v17 + 2) ^= (*(_BYTE *)(v17 + 2) ^ v8) & 0xF;
        if ( (_WORD)v8 == 1 )
          v9 = ((__int64 (__fastcall *)(_DWORD *, void *, __int64, __int64))RtlpInterceptorRoutines)(
                 HeapHandle,
                 v16,
                 2LL,
                 v17 + 16);
        if ( v9 < 0 )
        {
          RtlFreeHeap(HeapHandle, 0, v16);
          return 0LL;
        }
      }
    }
  }
  return v16;
}
