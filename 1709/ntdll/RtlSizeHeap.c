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

SIZE_T __cdecl RtlSizeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  __int64 v3; // rbp
  ULONG v7; // edx
  unsigned __int64 v8; // rdx
  char v9; // al
  __int64 v10; // rax
  unsigned __int16 v11; // r9
  char v12; // cl
  unsigned __int64 v13; // r8
  char *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  SIZE_T v19; // rdi
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
  if ( !HeapHandle )
    RtlpLogHeapFailure(18, 0, (_DWORD)BaseAddress, 0, 0LL, 0LL);
  if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
  {
    v7 = Flags | *((_DWORD *)HeapHandle + 29);
    if ( (v7 & 0x61000000) != 0 && (v7 & 0x10000000) == 0 )
      return RtlDebugSizeHeap((int)HeapHandle);
    if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
    {
      v8 = RtlpProbeUserBufferSafe(HeapHandle, BaseAddress);
    }
    else
    {
      if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
      {
        v25 = (int)BaseAddress;
        v26 = 9;
      }
      else
      {
        v8 = (unsigned __int64)BaseAddress - 16;
        _m_prefetchw((char *)BaseAddress - 16);
        if ( *((char *)BaseAddress - 1) == 5 )
          v8 -= 16LL * *(unsigned __int8 *)(v8 + 14);
        if ( (*(_BYTE *)(v8 + 15) & 0x3F) != 0 )
          goto LABEL_10;
        v25 = v8;
        v26 = 8;
      }
      RtlpLogHeapFailure(v26, (_DWORD)HeapHandle, v25, 0, 0LL, 0LL);
      v8 = 0LL;
    }
LABEL_10:
    if ( v8 )
    {
      v9 = *(_BYTE *)(v8 + 15);
      if ( v9 == 4 )
      {
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          v22 = *(_DWORD *)(v8 + 8);
          LOWORD(v30) = v22;
          if ( (v22 & *((_DWORD *)HeapHandle + 31)) != 0 )
            v30 = *((_DWORD *)HeapHandle + 34) ^ v22;
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
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            v20 = *(_DWORD *)(v8 + 8);
            LOWORD(v29) = v20;
            if ( (v20 & *((_DWORD *)HeapHandle + 31)) != 0 )
              v29 = *((_DWORD *)HeapHandle + 34) ^ v20;
            v11 = v29;
          }
          else
          {
            v11 = *(_WORD *)(v8 + 8);
          }
        }
        else
        {
          if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((unsigned __int16)HeapHandle ^ *(_WORD *)(v8 + 8) ^ (v8 >> 4)) )
            v10 = 0LL;
          else
            v10 = *(_QWORD *)(v8
                            - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)HeapHandle ^ *(_DWORD *)(v8 + 8) ^ (unsigned int)(v8 >> 4)) >> 12));
          v11 = *(_WORD *)(v10 + 36);
        }
        v12 = *(_BYTE *)(v8 + 15);
        if ( v12 == 5 )
        {
          v13 = *(unsigned __int16 *)(v8 + 12) ^ (unsigned __int64)*((unsigned __int16 *)HeapHandle + 70);
        }
        else if ( (v12 & 0x40) != 0 )
        {
          v13 = *(unsigned __int16 *)(v8 + 16LL * (v12 & 0x3F) + 12);
        }
        else if ( (v12 & 0x3F) == 0x3F )
        {
          if ( v12 >= 0 )
          {
            if ( *((_DWORD *)HeapHandle + 31) )
            {
              v28 = *(_DWORD *)(v8 + 8);
              LOWORD(v31) = v28;
              if ( (v28 & *((_DWORD *)HeapHandle + 31)) != 0 )
                v31 = *((_DWORD *)HeapHandle + 34) ^ v28;
              v21 = v31;
            }
            else
            {
              v21 = *(_WORD *)(v8 + 8);
            }
          }
          else
          {
            if ( !((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((unsigned __int16)HeapHandle ^ *(_WORD *)(v8 + 8) ^ (v8 >> 4))) )
              v3 = *(_QWORD *)(v8
                             - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)HeapHandle ^ *(_DWORD *)(v8 + 8) ^ (unsigned int)(v8 >> 4)) >> 12));
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
    && BaseAddress
    && ((_WORD)BaseAddress
     || (v24 = RtlCSparseBitmapBitmaskRead(HeapHandle, 2 * ((unsigned __int64)BaseAddress >> 20))) != 0
     && (_DWORD)v24 != 3) )
  {
    v16 = (char *)BaseAddress - 16;
  }
  else
  {
    v16 = (char *)BaseAddress;
  }
  v17 = Flags & 1;
  if ( (Flags & 8) != 0 )
    v17 = (unsigned int)v17 | 2;
  if ( (Flags & 4) != 0 )
    LODWORD(v17) = v17 | 0x80000000;
  if ( (Flags & 0x100) != 0 )
    LODWORD(v17) = v17 | 0x100;
  if ( (Flags & 0xE00) != 0 )
    v17 = Flags & 0xE00 | (unsigned int)v17;
  if ( (Flags & 0x10) != 0 )
    LODWORD(v17) = v17 | 0x2000000;
  if ( (Flags & 2) != 0 )
    LODWORD(v17) = v17 | 0x1000000;
  v18 = RtlpHpSizeHeap(HeapHandle, v16, v17);
  v19 = v18;
  if ( v18 == -1 )
  {
    RtlpLogHeapFailure(9, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
  }
  else if ( (RtlpHpAppCompatFlags & 2) != 0 )
  {
    return v18 - 16;
  }
  return v19;
}
