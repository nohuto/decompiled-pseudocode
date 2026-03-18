/*
 * XREFs of ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x18005F774
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?ForceFullRender@CComposition@@QEAAX_N@Z @ 0x180034438 (-ForceFullRender@CComposition@@QEAAX_N@Z.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005DBF0 (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x18014ABE4 (-UpdateDebugCounter@CComposition@@QEAAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetManager::ForceFullRender(CRenderTargetManager *this)
{
  __int64 i; // rdi
  __int64 v3; // rcx

  if ( *((_DWORD *)this + 24) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 12); i = (unsigned int)(i + 1) )
    {
      v3 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * i);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 48LL))(v3, 76LL) )
        *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8 * i) + 161LL) = 1;
    }
  }
}
