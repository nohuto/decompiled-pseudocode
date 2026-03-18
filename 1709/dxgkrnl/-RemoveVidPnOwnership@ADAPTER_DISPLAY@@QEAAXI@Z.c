/*
 * XREFs of ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00AEBD0
 * Callers:
 *     ?RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z @ 0x1C0025EF4 (-RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00AD01C (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00AE140 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C00FE870 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0102554 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C0175E84 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C0002030 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1C007F65C (-Flush@BLTQUEUE@@QEAAXXZ.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C007F72C (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C0090640 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00ABDC0 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01774BC (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::RemoveVidPnOwnership(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdx
  bool v7; // zf
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  BLTQUEUE *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax

  v4 = 3760LL * a2;
  v5 = a2;
  if ( !*(_QWORD *)(*((_QWORD *)this + 14) + v4 + 688) )
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v14 + 24) = 203LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !*(_DWORD *)(*((_QWORD *)this + 14) + v4 + 696) )
  {
    v15 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v15 + 24) = 204LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v6 = *(_QWORD *)(*((_QWORD *)this + 14) + v4 + 688);
  if ( *(_QWORD *)(v6 + 1672) == *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL)
    && *(_DWORD *)(*((_QWORD *)this + 2) + 176LL) == 1 )
  {
    v7 = DXGADAPTER::IsLegacyDisplayStateSynchronization(*((DXGADAPTER **)this + 2)) == 0;
    v9 = *((_QWORD *)this + 14);
    if ( v7 )
    {
      ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(
        *(ADAPTER_RENDER **)(*(_QWORD *)(v9 + v4 + 688) + 16LL),
        1 << a2,
        0,
        1 << a2,
        0);
    }
    else
    {
      v10 = *(_QWORD *)(v9 + v4 + 688);
      v11 = *(_QWORD *)(v10 + 1672);
      if ( v11 == *(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL) )
        ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v11 + 2304), a2, v8);
    }
  }
  v12 = *((_QWORD *)this + 33);
  if ( v12 )
  {
    v13 = (BLTQUEUE *)(*(_QWORD *)(v12 + 8) + 2704 * v5);
    BLTQUEUE::Flush(v13);
    BLTQUEUE::Reset(v13, 1);
  }
  *(_QWORD *)(*((_QWORD *)this + 14) + v4 + 688) = 0LL;
  *(_QWORD *)(*((_QWORD *)this + 14) + v4 + 712) = 0LL;
  *(_DWORD *)(*((_QWORD *)this + 14) + v4 + 696) = 0;
  *(_DWORD *)(*((_QWORD *)this + 14) + v4 + 700) = 0;
  *(_QWORD *)(*((_QWORD *)this + 14) + v4 + 704) = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 176LL) == 1 )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(*((OUTPUTDUPL_CONTEXT ***)this + 13), a2, 0LL, 0, 0, 1);
}
