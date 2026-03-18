/*
 * XREFs of RtlZeroHeap @ 0x1407235F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlpHeapAddListEntry @ 0x14010DAC0 (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x14010E60C (RtlpHeapRemoveListEntry.c)
 *     RtlpFindEntry @ 0x14010E6FC (RtlpFindEntry.c)
 *     RtlpLogHeapFailure @ 0x14017CFD8 (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x140253ED0 (RtlpHeapExceptionFilter.c)
 *     RtlpAnalyzeHeapFailure @ 0x14025B284 (RtlpAnalyzeHeapFailure.c)
 */

BOOLEAN __stdcall RtlZeroHeap(PVOID HeapHandle, ULONG Flags)
{
  _BYTE *v3; // rsi
  char *v5; // rcx
  char *v6; // rax
  char *v7; // rax
  ULONG_PTR v8; // r15
  unsigned __int8 v9; // cl
  ULONG_PTR v10; // rdi
  __int64 v11; // rsi
  __int64 *v12; // r12
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rcx
  unsigned int v17; // ecx
  unsigned __int64 v18; // r12
  _QWORD **v19; // rsi
  _QWORD *Entry; // r8
  int v21; // ecx
  unsigned __int16 v22; // ax
  _QWORD *v23; // rsi
  __int64 *v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rcx
  int v28; // ecx
  unsigned __int64 v29; // rdx
  _DWORD *v30; // r8
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  char v33; // [rsp+30h] [rbp-98h]
  ULONG_PTR v34; // [rsp+40h] [rbp-88h]
  char **v35; // [rsp+58h] [rbp-70h]
  ULONG_PTR v36; // [rsp+68h] [rbp-60h]
  int v37; // [rsp+90h] [rbp-38h]
  char *v38; // [rsp+E8h] [rbp+20h]

  v3 = 0LL;
  v33 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return 0;
  if ( ((*((_BYTE *)HeapHandle + 116) | (unsigned __int8)Flags) & 1) == 0 )
  {
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)HeapHandle + 44), 1u);
    v33 = 1;
  }
  v5 = (char *)HeapHandle + 288;
  v6 = (char *)*((_QWORD *)HeapHandle + 36);
LABEL_6:
  v35 = (char **)v6;
  if ( v6 != v5 )
  {
    v7 = v6 - 24;
    v38 = v7;
    v8 = *((_QWORD *)v7 + 8);
    v34 = v8;
    while ( 1 )
    {
      if ( v8 >= *((_QWORD *)v7 + 9) )
      {
        v6 = *v35;
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
        *(_DWORD *)(v8 + 8) ^= *((_DWORD *)HeapHandle + 34);
        if ( *(_BYTE *)(v8 + 11) != (*(_BYTE *)(v8 + 8) ^ (unsigned __int8)(*(_BYTE *)(v8 + 9) ^ *(_BYTE *)(v8 + 10))) )
          RtlpAnalyzeHeapFailure((ULONG_PTR)HeapHandle, v8);
      }
LABEL_15:
      v3 = (_BYTE *)v8;
      v9 = *(_BYTE *)(v8 + 10);
      if ( (v9 & 1) != 0 )
        goto LABEL_67;
      v10 = v8;
      v36 = v8;
      if ( (v9 & 8) == 0 )
      {
        v29 = 16LL * *(unsigned __int16 *)(v8 + 8) - 32;
        v30 = (_DWORD *)(v8 + 32);
        if ( ((v9 >> 2) & ((*((_BYTE *)HeapHandle + 112) & 0x40) != 0)) != 0 )
        {
          v31 = v29 >> 2;
          if ( v31 )
          {
            if ( ((unsigned __int8)v30 & 4) != 0 )
            {
              *v30 = -17891602;
              if ( --v31 )
              {
                v30 = (_DWORD *)(v8 + 36);
                goto LABEL_59;
              }
            }
            else
            {
LABEL_59:
              memset64(v30, 0xFEEEFEEEFEEEFEEEuLL, v31 >> 1);
              if ( (v31 & 1) != 0 )
                v30[v31 - 1] = -17891602;
            }
          }
        }
        else
        {
          v32 = v29 >> 2;
          if ( v32 )
          {
            if ( ((unsigned __int8)v30 & 4) != 0 )
            {
              *v30 = 0;
              if ( !--v32 )
                goto LABEL_67;
              v30 = (_DWORD *)(v8 + 36);
            }
            memset(v30, 0, 8 * (v32 >> 1));
            if ( (v32 & 1) != 0 )
              v30[v32 - 1] = 0;
          }
        }
LABEL_67:
        if ( *(_BYTE *)(v8 + 15) == 3 )
          v8 += *(_QWORD *)(v8 + 56) + 64LL;
        else
          v8 += 16LL * *(unsigned __int16 *)(v8 + 8);
        v34 = v8;
        goto LABEL_53;
      }
      v11 = *(_QWORD *)(v8 + 16);
      v12 = *(__int64 **)(v8 + 24);
      v13 = *(_QWORD *)(v11 + 8);
      if ( *v12 == v13 && *v12 == v8 + 16 )
      {
        *((_QWORD *)HeapHandle + 24) -= *(unsigned __int16 *)(v8 + 8);
        v14 = *((_QWORD *)HeapHandle + 39);
        if ( v14 )
        {
          v15 = *(unsigned __int16 *)(v8 + 8);
          while ( 1 )
          {
            v16 = *(unsigned int *)(v14 + 8);
            if ( v15 < v16 )
            {
              v17 = *(unsigned __int16 *)(v8 + 8);
              goto LABEL_25;
            }
            if ( !*(_QWORD *)v14 )
              break;
            v14 = *(_QWORD *)v14;
          }
          v17 = v16 - 1;
LABEL_25:
          RtlpHeapRemoveListEntry((__int64)HeapHandle, v14, v15, (__int64 *)(v8 + 16), v17, v15);
        }
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        v18 = *(unsigned __int16 *)(v8 + 8);
        *(_BYTE *)(v8 + 10) = 0;
        *(_BYTE *)(v8 + 15) = 0;
        v19 = (_QWORD **)((char *)HeapHandle + 336);
        if ( *((_QWORD *)HeapHandle + 39) )
          Entry = (_QWORD *)RtlpFindEntry((__int64)HeapHandle, (unsigned int)v18);
        else
          Entry = *v19;
        while ( v19 != Entry )
        {
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            v21 = *((_DWORD *)Entry - 2);
            LOWORD(v37) = v21;
            if ( (*((_DWORD *)HeapHandle + 31) & v21) != 0 )
              v37 = v21 ^ *((_DWORD *)HeapHandle + 34);
            v22 = v37;
            v8 = v34;
            v10 = v36;
          }
          else
          {
            v22 = *((_WORD *)Entry - 4);
          }
          if ( v18 <= v22 )
            break;
          Entry = (_QWORD *)*Entry;
        }
        v23 = (_QWORD *)(v10 + 16);
        v24 = (__int64 *)Entry[1];
        if ( (_QWORD *)*v24 == Entry )
        {
          *v23 = Entry;
          *(_QWORD *)(v10 + 24) = v24;
          *v24 = (__int64)v23;
          Entry[1] = v23;
        }
        else
        {
          RtlpLogHeapFailure(12, 0LL, (ULONG_PTR)Entry, 0LL, *v24);
        }
        *((_QWORD *)HeapHandle + 24) += *(unsigned __int16 *)(v10 + 8);
        v25 = *((_QWORD *)HeapHandle + 39);
        if ( v25 )
        {
          v26 = *(unsigned __int16 *)(v10 + 8);
          while ( 1 )
          {
            v27 = *(unsigned int *)(v25 + 8);
            if ( v26 < v27 )
            {
              v28 = *(unsigned __int16 *)(v10 + 8);
              goto LABEL_47;
            }
            if ( !*(_QWORD *)v25 )
              break;
            v25 = *(_QWORD *)v25;
          }
          v28 = v27 - 1;
LABEL_47:
          RtlpHeapAddListEntry((__int64)HeapHandle, v25, v26, v10 + 16, v28, v26);
        }
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          *(_BYTE *)(v10 + 11) = *(_BYTE *)(v10 + 8) ^ *(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10);
          *(_DWORD *)(v10 + 8) ^= *((_DWORD *)HeapHandle + 34);
        }
      }
      else
      {
        RtlpLogHeapFailure(12, (ULONG_PTR)HeapHandle, v8 + 16, v13, *v12);
      }
      v3 = 0LL;
LABEL_53:
      v7 = v38;
    }
  }
  if ( v3 && *((_DWORD *)HeapHandle + 31) )
  {
    v3[11] = v3[8] ^ v3[9] ^ v3[10];
    *((_DWORD *)v3 + 2) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v33 )
    ExReleaseResourceLite(*((PERESOURCE *)HeapHandle + 44));
  return 0;
}
