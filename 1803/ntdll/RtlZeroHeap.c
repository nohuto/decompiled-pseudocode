/*
 * XREFs of RtlZeroHeap @ 0x1800EEA80
 * Callers:
 *     sub_1801010D0 @ 0x1801010D0 (sub_1801010D0.c)
 * Callees:
 *     sub_1800128F0 @ 0x1800128F0 (sub_1800128F0.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18005C190 @ 0x18005C190 (sub_18005C190.c)
 *     sub_18005C238 @ 0x18005C238 (sub_18005C238.c)
 *     sub_18005C30C @ 0x18005C30C (sub_18005C30C.c)
 *     sub_18005CA3C @ 0x18005CA3C (sub_18005CA3C.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     sub_1800FC010 @ 0x1800FC010 (sub_1800FC010.c)
 *     sub_1801010D0 @ 0x1801010D0 (sub_1801010D0.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

NTSTATUS __cdecl RtlZeroHeap(PVOID HeapHandle, ULONG Flags)
{
  _BYTE *v3; // r14
  ULONG v5; // edx
  char *v6; // rcx
  char *v7; // rax
  char *v8; // rax
  unsigned __int64 v9; // r15
  int v10; // edx
  unsigned __int8 v11; // cl
  unsigned __int64 v12; // rdi
  __int64 v13; // r14
  __int64 *v14; // r12
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  unsigned int v20; // eax
  unsigned __int64 v21; // r12
  __int64 **v22; // r14
  __int64 *v23; // r8
  int v24; // ecx
  int v25; // eax
  __int64 **v26; // r14
  __int64 *v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rcx
  int v31; // eax
  unsigned __int64 v32; // rdx
  _DWORD *v33; // r8
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rdx
  char v36; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v37; // [rsp+40h] [rbp-98h]
  char **v38; // [rsp+58h] [rbp-80h]
  unsigned __int64 v39; // [rsp+68h] [rbp-70h]
  char *v40; // [rsp+F8h] [rbp+20h]

  v3 = 0LL;
  v36 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return 0;
  v5 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v5 & 0x61000000) != 0 && (v5 & 0x10000000) == 0 )
    return sub_1801010D0(HeapHandle);
  if ( (v5 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    v36 = 1;
  }
  v6 = (char *)HeapHandle + 288;
  v7 = (char *)*((_QWORD *)HeapHandle + 36);
LABEL_8:
  v38 = (char **)v7;
  if ( v7 != v6 )
  {
    v8 = v7 - 24;
    v40 = v8;
    v9 = *((_QWORD *)v8 + 8);
    v37 = v9;
    while ( 1 )
    {
      if ( v9 >= *((_QWORD *)v8 + 9) )
      {
        v7 = *v38;
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
        v10 = *(_DWORD *)(v9 + 8) ^ *((_DWORD *)HeapHandle + 34);
        *(_DWORD *)(v9 + 8) = v10;
        if ( HIBYTE(v10) != ((unsigned __int8)v10 ^ (unsigned __int8)(BYTE1(v10) ^ BYTE2(v10))) )
          sub_1800FC010(HeapHandle, v9);
      }
LABEL_17:
      v3 = (_BYTE *)v9;
      v11 = *(_BYTE *)(v9 + 10);
      if ( (v11 & 1) != 0 )
        goto LABEL_73;
      v12 = v9;
      v39 = v9;
      if ( (v11 & 8) == 0 )
      {
        v32 = 16LL * *(unsigned __int16 *)(v9 + 8) - 32;
        v33 = (_DWORD *)(v9 + 32);
        if ( ((v11 >> 2) & ((*((_BYTE *)HeapHandle + 112) & 0x40) != 0)) != 0 )
        {
          v34 = v32 >> 2;
          if ( v34 )
          {
            if ( ((unsigned __int8)v33 & 4) != 0 )
            {
              *v33 = -17891602;
              if ( --v34 )
              {
                v33 = (_DWORD *)(v9 + 36);
                goto LABEL_65;
              }
            }
            else
            {
LABEL_65:
              memset64(v33, 0xFEEEFEEEFEEEFEEEuLL, v34 >> 1);
              if ( (v34 & 1) != 0 )
                v33[v34 - 1] = -17891602;
            }
          }
        }
        else
        {
          v35 = v32 >> 2;
          if ( v35 )
          {
            if ( ((unsigned __int8)v33 & 4) != 0 )
            {
              *v33 = 0;
              if ( !--v35 )
                goto LABEL_73;
              v33 = (_DWORD *)(v9 + 36);
            }
            memset(v33, 0, 8 * (v35 >> 1));
            if ( (v35 & 1) != 0 )
              v33[v35 - 1] = 0;
          }
        }
LABEL_73:
        if ( *(_BYTE *)(v9 + 15) == 3 )
          v9 += *(_QWORD *)(v9 + 56) + 64LL;
        else
          v9 += 16LL * *(unsigned __int16 *)(v9 + 8);
        v37 = v9;
        goto LABEL_59;
      }
      v13 = *(_QWORD *)(v9 + 16);
      v14 = *(__int64 **)(v9 + 24);
      v15 = *v14;
      v16 = *(_QWORD *)(v13 + 8);
      if ( *v14 == v16 && v15 == v9 + 16 )
      {
        *((_QWORD *)HeapHandle + 24) -= *(unsigned __int16 *)(v9 + 8);
        v17 = *((_QWORD *)HeapHandle + 39);
        if ( v17 )
        {
          v18 = *(unsigned __int16 *)(v9 + 8);
          while ( 1 )
          {
            v19 = *(unsigned int *)(v17 + 8);
            if ( v18 < v19 )
            {
              v20 = *(unsigned __int16 *)(v9 + 8);
              goto LABEL_27;
            }
            if ( !*(_QWORD *)v17 )
              break;
            v17 = *(_QWORD *)v17;
          }
          v20 = v19 - 1;
LABEL_27:
          sub_18005C30C((__int64)HeapHandle, v17, 1, (__int64 *)(v9 + 16), v20, v18);
        }
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        if ( (*(_BYTE *)(v9 + 10) & 8) == 0 || sub_18005CA3C(HeapHandle, v9) )
        {
          v21 = *(unsigned __int16 *)(v9 + 8);
          *(_BYTE *)(v9 + 10) = 0;
          *(_BYTE *)(v9 + 15) = 0;
          v22 = (__int64 **)((char *)HeapHandle + 336);
          if ( *((_QWORD *)HeapHandle + 39) )
            v23 = sub_18005C238((__int64)HeapHandle, (unsigned int)v21);
          else
            v23 = *v22;
          while ( v22 != (__int64 **)v23 )
          {
            if ( *((_DWORD *)HeapHandle + 31) )
            {
              v24 = *((_DWORD *)v23 - 2);
              if ( (v24 & *((_DWORD *)HeapHandle + 31)) != 0 )
                v25 = v24 ^ *((_DWORD *)HeapHandle + 34);
              else
                LOWORD(v25) = *((_DWORD *)v23 - 2);
              v9 = v37;
              v12 = v39;
            }
            else
            {
              LOWORD(v25) = *((_WORD *)v23 - 4);
            }
            if ( v21 <= (unsigned __int16)v25 )
              break;
            v23 = (__int64 *)*v23;
          }
          v26 = (__int64 **)(v12 + 16);
          v27 = (__int64 *)v23[1];
          if ( (__int64 *)*v27 == v23 )
          {
            *v26 = v23;
            *(_QWORD *)(v12 + 24) = v27;
            *v27 = (__int64)v26;
            v23[1] = (__int64)v26;
          }
          else
          {
            sub_18009A5F0(13, 0LL, (__int64)v23, 0LL, *v27, 0LL);
          }
          *((_QWORD *)HeapHandle + 24) += *(unsigned __int16 *)(v12 + 8);
          v28 = *((_QWORD *)HeapHandle + 39);
          if ( v28 )
          {
            v29 = *(unsigned __int16 *)(v12 + 8);
            while ( 1 )
            {
              v30 = *(unsigned int *)(v28 + 8);
              if ( v29 < v30 )
              {
                v31 = *(unsigned __int16 *)(v12 + 8);
                goto LABEL_53;
              }
              if ( !*(_QWORD *)v28 )
                break;
              v28 = *(_QWORD *)v28;
            }
            v31 = v30 - 1;
LABEL_53:
            sub_18005C190((__int64)HeapHandle, v28, 1, v12 + 16, v31, v29);
          }
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            *(_BYTE *)(v12 + 11) = *(_BYTE *)(v12 + 8) ^ *(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10);
            *(_DWORD *)(v12 + 8) ^= *((_DWORD *)HeapHandle + 34);
          }
        }
        else
        {
          sub_1800128F0((unsigned __int64)HeapHandle, v9, *(unsigned __int16 *)(v9 + 8), 1);
        }
      }
      else
      {
        sub_18009A5F0(13, (__int64)HeapHandle, v9 + 16, v16, v15, 0LL);
      }
      v3 = 0LL;
LABEL_59:
      v8 = v40;
    }
  }
  if ( v3 && *((_DWORD *)HeapHandle + 31) )
  {
    v3[11] = v3[8] ^ v3[9] ^ v3[10];
    *((_DWORD *)v3 + 2) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v36 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  return 0;
}
