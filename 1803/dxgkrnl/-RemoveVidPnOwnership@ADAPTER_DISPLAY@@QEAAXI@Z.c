/*
 * XREFs of ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01569C8
 * Callers:
 *     ?RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z @ 0x1C002F684 (-RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C010CF28 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0151310 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01564E8 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C01565C4 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C01566FC (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C0019D28 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1C00D93A8 (-Flush@BLTQUEUE@@QEAAXXZ.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E184C (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C00E2D74 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C0159E20 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C01D63B4 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::RemoveVidPnOwnership(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  BLTQUEUE *v13; // rbx

  v4 = 3760LL * a2;
  v5 = a2;
  v6 = *((_QWORD *)this + 14);
  if ( !*(_QWORD *)(v4 + v6 + 688) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v7 + 24) = 203LL;
    WdLogEvent5_WdAssertion(v7);
    v6 = *((_QWORD *)this + 14);
  }
  if ( !*(_DWORD *)(v4 + v6 + 696) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 204LL;
    WdLogEvent5_WdAssertion(v8);
    v6 = *((_QWORD *)this + 14);
  }
  if ( *(_QWORD *)(*(_QWORD *)(v4 + v6 + 688) + 1688LL) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + v6 + 688) + 16LL)
                                                                     + 16LL)
    && *(_DWORD *)(*((_QWORD *)this + 2) + 176LL) == 1 )
  {
    if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(*((DXGADAPTER **)this + 2)) )
    {
      v10 = *(_QWORD *)(v4 + v9 + 688);
      v11 = *(_QWORD *)(v10 + 1688);
      if ( v11 == *(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL) )
        ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v11 + 2456), a2);
    }
    else
    {
      ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(
        *(ADAPTER_RENDER **)(*(_QWORD *)(v4 + v9 + 688) + 16LL),
        1 << a2,
        0,
        1 << a2,
        0);
    }
  }
  v12 = *((_QWORD *)this + 33);
  if ( v12 )
  {
    v13 = (BLTQUEUE *)(*(_QWORD *)(v12 + 8) + 2704 * v5);
    BLTQUEUE::Flush(v13);
    BLTQUEUE::Reset(v13, 1u);
  }
  *(_QWORD *)(v4 + *((_QWORD *)this + 14) + 688) = 0LL;
  *(_QWORD *)(v4 + *((_QWORD *)this + 14) + 712) = 0LL;
  *(_DWORD *)(v4 + *((_QWORD *)this + 14) + 696) = 0;
  *(_DWORD *)(v4 + *((_QWORD *)this + 14) + 700) = 0;
  *(_QWORD *)(v4 + *((_QWORD *)this + 14) + 704) = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 176LL) == 1 )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(*((OUTPUTDUPL_CONTEXT ***)this + 13), a2, 0LL, 0, 0, 1);
}
