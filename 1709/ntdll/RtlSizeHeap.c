/*
 * XREFs of RtlSizeHeap @ 0x180045BB0
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x18003C770 (RtlpReAllocateHeapInternal.c)
 *     RtlSetEnvironmentVar @ 0x18004B530 (RtlSetEnvironmentVar.c)
 *     RtlSetEnvironmentStrings @ 0x180085980 (RtlSetEnvironmentStrings.c)
 *     RtlSetCurrentEnvironment @ 0x18008C1C0 (RtlSetCurrentEnvironment.c)
 *     RtlpScanHeapAllocBlocks @ 0x1800F4548 (RtlpScanHeapAllocBlocks.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x1800F70EC (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlDebugSizeHeap @ 0x1801048E8 (RtlDebugSizeHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlpHpSizeHeap @ 0x180045DE0 (RtlpHpSizeHeap.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18006206C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpProbeUserBufferSafe @ 0x180077930 (RtlpProbeUserBufferSafe.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     RtlDebugSizeHeap @ 0x1801048E8 (RtlDebugSizeHeap.c)
 */

__int64 __fastcall RtlSizeHeap(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v3; // rbp
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  char v9; // al
  __int64 v10; // rax
  unsigned __int16 v11; // r9
  char v12; // cl
  unsigned __int64 v13; // r8
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdi
  int v20; // eax
  unsigned __int16 v21; // ax
  int v22; // eax
  unsigned __int16 v23; // ax
  __int64 v24; // rax
  int v25; // r8d
  int v26; // ecx
  struct _TEB *v27; // rbx
  int v28; // eax
  int v29; // [rsp+38h] [rbp-10h]
  int v30; // [rsp+38h] [rbp-10h]
  int v31; // [rsp+38h] [rbp-10h]

  v3 = 0LL;
  if ( !a1 )
    RtlpLogHeapFailure(18, 0, a3, 0, 0LL, 0LL);
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
  {
    v7 = a2 | *(_DWORD *)(a1 + 116);
    if ( (v7 & 0x61000000) != 0 && (v7 & 0x10000000) == 0 )
      return RtlDebugSizeHeap(a1, v7, a3);
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    {
      v8 = RtlpProbeUserBufferSafe(a1, a3);
    }
    else
    {
      if ( (a3 & 0xF) != 0 )
      {
        v25 = a3;
        v26 = 9;
      }
      else
      {
        v8 = a3 - 16;
        _m_prefetchw((const void *)(a3 - 16));
        if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
          v8 -= 16LL * *(unsigned __int8 *)(v8 + 14);
        if ( (*(_BYTE *)(v8 + 15) & 0x3F) != 0 )
          goto LABEL_10;
        v25 = v8;
        v26 = 8;
      }
      RtlpLogHeapFailure(v26, a1, v25, 0, 0LL, 0LL);
      v8 = 0LL;
    }
LABEL_10:
    if ( v8 )
    {
      v9 = *(_BYTE *)(v8 + 15);
      if ( v9 == 4 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v22 = *(_DWORD *)(v8 + 8);
          LOWORD(v30) = v22;
          if ( (v22 & *(_DWORD *)(a1 + 124)) != 0 )
            v30 = *(_DWORD *)(a1 + 136) ^ v22;
          v23 = v30;
        }
        else
        {
          v23 = *(_WORD *)(v8 + 8);
        }
        return *(_QWORD *)(v8 - 16) - v23;
      }
      else
      {
        if ( v9 >= 0 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v20 = *(_DWORD *)(v8 + 8);
            LOWORD(v29) = v20;
            if ( (v20 & *(_DWORD *)(a1 + 124)) != 0 )
              v29 = *(_DWORD *)(a1 + 136) ^ v20;
            v11 = v29;
          }
          else
          {
            v11 = *(_WORD *)(v8 + 8);
          }
        }
        else
        {
          if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v8 + 8) ^ (v8 >> 4)) )
            v10 = 0LL;
          else
            v10 = *(_QWORD *)(v8
                            - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v8 + 8) ^ (unsigned int)(v8 >> 4)) >> 12));
          v11 = *(_WORD *)(v10 + 36);
        }
        v12 = *(_BYTE *)(v8 + 15);
        if ( v12 == 5 )
        {
          v13 = *(unsigned __int16 *)(v8 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
        }
        else if ( (v12 & 0x40) != 0 )
        {
          v13 = *(unsigned __int16 *)(v8 + 16LL * (v12 & 0x3F) + 12);
        }
        else if ( (v12 & 0x3F) == 0x3F )
        {
          if ( v12 >= 0 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v28 = *(_DWORD *)(v8 + 8);
              LOWORD(v31) = v28;
              if ( (v28 & *(_DWORD *)(a1 + 124)) != 0 )
                v31 = *(_DWORD *)(a1 + 136) ^ v28;
              v21 = v31;
            }
            else
            {
              v21 = *(_WORD *)(v8 + 8);
            }
          }
          else
          {
            if ( !((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v8 + 8) ^ (v8 >> 4))) )
              v3 = *(_QWORD *)(v8
                             - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v8 + 8) ^ (unsigned int)(v8 >> 4)) >> 12));
            v21 = *(_WORD *)(v3 + 36);
          }
          v13 = *(_QWORD *)(v8 + 16LL * v21);
        }
        else
        {
          v13 = v12 & 0x3F;
        }
        return 16LL * v11 - v13;
      }
    }
    else
    {
      NtCurrentTeb()->LastStatusValue = -1073741811;
      v27 = NtCurrentTeb();
      v27->LastErrorValue = RtlNtStatusToDosError(-1073741811);
      return -1LL;
    }
  }
  if ( (RtlpHpAppCompatFlags & 2) != 0
    && a3
    && ((_WORD)a3 || (v24 = RtlCSparseBitmapBitmaskRead(a1, 2 * (a3 >> 20))) != 0 && (_DWORD)v24 != 3) )
  {
    v16 = a3 - 16;
  }
  else
  {
    v16 = a3;
  }
  v17 = a2 & 1;
  if ( (a2 & 8) != 0 )
    v17 = (unsigned int)v17 | 2;
  if ( (a2 & 4) != 0 )
    LODWORD(v17) = v17 | 0x80000000;
  if ( (a2 & 0x100) != 0 )
    LODWORD(v17) = v17 | 0x100;
  if ( (a2 & 0xE00) != 0 )
    v17 = a2 & 0xE00 | (unsigned int)v17;
  if ( (a2 & 0x10) != 0 )
    LODWORD(v17) = v17 | 0x2000000;
  if ( (a2 & 2) != 0 )
    LODWORD(v17) = v17 | 0x1000000;
  v18 = RtlpHpSizeHeap(a1, v16, v17);
  v19 = v18;
  if ( v18 == -1 )
  {
    RtlpLogHeapFailure(9, a1, a3, 0, 0LL, 0LL);
  }
  else if ( (RtlpHpAppCompatFlags & 2) != 0 )
  {
    return v18 - 16;
  }
  return v19;
}
