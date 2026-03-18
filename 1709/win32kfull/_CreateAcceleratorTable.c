/*
 * XREFs of _CreateAcceleratorTable @ 0x1C0110528
 * Callers:
 *     NtUserCreateAcceleratorTable @ 0x1C0110480 (NtUserCreateAcceleratorTable.c)
 * Callees:
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall CreateAcceleratorTable(void *Src, size_t Size, __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax

  v3 = (unsigned int)Size;
  v5 = (unsigned int)(Size + 34);
  if ( (unsigned int)v5 < (unsigned int)Size )
    return 0LL;
  LOBYTE(a3) = 8;
  v6 = HMAllocObject(gptiCurrent, 0LL, a3, v5);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  memmove((void *)(v6 + 28), Src, (unsigned int)v3);
  *(_DWORD *)(v7 + 24) = v3 / 6;
  v8 = 3LL * ((unsigned int)(v3 / 6) - 1);
  *(_BYTE *)(v7 + 2 * v8 + 28) |= 0x80u;
  return v7;
}
