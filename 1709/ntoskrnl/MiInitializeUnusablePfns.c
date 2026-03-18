/*
 * XREFs of MiInitializeUnusablePfns @ 0x140137634
 * Callers:
 *     MiInitializeDynamicPfnsTarget @ 0x140214890 (MiInitializeDynamicPfnsTarget.c)
 *     MiSwitchToPfns @ 0x14082A50C (MiSwitchToPfns.c)
 * Callees:
 *     MiSetPageTablePfnBuddy @ 0x1400B7DD4 (MiSetPageTablePfnBuddy.c)
 *     MiPageToChannel @ 0x1400C7124 (MiPageToChannel.c)
 *     MiPageToNode @ 0x1400C7140 (MiPageToNode.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     memset @ 0x140192F40 (memset.c)
 */

unsigned __int64 __fastcall MiInitializeUnusablePfns(_QWORD *a1, unsigned __int64 a2, unsigned __int16 a3, char a4)
{
  _QWORD *v8; // rsi
  unsigned __int8 v9; // al
  char v10; // dl
  unsigned int v11; // r10d
  unsigned __int8 v12; // r12
  unsigned __int8 v13; // al
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned __int64 result; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // r11
  __int64 v23; // rbx
  _QWORD v24[6]; // [rsp+20h] [rbp-30h] BYREF

  memset(v24, 0, sizeof(v24));
  v8 = &a1[6 * a2];
  v9 = MiLockPageInline((__int64)v24);
  v10 = 6;
  v11 = 0;
  v12 = v9;
  if ( a4 >= 0 )
  {
    if ( (a4 & 0x40) != 0 )
    {
      v24[1] = 0xFFFFF68000000000uLL;
    }
    else
    {
      v10 = 5;
      if ( (a4 & 2) != 0 )
        v24[5] |= 0x10000000000000uLL;
    }
  }
  else
  {
    v24[1] = 0LL;
    v24[5] = v24[5] & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
    _InterlockedIncrement64(&qword_1403885F0);
  }
  BYTE2(v24[4]) ^= (v10 ^ BYTE2(v24[4])) & 7;
  BYTE2(v24[4]) = BYTE2(v24[4]) & 0x3F | 0x40;
  v24[5] ^= (v24[5] ^ ((unsigned __int64)a3 << 40)) & 0x3FF0000000000LL;
  if ( (a4 & 2) != 0 )
  {
    v13 = 0;
  }
  else
  {
    MiPageToNode((__int64)(a1 + 0xB000000000LL) / 48, 0LL);
    v13 = MiPageToChannel((__int64)(a1 + 0xB000000000LL) / 48);
  }
  v24[5] = v24[5] & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)v11 << 58);
  v14 = v24[5] ^ (v24[5] ^ ((unsigned __int64)v13 << 36)) & 0x3000000000LL;
  if ( (a4 & 0xC0) != 0 )
  {
    v24[3] = v24[3] & 0xC000000000000000uLL | 1;
    v24[2] = MiMakeDemandZeroPte(4LL);
    v24[5] = v15 & 0xFFFFFFF000000000uLL | 0xFFFFFFFFDLL;
    MiSetPageTablePfnBuddy((__int64)v24, (__int64)KeGetCurrentThread()->ApcState.Process, 1);
    LOWORD(v24[4]) = 2;
    v24[3] |= 0x4000000000000000uLL;
    _InterlockedExchangeAdd64(&qword_1403893E0, a2);
    v14 = v24[5];
  }
  v24[5] = v14 | 0x20000000000000LL;
  _InterlockedAnd64(&v24[3], 0x7FFFFFFFFFFFFFFFuLL);
  result = v12;
  __writecr8(v12);
  if ( a1 != v8 )
  {
    v17 = v24[5];
    v18 = a1 + 2;
    v19 = v24[4];
    v20 = v24[3];
    v21 = v24[2];
    v22 = v24[1];
    v23 = v24[0];
    do
    {
      *(v18 - 2) = v23;
      *(v18 - 1) = v22;
      *v18 = v21;
      v18[1] = v20;
      v18[2] = v19;
      v18[3] = v17;
      v18 += 6;
      result = (unsigned __int64)(v18 - 2);
    }
    while ( v18 - 2 != v8 );
  }
  return result;
}
