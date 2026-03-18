/*
 * XREFs of ?DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z @ 0x1C017ADD0
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00D94F0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     DpiGetPnpRegistryKeyName @ 0x1C01232F0 (DpiGetPnpRegistryKeyName.c)
 */

__int64 __fastcall DxgkReadPnPRegistryPath(__int64 a1, unsigned int a2, __int64 a3, void *a4, ULONG64 a5)
{
  void *v5; // rsi
  __int64 v6; // r15
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rax
  _DWORD *v11; // rdi
  unsigned int *v12; // rax
  __int64 v13; // r14
  int PnpRegistryKeyName; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rax
  unsigned __int16 *v21; // rdx
  unsigned int v22; // ebx
  __int64 v23; // rax
  const void *v24; // rdx
  unsigned __int16 *v25; // [rsp+50h] [rbp+8h] BYREF

  v5 = a4;
  v6 = (int)a3;
  v7 = a2;
  if ( *(int *)(a1 + 1944) < 0x2000 )
    v8 = 1;
  else
    v8 = *(_DWORD *)(a1 + 248);
  if ( a2 >= v8 )
  {
    v9 = WdLogNewEntry5_WdWarning(a1, a1, a3, a4);
    *(_QWORD *)(v9 + 24) = v7;
    WdLogEvent5_WdWarning(v9);
    return 3221225485LL;
  }
  v11 = (_DWORD *)a5;
  v12 = (unsigned int *)a5;
  if ( a5 >= MmUserProbeAddress )
    v12 = (unsigned int *)MmUserProbeAddress;
  v13 = *v12;
  PnpRegistryKeyName = DpiGetPnpRegistryKeyName(
                         *(_QWORD *)(*(_QWORD *)(a1 + 2192) + 48LL * a2 + 8),
                         (unsigned int)a3,
                         &v25);
  v19 = PnpRegistryKeyName;
  if ( PnpRegistryKeyName < 0 )
  {
    v20 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
    *(_QWORD *)(v20 + 24) = v6;
    *(_QWORD *)(v20 + 32) = v19;
    WdLogEvent5_WdWarning(v20);
    return (unsigned int)v19;
  }
  v21 = v25;
  v22 = (*v25 >> 1) + 1;
  if ( (unsigned __int64)v11 >= MmUserProbeAddress )
    v11 = (_DWORD *)MmUserProbeAddress;
  *v11 = v22;
  if ( v5 )
  {
    if ( (unsigned int)v13 < v22 )
    {
      v23 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v21, v17, v18);
      *(_QWORD *)(v23 + 24) = v13;
      *(_QWORD *)(v23 + 32) = v22;
      WdLogEvent5_WdWarning(v23);
      return 3221225507LL;
    }
    v24 = (const void *)*((_QWORD *)v21 + 1);
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v5 = (void *)MmUserProbeAddress;
    memmove(v5, v24, 2LL * v22);
  }
  return 0LL;
}
