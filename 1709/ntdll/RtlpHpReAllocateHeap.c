/*
 * XREFs of RtlpHpReAllocateHeap @ 0x180047E80
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x18003C770 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpSegSizeInternal @ 0x18004662C (RtlpHpSegSizeInternal.c)
 *     RtlpHpSegDescriptorValidate @ 0x180048670 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSegReAlloc @ 0x180048744 (RtlpHpSegReAlloc.c)
 *     RtlpHpExtrasGet @ 0x180049278 (RtlpHpExtrasGet.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18006206C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocSize @ 0x18006F39C (RtlpHpLargeAllocSize.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlpCallInterceptRoutine @ 0x1800EFE04 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapReallocateEvent @ 0x1801017F0 (RtlpLogHeapReallocateEvent.c)
 *     RtlpHpLargeReAlloc @ 0x180107690 (RtlpHpLargeReAlloc.c)
 */

__int64 __fastcall RtlpHpReAllocateHeap(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 *a5,
        _WORD *a6)
{
  unsigned int v7; // r12d
  __int64 v10; // rcx
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r14
  int v18; // eax
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned int v21; // r8d
  __int64 v22; // rax
  __int64 v23; // rcx
  _WORD *v24; // rcx
  __int64 v25; // r15
  int v26; // r15d
  unsigned int v27; // edi
  int v28; // eax
  __int64 v29; // rax
  _DWORD *SharedData; // rcx
  __int64 v31; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // eax
  int v38; // r8d
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // eax
  unsigned __int64 v44; // r15
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // eax
  _QWORD v48[5]; // [rsp+38h] [rbp-28h] BYREF
  int v49; // [rsp+A8h] [rbp+48h]
  __int64 v51; // [rsp+B8h] [rbp+58h]

  v7 = (a2 | *(_DWORD *)(a1 + 20)) & 0x93000F0B;
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  memset(v48, 0, sizeof(v48));
  v11 = -1LL;
  v48[3] = a4;
  if ( (_WORD)a3 )
  {
    v12 = 0;
  }
  else
  {
    v34 = RtlCSparseBitmapBitmaskRead(v10, 2 * (a3 >> 20));
    if ( !v34 )
      goto LABEL_60;
    v12 = v34 - 1;
  }
  if ( v12 == 2 )
  {
LABEL_60:
    v16 = RtlpHpLargeAllocSize(a1, a3, v7, &v48[2]);
    goto LABEL_7;
  }
  v13 = 104LL * v12;
  v14 = RtlpHpSegDescriptorValidate(v13 + a1 + 112, a3);
  if ( !v14 )
    return v11;
  v16 = RtlpHpSegSizeInternal(v13 + a1 + 112, v14, a3, v15, (int *)&v48[2]);
LABEL_7:
  v48[0] = v16;
  v17 = v16;
  if ( v16 != -1LL )
  {
    v18 = v7 & 0x10000000 | 8;
    if ( !LODWORD(v48[2]) )
      v18 = v7 & 0x10000000;
    v19 = v17 + 16;
    if ( (v18 & 0x10000000) == 0 )
      v19 = v17;
    if ( (v18 & 0x20000F08) != 0 )
      v19 = ((v19 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
    v20 = 1LL;
    if ( v19 )
      v20 = v19;
    if ( LODWORD(v48[2]) )
    {
      v33 = v17 + a3 + 16;
      if ( (v18 & 0x10000000) == 0 )
        v33 = v17 + a3;
      v21 = 16 * *(unsigned __int8 *)(((v33 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 3);
      v20 += v21;
    }
    else
    {
      v21 = 0;
    }
    v48[1] = v20;
    v22 = v48[3];
    if ( (v7 & 0x10000000) != 0 )
      v22 = v48[3] + 16LL;
    if ( (LODWORD(v48[2]) != 0 ? 8 : 0) != 0 )
      v22 = ((v22 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
    v23 = 1LL;
    if ( v22 )
      v23 = v22;
    v24 = (_WORD *)(v21 + v23);
    v48[4] = v24;
    if ( (unsigned __int64)v24 >= a4 )
    {
      v25 = 0LL;
      if ( a6 )
      {
        v25 = RtlpHpExtrasGet(a1, a3, v7, a5);
        if ( (unsigned __int64)(v25 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          *a6 = 0;
        }
        else
        {
          v24 = a6;
          *a6 = *(_WORD *)v25;
        }
      }
      else if ( a5 )
      {
        *a5 = v17;
      }
      if ( v17 == a4 )
      {
        v11 = a3;
LABEL_41:
        SharedData = NtCurrentPeb()->SharedData;
        if ( SharedData && *SharedData )
          v31 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v31 = 2147353472LL;
        if ( *(_BYTE *)v31 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v11 )
          RtlpLogHeapReallocateEvent(a1, v11, a3, v48[0], v48[3], 3);
        return v11;
      }
      v49 = 0;
      if ( (v7 & 0x1000000) != 0
        || !*(_DWORD *)(a1 + 56)
        || !v25 && (v25 = RtlpHpExtrasGet(a1, a3, v7, 0LL)) == 0
        || v25 == -1 )
      {
        v26 = 0;
        goto LABEL_32;
      }
      v49 = *(_BYTE *)(v25 + 2) & 0xF;
      if ( (*(_BYTE *)(v25 + 2) & 0xF) == 0 )
      {
        v26 = *(_BYTE *)(v25 + 2) & 0xF;
        goto LABEL_32;
      }
      if ( (RtlpHpAppCompatFlags & 2) == 0 )
        goto LABEL_70;
      if ( (_WORD)a3 )
      {
        v37 = 0;
      }
      else
      {
        v36 = RtlCSparseBitmapBitmaskRead(v24, 2 * (a3 >> 20));
        if ( !v36 )
          goto LABEL_70;
        v37 = v36 - 1;
      }
      if ( v37 != 2 )
      {
        v38 = a3 + 16;
LABEL_74:
        v39 = v25 + 16;
        v26 = v49;
        if ( (int)RtlpCallInterceptRoutine(v49, a1, v38, 5, v39) < 0 )
          return v11;
LABEL_32:
        v27 = v7 & 0x12000003 | 0x1000000;
        if ( (_WORD)a3 )
        {
          v28 = 0;
        }
        else
        {
          v35 = RtlCSparseBitmapBitmaskRead(v24, 2 * (a3 >> 20));
          if ( !v35 )
            goto LABEL_77;
          v28 = v35 - 1;
        }
        if ( v28 != 2 )
        {
          v11 = RtlpHpSegReAlloc(a1 + 104LL * v28 + 112, v27, a3, v48);
          goto LABEL_36;
        }
LABEL_77:
        v40 = RtlpHpLargeReAlloc(a1, v27, a3, v48);
        v11 = v40;
        if ( (_WORD)v40 )
        {
          v43 = 0;
        }
        else
        {
          v42 = RtlCSparseBitmapBitmaskRead(v41, 2 * (v40 >> 20));
          if ( !v42 )
          {
LABEL_82:
            if ( (RtlpHpAppCompatFlags & 2) != 0 )
              v17 -= 16LL;
            v48[0] = v17;
LABEL_36:
            if ( !v26 )
            {
LABEL_37:
              if ( (unsigned __int64)(v11 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
                return v11;
              v29 = v48[3];
              if ( (v7 & 2) != 0 && v48[3] > v17 )
              {
                memset((void *)(v17 + v11), 0, v48[3] - v17);
                v29 = v48[3];
              }
              if ( (v7 & 0x10000000) != 0 )
              {
                *(_QWORD *)(v29 + v11) = 0xABABABABABABABABuLL;
                *(_QWORD *)(v29 + v11 + 8) = 0xABABABABABABABABuLL;
              }
              goto LABEL_41;
            }
            v44 = a3;
            if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              v44 = v11;
            v51 = RtlpHpExtrasGet(a1, v44, v7, 0LL);
            if ( (RtlpHpAppCompatFlags & 2) != 0 )
            {
              if ( (_WORD)v44 )
              {
                v47 = 0;
LABEL_92:
                if ( v47 != 2 )
                  LODWORD(v44) = v44 + 16;
                goto LABEL_94;
              }
              v46 = RtlCSparseBitmapBitmaskRead(v45, 2 * (v44 >> 20));
              if ( v46 )
              {
                v47 = v46 - 1;
                goto LABEL_92;
              }
            }
LABEL_94:
            RtlpCallInterceptRoutine(v49, a1, v44, 6, v51 + 16);
            goto LABEL_37;
          }
          v43 = v42 - 1;
        }
        if ( v43 != 2 )
          goto LABEL_36;
        goto LABEL_82;
      }
LABEL_70:
      v38 = a3;
      goto LABEL_74;
    }
  }
  return v11;
}
