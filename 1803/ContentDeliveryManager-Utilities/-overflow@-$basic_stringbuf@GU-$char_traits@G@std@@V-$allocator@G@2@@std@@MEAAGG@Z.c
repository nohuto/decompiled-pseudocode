/*
 * XREFs of ?overflow@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAAGG@Z @ 0x180034730
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800A4410 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800A45D0 (-_Xbad_alloc@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1800C10B9 (memcpy_0.c)
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
  unsigned __int64 v14; // r15
  __int64 v15; // r14
  const void **v16; // rax
  void *v17; // r12
  __int64 *v18; // rax
  int v19; // ecx
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
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
    v15 = 0LL;
    if ( v13 + v12 )
    {
      if ( v14 > 0x7FFFFFFFFFFFFFFFLL || (v15 = (__int64)operator new(2 * v14)) == 0 )
        std::_Xbad_alloc();
    }
    v16 = *(const void ***)(a1 + 24);
    v17 = (void *)*v16;
    if ( v12 )
    {
      memcpy_0((void *)v15, *v16, 2 * v12);
      *(_QWORD *)(a1 + 104) = v15 + 2 * ((__int64)(*(_QWORD *)(a1 + 104) - (_QWORD)v17) >> 1);
      v21 = v15 + 2 * ((__int64)(**(_QWORD **)(a1 + 64) - (_QWORD)v17) >> 1);
      v22 = (__int64)(2 * v14 - 2 * ((__int64)(**(_QWORD **)(a1 + 64) - (_QWORD)v17) >> 1)) >> 1;
      **(_QWORD **)(a1 + 32) = v15 + 2 * ((__int64)(**(_QWORD **)(a1 + 32) - (_QWORD)v17) >> 1);
      **(_QWORD **)(a1 + 64) = v21;
      **(_DWORD **)(a1 + 88) = v22;
      if ( (*(_BYTE *)(a1 + 112) & 4) == 0 )
      {
        v23 = **(_QWORD **)(a1 + 64);
        v24 = (__int64)(**(_QWORD **)(a1 + 56) - (_QWORD)v17) >> 1;
        **(_QWORD **)(a1 + 24) = v15;
        v25 = v15 + 2 * v24;
        **(_QWORD **)(a1 + 56) = v25;
        **(_DWORD **)(a1 + 80) = (v23 - v25 + 2) >> 1;
        goto LABEL_31;
      }
      **(_QWORD **)(a1 + 24) = v15;
      v20 = *(__int64 **)(a1 + 56);
    }
    else
    {
      v18 = *(__int64 **)(a1 + 32);
      *(_QWORD *)(a1 + 104) = v15;
      *v18 = v15;
      **(_QWORD **)(a1 + 64) = v15;
      **(_DWORD **)(a1 + 88) = v14;
      v19 = *(_DWORD *)(a1 + 112);
      **(_QWORD **)(a1 + 24) = v15;
      v20 = *(__int64 **)(a1 + 56);
      if ( (v19 & 4) == 0 )
      {
        *v20 = v15;
        **(_DWORD **)(a1 + 80) = 1;
LABEL_31:
        v26 = *(_DWORD *)(a1 + 112);
        if ( (v26 & 1) != 0 )
        {
          operator delete(v17);
          v26 = *(_DWORD *)(a1 + 112);
        }
        *(_DWORD *)(a1 + 112) = v26 | 1;
        --**(_DWORD **)(a1 + 88);
        goto LABEL_34;
      }
    }
    *v20 = 0LL;
    **(_DWORD **)(a1 + 80) = v15 >> 1;
    goto LABEL_31;
  }
  *v10 = v11 - 1;
LABEL_34:
  v27 = *(_WORD ***)(a1 + 64);
  v28 = (*v27)++;
  result = a2;
  *v28 = a2;
  return result;
}
