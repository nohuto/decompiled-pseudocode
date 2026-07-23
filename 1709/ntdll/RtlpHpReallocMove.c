/*
 * XREFs of RtlpHpReallocMove @ 0x180048858
 * Callers:
 *     RtlpHpSegReAlloc @ 0x180048744 (RtlpHpSegReAlloc.c)
 *     RtlpHpLargeReAlloc @ 0x180107690 (RtlpHpLargeReAlloc.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpSizeHeap @ 0x180045DE0 (RtlpHpSizeHeap.c)
 *     RtlpHpSegFree @ 0x1800481C0 (RtlpHpSegFree.c)
 *     RtlpHpAllocateHeapInternal @ 0x180048A5C (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpExtrasGet @ 0x180049278 (RtlpHpExtrasGet.c)
 *     RtlpHpExtrasSetPresent @ 0x1800493D8 (RtlpHpExtrasSetPresent.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18006206C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeFree @ 0x18006F490 (RtlpHpLargeFree.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     RtlpCallInterceptRoutine @ 0x1800EFE04 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapFreeEvent @ 0x1801016FC (RtlpLogHeapFreeEvent.c)
 */

unsigned __int64 __fastcall RtlpHpReallocMove(_DWORD *a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rcx
  unsigned __int64 HeapInternal; // rbp
  int v9; // r14d
  __int64 v10; // rcx
  size_t v11; // r8
  const void *v12; // rdx
  void *v13; // rcx
  unsigned int v14; // r14d
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rcx
  unsigned int v18; // esi
  int v19; // eax
  __int64 v21; // rdx
  unsigned __int8 *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  size_t v27; // r14
  __int64 v28; // rax
  int v29; // eax
  size_t v30; // r14
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // rax
  int v36; // eax
  int v37; // r8d
  BOOL v38; // esi
  __int64 v39; // r9
  __int64 v40; // rcx
  signed __int32 v41[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v42; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v43; // [rsp+88h] [rbp+20h]

  v43 = a4;
  HeapInternal = RtlpHpAllocateHeapInternal(a1, *(_QWORD *)(a3 + 24), (__int64)&v42);
  if ( !HeapInternal )
    return HeapInternal;
  if ( (_WORD)a2 )
  {
    v9 = 0;
  }
  else
  {
    v25 = RtlCSparseBitmapBitmaskRead(v7, 2 * (a2 >> 20));
    if ( v25 )
      v9 = v25 - 1;
    else
      v9 = 2;
  }
  if ( (_WORD)HeapInternal )
  {
    v10 = 0LL;
  }
  else
  {
    v24 = RtlCSparseBitmapBitmaskRead(v7, 2 * (HeapInternal >> 20));
    if ( v24 )
      v10 = (unsigned int)(v24 - 1);
    else
      v10 = 2LL;
  }
  if ( (RtlpHpAppCompatFlags & 2) == 0 || ((_DWORD)v10 == 2) == (v9 == 2) )
  {
    v11 = *(_QWORD *)(a3 + 24);
    v12 = (const void *)a2;
    if ( *(_QWORD *)a3 < v11 )
      v11 = *(_QWORD *)a3;
    goto LABEL_9;
  }
  if ( (_DWORD)v10 == 2 && v9 != 2 )
  {
    v27 = *(_QWORD *)a3;
    if ( (_WORD)a2 )
    {
      v29 = 0;
    }
    else
    {
      v28 = RtlCSparseBitmapBitmaskRead(v10, 2 * (a2 >> 20));
      if ( !v28 )
        goto LABEL_44;
      v29 = v28 - 1;
    }
    if ( v29 != 2 )
    {
      v12 = (const void *)(a2 + 16);
LABEL_45:
      v11 = v27 - 16;
LABEL_9:
      v13 = (void *)HeapInternal;
      goto LABEL_10;
    }
LABEL_44:
    v12 = (const void *)a2;
    goto LABEL_45;
  }
  v30 = *(_QWORD *)a3;
  if ( (_WORD)HeapInternal )
  {
    v32 = 0;
  }
  else
  {
    v31 = RtlCSparseBitmapBitmaskRead(v10, 2 * (HeapInternal >> 20));
    if ( !v31 )
    {
LABEL_52:
      v13 = (void *)HeapInternal;
      goto LABEL_53;
    }
    v32 = v31 - 1;
  }
  if ( v32 == 2 )
    goto LABEL_52;
  v13 = (void *)(HeapInternal + 16);
LABEL_53:
  v11 = v30 - 16;
  v12 = (const void *)a2;
LABEL_10:
  memmove(v13, v12, v11);
  v14 = v43;
  if ( *(_DWORD *)(a3 + 16) )
  {
    v21 = a2 + *(_QWORD *)a3 + 16;
    if ( (v43 & 0x10000000) == 0 )
      v21 = a2 + *(_QWORD *)a3;
    v22 = (unsigned __int8 *)((v21 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v23 = HeapInternal + *(_QWORD *)(a3 + 24) + 16;
    if ( (v43 & 0x10000000) == 0 )
      v23 = HeapInternal + *(_QWORD *)(a3 + 24);
    memmove((void *)((v23 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v22, 16 * ((unsigned int)v22[3] + 1));
    _InterlockedOr(v41, 0);
    RtlpHpExtrasSetPresent(a1, HeapInternal, v14);
  }
  v15 = 0;
  v16 = a1[16];
  v17 = (v14 | a1[5]) & 0x11000001;
  if ( v16 )
    LOBYTE(v15) = v16 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v18 = (v14 | a1[5]) & 0x11000000 | 1;
  if ( !v15 )
    v18 = (v14 | a1[5]) & 0x11000001;
  if ( (v18 & 0x1000000) != 0 )
    goto LABEL_16;
  if ( !a1[14] )
    goto LABEL_16;
  v33 = RtlpHpExtrasGet(a1, a2, v18, 0LL);
  v34 = v33;
  v17 = v33 - 1;
  if ( (unsigned __int64)(v33 - 1) > 0xFFFFFFFFFFFFFFFDuLL || (*(_BYTE *)(v33 + 2) & 0xF) == 0 )
    goto LABEL_16;
  if ( (RtlpHpAppCompatFlags & 2) == 0 )
    goto LABEL_61;
  if ( (_WORD)a2 )
  {
    v36 = 0;
  }
  else
  {
    v35 = RtlCSparseBitmapBitmaskRead(v17, 2 * (a2 >> 20));
    if ( !v35 )
    {
LABEL_61:
      v37 = a2;
      goto LABEL_65;
    }
    v36 = v35 - 1;
  }
  if ( v36 == 2 )
    goto LABEL_61;
  v37 = a2 + 16;
LABEL_65:
  if ( (int)RtlpCallInterceptRoutine(*(_BYTE *)(v34 + 2) & 0xF, (_DWORD)a1, v37, 3, v34 + 16) < 0 )
    return HeapInternal;
LABEL_16:
  if ( (a1[5] & 0x10000000) != 0 && RtlpHpSizeHeap((__int64)a1, a2, v18) == -1 )
  {
    RtlpLogHeapFailure(9, (_DWORD)a1, a2, 0, 0LL, 0LL);
    return HeapInternal;
  }
  if ( (_WORD)a2 )
  {
    v19 = 0;
    goto LABEL_19;
  }
  v26 = RtlCSparseBitmapBitmaskRead(v17, 2 * (a2 >> 20));
  if ( v26 )
  {
    v19 = v26 - 1;
LABEL_19:
    if ( v19 != 2 )
    {
      RtlpHpSegFree((__int64)&a1[26 * v19 + 28], a2, v18);
      return HeapInternal;
    }
  }
  v38 = RtlpHpLargeFree(a1, a2, v18) != 0;
  if ( RtlGetCurrentServiceSessionId() )
    v40 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v40 = 2147353472LL;
  if ( *(_BYTE *)v40 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v38 )
    RtlpLogHeapFreeEvent(a1, a2, 3LL, v39);
  return HeapInternal;
}
