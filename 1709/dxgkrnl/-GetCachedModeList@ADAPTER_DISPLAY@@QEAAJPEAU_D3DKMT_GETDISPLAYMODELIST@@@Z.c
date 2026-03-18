/*
 * XREFs of ?GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00ACA1C
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00B6EF8 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCachedModeList(DXGADAPTER **this, struct _D3DKMT_GETDISPLAYMODELIST *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 VidPnSourceId; // rax
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rdx

  DXGADAPTER::IsCoreResourceSharedOwner(this[2]);
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 5747LL;
    WdLogEvent5_WdAssertion(v5);
  }
  VidPnSourceId = a2->VidPnSourceId;
  if ( (unsigned int)VidPnSourceId < *((_DWORD *)this + 20) )
  {
    if ( *((_BYTE *)this + 135) && *((_BYTE *)this[14] + 3760 * VidPnSourceId + 1092) )
    {
      v9 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v9 + 24) = 5763LL;
      WdLogEvent5_WdEvent(v9);
      v10 = 3760LL * a2->VidPnSourceId;
      a2->pModeList = *(D3DKMT_DISPLAYMODE **)((char *)this[14] + v10 + 1080);
      result = 0LL;
      a2->ModeCount = *(_DWORD *)((char *)this[14] + v10 + 1088);
    }
    else
    {
      return 3221226021LL;
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v7 + 24) = a2->VidPnSourceId;
    *(_QWORD *)(v7 + 32) = *((unsigned int *)this + 20);
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  return result;
}
