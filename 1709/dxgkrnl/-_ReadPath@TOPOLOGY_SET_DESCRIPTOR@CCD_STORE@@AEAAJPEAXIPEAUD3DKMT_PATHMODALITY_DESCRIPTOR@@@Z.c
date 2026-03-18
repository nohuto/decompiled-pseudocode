/*
 * XREFs of ?_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00D9D0C
 * Callers:
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C00D9FF4 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C000C794 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _CcdReadRegistryValues @ 0x1C00CED24 (_CcdReadRegistryValues.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_ReadPath(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        void *a2,
        unsigned int a3,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a4)
{
  __int64 v5; // rbp
  NTSTATUS v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  int RegistryValues; // eax
  __int64 v27; // rcx
  __int64 v28; // r14
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  wchar_t pszDest; // [rsp+30h] [rbp-38h] BYREF

  v5 = a3;
  v7 = RtlStringCbPrintfW(&pszDest, 6uLL, L"%02x", a3);
  v9 = v7;
  if ( v7 < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdAssertion(v8);
    v23[3] = v9;
    v23[4] = a2;
    v23[5] = v5;
    v23[6] = a4;
    WdLogEvent5_WdAssertion(v23);
  }
  else
  {
    v9 = (int)CcdReadRegistryValues(a2, &pszDest, &unk_1C005F170, 0xDu, (__int64)a4);
    v13 = *(unsigned int *)a4;
    *(_QWORD *)a4 = v13;
    if ( (int)v9 < 0 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
      v24[3] = v9;
      v24[4] = a2;
      v24[5] = v5;
      v24[6] = a4;
      WdLogEvent5_WdWarning(v24);
    }
    else
    {
      if ( (v13 & 0x100) != 0 )
      {
        v14 = CcdReadRegistryValues(a2, &pszDest, &unk_1C005F4C0, 6u, (__int64)a4);
        v9 = v14;
        if ( v14 < 0 )
        {
          v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
          v25[3] = v9;
          v25[4] = a2;
          v25[5] = v5;
          v25[6] = a4;
          WdLogEvent5_WdWarning(v25);
          RegistryValues = CcdReadRegistryValues(a2, 0LL, &unk_1C005F610, 8u, (__int64)a4);
          v28 = RegistryValues;
          if ( RegistryValues < 0 )
          {
            v29 = (_QWORD *)WdLogNewEntry5_WdError(v27);
            v29[3] = v28;
            v29[4] = a2;
            v29[5] = v5;
            WdLogEvent5_WdError(v29);
            *(_QWORD *)a4 &= ~0x100uLL;
          }
          if ( (*(_QWORD *)a4 & 0x100LL) != 0 )
            *(_QWORD *)a4 |= 0x20000uLL;
          LODWORD(v9) = 0;
        }
        if ( (*(_DWORD *)a4 & 0x100LL) != 0 )
          *((_QWORD *)a4 + 13) = *((_QWORD *)a4 + 12);
      }
      if ( (*(_DWORD *)a4 & 0x800000) != 0 )
      {
        v18 = CcdReadRegistryValues(a2, &pszDest, &unk_1C005F050, 5u, (__int64)a4);
        v9 = v18;
        if ( v18 < 0 )
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
          v30[3] = v9;
          v30[4] = a2;
          v30[5] = v5;
          v30[6] = a4;
          WdLogEvent5_WdWarning(v30);
          *(_QWORD *)a4 &= ~0x800000uLL;
          LODWORD(v9) = 0;
        }
        else if ( *((_DWORD *)a4 + 44) == *((_DWORD *)a4 + 42) || *((_DWORD *)a4 + 45) == *((_DWORD *)a4 + 43) )
        {
          *(_QWORD *)a4 &= ~0x800000uLL;
        }
      }
    }
  }
  return (unsigned int)v9;
}
