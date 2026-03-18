/*
 * XREFs of ?ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0173E9C
 * Callers:
 *     ?ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0022138 (-ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ.c)
 *     DxgkSetStablePowerState @ 0x1C01A32E0 (DxgkSetStablePowerState.c)
 * Callees:
 *     ?DdiSetStablePowerState@ADAPTER_RENDER@@QEAAXH@Z @ 0x1C0178BF4 (-DdiSetStablePowerState@ADAPTER_RENDER@@QEAAXH@Z.c)
 */

void __fastcall ADAPTER_RENDER::ReleaseStablePowerReference(ADAPTER_RENDER *this)
{
  if ( (*((_DWORD *)this + 276))-- == 1 )
  {
    if ( *(_QWORD *)(*((_QWORD *)this + 2) + 880LL) )
      ADAPTER_RENDER::DdiSetStablePowerState(this, 0);
  }
}
