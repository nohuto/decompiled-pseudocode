/*
 * XREFs of ?_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00D9C10
 * Callers:
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C00DA308 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C000C794 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _CcdWriteRegistryValues @ 0x1C00F3BE8 (_CcdWriteRegistryValues.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_WritePath(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        void *a2,
        unsigned int a3,
        const struct D3DKMT_PATHMODALITY_DESCRIPTOR *a4)
{
  __int64 v5; // rbp
  NTSTATUS v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  int v15; // eax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  wchar_t pszDest; // [rsp+30h] [rbp-28h] BYREF

  v5 = a3;
  v7 = RtlStringCbPrintfW(&pszDest, 6uLL, L"%02x", a3);
  v9 = v7;
  if ( v7 < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdAssertion(v8);
    v17[3] = v9;
    v17[4] = a2;
    v17[5] = v5;
    v17[6] = a4;
    WdLogEvent5_WdAssertion(v17);
  }
  else
  {
    v10 = CcdWriteRegistryValues((int)a2, &pszDest, (__int64)a4);
    v9 = v10;
    if ( v10 < 0
      || (*(_DWORD *)a4 & 0x100LL) != 0
      && (v14 = CcdWriteRegistryValues((int)a2, &pszDest, (__int64)a4), v9 = v14, v14 < 0)
      || (*(_DWORD *)a4 & 0x800000) != 0
      && (v15 = CcdWriteRegistryValues((int)a2, &pszDest, (__int64)a4), v9 = v15, v15 < 0) )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
      v18[3] = v9;
      v18[4] = a2;
      v18[5] = v5;
      v18[6] = a4;
      WdLogEvent5_WdWarning(v18);
    }
  }
  return (unsigned int)v9;
}
