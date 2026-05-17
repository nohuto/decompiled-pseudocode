/*
 * XREFs of sub_18008668C @ 0x18008668C
 * Callers:
 *     RtlCopyContext @ 0x1800862F0 (RtlCopyContext.c)
 *     sub_1800EE3A4 @ 0x1800EE3A4 (sub_1800EE3A4.c)
 * Callees:
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_18008668C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r12
  unsigned __int64 *v9; // r14
  unsigned int v10; // r15d
  _QWORD *v11; // r9
  unsigned __int64 v12; // rbp
  int v13; // r8d
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v18; // rdx
  int v19; // ecx
  unsigned __int64 *v20; // [rsp+20h] [rbp-48h]
  int v21; // [rsp+70h] [rbp+8h]
  __int64 v22; // [rsp+80h] [rbp+18h]
  _QWORD *v23; // [rsp+90h] [rbp+28h]

  v5 = *(unsigned int *)(a3 + 20);
  v6 = 64LL;
  v7 = 64LL;
  if ( v5 < 0x40 )
    return 2147483653LL;
  v8 = *(unsigned int *)(a5 + 20);
  if ( v8 < 0x40 )
    return 2147483653LL;
  v9 = (unsigned __int64 *)(a2 + *(int *)(a3 + 16));
  v20 = v9;
  v23 = (_QWORD *)(a4 + *(int *)(a5 + 16));
  memset(v9, 0, 0x40uLL);
  v10 = 2;
  v11 = v23;
  v12 = *v23 & MEMORY[0x7FFE03D8] & 0xFFFFFFFFFFFFFFFCuLL;
  *v9 = v12;
  v13 = MEMORY[0x7FFE03EC] & 2;
  v21 = v13;
  if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
  {
    v14 = v23[1] & (MEMORY[0x7FFE03D8] | 3LL) | 0x8000000000000000uLL;
    v15 = MEMORY[0x7FFE05F8];
  }
  else
  {
    v14 = 0LL;
    v15 = 0LL;
  }
  v9[1] = v14;
  v16 = 2147353604LL;
  v22 = v15;
  while ( v12 )
  {
    v18 = 1LL << v10;
    if ( v13 )
    {
      if ( (v18 & v14) != 0 )
      {
        v7 = v6;
        if ( (v18 & v15) != 0 )
          v7 = (v6 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
        v6 = v7 + *(unsigned int *)v16;
      }
    }
    else
    {
      v19 = *(_DWORD *)(v16 - 4);
      v6 = (unsigned int)(v19 + *(_DWORD *)v16 - 512);
      v7 = (unsigned int)(v19 - 512);
    }
    if ( (v18 & v12) != 0 )
    {
      if ( v6 > v5 || v6 > v8 )
        return 2147483653LL;
      memmove((char *)v20 + v7, (char *)v11 + v7, *(unsigned int *)v16);
      v13 = v21;
      _bittestandreset64((__int64 *)&v12, v10);
    }
    ++v10;
    v16 += 8LL;
    if ( v10 >= 0x40 )
      break;
    v15 = v22;
    v11 = v23;
  }
  return 0LL;
}
