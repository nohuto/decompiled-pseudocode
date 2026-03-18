/*
 * XREFs of ?SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00E7260
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00998B0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetCachedModeList(PERESOURCE **this, struct _D3DKMT_GETDISPLAYMODELIST *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rsi
  PERESOURCE v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  struct _LUID Luid; // [rsp+30h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v13 + 24) = 5190LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !a2 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v14 + 24) = 5192LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( a2->VidPnSourceId >= *((_DWORD *)this + 20) )
  {
    v15 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v15 + 24) = a2->VidPnSourceId;
    *(_QWORD *)(v15 + 32) = *((unsigned int *)this + 20);
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  else if ( *((_BYTE *)this + 132) )
  {
    v8 = ZwAllocateLocallyUniqueId(&Luid);
    v10 = v8;
    if ( v8 < 0 )
    {
      v16 = WdLogNewEntry5_WdLowResource(v9);
      *(_QWORD *)(v16 + 24) = v10;
      WdLogEvent5_WdLowResource(v16);
      BYTE4(this[14][401 * a2->VidPnSourceId + 131]) = 0;
    }
    else
    {
      v11 = this[14][401 * a2->VidPnSourceId + 130];
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
      this[14][401 * a2->VidPnSourceId + 130] = (PERESOURCE)a2->pModeList;
      LODWORD(this[14][401 * a2->VidPnSourceId + 131]) = a2->ModeCount;
      BYTE4(this[14][401 * a2->VidPnSourceId + 131]) = 1;
      this[14][401 * a2->VidPnSourceId + 132] = (PERESOURCE)Luid;
    }
    return (unsigned int)v10;
  }
  else
  {
    return 3221226021LL;
  }
}
