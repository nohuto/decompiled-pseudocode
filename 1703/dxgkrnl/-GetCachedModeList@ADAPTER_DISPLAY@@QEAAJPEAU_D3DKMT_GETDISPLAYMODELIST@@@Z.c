/*
 * XREFs of ?GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00E7358
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00998B0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCachedModeList(DXGADAPTER **this, struct _D3DKMT_GETDISPLAYMODELIST *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 VidPnSourceId; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v12 + 24) = 5145LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v13 + 24) = 5147LL;
    WdLogEvent5_WdAssertion(v13);
  }
  VidPnSourceId = a2->VidPnSourceId;
  if ( (unsigned int)VidPnSourceId >= *((_DWORD *)this + 20) )
  {
    v14 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v14 + 24) = a2->VidPnSourceId;
    *(_QWORD *)(v14 + 32) = *((unsigned int *)this + 20);
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  else if ( *((_BYTE *)this + 132) && *((_BYTE *)this[14] + 3208 * VidPnSourceId + 1052) )
  {
    v9 = WdLogNewEntry5_WdEvent(3208 * VidPnSourceId);
    *(_QWORD *)(v9 + 24) = 5163LL;
    WdLogEvent5_WdEvent(v9);
    v10 = 3208LL * a2->VidPnSourceId;
    a2->pModeList = *(D3DKMT_DISPLAYMODE **)((char *)this[14] + v10 + 1040);
    result = 0LL;
    a2->ModeCount = *(_DWORD *)((char *)this[14] + v10 + 1048);
  }
  else
  {
    return 3221226021LL;
  }
  return result;
}
