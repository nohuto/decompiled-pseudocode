/*
 * XREFs of ?SetVailObject@DXGVIRTUALMACHINE@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C01B7D0C
 * Callers:
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAX@Z @ 0x1C01B71A0 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAX@Z.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C01B764C (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C000BE20 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C0024530 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 */

void __fastcall DXGVIRTUALMACHINE::SetVailObject(DXGVIRTUALMACHINE *this, struct DXGVAILOBJECT *a2)
{
  DxgkCompositionObject *v4; // rcx

  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALMACHINE *)((char *)this + 64));
  v4 = (DxgkCompositionObject *)*((_QWORD *)this + 29);
  if ( v4 )
  {
    DxgkCompositionObject::Release(v4);
    *((_QWORD *)this + 29) = 0LL;
  }
  if ( a2 )
  {
    DxgkCompositionObject::AddRef(a2);
    *((_QWORD *)this + 29) = a2;
  }
  *((_QWORD *)this + 9) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 64, 0LL);
  KeLeaveCriticalRegion();
}
