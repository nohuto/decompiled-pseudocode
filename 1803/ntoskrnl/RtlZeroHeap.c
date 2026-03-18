/*
 * XREFs of RtlZeroHeap @ 0x140786EC0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     RtlpHeapExceptionFilter @ 0x1402931AC (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x1402932C0 (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x140293310 (RtlpAnalyzeHeapFailure.c)
 *     RtlpFindEntry @ 0x1402939E8 (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x140293B0C (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x140293DD8 (RtlpHeapRemoveListEntry.c)
 */

BOOLEAN __stdcall RtlZeroHeap(PVOID HeapHandle, ULONG Flags)
{
  _BYTE *v3; // rsi
  char *v5; // rcx
  char *v6; // rax
  char *v7; // rax
  ULONG_PTR v8; // r15
  int v9; // edx
  unsigned __int8 v10; // cl
  ULONG_PTR v11; // rdi
  __int64 v12; // rsi
  __int64 *v13; // r12
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned __int64 v19; // r12
  _QWORD **v20; // rsi
  _QWORD *Entry; // r8
  int v22; // ecx
  int v23; // eax
  _QWORD *v24; // rsi
  __int64 *v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rcx
  int v29; // eax
  unsigned __int64 v30; // rdx
  _DWORD *v31; // r8
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  char v34; // [rsp+30h] [rbp-98h]
  ULONG_PTR v35; // [rsp+40h] [rbp-88h]
  char **v36; // [rsp+58h] [rbp-70h]
  ULONG_PTR v37; // [rsp+68h] [rbp-60h]
  char *v38; // [rsp+E8h] [rbp+20h]

  v3 = 0LL;
  v34 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return 0;
  if ( ((*((_BYTE *)HeapHandle + 116) | (unsigned __int8)Flags) & 1) == 0 )
  {
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)HeapHandle + 44), 1u);
    v34 = 1;
  }
  v5 = (char *)HeapHandle + 288;
  v6 = (char *)*((_QWORD *)HeapHandle + 36);
LABEL_6:
  v36 = (char **)v6;
  if ( v6 != v5 )
  {
    v7 = v6 - 24;
    v38 = v7;
    v8 = *((_QWORD *)v7 + 8);
    v35 = v8;
    while ( 1 )
    {
      if ( v8 >= *((_QWORD *)v7 + 9) )
      {
        v6 = *v36;
        v5 = (char *)HeapHandle + 288;
        goto LABEL_6;
      }
      if ( v3 )
      {
        if ( !*((_DWORD *)HeapHandle + 31) )
          goto LABEL_15;
        v3[11] = v3[8] ^ v3[9] ^ v3[10];
        *((_DWORD *)v3 + 2) ^= *((_DWORD *)HeapHandle + 34);
      }
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        v9 = *(_DWORD *)(v8 + 8) ^ *((_DWORD *)HeapHandle + 34);
        *(_DWORD *)(v8 + 8) = v9;
        if ( HIBYTE(v9) != ((unsigned __int8)v9 ^ (unsigned __int8)(BYTE1(v9) ^ BYTE2(v9))) )
          RtlpAnalyzeHeapFailure((ULONG_PTR)HeapHandle, v8);
      }
LABEL_15:
      v3 = (_BYTE *)v8;
      v10 = *(_BYTE *)(v8 + 10);
      if ( (v10 & 1) != 0 )
        goto LABEL_68;
      v11 = v8;
      v37 = v8;
      if ( (v10 & 8) == 0 )
      {
        v30 = 16LL * *(unsigned __int16 *)(v8 + 8) - 32;
        v31 = (_DWORD *)(v8 + 32);
        if ( ((v10 >> 2) & ((*((_BYTE *)HeapHandle + 112) & 0x40) != 0)) != 0 )
        {
          v32 = v30 >> 2;
          if ( v32 )
          {
            if ( ((unsigned __int8)v31 & 4) != 0 )
            {
              *v31 = -17891602;
              if ( --v32 )
              {
                v31 = (_DWORD *)(v8 + 36);
                goto LABEL_60;
              }
            }
            else
            {
LABEL_60:
              memset64(v31, 0xFEEEFEEEFEEEFEEEuLL, v32 >> 1);
              if ( (v32 & 1) != 0 )
                v31[v32 - 1] = -17891602;
            }
          }
        }
        else
        {
          v33 = v30 >> 2;
          if ( v33 )
          {
            if ( ((unsigned __int8)v31 & 4) != 0 )
            {
              *v31 = 0;
              if ( !--v33 )
                goto LABEL_68;
              v31 = (_DWORD *)(v8 + 36);
            }
            memset(v31, 0, 8 * (v33 >> 1));
            if ( (v33 & 1) != 0 )
              v31[v33 - 1] = 0;
          }
        }
LABEL_68:
        if ( *(_BYTE *)(v8 + 15) == 3 )
          v8 += *(_QWORD *)(v8 + 56) + 64LL;
        else
          v8 += 16LL * *(unsigned __int16 *)(v8 + 8);
        v35 = v8;
        goto LABEL_54;
      }
      v12 = *(_QWORD *)(v8 + 16);
      v13 = *(__int64 **)(v8 + 24);
      v14 = *(_QWORD *)(v12 + 8);
      if ( *v13 == v14 && *v13 == v8 + 16 )
      {
        *((_QWORD *)HeapHandle + 24) -= *(unsigned __int16 *)(v8 + 8);
        v15 = *((_QWORD *)HeapHandle + 39);
        if ( v15 )
        {
          v16 = *(unsigned __int16 *)(v8 + 8);
          while ( 1 )
          {
            v17 = *(unsigned int *)(v15 + 8);
            if ( v16 < v17 )
            {
              v18 = *(unsigned __int16 *)(v8 + 8);
              goto LABEL_25;
            }
            if ( !*(_QWORD *)v15 )
              break;
            v15 = *(_QWORD *)v15;
          }
          v18 = v17 - 1;
LABEL_25:
          RtlpHeapRemoveListEntry((ULONG_PTR)HeapHandle, v15, v16, (__int64 *)(v8 + 16), v18, v16);
        }
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        v19 = *(unsigned __int16 *)(v8 + 8);
        *(_BYTE *)(v8 + 10) = 0;
        *(_BYTE *)(v8 + 15) = 0;
        v20 = (_QWORD **)((char *)HeapHandle + 336);
        if ( *((_QWORD *)HeapHandle + 39) )
          Entry = (_QWORD *)RtlpFindEntry((__int64)HeapHandle, (unsigned int)v19);
        else
          Entry = *v20;
        while ( v20 != Entry )
        {
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            v22 = *((_DWORD *)Entry - 2);
            if ( (v22 & *((_DWORD *)HeapHandle + 31)) != 0 )
              v23 = v22 ^ *((_DWORD *)HeapHandle + 34);
            else
              LOWORD(v23) = *((_DWORD *)Entry - 2);
            v8 = v35;
            v11 = v37;
          }
          else
          {
            LOWORD(v23) = *((_WORD *)Entry - 4);
          }
          if ( v19 <= (unsigned __int16)v23 )
            break;
          Entry = (_QWORD *)*Entry;
        }
        v24 = (_QWORD *)(v11 + 16);
        v25 = (__int64 *)Entry[1];
        if ( (_QWORD *)*v25 == Entry )
        {
          *v24 = Entry;
          *(_QWORD *)(v11 + 24) = v25;
          *v25 = (__int64)v24;
          Entry[1] = v24;
        }
        else
        {
          RtlpLogHeapFailure(13, 0LL, (ULONG_PTR)Entry, 0LL, *v25);
        }
        *((_QWORD *)HeapHandle + 24) += *(unsigned __int16 *)(v11 + 8);
        v26 = *((_QWORD *)HeapHandle + 39);
        if ( v26 )
        {
          v27 = *(unsigned __int16 *)(v11 + 8);
          while ( 1 )
          {
            v28 = *(unsigned int *)(v26 + 8);
            if ( v27 < v28 )
            {
              v29 = *(unsigned __int16 *)(v11 + 8);
              goto LABEL_48;
            }
            if ( !*(_QWORD *)v26 )
              break;
            v26 = *(_QWORD *)v26;
          }
          v29 = v28 - 1;
LABEL_48:
          RtlpHeapAddListEntry((__int64)HeapHandle, v26, v27, v11 + 16, v29, v27);
        }
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          *(_BYTE *)(v11 + 11) = *(_BYTE *)(v11 + 8) ^ *(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10);
          *(_DWORD *)(v11 + 8) ^= *((_DWORD *)HeapHandle + 34);
        }
      }
      else
      {
        RtlpLogHeapFailure(13, (ULONG_PTR)HeapHandle, v8 + 16, v14, *v13);
      }
      v3 = 0LL;
LABEL_54:
      v7 = v38;
    }
  }
  if ( v3 && *((_DWORD *)HeapHandle + 31) )
  {
    v3[11] = v3[8] ^ v3[9] ^ v3[10];
    *((_DWORD *)v3 + 2) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v34 )
    ExReleaseResourceLite(*((PERESOURCE *)HeapHandle + 44));
  return 0;
}
