/*
 * XREFs of ?DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z @ 0x1C017EB80
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C008E700 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     DpiGetPnpRegistryKeyName @ 0x1C0123B40 (DpiGetPnpRegistryKeyName.c)
 */

__int64 __fastcall DxgkReadPnPRegistryPath(__int64 a1, unsigned int a2, __int64 a3, void *a4, ULONG64 a5)
{
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
  __int64 v18; // rbx
  __int64 v19; // rax
  unsigned __int16 *v20; // rdx
  unsigned int v21; // ebx
  __int64 v22; // rax
  const void *v23; // rdx
  unsigned __int16 *v24; // [rsp+50h] [rbp+8h] BYREF

  v6 = (int)a3;
  v7 = a2;
  if ( *(int *)(a1 + 1968) < 0x2000 )
    v8 = 1;
  else
    v8 = *(_DWORD *)(a1 + 248);
  if ( a2 >= v8 )
  {
    v9 = WdLogNewEntry5_WdWarning(a1, a1, a3);
    *(_QWORD *)(v9 + 24) = v7;
    WdLogEvent5_WdWarning(v9);
    return 3221225485LL;
  }
  v11 = (_DWORD *)a5;
  v12 = (unsigned int *)a5;
  if ( a5 >= MmUserProbeAddress )
    v12 = (unsigned int *)MmUserProbeAddress;
  v13 = *v12;
  PnpRegistryKeyName = DpiGetPnpRegistryKeyName(*(_QWORD *)(*(_QWORD *)(a1 + 2216) + 48LL * a2 + 8), a3, &v24);
  v18 = PnpRegistryKeyName;
  if ( PnpRegistryKeyName < 0 )
  {
    v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v19 + 24) = v6;
    *(_QWORD *)(v19 + 32) = v18;
    WdLogEvent5_WdWarning(v19);
    return (unsigned int)v18;
  }
  v20 = v24;
  v21 = (*v24 >> 1) + 1;
  if ( (unsigned __int64)v11 >= MmUserProbeAddress )
    v11 = (_DWORD *)MmUserProbeAddress;
  *v11 = v21;
  if ( a4 )
  {
    if ( (unsigned int)v13 < v21 )
    {
      v22 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v20, v17);
      *(_QWORD *)(v22 + 24) = v13;
      *(_QWORD *)(v22 + 32) = v21;
      WdLogEvent5_WdWarning(v22);
      return 3221225507LL;
    }
    v23 = (const void *)*((_QWORD *)v20 + 1);
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (void *)MmUserProbeAddress;
    memmove(a4, v23, 2LL * v21);
  }
  return 0LL;
}
