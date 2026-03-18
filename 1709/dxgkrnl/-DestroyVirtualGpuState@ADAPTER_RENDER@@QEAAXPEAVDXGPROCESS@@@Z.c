/*
 * XREFs of ?DestroyVirtualGpuState@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0188EDC
 * Callers:
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0082E60 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0176FAC (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?NotifyDxgProcessDestroyed@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0189540 (-NotifyDxgProcessDestroyed@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ADAPTER_RENDER::DestroyVirtualGpuState(ADAPTER_RENDER *this, struct DXGPROCESS *a2)
{
  void (__fastcall ***v4)(_QWORD); // rcx
  void (__fastcall ***v5)(_QWORD, struct DXGPROCESS *); // rcx

  v4 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 154);
  if ( v4 )
    (**v4)(v4);
  v5 = (void (__fastcall ***)(_QWORD, struct DXGPROCESS *))*((_QWORD *)this + 153);
  if ( v5 )
    (**v5)(v5, a2);
}
