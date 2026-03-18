/*
 * XREFs of ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DE020
 * Callers:
 *     OutputDuplProcessDestroyDevice @ 0x1C009DAA0 (OutputDuplProcessDestroyDevice.c)
 *     _lambda_55055bd30a6c367c9479cf67f85e47ac_::_lambda_invoker_cdecl_ @ 0x1C00A41F0 (_lambda_55055bd30a6c367c9479cf67f85e47ac_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C00DDD20 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessDestroyDevice(
        OUTPUTDUPL_CONTEXT **this,
        struct DXGDEVICE *a2,
        __int64 a3,
        __int64 a4)
{
  OUTPUTDUPL_CONTEXT *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int i; // esi
  __int64 v11; // rax
  __int64 v12; // r8
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax

  v6 = *this;
  if ( v6 && !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)v6 + 2)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7, v9, a4);
    *(_QWORD *)(v11 + 24) = 1371LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !*((_DWORD *)a2 + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)a2 + 13)) )
  {
    CurrentThread = KeGetCurrentThread();
    v14 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
    if ( *(struct _KTHREAD **)(v14 + 128) != CurrentThread )
    {
      v15 = WdLogNewEntry5_WdAssertion(v14, CurrentThread, v12, a4);
      *(_QWORD *)(v15 + 24) = 1372LL;
      WdLogEvent5_WdAssertion(v15);
    }
  }
  for ( i = 0; i < *((_DWORD *)this + 13); ++i )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this, i, a2, 0LL, 0, 5);
  OUTPUTDUPL_MGR::ProcessPendingDestroy((OUTPUTDUPL_MGR *)this, a2, 0LL, a4);
}
