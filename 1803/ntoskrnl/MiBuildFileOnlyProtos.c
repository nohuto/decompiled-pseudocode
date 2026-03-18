/*
 * XREFs of MiBuildFileOnlyProtos @ 0x14025D034
 * Callers:
 *     MiAllocateFileExtents @ 0x14074DC04 (MiAllocateFileExtents.c)
 * Callees:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiInitializeFileOnlyPfns @ 0x14025DF18 (MiInitializeFileOnlyPfns.c)
 */

void __fastcall MiBuildFileOnlyProtos(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // r14d
  __int64 v5; // rsi
  __int64 v10; // r9
  ULONG_PTR v11; // r15
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned int v14; // ebx
  _QWORD *v15; // rcx
  unsigned __int8 v16; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
  {
    v4 = 0;
    v16 = 17;
    v5 = 0LL;
    do
    {
      while ( 1 )
      {
        v11 = MiLockProtoPoolPage(a4, &v16);
        if ( v11 )
          break;
        MmAccessFault(2uLL, a4, 0, 0LL);
      }
      do
      {
        v12 = *(_QWORD *)(a1 + 8 * v5);
        v13 = (4096 - (a4 & 0xFFF)) >> 3;
        v14 = 1;
        if ( (unsigned int)a2 - v4 <= (unsigned int)v13 )
          v13 = (unsigned int)a2 - v4;
        if ( (unsigned int)v13 > 1 )
        {
          v15 = (_QWORD *)(a1 + 8 + 8 * v5);
          do
          {
            if ( *v15 != v12 + v14 )
              break;
            ++v14;
            ++v15;
          }
          while ( v14 < (unsigned int)v13 );
        }
        if ( v12 >= 0 )
          MiInitializeFileOnlyPfns(a3, a4, v12, v14);
        v4 += v14;
        v5 = v4;
        a4 += 8LL * v14;
      }
      while ( v4 < a2 && (a4 & 0xFFF) != 0 );
      LOBYTE(v13) = v16;
      MiUnlockProtoPoolPage(v11, v13, v12, v10);
    }
    while ( v4 < a2 );
  }
}
