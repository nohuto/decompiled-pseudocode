/*
 * XREFs of ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00ED2FC
 * Callers:
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00EFD48 (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00EFE94 (-RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C01DE30C (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C00B16A4 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAU_D3DKMT_HASH@@@Z @ 0x1C00EE980 (-_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAU_D3DKMT_HASH@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::SetConnectivityHash(
        CCD_TOPOLOGY *this,
        const struct CCD_SET_STRING_ID *a2,
        __int64 a3,
        __int64 a4)
{
  struct _D3DKMT_HASH *v4; // rdi
  struct _STRING *ConnectedSetStr; // rax
  _QWORD *v9; // rax

  v4 = (struct _D3DKMT_HASH *)*((_QWORD *)this + 8);
  if ( v4 )
  {
    ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr(a2);
    return CCD_SET_STRING_ID::_QueryStringHash(ConnectedSetStr, v4);
  }
  else
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    v9[3] = this;
    v9[4] = *((_QWORD *)this + 8);
    v9[5] = a2;
    WdLogEvent5_WdAssertion(v9);
    return 3221225485LL;
  }
}
