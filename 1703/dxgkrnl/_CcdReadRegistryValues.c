/*
 * XREFs of _CcdReadRegistryValues @ 0x1C00B1844
 * Callers:
 *     ?_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00B06BC (-_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C00B0984 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00B0318 (_CcdOpenRegistrySubkey.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CcdReadRegistryValues(HANDLE a1, PCWSTR SourceString, void *Src, unsigned int a4, __int64 a5)
{
  unsigned __int64 v5; // rbp
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  char *v15; // rax
  __int64 v16; // rcx
  char *v17; // rsi
  __int64 v18; // r15
  char *v19; // rcx
  __int64 v20; // rdx
  _DWORD *v21; // rax
  int RegistryValues; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbp
  _QWORD *v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v5 = a4;
  Handle = 0LL;
  if ( SourceString && *SourceString )
  {
    v9 = CcdOpenRegistrySubkey((int)&Handle, 131097, (int)a1, SourceString, 0LL);
    v12 = v9;
    if ( v9 < 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
      v29[7] = a5;
      v29[3] = v12;
      v29[4] = a1;
      v29[5] = SourceString;
      v29[6] = Src;
      WdLogEvent5_WdError(v29);
      return (unsigned int)v12;
    }
  }
  else
  {
    Handle = a1;
  }
  v13 = 56 * v5;
  v14 = v5;
  if ( !is_mul_ok(v5, 0x38uLL) )
    v13 = -1LL;
  v15 = (char *)operator new[](v13, 0x63644356u, (enum _POOL_TYPE)512);
  v17 = v15;
  if ( v15 )
  {
    memmove(v15, Src, 56 * v5);
    v18 = a5;
    if ( (_DWORD)v5 != 1 )
    {
      v19 = v17 + 40;
      v20 = (unsigned int)(v5 - 1);
      do
      {
        *((_QWORD *)v19 - 2) += v18;
        v21 = (_DWORD *)*((_QWORD *)v19 - 2);
        *((_DWORD *)v19 - 2) = 0x4000000;
        *(_QWORD *)v19 = 0LL;
        *((_DWORD *)v19 + 2) = 0;
        v19 += 56;
        *v21 = 0;
        --v20;
      }
      while ( v20 );
    }
    RegistryValues = RtlQueryRegistryValuesEx(0x40000000LL, Handle, v17, 0LL, 0LL);
    v27 = RegistryValues;
    if ( RegistryValues < 0 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
      v31[3] = v27;
      v31[4] = Handle;
      v31[5] = Src;
      v31[6] = v14;
      v31[7] = v18;
      WdLogEvent5_WdWarning(v31);
    }
    if ( Handle != a1 )
      ZwClose(Handle);
    ExFreePoolWithTag(v17, 0);
    return (unsigned int)v27;
  }
  else
  {
    v30 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v30 + 24) = v5;
    *(_QWORD *)(v30 + 32) = 56 * v5;
    WdLogEvent5_WdLowResource(v30);
    return 3221225495LL;
  }
}
