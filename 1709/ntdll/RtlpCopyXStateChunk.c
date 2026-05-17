/*
 * XREFs of RtlpCopyXStateChunk @ 0x180072808
 * Callers:
 *     RtlCopyContext @ 0x180072210 (RtlCopyContext.c)
 *     RtlpCopyExtendedContext @ 0x1800F1F58 (RtlpCopyExtendedContext.c)
 * Callees:
 *     memmove @ 0x1800A6940 (memmove.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlpCopyXStateChunk(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r12
  unsigned __int64 *v9; // r14
  unsigned int v10; // ebp
  _QWORD *v11; // r9
  unsigned __int64 v12; // r15
  int v13; // eax
  unsigned __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r14
  int v18; // ecx
  unsigned __int64 *v19; // [rsp+20h] [rbp-48h]
  int v20; // [rsp+70h] [rbp+8h]
  __int64 v21; // [rsp+80h] [rbp+18h]
  _QWORD *v22; // [rsp+90h] [rbp+28h]

  v5 = *(unsigned int *)(a3 + 20);
  v6 = 64LL;
  v7 = 64LL;
  if ( v5 < 0x40 )
    return 2147483653LL;
  v8 = *(unsigned int *)(a5 + 20);
  if ( v8 < 0x40 )
    return 2147483653LL;
  v9 = (unsigned __int64 *)(a2 + *(int *)(a3 + 16));
  v19 = v9;
  v22 = (_QWORD *)(a4 + *(int *)(a5 + 16));
  memset(v9, 0, 0x40uLL);
  v10 = 2;
  v11 = v22;
  v12 = *v22 & MEMORY[0x7FFE03D8] & 0xFFFFFFFFFFFFFFFCuLL;
  *v9 = v12;
  v13 = MEMORY[0x7FFE03EC] & 2;
  v20 = v13;
  if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
  {
    v15 = MEMORY[0x7FFE05F8];
    v14 = v22[1] & (MEMORY[0x7FFE03D8] | 3LL) | 0x8000000000000000uLL;
  }
  else
  {
    v14 = 0LL;
    v15 = 0LL;
  }
  v9[1] = v14;
  v16 = 2147353604LL;
  v21 = v15;
  while ( v12 )
  {
    if ( v13 )
    {
      if ( ((1LL << v10) & v14) != 0 )
      {
        v7 = v6;
        if ( ((1LL << v10) & v15) != 0 )
          v7 = (v6 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
        v6 = v7 + *(unsigned int *)v16;
      }
    }
    else
    {
      v18 = *(_DWORD *)(v16 - 4);
      v6 = (unsigned int)(v18 + *(_DWORD *)v16 - 512);
      v7 = (unsigned int)(v18 - 512);
    }
    if ( _bittest64((const __int64 *)&v12, v10) )
    {
      if ( v6 > v5 || v6 > v8 )
        return 2147483653LL;
      memmove((char *)v19 + v7, (char *)v11 + v7, *(unsigned int *)v16);
      _bittestandreset64((__int64 *)&v12, v10);
    }
    ++v10;
    v16 += 8LL;
    if ( v10 >= 0x40 )
      break;
    v15 = v21;
    v11 = v22;
    v13 = v20;
  }
  return 0LL;
}
