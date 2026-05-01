/*
 * XREFs of ?overflow@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAAGG@Z @ 0x180116230
 * Callers:
 *     <none>
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180027864 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1801E5CBD (memcpy_0.c)
 */

__int64 __fastcall std::basic_stringbuf<unsigned short>::overflow(__int64 a1, unsigned __int16 a2)
{
  __int64 result; // rax
  unsigned __int64 *v5; // r10
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9
  __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  int *v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r12
  void *v15; // rax
  const void **v16; // rcx
  __int64 v17; // rsi
  void *v18; // rbp
  __int64 *v19; // rax
  bool v20; // zf
  __int64 *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  _DWORD *v26; // rax
  _WORD **v27; // rcx
  unsigned __int16 *v28; // rdx

  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
    return 0xFFFFLL;
  if ( a2 == 0xFFFF )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 112) & 8) != 0 )
  {
    v5 = *(unsigned __int64 **)(a1 + 64);
    v6 = *v5;
    if ( *v5 )
    {
      v7 = *(_QWORD *)(a1 + 104);
      if ( v6 < v7 )
      {
        v8 = **(int **)(a1 + 88);
        *v5 = v7;
        **(_DWORD **)(a1 + 88) = (__int64)(v6 + 2 * v8 - v7) >> 1;
      }
    }
  }
  v9 = **(_QWORD **)(a1 + 64);
  if ( !v9 )
  {
    v12 = 0LL;
    goto LABEL_14;
  }
  v10 = *(int **)(a1 + 88);
  v11 = *v10;
  if ( v9 >= v9 + 2 * v11 )
  {
    v12 = (__int64)(2 * v11 + v9 - **(_QWORD **)(a1 + 24)) >> 1;
LABEL_14:
    v13 = 32LL;
    if ( v12 >> 1 < 0x20 || (v13 = v12 >> 1) != 0 )
    {
      do
      {
        if ( 0x7FFFFFFF - v13 >= v12 )
          break;
        v13 >>= 1;
      }
      while ( v13 );
    }
    if ( !v13 )
      return 0xFFFFLL;
    v14 = v13 + v12;
    v15 = std::_Allocate(v13 + v12, 2uLL);
    v16 = *(const void ***)(a1 + 24);
    v17 = (__int64)v15;
    v18 = (void *)*v16;
    if ( v12 )
    {
      memcpy_0(v15, *v16, 2 * v12);
      *(_QWORD *)(a1 + 104) = v17 + 2 * ((__int64)(*(_QWORD *)(a1 + 104) - (_QWORD)v18) >> 1);
      v22 = v17 + 2 * ((__int64)(**(_QWORD **)(a1 + 64) - (_QWORD)v18) >> 1);
      **(_QWORD **)(a1 + 32) = v17 + 2 * ((__int64)(**(_QWORD **)(a1 + 32) - (_QWORD)v18) >> 1);
      v16 = (const void **)((__int64)(v17 + 2 * v14 - v22) >> 1);
      **(_QWORD **)(a1 + 64) = v22;
      **(_DWORD **)(a1 + 88) = (_DWORD)v16;
      if ( (*(_BYTE *)(a1 + 112) & 4) == 0 )
      {
        v23 = **(_QWORD **)(a1 + 64);
        v16 = (const void **)((__int64)(**(_QWORD **)(a1 + 56) - (_QWORD)v18) >> 1);
        **(_QWORD **)(a1 + 24) = v17;
        v24 = v17 + 2LL * (_QWORD)v16;
        **(_QWORD **)(a1 + 56) = v24;
        **(_DWORD **)(a1 + 80) = (v23 - v24 + 2) >> 1;
LABEL_28:
        if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
        {
LABEL_36:
          v26 = *(_DWORD **)(a1 + 88);
          *(_DWORD *)(a1 + 112) |= 1u;
          --*v26;
          goto LABEL_37;
        }
        if ( v12 <= 0x7FFFFFFFFFFFFFFFLL )
        {
          if ( 2 * v12 < 0x1000 )
          {
LABEL_35:
            operator delete(v18);
            goto LABEL_36;
          }
          if ( ((unsigned __int8)v18 & 0x1F) == 0 )
          {
            v25 = *((_QWORD *)v18 - 1);
            if ( v25 < (unsigned __int64)v18 && (unsigned __int64)v18 - v25 - 8 <= 0x1F )
            {
              v18 = (void *)*((_QWORD *)v18 - 1);
              goto LABEL_35;
            }
          }
        }
        _o__invalid_parameter_noinfo_noreturn(v16);
        JUMPOUT(0x1801164C9LL);
      }
      **(_QWORD **)(a1 + 24) = v17;
      v21 = *(__int64 **)(a1 + 56);
    }
    else
    {
      v19 = *(__int64 **)(a1 + 32);
      *(_QWORD *)(a1 + 104) = v17;
      *v19 = v17;
      **(_QWORD **)(a1 + 64) = v17;
      **(_DWORD **)(a1 + 88) = v14;
      v20 = (*(_BYTE *)(a1 + 112) & 4) == 0;
      **(_QWORD **)(a1 + 24) = v17;
      v21 = *(__int64 **)(a1 + 56);
      if ( v20 )
      {
        *v21 = v17;
        **(_DWORD **)(a1 + 80) = 1;
        goto LABEL_28;
      }
    }
    *v21 = 0LL;
    **(_DWORD **)(a1 + 80) = v17 >> 1;
    goto LABEL_28;
  }
  *v10 = v11 - 1;
LABEL_37:
  v27 = *(_WORD ***)(a1 + 64);
  v28 = (*v27)++;
  result = a2;
  *v28 = a2;
  return result;
}
