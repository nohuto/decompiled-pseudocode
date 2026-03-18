/*
 * XREFs of ?_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00B06BC
 * Callers:
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C00B0984 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C00044B8 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _CcdReadRegistryValues @ 0x1C00B1844 (_CcdReadRegistryValues.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_ReadPath(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        void *a2,
        unsigned int a3,
        struct _D3DKMT_PATHMODALITY_DESCRIPTOR *a4)
{
  __int64 v5; // rbp
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  int RegistryValues; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r14
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  wchar_t pszDest; // [rsp+30h] [rbp-38h] BYREF

  v5 = a3;
  v7 = RtlStringCbPrintfW(&pszDest, 6uLL, L"%02x", a3);
  v12 = v7;
  if ( v7 < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    v29[3] = v12;
    v29[4] = a2;
    v29[5] = v5;
    v29[6] = a4;
    WdLogEvent5_WdAssertion(v29);
  }
  else
  {
    v12 = (int)CcdReadRegistryValues((int)a2, &pszDest, &unk_1C006E120, (__int64)a4);
    v17 = *(unsigned int *)a4;
    *(_QWORD *)a4 = v17;
    if ( (int)v12 < 0 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
      v30[3] = v12;
      v30[4] = a2;
      v30[5] = v5;
      v30[6] = a4;
      WdLogEvent5_WdWarning(v30);
    }
    else
    {
      if ( (v17 & 0x100) != 0 )
      {
        v18 = CcdReadRegistryValues((int)a2, &pszDest, &unk_1C006E470, (__int64)a4);
        v12 = v18;
        if ( v18 < 0 )
        {
          v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
          v31[3] = v12;
          v31[4] = a2;
          v31[5] = v5;
          v31[6] = a4;
          WdLogEvent5_WdWarning(v31);
          RegistryValues = CcdReadRegistryValues((int)a2, 0LL, &unk_1C006E5C0, (__int64)a4);
          v35 = RegistryValues;
          if ( RegistryValues < 0 )
          {
            v36 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33);
            v36[3] = v35;
            v36[4] = a2;
            v36[5] = v5;
            WdLogEvent5_WdError(v36);
            *(_QWORD *)a4 &= ~0x100uLL;
          }
          if ( (*(_QWORD *)a4 & 0x100LL) != 0 )
            *(_QWORD *)a4 |= 0x20000uLL;
          LODWORD(v12) = 0;
        }
      }
      if ( (*(_DWORD *)a4 & 0x800000) != 0 )
      {
        v23 = CcdReadRegistryValues((int)a2, &pszDest, &unk_1C006E000, (__int64)a4);
        v12 = v23;
        if ( v23 < 0 )
        {
          v37 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
          v37[3] = v12;
          v37[4] = a2;
          v37[5] = v5;
          v37[6] = a4;
          WdLogEvent5_WdWarning(v37);
          *(_QWORD *)a4 &= ~0x800000uLL;
          LODWORD(v12) = 0;
        }
        else if ( *((_DWORD *)a4 + 44) == *((_DWORD *)a4 + 42) || *((_DWORD *)a4 + 45) == *((_DWORD *)a4 + 43) )
        {
          *(_QWORD *)a4 &= ~0x800000uLL;
        }
      }
    }
  }
  return (unsigned int)v12;
}
