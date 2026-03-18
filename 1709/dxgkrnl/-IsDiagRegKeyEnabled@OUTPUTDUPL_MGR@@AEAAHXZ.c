/*
 * XREFs of ?IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ @ 0x1C01C6DE4
 * Callers:
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C01C6580 (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     ?GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z @ 0x1C01C6780 (-GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z.c)
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::IsDiagRegKeyEnabled(OUTPUTDUPL_MGR *this)
{
  __int64 v2; // [rsp+30h] [rbp-19h] BYREF
  int v3; // [rsp+38h] [rbp-11h]
  const wchar_t *v4; // [rsp+40h] [rbp-9h]
  unsigned int *v5; // [rsp+48h] [rbp-1h]
  int v6; // [rsp+50h] [rbp+7h]
  int *v7; // [rsp+58h] [rbp+Fh]
  int v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  int v10; // [rsp+70h] [rbp+27h]
  _BYTE v11[40]; // [rsp+78h] [rbp+2Fh] BYREF
  unsigned int v12; // [rsp+B0h] [rbp+67h] BYREF
  int v13; // [rsp+B4h] [rbp+6Bh]
  int v14; // [rsp+B8h] [rbp+6Fh] BYREF

  v13 = HIDWORD(this);
  v12 = 0;
  v2 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v4 = L"DxgEnableDesktopDuplicationDiagnostics";
  v5 = &v12;
  v7 = &v14;
  v14 = 1;
  v3 = 288;
  v6 = 67108868;
  v8 = 4;
  memset(v11, 0, sizeof(v11));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v2, 0LL, 0LL);
  return v12;
}
