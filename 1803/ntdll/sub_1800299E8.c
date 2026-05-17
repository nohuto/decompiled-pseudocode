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

_QWORD *__fastcall sub_1800299E8(__int64 a1)
{
  char v2; // r14
  _QWORD *result; // rax
  char *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rsi
  volatile signed __int64 *v8; // rdi
  unsigned __int8 *v9; // rbp
  __int64 v10; // r15
  __int128 v11; // xmm0
  __int64 v12; // r8
  _QWORD v13[15]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = 0;
  result = sub_180024300((_QWORD *)(a1 + 32));
  v7 = result;
  if ( result )
  {
    v8 = result + 5;
    RtlAcquireSRWLockShared(result + 5, v4, v5, v6);
    *(_QWORD *)(a1 + 248) = v7;
    sub_180082104(a1);
    v9 = (unsigned __int8 *)(a1 + 150);
    v10 = 4LL;
    do
    {
      if ( *(v9 - 2) )
      {
        if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 || *(__int16 *)(a1 + 98) < 0 )
          sub_180085C54(*v9, a1);
        v2 = 1;
      }
      v9 += 24;
      --v10;
    }
    while ( v10 );
    if ( v2 )
    {
      if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 )
      {
        memset(v13, 0, sizeof(v13));
        v11 = *(_OWORD *)(v7 + 3);
        v13[13] = v7[19];
        LODWORD(v13[14]) = *((_DWORD *)v7 + 40);
        *(_OWORD *)&v13[5] = v11;
        RtlReleaseSRWLockShared(v8);
        LOBYTE(v12) = 1;
        return (_QWORD *)sub_180081554(v13, a1, v12);
      }
      else
      {
        RtlReleaseSRWLockShared(v8);
        return (_QWORD *)sub_1800834BC(a1);
      }
    }
    else
    {
      return (_QWORD *)RtlReleaseSRWLockShared(v8);
    }
  }
  return result;
}
