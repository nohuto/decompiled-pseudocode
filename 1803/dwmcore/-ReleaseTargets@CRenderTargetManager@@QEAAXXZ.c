/*
 * XREFs of ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x180152540
 * Callers:
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18014A4C0 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ??1CRenderTargetManager@@EEAA@XZ @ 0x1801521BC (--1CRenderTargetManager@@EEAA@XZ.c)
 * Callees:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x18002D650 (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800CD160 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetManager::ReleaseTargets(CRenderTargetManager *this)
{
  __int64 i; // rdi
  __int64 v3; // rcx
  __int64 v4; // r8

  *((_DWORD *)this + 20) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 56, 8u);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 12); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *((_DWORD *)this + 12) = 0;
  DynArrayImpl<1>::ShrinkToSize((__int64)this + 24, 8u);
  CComposition::ProcessRenderingStatus(*((struct _RTL_CRITICAL_SECTION **)this + 2), 0, v4);
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 27) = 0;
}
