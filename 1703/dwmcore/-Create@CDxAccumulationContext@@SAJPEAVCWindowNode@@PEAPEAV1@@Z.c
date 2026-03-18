/*
 * XREFs of ?Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z @ 0x180181150
 * Callers:
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x180053F34 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 *     ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x1800D0650 (-ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDAT.c)
 *     ?ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE@@@Z @ 0x18012AB4C (-ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTI.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDxAccumulationContext::Create(struct CWindowNode *a1, struct CDxAccumulationContext **a2)
{
  unsigned int v2; // ebx
  struct CDxAccumulationContext *v5; // rax
  unsigned int v7; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  if ( !a1 )
  {
    v7 = 47;
LABEL_3:
    v2 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, v7);
    return v2;
  }
  if ( !a2 )
  {
    v7 = 48;
    goto LABEL_3;
  }
  v5 = (struct CDxAccumulationContext *)WPF::ProcessHeapImpl::AllocClear(0x28uLL);
  if ( !v5 )
  {
    ModuleFailFastForHRESULT(-2147024882, retaddr);
    __debugbreak();
  }
  *(_QWORD *)v5 = a1;
  *a2 = v5;
  return v2;
}
