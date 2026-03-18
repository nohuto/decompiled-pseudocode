/*
 * XREFs of MiMakeImageReadOnly @ 0x1400C2CC0
 * Callers:
 *     MiCreateNewSection @ 0x1404BE6AC (MiCreateNewSection.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiLockLeafPage @ 0x1401249A0 (MiLockLeafPage.c)
 */

void __fastcall MiMakeImageReadOnly(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rbp
  __int64 v5; // rsi
  unsigned __int8 v6; // di
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned __int8 v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = a1 + 128;
  v6 = 17;
  v14 = 17;
  if ( a1 != -128 )
  {
    do
    {
      if ( (*(_WORD *)(v5 + 32) & 0x3E) != 2 )
      {
        v7 = *(_QWORD *)(v5 + 8);
        v8 = *(unsigned int *)(v5 + 44);
        *(_WORD *)(v5 + 32) = *(_WORD *)(v5 + 32) & 0xFFC1 | 2;
        v9 = v7 + 8 * v8;
        while ( v7 < v9 )
        {
          if ( (v7 & 0xFFF) == 0 || v6 == 17 )
          {
            if ( v6 != 17 )
            {
              LOBYTE(a2) = v6;
              MiUnlockProtoPoolPage(v4, a2, a3, a4);
            }
            while ( 1 )
            {
              v4 = MiLockProtoPoolPage(v7, &v14);
              if ( v4 )
                break;
              MmAccessFault(2uLL, v7, 0, 0LL);
            }
            v6 = v14;
          }
          MiLockLeafPage(v7, 0LL);
          v10 = MI_READ_PTE_LOCK_FREE(v7);
          a2 = v10;
          if ( v11 )
          {
            if ( (v10 & 1) == 0 )
            {
              *(_QWORD *)v7 = v10 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
              if ( MiPteInShadowRange(v7) )
                MiWritePteShadow(v13, a2, a3);
              *(_QWORD *)(v11 + 16) = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v6 = v14;
          }
          else if ( (v10 & 0x400) != 0 || v10 )
          {
            *(_QWORD *)v7 = v10 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
            if ( MiPteInShadowRange(v7) )
              MiWritePteShadow(v12, a2, a3);
          }
          v7 += 8LL;
        }
        if ( v6 != 17 )
        {
          LOBYTE(a2) = v6;
          MiUnlockProtoPoolPage(v4, a2, a3, a4);
          v6 = 17;
          v14 = 17;
        }
      }
      v5 = *(_QWORD *)(v5 + 16);
    }
    while ( v5 );
  }
}
