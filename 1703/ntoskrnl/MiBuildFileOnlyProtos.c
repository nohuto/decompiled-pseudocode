/*
 * XREFs of MiBuildFileOnlyProtos @ 0x14021816C
 * Callers:
 *     MiAllocateFileExtents @ 0x1406B6DDC (MiAllocateFileExtents.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiInitializeFileOnlyPfn @ 0x140219044 (MiInitializeFileOnlyPfn.c)
 */

void __fastcall MiBuildFileOnlyProtos(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // esi
  __int64 v5; // rbx
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
        MmAccessFault(2uLL, a4, 0, 0LL);
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
      v5 = v4;
    }
    while ( v4 < a2 );
  }
}
