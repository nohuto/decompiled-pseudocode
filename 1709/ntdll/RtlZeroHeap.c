/*
 * XREFs of RtlZeroHeap @ 0x1800F25E0
 * Callers:
 *     RtlDebugZeroHeap @ 0x180104AEC (RtlDebugZeroHeap.c)
 * Callees:
 *     RtlpHeapAddListEntry @ 0x1800094B4 (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x18000955C (RtlpFindEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x180038F8C (RtlpDeCommitFreeBlock.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlpHeapRemoveListEntry @ 0x18004650C (RtlpHeapRemoveListEntry.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlpCommitBlock @ 0x18004A2F4 (RtlpCommitBlock.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x1800F2DA8 (RtlpHeapExceptionFilter.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800FF59C (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugZeroHeap @ 0x180104AEC (RtlDebugZeroHeap.c)
 */

NTSTATUS __cdecl RtlZeroHeap(PVOID HeapHandle, ULONG Flags)
{
  _BYTE *v3; // r14
  ULONG v5; // edx
  char *v6; // rcx
  char *v7; // rax
  char *v8; // rax
  unsigned __int64 v9; // r15
  unsigned __int8 v10; // cl
  unsigned __int64 v11; // rdi
  __int64 v12; // r14
  __int64 *v13; // r12
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rcx
  unsigned int v19; // ecx
  unsigned __int64 v20; // r12
  _QWORD **v21; // r14
  _QWORD *Entry; // r8
  int v23; // ecx
  unsigned __int16 v24; // ax
  _QWORD *v25; // r14
  __int64 *v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rcx
  int v30; // ecx
  unsigned __int64 v31; // rdx
  _DWORD *v32; // r8
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  char v35; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v36; // [rsp+40h] [rbp-98h]
  char **v37; // [rsp+58h] [rbp-80h]
  unsigned __int64 v38; // [rsp+68h] [rbp-70h]
  int v39; // [rsp+90h] [rbp-48h]
  char *v40; // [rsp+F8h] [rbp+20h]

  v3 = 0LL;
  v35 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return 0;
  v5 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v5 & 0x61000000) != 0 && (v5 & 0x10000000) == 0 )
    return RtlDebugZeroHeap((int)HeapHandle);
  if ( (v5 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    v35 = 1;
  }
  v6 = (char *)HeapHandle + 288;
  v7 = (char *)*((_QWORD *)HeapHandle + 36);
LABEL_8:
  v37 = (char **)v7;
  if ( v7 != v6 )
  {
    v8 = v7 - 24;
    v40 = v8;
    v9 = *((_QWORD *)v8 + 8);
    v36 = v9;
    while ( 1 )
    {
      if ( v9 >= *((_QWORD *)v8 + 9) )
      {
        v7 = *v37;
        v6 = (char *)HeapHandle + 288;
        goto LABEL_8;
      }
      if ( v3 )
      {
        if ( !*((_DWORD *)HeapHandle + 31) )
          goto LABEL_17;
        v3[11] = v3[8] ^ v3[9] ^ v3[10];
        *((_DWORD *)v3 + 2) ^= *((_DWORD *)HeapHandle + 34);
      }
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        *(_DWORD *)(v9 + 8) ^= *((_DWORD *)HeapHandle + 34);
        if ( *(_BYTE *)(v9 + 11) != (*(_BYTE *)(v9 + 8) ^ (unsigned __int8)(*(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10))) )
          RtlpAnalyzeHeapFailure(HeapHandle, v9);
      }
LABEL_17:
      v3 = (_BYTE *)v9;
      v10 = *(_BYTE *)(v9 + 10);
      if ( (v10 & 1) != 0 )
        goto LABEL_72;
      v11 = v9;
      v38 = v9;
      if ( (v10 & 8) == 0 )
      {
        v31 = 16LL * *(unsigned __int16 *)(v9 + 8) - 32;
        v32 = (_DWORD *)(v9 + 32);
        if ( ((v10 >> 2) & ((*((_BYTE *)HeapHandle + 112) & 0x40) != 0)) != 0 )
        {
          v33 = v31 >> 2;
          if ( v33 )
          {
            if ( ((unsigned __int8)v32 & 4) != 0 )
            {
              *v32 = -17891602;
              if ( --v33 )
              {
                v32 = (_DWORD *)(v9 + 36);
                goto LABEL_64;
              }
            }
            else
            {
LABEL_64:
              memset64(v32, 0xFEEEFEEEFEEEFEEEuLL, v33 >> 1);
              if ( (v33 & 1) != 0 )
                v32[v33 - 1] = -17891602;
            }
          }
        }
        else
        {
          v34 = v31 >> 2;
          if ( v34 )
          {
            if ( ((unsigned __int8)v32 & 4) != 0 )
            {
              *v32 = 0;
              if ( !--v34 )
                goto LABEL_72;
              v32 = (_DWORD *)(v9 + 36);
            }
            memset(v32, 0, 8 * (v34 >> 1));
            if ( (v34 & 1) != 0 )
              v32[v34 - 1] = 0;
          }
        }
LABEL_72:
        if ( *(_BYTE *)(v9 + 15) == 3 )
          v9 += *(_QWORD *)(v9 + 56) + 64LL;
        else
          v9 += 16LL * *(unsigned __int16 *)(v9 + 8);
        v36 = v9;
        goto LABEL_58;
      }
      v12 = *(_QWORD *)(v9 + 16);
      v13 = *(__int64 **)(v9 + 24);
      v14 = *v13;
      v15 = *(_QWORD *)(v12 + 8);
      if ( *v13 == v15 && v14 == v9 + 16 )
      {
        *((_QWORD *)HeapHandle + 24) -= *(unsigned __int16 *)(v9 + 8);
        v16 = *((_QWORD *)HeapHandle + 39);
        if ( v16 )
        {
          v17 = *(unsigned __int16 *)(v9 + 8);
          while ( 1 )
          {
            v18 = *(unsigned int *)(v16 + 8);
            if ( v17 < v18 )
            {
              v19 = *(unsigned __int16 *)(v9 + 8);
              goto LABEL_27;
            }
            if ( !*(_QWORD *)v16 )
              break;
            v16 = *(_QWORD *)v16;
          }
          v19 = v18 - 1;
LABEL_27:
          RtlpHeapRemoveListEntry((__int64)HeapHandle, v16, 1, (__int64 *)(v9 + 16), v19, v17);
        }
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        if ( (*(_BYTE *)(v9 + 10) & 8) == 0 || RtlpCommitBlock(HeapHandle, v9) )
        {
          v20 = *(unsigned __int16 *)(v9 + 8);
          *(_BYTE *)(v9 + 10) = 0;
          *(_BYTE *)(v9 + 15) = 0;
          v21 = (_QWORD **)((char *)HeapHandle + 336);
          if ( *((_QWORD *)HeapHandle + 39) )
            Entry = (_QWORD *)RtlpFindEntry((__int64)HeapHandle, (unsigned int)v20);
          else
            Entry = *v21;
          while ( v21 != Entry )
          {
            if ( *((_DWORD *)HeapHandle + 31) )
            {
              v23 = *((_DWORD *)Entry - 2);
              LOWORD(v39) = v23;
              if ( (v23 & *((_DWORD *)HeapHandle + 31)) != 0 )
                v39 = v23 ^ *((_DWORD *)HeapHandle + 34);
              v24 = v39;
              v9 = v36;
              v11 = v38;
            }
            else
            {
              v24 = *((_WORD *)Entry - 4);
            }
            if ( v20 <= v24 )
              break;
            Entry = (_QWORD *)*Entry;
          }
          v25 = (_QWORD *)(v11 + 16);
          v26 = (__int64 *)Entry[1];
          if ( (_QWORD *)*v26 == Entry )
          {
            *v25 = Entry;
            *(_QWORD *)(v11 + 24) = v26;
            *v26 = (__int64)v25;
            Entry[1] = v25;
          }
          else
          {
            RtlpLogHeapFailure(12, 0LL, (__int64)Entry, 0LL, *v26, 0LL);
          }
          *((_QWORD *)HeapHandle + 24) += *(unsigned __int16 *)(v11 + 8);
          v27 = *((_QWORD *)HeapHandle + 39);
          if ( v27 )
          {
            v28 = *(unsigned __int16 *)(v11 + 8);
            while ( 1 )
            {
              v29 = *(unsigned int *)(v27 + 8);
              if ( v28 < v29 )
              {
                v30 = *(unsigned __int16 *)(v11 + 8);
                goto LABEL_52;
              }
              if ( !*(_QWORD *)v27 )
                break;
              v27 = *(_QWORD *)v27;
            }
            v30 = v29 - 1;
LABEL_52:
            RtlpHeapAddListEntry((__int64)HeapHandle, v27, 1, v11 + 16, v30, v28);
          }
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            *(_BYTE *)(v11 + 11) = *(_BYTE *)(v11 + 8) ^ *(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10);
            *(_DWORD *)(v11 + 8) ^= *((_DWORD *)HeapHandle + 34);
          }
        }
        else
        {
          RtlpDeCommitFreeBlock((unsigned __int64)HeapHandle, v9, *(unsigned __int16 *)(v9 + 8), 1);
        }
      }
      else
      {
        RtlpLogHeapFailure(12, (__int64)HeapHandle, v9 + 16, v15, v14, 0LL);
      }
      v3 = 0LL;
LABEL_58:
      v8 = v40;
    }
  }
  if ( v3 && *((_DWORD *)HeapHandle + 31) )
  {
    v3[11] = v3[8] ^ v3[9] ^ v3[10];
    *((_DWORD *)v3 + 2) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v35 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  return 0;
}
