/*
 * XREFs of sub_18001B710 @ 0x18001B710
 * Callers:
 *     EtwNotificationRegister @ 0x18001B3E0 (EtwNotificationRegister.c)
 * Callees:
 *     sub_18001B870 @ 0x18001B870 (sub_18001B870.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     sub_180052944 @ 0x180052944 (sub_180052944.c)
 *     sub_18007A824 @ 0x18007A824 (sub_18007A824.c)
 *     sub_180084E98 @ 0x180084E98 (sub_180084E98.c)
 *     sub_180088AF8 @ 0x180088AF8 (sub_180088AF8.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

void __fastcall sub_18001B710(__int64 a1)
{
  char v2; // r14
  _RTL_SRWLOCK *v3; // rax
  _RTL_SRWLOCK *v4; // rsi
  _RTL_SRWLOCK *v5; // rdi
  unsigned __int8 *v6; // rbp
  __int64 v7; // r15
  __int128 v8; // xmm0
  __int64 v9; // r8
  _QWORD v10[15]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = 0;
  v3 = (_RTL_SRWLOCK *)sub_18001B870((void *)(a1 + 32));
  v4 = v3;
  if ( v3 )
  {
    v5 = v3 + 5;
    RtlAcquireSRWLockShared(v3 + 5);
    *(_QWORD *)(a1 + 248) = v4;
    sub_180084E98(a1);
    v6 = (unsigned __int8 *)(a1 + 150);
    v7 = 4LL;
    do
    {
      if ( *(v6 - 2) )
      {
        if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 || *(_WORD *)(a1 + 98) >= 0x8000u )
          sub_18007A824(*v6, a1);
        v2 = 1;
      }
      v6 += 24;
      --v7;
    }
    while ( v7 );
    if ( v2 )
    {
      if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 )
      {
        memset(v10, 0, sizeof(v10));
        v8 = *(_OWORD *)&v4[3].Ptr;
        v10[13] = v4[19].Ptr;
        LODWORD(v10[14]) = v4[20].Ptr;
        *(_OWORD *)&v10[5] = v8;
        RtlReleaseSRWLockShared(v5);
        LOBYTE(v9) = 1;
        sub_180052944(v10, a1, v9);
      }
      else
      {
        RtlReleaseSRWLockShared(v5);
        sub_180088AF8(a1);
      }
    }
    else
    {
      RtlReleaseSRWLockShared(v5);
    }
  }
}
