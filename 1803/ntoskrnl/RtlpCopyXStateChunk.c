/*
 * XREFs of RtlpCopyXStateChunk @ 0x14014B224
 * Callers:
 *     RtlpCopyExtendedContext @ 0x140131EE0 (RtlpCopyExtendedContext.c)
 *     RtlCopyContext @ 0x14078AE74 (RtlCopyContext.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall RtlpCopyXStateChunk(char a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r13
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r12
  _QWORD *v10; // r15
  _QWORD *v11; // r9
  __int64 v12; // rbp
  unsigned int v13; // r15d
  unsigned __int64 v14; // rbp
  int v15; // r10d
  unsigned __int64 v16; // rdi
  __int64 v17; // r8
  unsigned __int64 *v18; // rax
  _DWORD *v19; // r14
  __int64 v21; // rdx
  int v22; // ecx
  _QWORD *v23; // [rsp+20h] [rbp-38h]
  __int64 v24; // [rsp+28h] [rbp-30h]
  unsigned __int64 *v25; // [rsp+70h] [rbp+18h]
  int v26; // [rsp+80h] [rbp+28h]

  v5 = *(unsigned int *)(a3 + 20);
  v7 = 64LL;
  v8 = 64LL;
  if ( v5 < 0x40 )
    return 2147483653LL;
  v9 = *(unsigned int *)(a5 + 20);
  if ( v9 < 0x40 )
    return 2147483653LL;
  v10 = (_QWORD *)(a4 + *(int *)(a5 + 16));
  v25 = (unsigned __int64 *)(a2 + *(int *)(a3 + 16));
  v23 = v10;
  memset(v25, 0, 0x40uLL);
  v11 = v10;
  v12 = *v10 & MEMORY[0xFFFFF780000003D8];
  v13 = 2;
  v14 = v12 & 0xFFFFFFFFFFFFFFFCuLL;
  *v25 = v14;
  v15 = MEMORY[0xFFFFF780000003EC] & 2;
  v26 = v15;
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
  {
    v16 = v23[1] & (MEMORY[0xFFFFF780000003D8] | 3LL) | 0x8000000000000000uLL;
    v17 = MEMORY[0xFFFFF780000005F8];
  }
  else
  {
    v16 = 0LL;
    v17 = 0LL;
  }
  v18 = v25;
  v24 = v17;
  v25[1] = v16;
  if ( a1 == 1 )
  {
    v19 = (_DWORD *)0xFFFFF78000000404LL;
    while ( v14 )
    {
      v21 = 1LL << v13;
      if ( v15 )
      {
        if ( (v21 & v16) != 0 )
        {
          v8 = v7;
          if ( (v21 & v17) != 0 )
            v8 = (v7 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
          v7 = v8 + (unsigned int)*v19;
        }
      }
      else
      {
        v22 = *(v19 - 1);
        v18 = v25;
        v7 = (unsigned int)(v22 + *v19 - 512);
        v8 = (unsigned int)(v22 - 512);
      }
      if ( (v21 & v14) != 0 )
      {
        if ( v7 > v5 || v7 > v9 )
          return 2147483653LL;
        memmove((char *)v18 + v8, (char *)v11 + v8, (unsigned int)*v19);
        v15 = v26;
        _bittestandreset64((__int64 *)&v14, v13);
      }
      ++v13;
      v19 += 2;
      if ( v13 >= 0x40 )
        return 0LL;
      v18 = v25;
      v17 = v24;
      v11 = v23;
    }
  }
  return 0LL;
}
