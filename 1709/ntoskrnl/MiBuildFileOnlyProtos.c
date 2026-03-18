/*
 * XREFs of MiBuildFileOnlyProtos @ 0x140222428
 * Callers:
 *     MiAllocateFileExtents @ 0x1406E3904 (MiAllocateFileExtents.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiInitializeFileOnlyPfn @ 0x140223308 (MiInitializeFileOnlyPfn.c)
 */

void __fastcall MiBuildFileOnlyProtos(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  __int64 v10; // r14
  unsigned __int8 v11; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
  {
    v4 = 0;
    v11 = 17;
    v5 = 0LL;
    do
    {
      while ( 1 )
      {
        v10 = MiLockProtoPoolPage(a4, &v11);
        if ( v10 )
          break;
        MmAccessFault(2uLL, a4, 0LL, 0LL);
      }
      do
      {
        if ( *(__int64 *)(a1 + 8 * v5) >= 0 )
          MiInitializeFileOnlyPfn(a3, a4);
        ++v4;
        a4 += 8LL;
        v5 = v4;
      }
      while ( v4 < a2 && (a4 & 0xFFF) != 0 );
      MiUnlockProtoPoolPage(v10, v11);
    }
    while ( v4 < a2 );
  }
}
