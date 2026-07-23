/*
 * XREFs of sub_1800299E8 @ 0x1800299E8
 * Callers:
 *     EtwNotificationRegister @ 0x1800296B0 (EtwNotificationRegister.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     sub_180024300 @ 0x180024300 (sub_180024300.c)
 *     sub_180081554 @ 0x180081554 (sub_180081554.c)
 *     sub_180082104 @ 0x180082104 (sub_180082104.c)
 *     sub_1800834BC @ 0x1800834BC (sub_1800834BC.c)
 *     sub_180085C54 @ 0x180085C54 (sub_180085C54.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

void __fastcall sub_1800299E8(__int64 a1)
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
  v3 = (_RTL_SRWLOCK *)sub_180024300((_QWORD *)(a1 + 32));
  v4 = v3;
  if ( v3 )
  {
    v5 = v3 + 5;
    RtlAcquireSRWLockShared(v3 + 5);
    *(_QWORD *)(a1 + 248) = v4;
    sub_180082104(a1);
    v6 = (unsigned __int8 *)(a1 + 150);
    v7 = 4LL;
    do
    {
      if ( *(v6 - 2) )
      {
        if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 || *(__int16 *)(a1 + 98) < 0 )
          sub_180085C54(*v6, a1);
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
        sub_180081554(v10, a1, v9);
      }
      else
      {
        RtlReleaseSRWLockShared(v5);
        sub_1800834BC(a1);
      }
    }
    else
    {
      RtlReleaseSRWLockShared(v5);
    }
  }
}
