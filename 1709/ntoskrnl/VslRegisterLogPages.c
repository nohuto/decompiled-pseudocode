/*
 * XREFs of VslRegisterLogPages @ 0x1401F2608
 * Callers:
 *     PsIumResumeAfterHibernate @ 0x14024F600 (PsIumResumeAfterHibernate.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14011D9FC (HvlQueryVsmConnection.c)
 *     VslpUnlockPagesForTransfer @ 0x140159CE0 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x140159D24 (VslpLockPagesForTransfer.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 VslRegisterLogPages()
{
  __int64 v0; // rdx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  unsigned int v3; // ebx
  _QWORD v4[10]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v5[8]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v6; // [rsp+88h] [rbp-80h]
  __int64 v7; // [rsp+90h] [rbp-78h]

  if ( !HvlQueryVsmConnection(0LL) )
    return 3221225629LL;
  result = VslpLockPagesForTransfer((__int64)v4, v0, 0x2000u, 1, 2u);
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v6 = v4[0];
    v7 = v4[7];
    v3 = VslpEnterIumSecureMode(2u, 235LL, 0, (__int64)v5);
    __writecr8(CurrentIrql);
    VslpUnlockPagesForTransfer((__int64)v4);
    return v3;
  }
  return result;
}
