/*
 * XREFs of RtlpHpAllocateHeap @ 0x18006F284
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x18006F214 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpAllocateHeapInternal @ 0x180048A5C (RtlpHpAllocateHeapInternal.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18006206C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpCalculateAllocSize @ 0x18006F374 (RtlpHpCalculateAllocSize.c)
 *     RtlpCallInterceptRoutine @ 0x1800EFE04 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapAllocateEvent @ 0x180101360 (RtlpLogHeapAllocateEvent.c)
 *     RtlpHpExtrasAppend @ 0x180102C7C (RtlpHpExtrasAppend.c)
 */

unsigned __int64 __fastcall RtlpHpAllocateHeap(_RTL_SRWLOCK *HeapHandle, size_t a2, int a3, __int16 a4)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  int v9; // ebp
  unsigned int v10; // esi
  unsigned __int64 v11; // r15
  __int64 HeapInternal; // rax
  int v13; // r9d
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rax
  int v21; // eax
  int v22; // r8d
  unsigned int v23; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v24; // [rsp+90h] [rbp+18h] BYREF

  v4 = 0;
  v5 = (a3 | HIDWORD(HeapHandle[2].Ptr)) & 0x93000F0B;
  v24 = 0;
  v9 = 0;
  if ( (v5 & 0x1000000) == 0 )
  {
    v9 = (int)HeapHandle[7].0;
    if ( v9 )
    {
      v5 |= 8u;
      if ( (int)RtlpCallInterceptRoutine(v9, (_DWORD)HeapHandle, 0, 1, (__int64)&v24) < 0 )
      {
        v11 = 0LL;
LABEL_12:
        v23 = 0;
        goto LABEL_28;
      }
      v4 = v24;
    }
  }
  v10 = v5 | 8;
  if ( !a4 )
    v10 = v5;
  v11 = RtlpHpCalculateAllocSize(a2 + v4, v10);
  if ( v11 < a2 || a2 > 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_12;
  HeapInternal = RtlpHpAllocateHeapInternal(HeapHandle, a2, v11, v10 & 0x13000003, (int *)&v23);
  v14 = HeapInternal;
  if ( !HeapInternal )
    goto LABEL_8;
  if ( (v10 & 0x30000F08) == 0 )
    goto LABEL_8;
  v17 = RtlpHpExtrasAppend((_DWORD)HeapHandle, HeapInternal, a2, v13, v24, v10, a4);
  v19 = v17;
  if ( !v9 )
    goto LABEL_8;
  *(_BYTE *)(v17 + 2) &= 0xF0u;
  *(_BYTE *)(v17 + 2) |= v9 & 0xF;
  if ( (RtlpHpAppCompatFlags & 2) == 0 )
    goto LABEL_22;
  if ( (_WORD)v14 )
  {
    v21 = 0;
  }
  else
  {
    LOBYTE(v18) = v9 & 0xF;
    v20 = RtlCSparseBitmapBitmaskRead(v18, 2 * (v14 >> 20));
    if ( !v20 )
      goto LABEL_22;
    v21 = v20 - 1;
  }
  if ( v21 != 2 )
  {
    v22 = v14 + 16;
    goto LABEL_26;
  }
LABEL_22:
  v22 = v14;
LABEL_26:
  if ( (int)RtlpCallInterceptRoutine(v9, (_DWORD)HeapHandle, v22, 2, v19 + 16) >= 0 )
    goto LABEL_8;
  RtlFreeHeap(HeapHandle, 0, (PVOID)v14);
LABEL_28:
  v14 = 0LL;
LABEL_8:
  if ( RtlGetCurrentServiceSessionId() )
    v15 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v15 = 2147353472LL;
  if ( *(_BYTE *)v15 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapAllocateEvent(HeapHandle, v14, v11, v23);
  return v14;
}
