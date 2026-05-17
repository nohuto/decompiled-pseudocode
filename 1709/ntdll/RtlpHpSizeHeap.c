/*
 * XREFs of RtlpHpSizeHeap @ 0x180045DE0
 * Callers:
 *     RtlpFreeHeapInternal @ 0x18003E860 (RtlpFreeHeapInternal.c)
 *     RtlpHpFreeHeap @ 0x18003FEE0 (RtlpHpFreeHeap.c)
 *     RtlSizeHeap @ 0x180045BB0 (RtlSizeHeap.c)
 *     RtlpHpReallocMove @ 0x180048858 (RtlpHpReallocMove.c)
 *     RtlValidateHeap @ 0x18004BEC0 (RtlValidateHeap.c)
 * Callees:
 *     RtlpHpVsChunkSize @ 0x180061F54 (RtlpHpVsChunkSize.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18006206C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocSize @ 0x18006F39C (RtlpHpLargeAllocSize.c)
 *     RtlCompareMemory @ 0x1800A4640 (RtlCompareMemory.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x1801088E8 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpHpSizeHeap(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 DescriptorValidateSafe; // rbx
  int v6; // edx
  int v7; // r8d
  __int64 v8; // rcx
  unsigned int v9; // ebp
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rdx
  char v13; // cl
  unsigned __int64 v14; // r8
  unsigned int v15; // r11d
  int v16; // ebx
  __int64 v17; // rcx
  unsigned int v18; // edx
  unsigned int v19; // eax
  unsigned __int64 v20; // r9
  int v21; // edx
  __int64 v22; // r9
  unsigned __int16 v23; // r8
  unsigned int v24; // edx
  __int16 v25; // ax
  unsigned __int64 v26; // rsi
  char v28; // cl
  __int64 v29; // rax

  DescriptorValidateSafe = 0LL;
  v6 = a3 | *(_DWORD *)(a1 + 20);
  v7 = *(_DWORD *)(a1 + 64);
  v8 = 0LL;
  if ( v7 )
    LOBYTE(v8) = v7 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v9 = v6 | 1;
  if ( !(_DWORD)v8 )
    v9 = v6;
  if ( !a2 || (a2 & 0xF) != 0 )
    return -1LL;
  if ( (_WORD)a2 )
  {
    v10 = 0;
  }
  else
  {
    v29 = RtlCSparseBitmapBitmaskRead(v8, 2 * (a2 >> 20));
    if ( !v29 || (v10 = v29 - 1, v10 == 2) )
    {
      v26 = RtlpHpLargeAllocSize(a1, a2, v9, 0LL);
      goto LABEL_29;
    }
  }
  v11 = 104LL * v10 + a1 + 112;
  if ( (RtlpHpAppCompatFlags & 1) != 0 )
  {
    DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(v11, a2);
  }
  else
  {
    v12 = a2 & *(_QWORD *)v11;
    if ( (v11 ^ v12 ^ RtlpHeapKey ^ *(_QWORD *)(v12 + 0x10)) == 0xA2E64EADA2E64EADuLL )
      DescriptorValidateSafe = v12 + 32 * ((unsigned __int64)(unsigned int)(a2 - v12) >> *(_BYTE *)(v11 + 8));
  }
  if ( !DescriptorValidateSafe || (*(_BYTE *)(DescriptorValidateSafe + 24) & 1) == 0 )
    return -1LL;
  if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 2) != 0 )
  {
    if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xC) == 0 )
    {
      v12 = DescriptorValidateSafe & *(_QWORD *)v11;
      if ( a2 != v12 + ((DescriptorValidateSafe - v12) >> 5 << *(_BYTE *)(v11 + 8)) )
        return -1LL;
    }
  }
  else
  {
    DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
    if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 1) == 0
      || (*(_BYTE *)(DescriptorValidateSafe + 24) & 2) == 0
      || (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xC) == 0 )
    {
      return -1LL;
    }
  }
  if ( DescriptorValidateSafe )
  {
    v13 = *(_BYTE *)(v11 + 8);
    v14 = (DescriptorValidateSafe & *(_QWORD *)v11)
        + ((DescriptorValidateSafe - (DescriptorValidateSafe & *(_QWORD *)v11)) >> 5 << v13);
    if ( a2 <= v14 )
    {
      v26 = ((unsigned __int64)*(unsigned __int8 *)(DescriptorValidateSafe + 31) << v13)
          - *(unsigned int *)(DescriptorValidateSafe + 4);
    }
    else if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 4) != 0 )
    {
      v15 = (unsigned int)v14 >> 12;
      v16 = (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v14 + 40) ^ ((unsigned int)v14 >> 12));
      v17 = *(_QWORD *)(*(_QWORD *)(v11 + 80)
                      + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v16 + 15) >> 4]
                      + 208);
      v18 = a2 - (((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v14 + 40) ^ ((unsigned int)v14 >> 12)) >> 16) - v14;
      v19 = *(_DWORD *)(v17 + 72);
      if ( v19 )
      {
        v20 = (v18 * (unsigned __int64)v19) >> *(_BYTE *)(v17 + 76);
        v21 = v18 - v16 * v20;
      }
      else
      {
        v28 = *(_BYTE *)(v17 + 76);
        LODWORD(v20) = v18 >> v28;
        v21 = ((1 << v28) - 1) & v18;
      }
      if ( v21 )
      {
        v24 = -1;
      }
      else
      {
        v22 = *(_QWORD *)(v14 + 8 * ((unsigned __int64)(unsigned int)(2 * v20) >> 6) + 48) >> ((2 * v20) & 0x3F);
        if ( (v22 & 1) != 0 )
        {
          v23 = *(_WORD *)(v14 + 40);
          v24 = (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)v15 ^ v23;
          if ( (v22 & 2) != 0 )
          {
            v25 = *(_WORD *)(((unsigned __int16)RtlpLFHKey ^ v23 ^ (unsigned __int64)(unsigned __int16)v15) + a2 - 2);
            if ( v25 < 0 )
              --v24;
            else
              v24 -= v25 & 0x3FFF;
          }
        }
        else
        {
          v24 = -1;
        }
      }
      v26 = v24;
    }
    else
    {
      v26 = (unsigned int)RtlpHpVsChunkSize(a2, v12, 0LL);
    }
LABEL_29:
    if ( v26 == -1LL
      || (v9 & 0x10000000) == 0
      || RtlCompareMemory((const void *)(v26 + a2), &CheckHeapFillPattern, 0x10uLL) == 16 )
    {
      return v26;
    }
  }
  return -1LL;
}
