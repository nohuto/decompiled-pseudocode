/*
 * XREFs of ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E8F9C
 * Callers:
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00E78D4 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E8A44 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C0101884 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C0101970 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0104CEC (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1C00A03AC (-Flush@BLTQUEUE@@QEAAXXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C00DDD20 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E6770 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C01B5DFC (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::RemoveVidPnOwnership(OUTPUTDUPL_CONTEXT ***this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebp
  __int64 v6; // rsi
  __int64 v7; // rbx
  OUTPUTDUPL_CONTEXT *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  OUTPUTDUPL_CONTEXT **v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  BLTQUEUE *v14; // rbx

  v5 = a2;
  v6 = 401LL * (unsigned int)a2;
  v7 = (unsigned int)a2;
  if ( !this[14][v6 + 86] )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v12 + 24) = 203LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !LODWORD(this[14][v6 + 87]) )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v13 + 24) = 204LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v8 = this[14][v6 + 86];
  v9 = *((_QWORD *)v8 + 2);
  if ( *((_QWORD *)v8 + 225) == *(_QWORD *)(v9 + 16) )
  {
    v10 = *((_QWORD *)v8 + 225);
    if ( v10 == *(_QWORD *)(v9 + 16) )
      ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v10 + 2280), v5, a3, a4);
  }
  v11 = this[33];
  if ( v11 )
  {
    v14 = (OUTPUTDUPL_CONTEXT *)((char *)v11[1] + 2704 * v7);
    BLTQUEUE::Flush(v14);
    BLTQUEUE::Reset(v14, 1u);
  }
  this[14][v6 + 86] = 0LL;
  this[14][v6 + 89] = 0LL;
  LODWORD(this[14][v6 + 87]) = 0;
  HIDWORD(this[14][v6 + 87]) = 0;
  this[14][v6 + 88] = 0LL;
  OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this[13], v5, 0LL, 0LL, 0, 1);
}
