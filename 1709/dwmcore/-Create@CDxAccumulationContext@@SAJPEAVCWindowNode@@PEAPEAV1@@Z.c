/*
 * XREFs of ?Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z @ 0x18018B77C
 * Callers:
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x18009C6A4 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 *     ?ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE@@@Z @ 0x180179058 (-ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTI.c)
 *     ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x180179234 (-ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDAT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDxAccumulationContext::Create(struct CWindowNode *a1, struct CDxAccumulationContext **a2)
{
  unsigned int v2; // ebx
  struct CDxAccumulationContext *v5; // rax
  unsigned int v7; // [rsp+20h] [rbp-18h]
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  if ( !a1 )
  {
    v7 = 47;
LABEL_3:
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, v7);
    return v2;
  }
  if ( !a2 )
  {
    v7 = 48;
    goto LABEL_3;
  }
  v5 = (struct CDxAccumulationContext *)WPF::ProcessHeapImpl::AllocClear(0x28uLL);
  if ( !v5 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *(_QWORD *)v5 = a1;
  *a2 = v5;
  return v2;
}
