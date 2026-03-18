/*
 * XREFs of _CcdReadRegistryValues @ 0x1C00AFEE8
 * Callers:
 *     ?_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00B19E0 (-_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C00B1CC8 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00B022C (_CcdOpenRegistrySubkey.c)
 */

__int64 __fastcall CcdReadRegistryValues(HANDLE a1, PCWSTR SourceString, void *Src, unsigned int a4, __int64 a5)
{
  unsigned __int64 v5; // r15
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  SIZE_T v12; // rax
  unsigned __int64 v13; // rbp
  char *v14; // rax
  __int64 v15; // rcx
  char *v16; // rbx
  unsigned int v17; // eax
  __int64 v18; // r15
  char *v19; // rcx
  __int64 v20; // rdx
  _DWORD *v21; // rax
  int RegistryValues; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v5 = a4;
  Handle = 0LL;
  if ( SourceString && *SourceString )
  {
    v9 = CcdOpenRegistrySubkey((int)&Handle, 131097, (int)a1, SourceString, 0LL);
    v11 = v9;
    if ( v9 < 0 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v27[7] = a5;
      v27[3] = v11;
      v27[4] = a1;
      v27[5] = SourceString;
      v27[6] = Src;
      WdLogEvent5_WdError(v27);
      return (unsigned int)v11;
    }
  }
  else
  {
    Handle = a1;
  }
  v12 = 56 * v5;
  v13 = v5;
  if ( !is_mul_ok(v5, 0x38uLL) )
    v12 = -1LL;
  v14 = (char *)operator new[](v12, 0x63644356u, (POOL_TYPE)512);
  v16 = v14;
  if ( v14 )
  {
    memmove(v14, Src, 56 * v5);
    v17 = v5 - 1;
    v18 = a5;
    if ( v17 )
    {
      v19 = v16 + 40;
      v20 = v17;
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
    RegistryValues = RtlQueryRegistryValuesEx(0x40000000LL, Handle, v16, 0LL, 0LL);
    v11 = RegistryValues;
    if ( RegistryValues < 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
      v29[3] = v11;
      v29[4] = Handle;
      v29[5] = Src;
      v29[6] = v13;
      v29[7] = v18;
      WdLogEvent5_WdWarning(v29);
    }
    if ( Handle != a1 )
      ZwClose(Handle);
    operator delete[](v16);
    return (unsigned int)v11;
  }
  v28 = WdLogNewEntry5_WdLowResource(v15);
  *(_QWORD *)(v28 + 24) = v5;
  *(_QWORD *)(v28 + 32) = 56 * v5;
  WdLogEvent5_WdLowResource(v28);
  return 3221225495LL;
}
