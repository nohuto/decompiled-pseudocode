/*
 * XREFs of ?SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z @ 0x1C011790C
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00998B0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetCachedStereoStates(__int64 a1, unsigned int a2, int a3, int a4)
{
  __int64 v5; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rax

  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v14 + 24) = 5262LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 80) )
  {
    v15 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v15 + 24) = v5;
    *(_QWORD *)(v15 + 32) = *(unsigned int *)(a1 + 80);
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  else
  {
    v12 = 3208 * v5;
    *(_DWORD *)(*(_QWORD *)(a1 + 112) + v12 + 1064) = a3;
    *(_DWORD *)(*(_QWORD *)(a1 + 112) + v12 + 1068) = a4;
    return 0LL;
  }
}
