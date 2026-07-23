/*
 * XREFs of sub_180020A2C @ 0x180020A2C
 * Callers:
 *     sub_1800211B0 @ 0x1800211B0 (sub_1800211B0.c)
 * Callees:
 *     sub_180007688 @ 0x180007688 (sub_180007688.c)
 *     sub_18001F198 @ 0x18001F198 (sub_18001F198.c)
 *     sub_1800206A8 @ 0x1800206A8 (sub_1800206A8.c)
 *     sub_180020EF0 @ 0x180020EF0 (sub_180020EF0.c)
 */

__int64 __fastcall sub_180020A2C(_RTL_SRWLOCK *BaseAddress, unsigned int a2, char *a3, __int64 a4)
{
  __int64 v8; // rax
  char *v9; // r10
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx

  v8 = sub_180020EF0(BaseAddress, a3);
  v9 = 0LL;
  v10 = v8;
  if ( !v8 )
    return -1LL;
  v11 = *(_QWORD *)(a4 + 32);
  v12 = (v11 + 4095) >> 12;
  if ( (unsigned int)((_DWORD)v12 << 12) >= v11 )
  {
    if ( (*(_BYTE *)(v8 + 24) & 0x21) != 0 || (unsigned int)v12 > *(unsigned __int8 *)(v8 + 27) )
    {
      if ( (a2 & 0x2000000) == 0 )
        return sub_1800206A8(BaseAddress, a3, a4, a2);
    }
    else
    {
      if ( *(_DWORD *)(a4 + 16) )
        sub_180007688((__int64)a3, *(_QWORD *)a4, (__int64)a3, *(_QWORD *)(a4 + 24), a2);
      if ( (unsigned int)v12 < *(unsigned __int8 *)(v10 + 27) )
        sub_18001F198((__int64)BaseAddress, v10, v12, a2);
      v9 = a3;
      *(_WORD *)(v10 + 6) = ((_WORD)v12 << 12) - *(_WORD *)(a4 + 24);
    }
  }
  return (__int64)v9;
}
