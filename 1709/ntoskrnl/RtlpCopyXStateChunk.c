/*
 * XREFs of RtlpCopyXStateChunk @ 0x14012FFF0
 * Callers:
 *     RtlpCopyExtendedContext @ 0x1400DAB88 (RtlpCopyExtendedContext.c)
 *     RtlCopyContext @ 0x140727268 (RtlCopyContext.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall RtlpCopyXStateChunk(char a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r13
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r12
  _QWORD *v10; // rbp
  _QWORD *v11; // r10
  __int64 v12; // r15
  unsigned int v13; // ebp
  unsigned __int64 v14; // r15
  int v15; // eax
  unsigned __int64 v16; // rsi
  __int64 v17; // rdx
  unsigned __int64 *v18; // r9
  _DWORD *v19; // r14
  int v21; // ecx
  unsigned __int64 *v22; // [rsp+20h] [rbp-38h]
  __int64 v23; // [rsp+28h] [rbp-30h]
  _QWORD *v24; // [rsp+70h] [rbp+18h]
  int v25; // [rsp+80h] [rbp+28h]

  v5 = *(unsigned int *)(a3 + 20);
  v7 = 64LL;
  v8 = 64LL;
  if ( v5 < 0x40 )
    return 2147483653LL;
  v9 = *(unsigned int *)(a5 + 20);
  if ( v9 < 0x40 )
    return 2147483653LL;
  v10 = (_QWORD *)(a4 + *(int *)(a5 + 16));
  v22 = (unsigned __int64 *)(a2 + *(int *)(a3 + 16));
  v24 = v10;
  memset(v22, 0, 0x40uLL);
  v11 = v10;
  v12 = *v10 & MEMORY[0xFFFFF780000003D8];
  v13 = 2;
  v14 = v12 & 0xFFFFFFFFFFFFFFFCuLL;
  *v22 = v14;
  v15 = MEMORY[0xFFFFF780000003EC] & 2;
  v25 = v15;
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
  {
    v16 = v24[1] & (MEMORY[0xFFFFF780000003D8] | 3LL) | 0x8000000000000000uLL;
    v17 = MEMORY[0xFFFFF780000005F8];
  }
  else
  {
    v16 = 0LL;
    v17 = 0LL;
  }
  v18 = v22;
  v23 = v17;
  v22[1] = v16;
  if ( a1 == 1 )
  {
    v19 = (_DWORD *)0xFFFFF78000000404LL;
    while ( v14 )
    {
      if ( v15 )
      {
        if ( ((1LL << v13) & v16) != 0 )
        {
          v8 = v7;
          if ( ((1LL << v13) & v17) != 0 )
            v8 = (v7 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
          v7 = v8 + (unsigned int)*v19;
        }
      }
      else
      {
        v21 = *(v19 - 1);
        v7 = (unsigned int)(v21 + *v19 - 512);
        v8 = (unsigned int)(v21 - 512);
      }
      if ( _bittest64((const __int64 *)&v14, v13) )
      {
        if ( v7 > v5 || v7 > v9 )
          return 2147483653LL;
        memmove((char *)v18 + v8, (char *)v11 + v8, (unsigned int)*v19);
        v18 = v22;
        _bittestandreset64((__int64 *)&v14, v13);
      }
      ++v13;
      v19 += 2;
      if ( v13 >= 0x40 )
        return 0LL;
      v17 = v23;
      v11 = v24;
      v15 = v25;
    }
  }
  return 0LL;
}
