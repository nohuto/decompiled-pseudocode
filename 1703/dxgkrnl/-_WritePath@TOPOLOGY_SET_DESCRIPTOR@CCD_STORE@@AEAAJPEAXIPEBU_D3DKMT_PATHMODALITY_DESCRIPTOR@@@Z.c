/*
 * XREFs of ?_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00B05C0
 * Callers:
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C00B0C90 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C00044B8 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _CcdWriteRegistryValues @ 0x1C00AE504 (_CcdWriteRegistryValues.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_WritePath(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        const WCHAR *a2,
        unsigned int a3,
        const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *a4)
{
  __int64 v5; // rbp
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  int v19; // eax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  wchar_t pszDest; // [rsp+30h] [rbp-28h] BYREF

  v5 = a3;
  v7 = RtlStringCbPrintfW(&pszDest, 6uLL, L"%02x", a3);
  v12 = v7;
  if ( v7 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    v21[3] = v12;
    v21[4] = a2;
    v21[5] = v5;
    v21[6] = a4;
    WdLogEvent5_WdAssertion(v21);
  }
  else
  {
    v13 = CcdWriteRegistryValues(a2, &pszDest, (__int64)&unk_1C006E120, 13, (__int64)a4);
    v12 = v13;
    if ( v13 < 0
      || (*(_DWORD *)a4 & 0x100LL) != 0
      && (v18 = CcdWriteRegistryValues(a2, &pszDest, (__int64)&unk_1C006E470, 6, (__int64)a4), v12 = v18, v18 < 0)
      || (*(_DWORD *)a4 & 0x800000) != 0
      && (v19 = CcdWriteRegistryValues(a2, &pszDest, (__int64)&unk_1C006E000, 5, (__int64)a4), v12 = v19, v19 < 0) )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
      v22[3] = v12;
      v22[4] = a2;
      v22[5] = v5;
      v22[6] = a4;
      WdLogEvent5_WdWarning(v22);
    }
  }
  return (unsigned int)v12;
}
