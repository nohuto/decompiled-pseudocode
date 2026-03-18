/*
 * XREFs of MiMakeImageReadOnly @ 0x140028ABC
 * Callers:
 *     MiCreateNewSection @ 0x1404933A8 (MiCreateNewSection.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiLockLeafPage @ 0x140104100 (MiLockLeafPage.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiMakeImageReadOnly(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  char v4; // di
  ULONG_PTR v5; // rbx
  __int64 v6; // rax
  ULONG_PTR v7; // r14
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v11; // rcx
  char v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = a1 + 128;
  v4 = 17;
  v12 = 17;
  if ( a1 != -128 )
  {
    do
    {
      if ( (*(_WORD *)(v3 + 32) & 0x3E) != 2 )
      {
        v5 = *(_QWORD *)(v3 + 8);
        v6 = *(unsigned int *)(v3 + 44);
        *(_WORD *)(v3 + 32) = *(_WORD *)(v3 + 32) & 0xFFC1 | 2;
        v7 = v5 + 8 * v6;
        while ( v5 < v7 )
        {
          if ( (v5 & 0xFFF) == 0 || v4 == 17 )
          {
            if ( v4 != 17 )
            {
              LOBYTE(a2) = v4;
              MiUnlockProtoPoolPage(v2, a2);
            }
            while ( 1 )
            {
              v2 = MiLockProtoPoolPage(v5, &v12);
              if ( v2 )
                break;
              MmAccessFault(2uLL, v5);
            }
            v4 = v12;
          }
          MiLockLeafPage(v5, 0LL);
          v8 = MI_READ_PTE_LOCK_FREE(v5);
          a2 = v8;
          if ( v9 )
          {
            if ( (v8 & 1) == 0 )
            {
              *(_QWORD *)v5 = v8 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
              if ( (unsigned int)MiPteInShadowRange(v5) )
                MiWritePteShadow(v11);
              *(_QWORD *)(v9 + 16) = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v4 = v12;
          }
          else if ( (v8 & 0x400) != 0 || v8 )
          {
            *(_QWORD *)v5 = v8 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
            if ( (unsigned int)MiPteInShadowRange(v5) )
              MiWritePteShadow(v10);
          }
          v5 += 8LL;
        }
        if ( v4 != 17 )
        {
          LOBYTE(a2) = v4;
          MiUnlockProtoPoolPage(v2, a2);
          v4 = 17;
          v12 = 17;
        }
      }
      v3 = *(_QWORD *)(v3 + 16);
    }
    while ( v3 );
  }
}
