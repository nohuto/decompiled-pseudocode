/*
 * XREFs of MiInitializeUnusablePfns @ 0x14016F97C
 * Callers:
 *     MiInitializeDynamicPfnsTarget @ 0x140252D10 (MiInitializeDynamicPfnsTarget.c)
 *     MiSwitchToPfns @ 0x140899CB8 (MiSwitchToPfns.c)
 * Callees:
 *     MiSetPageTablePfnBuddy @ 0x140071888 (MiSetPageTablePfnBuddy.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiPageToChannel @ 0x140122B2C (MiPageToChannel.c)
 *     MiPageToNode @ 0x140122B50 (MiPageToNode.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

unsigned __int64 __fastcall MiInitializeUnusablePfns(_QWORD *a1, unsigned __int64 a2, unsigned __int16 a3, char a4)
{
  _QWORD *v7; // rdi
  unsigned __int8 v8; // si
  unsigned __int8 v9; // r13
  char v10; // cl
  __int64 v11; // r10
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned __int64 result; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // r11
  __int64 v21; // rbx
  _QWORD v22[6]; // [rsp+20h] [rbp-30h] BYREF

  memset(v22, 0, sizeof(v22));
  v7 = &a1[6 * a2];
  v8 = 0;
  v9 = MiLockPageInline((__int64)v22);
  if ( a4 < 0 )
  {
    v22[1] = 0LL;
    v22[5] = v22[5] & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
    _InterlockedExchangeAdd64(qword_1403CB7B0, a2);
LABEL_5:
    v10 = 6;
    goto LABEL_8;
  }
  if ( (a4 & 0x40) != 0 )
  {
    v22[1] = 0xFFFFF68000000000uLL;
    goto LABEL_5;
  }
  v10 = 5;
  if ( (a4 & 2) != 0 )
    v22[5] |= 0x10000000000000uLL;
LABEL_8:
  BYTE2(v22[4]) = v10 & 0x3F | BYTE2(v22[4]) & 0x38 | 0x40;
  v22[5] ^= (v22[5] ^ ((unsigned __int64)a3 << 40)) & 0x3FF0000000000LL;
  v11 = (unsigned int)MiPageToNode((__int64)(a1 + 0xB000000000LL) / 48, 0);
  if ( (a4 & 2) == 0 )
    v8 = MiPageToChannel((__int64)(a1 + 0xB000000000LL) / 48);
  v22[5] = v22[5] & 0x3FFFFFFFFFFFFFFLL | (v11 << 58);
  v12 = v22[5] ^ (v22[5] ^ ((unsigned __int64)v8 << 36)) & 0x3000000000LL;
  if ( (a4 & 0xC0) != 0 )
  {
    v22[3] = v22[3] & 0xC000000000000000uLL | 1;
    v22[2] = MiMakeDemandZeroPte(4LL);
    v22[5] = v13 & 0xFFFFFFF000000000uLL | 0xFFFFFFFFDLL;
    MiSetPageTablePfnBuddy((__int64)v22, (__int64)KeGetCurrentThread()->ApcState.Process, 1);
    LOWORD(v22[4]) = 2;
    v22[3] |= 0x4000000000000000uLL;
    _InterlockedExchangeAdd64(&qword_1403CC658, a2);
    v12 = v22[5];
  }
  v22[5] = v12 | 0x20000000000000LL;
  _InterlockedAnd64(&v22[3], 0x7FFFFFFFFFFFFFFFuLL);
  result = v9;
  __writecr8(v9);
  if ( a1 != v7 )
  {
    v15 = v22[5];
    v16 = a1 + 2;
    v17 = v22[4];
    v18 = v22[3];
    v19 = v22[2];
    v20 = v22[1];
    v21 = v22[0];
    do
    {
      *(v16 - 2) = v21;
      *(v16 - 1) = v20;
      *v16 = v19;
      v16[1] = v18;
      v16[2] = v17;
      v16[3] = v15;
      v16 += 6;
      result = (unsigned __int64)(v16 - 2);
    }
    while ( v16 - 2 != v7 );
  }
  return result;
}
