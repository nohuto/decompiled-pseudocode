/*
 * XREFs of ?ValidateContent@CDxAccumulationContext@@QEAAXXZ @ 0x1800CB7F8
 * Callers:
 *     ?ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z @ 0x1800D0400 (-ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z.c)
 *     ?ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE@@@Z @ 0x18012AB4C (-ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTI.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x18012AD28 (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 */

void __fastcall CDxAccumulationContext::ValidateContent(CDxAccumulationContext *this)
{
  struct CVisual *v1; // rcx

  if ( !*((_BYTE *)this + 16) )
  {
    *((_BYTE *)this + 16) = 1;
    v1 = *(struct CVisual **)this;
    *((_BYTE *)v1 + 984) = 0;
    CVisual::PropagateFlags(v1, 1, 1, 0, 0, 0, 0, 0);
  }
}
