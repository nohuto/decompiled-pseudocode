/*
 * XREFs of ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1C01E155C
 * Callers:
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C01E0D9C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 *     ?GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z @ 0x1C0039A28 (-GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_DetermineDefaultTopology(
        __int64 a1,
        enum MultiScreenShellCapabilities *a2)
{
  int MultiScreenDefaultShellTopology; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 result; // rax
  DXGGLOBAL *Global; // rax
  __int64 v12; // r9
  struct DXGADAPTER *v13; // rax
  DXGADAPTER *v14; // rdx
  char v15; // bl
  __int64 v16; // rax
  unsigned __int64 v17; // [rsp+38h] [rbp+10h] BYREF

  MultiScreenDefaultShellTopology = GetMultiScreenDefaultShellTopology((enum MultiScreenDefaultShellTopology *)&v17, a2);
  v8 = MultiScreenDefaultShellTopology;
  if ( MultiScreenDefaultShellTopology >= 0 )
  {
    result = (unsigned __int16)v17;
  }
  else
  {
    v9 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v9 + 24) = v8;
    WdLogEvent5_WdAssertion(v9);
    result = 0LL;
  }
  if ( !(_WORD)result )
  {
    Global = DXGGLOBAL::GetGlobal(v5, v4, v6, v7);
    v13 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)(a1 + 12), &v17, v12);
    v14 = v13;
    v15 = 1;
    if ( v13 )
    {
      if ( !g_Win32kSupportsPathIndependentRotation
        || ((v16 = *((_QWORD *)v13 + 285), !*(_BYTE *)(v16 + 133)) || !*(_BYTE *)(v16 + 134))
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 24) + 64LL) + 40LL) + 28LL) < 0x4003u )
      {
        v15 = 0;
      }
      DXGADAPTER::ReleaseReference(v14);
    }
    if ( IsInternalVideoOutput(*(_DWORD *)(a1 + 28)) && (!*(_BYTE *)(a1 + 52) || *(_BYTE *)(a1 + 60) || v15) )
      return 3LL;
    else
      return 4LL;
  }
  return result;
}
