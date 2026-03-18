/*
 * XREFs of ?SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0157538
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00AD874 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetCachedModeList(PERESOURCE **this, struct _D3DKMT_GETDISPLAYMODELIST *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  struct _LUID Luid; // [rsp+30h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 5796LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v6 + 24) = 5798LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( a2->VidPnSourceId < *((_DWORD *)this + 20) )
  {
    if ( *((_BYTE *)this + 135) )
    {
      v9 = ZwAllocateLocallyUniqueId(&Luid);
      v11 = v9;
      if ( v9 < 0 )
      {
        v12 = WdLogNewEntry5_WdLowResource(v10);
        *(_QWORD *)(v12 + 24) = v11;
        WdLogEvent5_WdLowResource(v12);
        BYTE4(this[14][470 * a2->VidPnSourceId + 136]) = 0;
      }
      else
      {
        operator delete[](this[14][470 * a2->VidPnSourceId + 135]);
        this[14][470 * a2->VidPnSourceId + 135] = (PERESOURCE)a2->pModeList;
        LODWORD(this[14][470 * a2->VidPnSourceId + 136]) = a2->ModeCount;
        BYTE4(this[14][470 * a2->VidPnSourceId + 136]) = 1;
        this[14][470 * a2->VidPnSourceId + 137] = (PERESOURCE)Luid;
      }
      return (unsigned int)v11;
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
}
