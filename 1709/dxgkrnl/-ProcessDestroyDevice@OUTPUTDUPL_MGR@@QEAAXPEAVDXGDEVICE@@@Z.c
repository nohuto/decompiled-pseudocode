/*
 * XREFs of ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0090958
 * Callers:
 *     OutputDuplProcessDestroyDevice @ 0x1C00F3BA8 (OutputDuplProcessDestroyDevice.c)
 *     _lambda_55055bd30a6c367c9479cf67f85e47ac_::_lambda_invoker_cdecl_ @ 0x1C00F7B10 (_lambda_55055bd30a6c367c9479cf67f85e47ac_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C0090640 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C00907E0 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessDestroyDevice(OUTPUTDUPL_CONTEXT **this, struct DXGDEVICE *a2)
{
  OUTPUTDUPL_CONTEXT *v4; // rcx
  __int64 v5; // rcx
  unsigned int i; // esi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax

  v4 = *this;
  if ( v4 && !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)v4 + 2)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v7 + 24) = 1452LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !*((_DWORD *)a2 + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)a2 + 13)) )
  {
    v8 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
    if ( *(struct _KTHREAD **)(v8 + 128) != KeGetCurrentThread() )
    {
      v9 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v9 + 24) = 1453LL;
      WdLogEvent5_WdAssertion(v9);
    }
  }
  for ( i = 0; i < *((_DWORD *)this + 13); ++i )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this, i, a2, 0, 0, 5);
  OUTPUTDUPL_MGR::ProcessPendingDestroy((OUTPUTDUPL_MGR *)this, a2, 0);
}
