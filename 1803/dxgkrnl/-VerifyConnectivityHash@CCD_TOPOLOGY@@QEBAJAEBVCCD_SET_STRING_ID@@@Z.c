/*
 * XREFs of ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00B3D30
 * Callers:
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00B334C (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z @ 0x1C00B0C84 (-_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C00B24B4 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z @ 0x1C00B3C84 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::VerifyConnectivityHash(CCD_TOPOLOGY *this, const struct CCD_SET_STRING_ID *a2)
{
  struct _STRING *ConnectedSetStr; // rax
  int StringHash; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdi
  _QWORD *v10; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-28h] BYREF

  ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr(a2);
  StringHash = CCD_SET_STRING_ID::_QueryStringHash(ConnectedSetStr, (struct D3DKMT_HASH *)v11);
  v8 = StringHash;
  if ( StringHash >= 0 )
    return CCD_TOPOLOGY::VerifyConnectivityHash(this, (const struct D3DKMT_HASH *)v11, v7);
  v10 = (_QWORD *)WdLogNewEntry5_WdError(v6);
  v10[3] = v8;
  v10[4] = this;
  v10[5] = *((_QWORD *)this + 8);
  v10[6] = a2;
  WdLogEvent5_WdError(v10);
  return (unsigned int)v8;
}
