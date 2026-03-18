/*
 * XREFs of ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C00DDEC0
 * Callers:
 *     _lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_ @ 0x1C00DCF90 (_lambda_593c7b7db45d2905858a3969fb7431d6_--_lambda_invoker_cdecl_.c)
 *     _lambda_352933434268f97f7896632aa298aa71_::_lambda_invoker_cdecl_ @ 0x1C00DD620 (_lambda_352933434268f97f7896632aa298aa71_--_lambda_invoker_cdecl_.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C00DDE5C (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DE020 (-ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     _lambda_090d52b4b377212e5b096f8abab319d1_::_lambda_invoker_cdecl_ @ 0x1C01AB9F0 (_lambda_090d52b4b377212e5b096f8abab319d1_--_lambda_invoker_cdecl_.c)
 *     ?UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z @ 0x1C01AF3A0 (-UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C003A60C (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C01ABFE8 (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ @ 0x1C01B220C (-GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessPendingDestroy(
        OUTPUTDUPL_MGR *this,
        struct DXGDEVICE *a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // r14d
  __int64 v6; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD **v11; // rdi
  _QWORD *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // r9d
  _QWORD *v16; // r15
  __int64 i; // r12
  __int64 v18; // rcx
  _QWORD *v19; // rax

  v5 = a3;
  v6 = *(_QWORD *)this;
  if ( v6 )
  {
    v6 = *(_QWORD *)(v6 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v6 + 160)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v6 + 144)) )
    {
      v13 = WdLogNewEntry5_WdAssertion(v6, a2, a3, a4);
      *(_QWORD *)(v13 + 24) = 2193LL;
      WdLogEvent5_WdAssertion(v13);
    }
  }
  v8 = *((_QWORD *)this + 3);
  if ( v8 && *(struct _KTHREAD **)(v8 + 8) == KeGetCurrentThread() )
  {
    v14 = WdLogNewEntry5_WdAssertion(v6, a2, a3, a4);
    *(_QWORD *)(v14 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v14);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v8, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v15 = *(_DWORD *)(v8 + 16);
      if ( v15 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v9, &EventBlockThread, v10, v15);
    }
    ExAcquirePushLockExclusiveEx(v8, 0LL);
  }
  v11 = (_QWORD **)((char *)this + 32);
  *(_QWORD *)(v8 + 8) = KeGetCurrentThread();
  v12 = *v11;
  while ( v12 != v11 )
  {
    v16 = v12;
    v12 = (_QWORD *)*v12;
    if ( a2 )
    {
      if ( a2 == OUTPUTDUPL_CONTEXT::GetProducerDevice((OUTPUTDUPL_CONTEXT *)v16) )
      {
        for ( i = 0LL; (unsigned int)i < *((_DWORD *)v16 + 10); i = (unsigned int)(i + 1) )
          DXGDXGIKEYEDMUTEX::CloseFromDevice((DXGDXGIKEYEDMUTEX *)v16[i + 6]);
      }
    }
    if ( v5 || !OUTPUTDUPL_CONTEXT::GetProducerDevice((OUTPUTDUPL_CONTEXT *)v16) )
    {
      v18 = *v16;
      v19 = (_QWORD *)v16[1];
      if ( *(_QWORD **)(*v16 + 8LL) != v16 || (_QWORD *)*v19 != v16 )
        __fastfail(3u);
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
      OUTPUTDUPL_CONTEXT::`scalar deleting destructor'((OUTPUTDUPL_CONTEXT *)v16);
    }
  }
  *(_QWORD *)(v8 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v8, 0LL);
  KeLeaveCriticalRegion();
}
