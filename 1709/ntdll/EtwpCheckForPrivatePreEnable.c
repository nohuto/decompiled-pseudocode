/*
 * XREFs of EtwpCheckForPrivatePreEnable @ 0x1800369D8
 * Callers:
 *     EtwNotificationRegister @ 0x1800366A0 (EtwNotificationRegister.c)
 * Callees:
 *     EtwpFindGuidEntry @ 0x180036B44 (EtwpFindGuidEntry.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     EtwpRegisterGuidsApiCallback @ 0x1800641B8 (EtwpRegisterGuidsApiCallback.c)
 *     EtwpGetUmProcessImageInfo @ 0x180067498 (EtwpGetUmProcessImageInfo.c)
 *     EtwpPopulatePrivateEnableInfoFromGuidEntry @ 0x180083D04 (EtwpPopulatePrivateEnableInfoFromGuidEntry.c)
 *     EtwpPreEnableEventApiCallback @ 0x1800878D4 (EtwpPreEnableEventApiCallback.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall EtwpCheckForPrivatePreEnable(__int64 a1)
{
  char v2; // r14
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int8 *v8; // rbp
  __int64 v9; // r15
  __int128 v10; // xmm0
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r8
  _QWORD v14[15]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = 0;
  result = EtwpFindGuidEntry((void *)(a1 + 32));
  v4 = result;
  if ( result )
  {
    v5 = result + 40;
    RtlAcquireSRWLockShared(result + 40);
    *(_QWORD *)(a1 + 248) = v4;
    EtwpPopulatePrivateEnableInfoFromGuidEntry(a1);
    v8 = (unsigned __int8 *)(a1 + 150);
    v9 = 4LL;
    do
    {
      if ( *(v8 - 2) )
      {
        if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 || *(__int16 *)(a1 + 98) < 0 )
          EtwpGetUmProcessImageInfo(*v8, a1);
        v2 = 1;
      }
      v8 += 24;
      --v9;
    }
    while ( v9 );
    if ( v2 )
    {
      if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 )
      {
        memset(v14, 0, sizeof(v14));
        v10 = *(_OWORD *)(v4 + 24);
        v14[13] = *(_QWORD *)(v4 + 152);
        LODWORD(v14[14]) = *(_DWORD *)(v4 + 160);
        *(_OWORD *)&v14[5] = v10;
        RtlReleaseSRWLockShared(v5, v11, v12);
        LOBYTE(v13) = 1;
        return EtwpRegisterGuidsApiCallback(v14, a1, v13);
      }
      else
      {
        RtlReleaseSRWLockShared(v5, v6, v7);
        return EtwpPreEnableEventApiCallback(a1);
      }
    }
    else
    {
      return RtlReleaseSRWLockShared(v5, v6, v7);
    }
  }
  return result;
}
