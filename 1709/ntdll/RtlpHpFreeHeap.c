/*
 * XREFs of RtlpHpFreeHeap @ 0x18003FEE0
 * Callers:
 *     RtlpHpFreeWithExceptionProtection @ 0x18003F2E0 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpHpMetadataFree @ 0x18006F570 (RtlpHpMetadataFree.c)
 * Callees:
 *     RtlpHpSegPageRangeShrink @ 0x1800383A4 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsContextFree @ 0x18003E180 (RtlpHpVsContextFree.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180040530 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpSizeHeap @ 0x180045DE0 (RtlpHpSizeHeap.c)
 *     RtlpHpExtrasGet @ 0x180049278 (RtlpHpExtrasGet.c)
 *     RtlpLfhBucketUsageUpdate @ 0x18004C518 (RtlpLfhBucketUsageUpdate.c)
 *     RtlpHpVsChunkSize @ 0x180061F54 (RtlpHpVsChunkSize.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18006206C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocSize @ 0x18006F39C (RtlpHpLargeAllocSize.c)
 *     RtlpHpLargeFree @ 0x18006F490 (RtlpHpLargeFree.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     RtlpCallInterceptRoutine @ 0x1800EFE04 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapFreeEvent @ 0x1801016FC (RtlpLogHeapFreeEvent.c)
 *     RtlpHpSizeHeapInternal @ 0x180103004 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x1801088E8 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpHpFreeHeap(_DWORD *a1, unsigned __int64 a2, int a3, unsigned __int64 *a4, _WORD *a5)
{
  int v8; // edx
  int v9; // r8d
  __int64 v10; // rcx
  _WORD *v11; // r12
  unsigned int v12; // ebp
  unsigned __int64 v13; // rbx
  unsigned int v14; // r13d
  int v15; // eax
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  __int64 DescriptorValidateSafe; // r8
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  unsigned int v21; // r11d
  int v22; // ebx
  __int64 v23; // rcx
  unsigned int v24; // edx
  unsigned int v25; // eax
  unsigned __int64 v26; // r8
  int v27; // edx
  __int64 v28; // r8
  unsigned __int16 v29; // r9
  unsigned __int64 v30; // rdx
  unsigned __int16 v31; // r8
  int v32; // eax
  unsigned __int64 v33; // rbx
  int v34; // eax
  __int64 v35; // rsi
  unsigned __int64 v36; // rdx
  __int64 v37; // rbx
  unsigned __int64 v38; // rdx
  __int64 v39; // r9
  _DWORD *SharedData; // rcx
  __int64 v41; // rcx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r9
  __int64 v48; // rcx
  __int64 v49; // r9
  __int64 v50; // rcx
  int v51; // r8d
  __int64 v52; // rax
  __int64 v53[9]; // [rsp+30h] [rbp-48h] BYREF
  int v54; // [rsp+90h] [rbp+18h] BYREF

  v8 = a3 | a1[5] & 0x11000001;
  v9 = a1[16];
  v10 = 0LL;
  if ( v9 )
    LOBYTE(v10) = v9 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v11 = a5;
  v12 = v8 | 1;
  v13 = 0LL;
  v14 = 1;
  if ( !(_DWORD)v10 )
    v12 = v8;
  if ( a5 )
  {
    if ( (_WORD)a2 )
    {
      v15 = 0;
    }
    else
    {
      v45 = RtlCSparseBitmapBitmaskRead(v10, 2 * (a2 >> 20));
      if ( !v45 || (v15 = v45 - 1, v15 == 2) )
      {
        v30 = RtlpHpLargeAllocSize(a1, a2, v12, &v54);
        goto LABEL_29;
      }
    }
    v10 = 104LL * v15;
    v16 = (unsigned __int64)a1 + v10 + 112;
    if ( (RtlpHpAppCompatFlags & 1) != 0 )
    {
      DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe((char *)a1 + v10 + 112, a2);
    }
    else
    {
      v17 = a2 & *(_QWORD *)v16;
      if ( (v16 ^ RtlpHeapKey ^ v17 ^ *(_QWORD *)(v17 + 0x10)) == 0xA2E64EADA2E64EADuLL )
      {
        v10 = *(unsigned __int8 *)(v16 + 8);
        DescriptorValidateSafe = v17 + 32 * ((unsigned __int64)(unsigned int)(a2 - v17) >> v10);
      }
      else
      {
        DescriptorValidateSafe = 0LL;
      }
    }
    if ( !DescriptorValidateSafe || (*(_BYTE *)(DescriptorValidateSafe + 24) & 1) == 0 )
      goto LABEL_103;
    if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 2) != 0 )
    {
      if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xC) == 0 )
      {
        v10 = *(unsigned __int8 *)(v16 + 8);
        v17 = DescriptorValidateSafe & *(_QWORD *)v16;
        if ( a2 != v17 + ((__int64)(DescriptorValidateSafe - v17) >> 5 << v10) )
          goto LABEL_103;
      }
    }
    else
    {
      DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
      if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 1) == 0
        || (*(_BYTE *)(DescriptorValidateSafe + 24) & 2) == 0
        || (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xC) == 0 )
      {
        goto LABEL_103;
      }
    }
    if ( !DescriptorValidateSafe )
    {
LABEL_103:
      v13 = -1LL;
      goto LABEL_73;
    }
    v10 = *(unsigned __int8 *)(v16 + 8);
    v19 = (DescriptorValidateSafe & *(_QWORD *)v16)
        + ((DescriptorValidateSafe - (DescriptorValidateSafe & *(_QWORD *)v16)) >> 5 << v10);
    if ( a2 <= v19 )
    {
      v30 = ((unsigned __int64)*(unsigned __int8 *)(DescriptorValidateSafe + 31) << v10)
          - *(unsigned int *)(DescriptorValidateSafe + 4);
      if ( (*(_BYTE *)(DescriptorValidateSafe + 8) & 1) != 0 )
      {
        v32 = 1;
        goto LABEL_28;
      }
LABEL_74:
      v32 = 0;
LABEL_28:
      v54 = v32;
      goto LABEL_29;
    }
    if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 4) != 0 )
    {
      v20 = *(_QWORD *)(v16 + 80);
      v21 = (unsigned int)v19 >> 12;
      v22 = (unsigned __int16)(*(_WORD *)(v19 + 40) ^ RtlpLFHKey ^ ((unsigned int)v19 >> 12));
      v23 = *(_QWORD *)(v20 + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v22 + 15) >> 4] + 208);
      v24 = a2 - ((*(_DWORD *)(v19 + 40) ^ (unsigned int)RtlpLFHKey ^ ((unsigned int)v19 >> 12)) >> 16) - v19;
      v25 = *(_DWORD *)(v23 + 72);
      v10 = *(unsigned __int8 *)(v23 + 76);
      if ( v25 )
      {
        v26 = (v24 * (unsigned __int64)v25) >> v10;
        v27 = v24 - v22 * v26;
      }
      else
      {
        LODWORD(v26) = v24 >> v10;
        v27 = ((1 << v10) - 1) & v24;
      }
      if ( v27 )
      {
        v30 = 0xFFFFFFFFLL;
      }
      else
      {
        v10 = (2 * (_BYTE)v26) & 0x3F;
        v28 = *(_QWORD *)(v19 + 8 * ((unsigned __int64)(unsigned int)(2 * v26) >> 6) + 48) >> ((2 * v26) & 0x3F);
        if ( (v28 & 1) != 0 )
        {
          v29 = *(_WORD *)(v19 + 40);
          v10 = (unsigned __int16)v21;
          v30 = (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)v21 ^ (unsigned int)v29;
          if ( (v28 & 2) != 0 )
          {
            v10 = (unsigned __int16)RtlpLFHKey ^ v29 ^ (unsigned __int64)(unsigned __int16)v21;
            v31 = *(_WORD *)(v10 + a2 - 2);
            if ( (v31 & 0x8000u) != 0 )
              v30 = (unsigned int)(v30 - 1);
            else
              v30 = (unsigned int)v30 - (v31 & 0x3FFF);
            v32 = (v31 >> 14) & 1;
            goto LABEL_28;
          }
          goto LABEL_74;
        }
        v30 = 0xFFFFFFFFLL;
      }
    }
    else
    {
      v30 = (unsigned int)RtlpHpVsChunkSize(a2, v17, &v54);
    }
LABEL_29:
    if ( v30 != -1LL )
    {
      if ( a4 )
        *a4 = v30;
      if ( v54 )
      {
        v33 = v30 + a2;
        if ( (v12 & 0x10000000) != 0 )
          v33 += 16LL;
        v13 = (v33 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v13 )
        {
          *v11 = *(_WORD *)v13;
          goto LABEL_37;
        }
      }
      else
      {
        v13 = 0LL;
      }
LABEL_73:
      *v11 = 0;
      goto LABEL_37;
    }
    goto LABEL_103;
  }
  if ( a4 )
    *a4 = RtlpHpSizeHeapInternal(a1, a2, v12, 0LL);
LABEL_37:
  if ( (v12 & 0x1000000) == 0 )
  {
    if ( a1[14] )
    {
      if ( (v13 || (v13 = RtlpHpExtrasGet(a1, a2, v12, a4)) != 0) && v13 != -1LL && (*(_BYTE *)(v13 + 2) & 0xF) != 0 )
      {
        if ( (RtlpHpAppCompatFlags & 2) != 0 )
        {
          if ( (_WORD)a2 || (v52 = RtlCSparseBitmapBitmaskRead(v10, 2 * (a2 >> 20))) != 0 && (_DWORD)v52 != 3 )
            v51 = a2 + 16;
          else
            v51 = a2;
        }
        else
        {
          v51 = a2;
        }
        if ( (int)RtlpCallInterceptRoutine(*(_BYTE *)(v13 + 2) & 0xF, (_DWORD)a1, v51, 3, v13 + 16) < 0 )
          return 0LL;
      }
    }
  }
  if ( (a1[5] & 0x10000000) == 0 || RtlpHpSizeHeap(a1, a2, v12) != -1 )
  {
    if ( (_WORD)a2 )
    {
      v34 = 0;
    }
    else
    {
      v46 = RtlCSparseBitmapBitmaskRead(v10, 2 * (a2 >> 20));
      if ( !v46 || (v34 = v46 - 1, v34 == 2) )
      {
        if ( !RtlpHpLargeFree(a1, a2, v12) )
          v14 = 0;
        if ( RtlGetCurrentServiceSessionId() )
          v48 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v48 = 2147353472LL;
        if ( *(_BYTE *)v48 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v14 )
          RtlpLogHeapFreeEvent(a1, a2, 3LL, v47);
        return v14;
      }
    }
    v35 = (__int64)&a1[26 * v34 + 28];
    if ( (RtlpHpAppCompatFlags & 1) != 0 )
    {
      v37 = RtlpHpSegGetDescriptorValidateSafe(v35, a2);
    }
    else
    {
      v36 = a2 & *(_QWORD *)v35;
      if ( (RtlpHeapKey ^ v35 ^ v36 ^ *(_QWORD *)(v36 + 0x10)) == 0xA2E64EADA2E64EADuLL )
        v37 = v36 + 32 * ((unsigned __int64)(unsigned int)(a2 - v36) >> *(_BYTE *)(v35 + 8));
      else
        v37 = 0LL;
    }
    if ( !v37 || (*(_BYTE *)(v37 + 24) & 1) == 0 )
      goto LABEL_131;
    if ( (*(_BYTE *)(v37 + 24) & 2) != 0 )
    {
      if ( (*(_BYTE *)(v37 + 24) & 0xC) == 0
        && a2 != (*(_QWORD *)v35 & v37) + ((v37 - (*(_QWORD *)v35 & v37)) >> 5 << *(_BYTE *)(v35 + 8)) )
      {
        goto LABEL_131;
      }
    }
    else
    {
      v37 += -32LL * *(unsigned __int8 *)(v37 + 31);
      if ( (*(_BYTE *)(v37 + 24) & 1) == 0 || (*(_BYTE *)(v37 + 24) & 2) == 0 || (*(_BYTE *)(v37 + 24) & 0xC) == 0 )
        goto LABEL_131;
    }
    if ( v37 )
    {
      v38 = (*(_QWORD *)v35 & v37) + ((v37 - (*(_QWORD *)v35 & v37)) >> 5 << *(_BYTE *)(v35 + 8));
      if ( a2 <= v38 )
      {
        RtlpHpSegPageRangeShrink(v35, v37, 0, v12);
        if ( RtlGetCurrentServiceSessionId() )
          v50 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v50 = 2147353472LL;
        if ( *(_BYTE *)v50 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapFreeEvent(*(_QWORD *)(v35 + 96), a2, 3LL, v49);
      }
      else
      {
        if ( (*(_BYTE *)(v37 + 24) & 4) != 0 )
        {
          v14 = RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(v35 + 80), v38, a2, v12);
        }
        else
        {
          v14 = RtlpHpVsContextFree(*(PRTL_SRWLOCK *)(v35 + 88), v38, a2, v12, v53);
          if ( v14 )
          {
            if ( LODWORD(v53[0]) <= 0x3FF0 )
            {
              v43 = *(_QWORD *)(v35 + 80);
              v44 = RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(LODWORD(v53[0]) + 15) >> 4];
              if ( (*(_QWORD *)(v43 + 8 * v44 + 208) & 1) != 0 )
                RtlpLfhBucketUsageUpdate(v43, v44, 0LL);
            }
          }
        }
        SharedData = NtCurrentPeb()->SharedData;
        if ( SharedData && *SharedData )
          v41 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v41 = 2147353472LL;
        if ( *(_BYTE *)v41 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( v14 )
            RtlpLogHeapFreeEvent(*(_QWORD *)(v35 + 96), a2, (~*(_BYTE *)(v37 + 24) & 4 | 8u) >> 2, v39);
        }
      }
      return v14;
    }
LABEL_131:
    RtlpLogHeapFailure(9, *(_QWORD *)(v35 + 96), a2, 0, 0LL, 0LL);
    return 0;
  }
  RtlpLogHeapFailure(9, (_DWORD)a1, a2, 0, 0LL, 0LL);
  return 0LL;
}
