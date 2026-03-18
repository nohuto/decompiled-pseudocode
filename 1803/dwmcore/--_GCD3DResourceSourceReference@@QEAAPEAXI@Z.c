/*
 * XREFs of ??_GCD3DResourceSourceReference@@QEAAPEAXI@Z @ 0x1801E5CA4
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180089290 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x1800D7708 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?EndFrame@CD3DResourceManager@@QEAAXXZ @ 0x18014074C (-EndFrame@CD3DResourceManager@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

CD3DResourceSourceReference *__fastcall CD3DResourceSourceReference::`scalar deleting destructor'(
        CD3DResourceSourceReference *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  operator delete(this);
  return this;
}
