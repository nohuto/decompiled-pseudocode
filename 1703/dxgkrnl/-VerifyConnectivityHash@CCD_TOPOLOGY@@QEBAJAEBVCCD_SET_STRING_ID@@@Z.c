/*
 * XREFs of ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00ED3F4
 * Callers:
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00EBFAC (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C00B16A4 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBU_D3DKMT_HASH@@@Z @ 0x1C00ED348 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBU_D3DKMT_HASH@@@Z.c)
 *     ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAU_D3DKMT_HASH@@@Z @ 0x1C00EE980 (-_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAU_D3DKMT_HASH@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::VerifyConnectivityHash(CCD_TOPOLOGY *this, const struct CCD_SET_STRING_ID *a2)
{
  struct _STRING *ConnectedSetStr; // rax
  int StringHash; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  _QWORD *v12; // rax
  _BYTE v13[24]; // [rsp+20h] [rbp-28h] BYREF

  ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr(a2);
  StringHash = CCD_SET_STRING_ID::_QueryStringHash(ConnectedSetStr, (struct _D3DKMT_HASH *)v13);
  v10 = StringHash;
  if ( StringHash >= 0 )
    return CCD_TOPOLOGY::VerifyConnectivityHash(this, (const struct _D3DKMT_HASH *)v13, v8, v9);
  v12 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6);
  v12[3] = v10;
  v12[4] = this;
  v12[5] = *((_QWORD *)this + 8);
  v12[6] = a2;
  WdLogEvent5_WdError(v12);
  return (unsigned int)v10;
}
