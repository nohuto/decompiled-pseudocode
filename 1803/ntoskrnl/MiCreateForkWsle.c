/*
 * XREFs of MiCreateForkWsle @ 0x1401428A4
 * Callers:
 *     MiCreateForkWsles @ 0x1401427C8 (MiCreateForkWsles.c)
 *     MiCreateForkWsle @ 0x1401428A4 (MiCreateForkWsle.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocateWsle @ 0x1400161C0 (MiAllocateWsle.c)
 *     MiCreateForkWsle @ 0x1401428A4 (MiCreateForkWsle.c)
 */

void __fastcall MiCreateForkWsle(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, unsigned int a5)
{
  unsigned int v5; // esi
  unsigned __int64 v7; // rbx
  __int64 v9; // rax
  int v10; // edx
  char v11; // r10
  _QWORD *v12; // r8
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  if ( a3 <= a4 )
  {
    v5 = a5;
    v7 = a3;
    do
    {
      v9 = MI_READ_PTE_LOCK_FREE(v7);
      v13 = v9;
      if ( (v9 & 1) != 0 && (v9 & 0x80u) == 0LL )
      {
        if ( v5 > 1 )
        {
          LOBYTE(v10) = v11;
          MiCreateForkWsle(a1, v10, (__int64)(v7 << 25) >> 16, ((__int64)(v7 << 25) >> 16) + 4088, v5 - 1);
        }
        v12 = (_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13) >> 12) & 0xFFFFFFFFFLL)
                       - 0x58000000000LL);
        if ( (*(_DWORD *)v12 & 1) == 0 )
          MiAllocateWsle(a1, (unsigned __int64 *)v7, v12, 0, ZeroPte, 0, 0LL);
      }
      v7 += 8LL;
    }
    while ( v7 <= a4 );
  }
}
