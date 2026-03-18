/*
 * XREFs of MiMakeImageReadOnly @ 0x140122884
 * Callers:
 *     MiCreateNewSection @ 0x1404F96D0 (MiCreateNewSection.c)
 * Callees:
 *     MiLockLeafPage @ 0x14002F4D4 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

void __fastcall MiMakeImageReadOnly(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  unsigned __int8 v6; // di
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r14
  __int64 v10; // r10
  unsigned __int64 v11; // r11
  __int64 PteShadow; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int8 v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = a1 + 128;
  v6 = 17;
  v15 = 17;
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
              MiUnlockProtoPoolPage(v4, v6);
            while ( 1 )
            {
              v4 = MiLockProtoPoolPage(v7, &v15);
              if ( v4 )
                break;
              MmAccessFault(2uLL, v7, 0LL, 0LL);
            }
            v6 = v15;
          }
          v10 = MiLockLeafPage((__int64 *)v7, 0LL, a3, a4);
          v11 = 0xFFFFF6FB7DBED000uLL;
          PteShadow = *(_QWORD *)v7;
          if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
            PteShadow = MiReadPteShadow(v7, *(_QWORD *)v7);
          if ( v10 )
          {
            if ( (PteShadow & 1) == 0 )
            {
              v14 = PteShadow & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
              *(_QWORD *)v7 = v14;
              if ( v7 >= v11 && v7 <= 0xFFFFF6FB7DBED7F8uLL )
                MiWritePteShadow(v7, v14);
              *(_QWORD *)(v10 + 16) = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v6 = v15;
          }
          else if ( (PteShadow & 0x400) != 0 || PteShadow )
          {
            v13 = PteShadow & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
            *(_QWORD *)v7 = v13;
            if ( v7 >= v11 && v7 <= 0xFFFFF6FB7DBED7F8uLL )
              MiWritePteShadow(v7, v13);
          }
          v7 += 8LL;
        }
        if ( v6 != 17 )
        {
          MiUnlockProtoPoolPage(v4, v6);
          v6 = 17;
          v15 = 17;
        }
      }
      v5 = *(_QWORD *)(v5 + 16);
    }
    while ( v5 );
  }
}
