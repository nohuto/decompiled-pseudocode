/*
 * XREFs of MiEliminateStaleExtents @ 0x14025D78C
 * Callers:
 *     MiAllocateFileExtents @ 0x14074DC04 (MiAllocateFileExtents.c)
 * Callees:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiLockLeafPage @ 0x1401249A0 (MiLockLeafPage.c)
 */

void __fastcall MiEliminateStaleExtents(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // esi
  __int64 v4; // rdi
  ULONG_PTR v8; // r15
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 v14; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 )
  {
    v3 = 0;
    v14 = 17;
    v4 = 0LL;
    do
    {
      while ( 1 )
      {
        v8 = MiLockProtoPoolPage(a1, &v14);
        if ( v8 )
          break;
        MmAccessFault(2uLL, a1, 0, 0LL);
      }
      do
      {
        v9 = *(_QWORD *)(a2 + 8 * v4);
        v10 = MiLockLeafPage(a1, 0);
        if ( v10 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          *(_QWORD *)(a2 + 8 * v4) = v9 | 0x8000000000000000uLL;
        }
        ++v3;
        a1 += 8LL;
        v4 = v3;
      }
      while ( v3 < a3 && (a1 & 0xFFF) != 0 );
      LOBYTE(v11) = v14;
      MiUnlockProtoPoolPage(v8, v11, v12, v13);
    }
    while ( v3 < a3 );
  }
}
