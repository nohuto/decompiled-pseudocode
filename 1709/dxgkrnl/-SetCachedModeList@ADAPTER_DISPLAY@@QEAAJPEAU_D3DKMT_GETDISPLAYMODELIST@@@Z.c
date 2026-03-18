/*
 * XREFs of ?SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00AC924
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00B6EF8 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetCachedModeList(PERESOURCE **this, struct _D3DKMT_GETDISPLAYMODELIST *a2)
{
  __int64 v4; // rcx
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rsi
  PERESOURCE v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _LUID Luid; // [rsp+30h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v10 + 24) = 5790LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v11 + 24) = 5792LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( a2->VidPnSourceId >= *((_DWORD *)this + 20) )
  {
    v12 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v12 + 24) = a2->VidPnSourceId;
    *(_QWORD *)(v12 + 32) = *((unsigned int *)this + 20);
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  else if ( *((_BYTE *)this + 135) )
  {
    v5 = ZwAllocateLocallyUniqueId(&Luid);
    v7 = v5;
    if ( v5 < 0 )
    {
      v13 = WdLogNewEntry5_WdLowResource(v6);
      *(_QWORD *)(v13 + 24) = v7;
      WdLogEvent5_WdLowResource(v13);
      BYTE4(this[14][470 * a2->VidPnSourceId + 136]) = 0;
    }
    else
    {
      v8 = this[14][470 * a2->VidPnSourceId + 135];
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
      this[14][470 * a2->VidPnSourceId + 135] = (PERESOURCE)a2->pModeList;
      LODWORD(this[14][470 * a2->VidPnSourceId + 136]) = a2->ModeCount;
      BYTE4(this[14][470 * a2->VidPnSourceId + 136]) = 1;
      this[14][470 * a2->VidPnSourceId + 137] = (PERESOURCE)Luid;
    }
    return (unsigned int)v7;
  }
  else
  {
    return 3221226021LL;
  }
}
