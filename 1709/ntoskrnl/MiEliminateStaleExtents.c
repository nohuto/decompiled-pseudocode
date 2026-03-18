/*
 * XREFs of MiEliminateStaleExtents @ 0x140222B30
 * Callers:
 *     MiAllocateFileExtents @ 0x1406E3904 (MiAllocateFileExtents.c)
 * Callees:
 *     MiLockLeafPage @ 0x14002F4D4 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 */

void __fastcall MiEliminateStaleExtents(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rax
  unsigned __int8 v13; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 )
  {
    v3 = 0;
    v13 = 17;
    v4 = 0LL;
    do
    {
      while ( 1 )
      {
        v10 = MiLockProtoPoolPage(BugCheckParameter1, &v13);
        if ( v10 )
          break;
        MmAccessFault(2uLL, BugCheckParameter1, 0LL, 0LL);
      }
      do
      {
        v11 = *(_QWORD *)(a2 + 8 * v4);
        v12 = MiLockLeafPage((__int64 *)BugCheckParameter1, 0LL, v8, v9);
        if ( v12 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          *(_QWORD *)(a2 + 8 * v4) = v11 | 0x8000000000000000uLL;
        }
        ++v3;
        BugCheckParameter1 += 8LL;
        v4 = v3;
      }
      while ( v3 < a3 && (BugCheckParameter1 & 0xFFF) != 0 );
      MiUnlockProtoPoolPage(v10, v13);
    }
    while ( v3 < a3 );
  }
}
