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
  __int64 v6; // r8
  __int64 v8; // rcx
  unsigned __int64 HeapInternal; // rbp
  int v10; // r14d
  __int64 v11; // rcx
  size_t v12; // r8
  const void *v13; // rdx
  void *v14; // rcx
  unsigned int v15; // r14d
  int v16; // edx
  int v17; // r8d
  __int64 v18; // rcx
  unsigned int v19; // esi
  int v20; // eax
  __int64 v22; // rdx
  unsigned __int8 *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  size_t v28; // r14
  __int64 v29; // rax
  int v30; // eax
  size_t v31; // r14
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // rax
  int v37; // eax
  int v38; // r8d
  BOOL v39; // esi
  __int64 v40; // r9
  __int64 v41; // rcx
  signed __int32 v42[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 *v43; // [rsp+20h] [rbp-48h]
  __int64 v44; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v45; // [rsp+88h] [rbp+20h]

  v45 = a4;
  v6 = *(_QWORD *)(a3 + 32);
  v43 = &v44;
  HeapInternal = RtlpHpAllocateHeapInternal(a1, *(_QWORD *)(a3 + 24), v6);
  if ( !HeapInternal )
    return HeapInternal;
  if ( (_WORD)a2 )
  {
    v10 = 0;
  }
  else
  {
    v26 = RtlCSparseBitmapBitmaskRead(v8, 2 * (a2 >> 20));
    if ( v26 )
      v10 = v26 - 1;
    else
      v10 = 2;
  }
  if ( (_WORD)HeapInternal )
  {
    v11 = 0LL;
  }
  else
  {
    v25 = RtlCSparseBitmapBitmaskRead(v8, 2 * (HeapInternal >> 20));
    if ( v25 )
      v11 = (unsigned int)(v25 - 1);
    else
      v11 = 2LL;
  }
  if ( (RtlpHpAppCompatFlags & 2) == 0 || ((_DWORD)v11 == 2) == (v10 == 2) )
  {
    v12 = *(_QWORD *)(a3 + 24);
    v13 = (const void *)a2;
    if ( *(_QWORD *)a3 < v12 )
      v12 = *(_QWORD *)a3;
    goto LABEL_9;
  }
  if ( (_DWORD)v11 == 2 && v10 != 2 )
  {
    v28 = *(_QWORD *)a3;
    if ( (_WORD)a2 )
    {
      v30 = 0;
    }
    else
    {
      v29 = RtlCSparseBitmapBitmaskRead(v11, 2 * (a2 >> 20));
      if ( !v29 )
        goto LABEL_44;
      v30 = v29 - 1;
    }
    if ( v30 != 2 )
    {
      v13 = (const void *)(a2 + 16);
LABEL_45:
      v12 = v28 - 16;
LABEL_9:
      v14 = (void *)HeapInternal;
      goto LABEL_10;
    }
LABEL_44:
    v13 = (const void *)a2;
    goto LABEL_45;
  }
  v31 = *(_QWORD *)a3;
  if ( (_WORD)HeapInternal )
  {
    v33 = 0;
  }
  else
  {
    v32 = RtlCSparseBitmapBitmaskRead(v11, 2 * (HeapInternal >> 20));
    if ( !v32 )
    {
LABEL_52:
      v14 = (void *)HeapInternal;
      goto LABEL_53;
    }
    v33 = v32 - 1;
  }
  if ( v33 == 2 )
    goto LABEL_52;
  v14 = (void *)(HeapInternal + 16);
LABEL_53:
  v12 = v31 - 16;
  v13 = (const void *)a2;
LABEL_10:
  memmove(v14, v13, v12);
  v15 = v45;
  if ( *(_DWORD *)(a3 + 16) )
  {
    v22 = a2 + *(_QWORD *)a3 + 16;
    if ( (v45 & 0x10000000) == 0 )
      v22 = a2 + *(_QWORD *)a3;
    v23 = (unsigned __int8 *)((v22 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v24 = HeapInternal + *(_QWORD *)(a3 + 24) + 16;
    if ( (v45 & 0x10000000) == 0 )
      v24 = HeapInternal + *(_QWORD *)(a3 + 24);
    memmove((void *)((v24 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v23, 16 * ((unsigned int)v23[3] + 1));
    _InterlockedOr(v42, 0);
    RtlpHpExtrasSetPresent(a1, HeapInternal, v15);
  }
  v16 = 0;
  v17 = a1[16];
  v18 = (v15 | a1[5]) & 0x11000001;
  if ( v17 )
    LOBYTE(v16) = v17 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v19 = (v15 | a1[5]) & 0x11000000 | 1;
  if ( !v16 )
    v19 = (v15 | a1[5]) & 0x11000001;
  if ( (v19 & 0x1000000) != 0 )
    goto LABEL_16;
  if ( !a1[14] )
    goto LABEL_16;
  v34 = RtlpHpExtrasGet(a1, a2, v19, 0LL);
  v35 = v34;
  v18 = v34 - 1;
  if ( (unsigned __int64)(v34 - 1) > 0xFFFFFFFFFFFFFFFDuLL || (*(_BYTE *)(v34 + 2) & 0xF) == 0 )
    goto LABEL_16;
  if ( (RtlpHpAppCompatFlags & 2) == 0 )
    goto LABEL_61;
  if ( (_WORD)a2 )
  {
    v37 = 0;
  }
  else
  {
    v36 = RtlCSparseBitmapBitmaskRead(v18, 2 * (a2 >> 20));
    if ( !v36 )
    {
LABEL_61:
      v38 = a2;
      goto LABEL_65;
    }
    v37 = v36 - 1;
  }
  if ( v37 == 2 )
    goto LABEL_61;
  v38 = a2 + 16;
LABEL_65:
  if ( (int)RtlpCallInterceptRoutine(*(_BYTE *)(v35 + 2) & 0xF, (_DWORD)a1, v38, 3, v35 + 16) < 0 )
    return HeapInternal;
LABEL_16:
  if ( (a1[5] & 0x10000000) != 0 && RtlpHpSizeHeap((__int64)a1, a2, v19) == -1 )
  {
    RtlpLogHeapFailure(9, (_DWORD)a1, a2, 0, 0LL, 0LL);
    return HeapInternal;
  }
  if ( (_WORD)a2 )
  {
    v20 = 0;
    goto LABEL_19;
  }
  v27 = RtlCSparseBitmapBitmaskRead(v18, 2 * (a2 >> 20));
  if ( v27 )
  {
    v20 = v27 - 1;
LABEL_19:
    if ( v20 != 2 )
    {
      RtlpHpSegFree((__int64)&a1[26 * v20 + 28], a2, v19);
      return HeapInternal;
    }
  }
  v39 = RtlpHpLargeFree(a1, a2, v19) != 0;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v41 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v41 = 2147353472LL;
  if ( *(_BYTE *)v41 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v39 )
    RtlpLogHeapFreeEvent(a1, a2, 3LL, v40);
  return HeapInternal;
}
