/*
 * XREFs of MiInsertLargePageInFreeOrZeroList @ 0x1400C58B0
 * Callers:
 *     MiGetFreeOrZeroPage @ 0x1400BBDA0 (MiGetFreeOrZeroPage.c)
 *     MiDemoteLargeFreeZeroPage @ 0x140125774 (MiDemoteLargeFreeZeroPage.c)
 *     MiDemoteLargeFreePage @ 0x140128B94 (MiDemoteLargeFreePage.c)
 *     MiTryUnlinkNodeLargePage @ 0x140128BFC (MiTryUnlinkNodeLargePage.c)
 *     MiUnlinkNodeLargePage @ 0x1401291F0 (MiUnlinkNodeLargePage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400B7240 (MiInsertLargePageInNodeListHelper.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     HvlNotifyPageHeat @ 0x140269C18 (HvlNotifyPageHeat.c)
 */

__int64 __fastcall MiInsertLargePageInFreeOrZeroList(__int64 a1, int a2, int a3)
{
  int v3; // r12d
  int v5; // ebx
  unsigned __int64 v6; // rcx
  __int64 v7; // r15
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  int v11; // edx
  unsigned int v12; // r12d
  __int64 v13; // r14
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // rax
  int v19; // [rsp+20h] [rbp-78h]
  int v20; // [rsp+24h] [rbp-74h]
  int v21; // [rsp+28h] [rbp-70h] BYREF
  __int64 v22; // [rsp+30h] [rbp-68h]
  __int64 CurrentIrql; // [rsp+38h] [rbp-60h]
  int v24; // [rsp+40h] [rbp-58h]
  int v25; // [rsp+44h] [rbp-54h]
  __int64 v26; // [rsp+48h] [rbp-50h] BYREF

  v3 = 512;
  if ( a3 != 2 )
    v3 = 64;
  v5 = 1;
  if ( a3 != 2 )
    v5 = a3;
  v6 = MiLargePageSizes[a2];
  if ( v6 > 0x10 )
  {
    v18 = (unsigned int)(a2 + 1);
    v7 = MiLargePageContainingFrames[v18];
    v8 = MiLargePageSizes[v18];
    v19 = a2 + 1;
  }
  else
  {
    v7 = 0LL;
    v8 = 0LL;
    v19 = 0;
    if ( !v5 )
      v5 = 1;
  }
  v9 = a1 + 48 * v6;
  v10 = (__int64)(v9 + 0x58000000000LL) / 48;
  v11 = *(_BYTE *)(a1 + 34) & 7;
  v20 = v11;
  if ( (*(_BYTE *)(a1 + 34) & 7) != 0 )
    v12 = v3 | 2;
  else
    v12 = v3 | 1;
  if ( (HvlEnlightenments & 0x200000) != 0 && HvlMemoryHeatHintEnabled && a3 == 2 && (*(_BYTE *)(a1 + 34) & 7) == 0 )
  {
    v24 = 1;
    v25 = 1;
    v26 = (((a1 + 0x58000000000LL) / 48) << 12) | 0xF;
    HvlNotifyPageHeat(1LL, 1LL, &v26);
    v11 = v20;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v13 = v5;
  v14 = v9 + 24;
  v22 = -24 - a1;
  do
  {
    v14 -= 48LL;
    v21 = 0;
    v9 -= 48LL;
    --v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v21);
        while ( *(__int64 *)v14 < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0x3FuLL) );
      v11 = v20;
    }
    v15 = *(_QWORD *)(v14 + 16);
    *(_QWORD *)v14 &= 0xC000000000000000uLL;
    v16 = *(_QWORD *)(v14 + 16) ^ (v7 ^ v15) & 0xFFFFFFFFFLL;
    *(_QWORD *)(v14 + 16) = v16;
    if ( v13 == 1 && v9 < a1 + 768 )
    {
      *(_QWORD *)(v14 + 16) = v16 & 0xFFFFFFF000000000uLL;
      MiInsertPageInFreeOrZeroedList(v10, v12);
    }
    else if ( ((v8 - 1) & v10) == 0 )
    {
      MiInsertLargePageInNodeListHelper(v10, v8, v11, 1);
      if ( v13 == 1 && (__int64)(v14 + v22) / 48 == v8 && v8 > 0x10 )
      {
        v7 = MiLargePageContainingFrames[++v19];
        v8 = MiLargePageSizes[v19];
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)v14, 0x7FFFFFFFFFFFFFFFuLL);
    v11 = v20;
  }
  while ( v9 != a1 );
  result = (unsigned __int8)CurrentIrql;
  __writecr8((unsigned __int8)CurrentIrql);
  return result;
}
