/*
 * XREFs of ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x180144EF0
 * Callers:
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18013F8A0 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ??1CRenderTargetManager@@EEAA@XZ @ 0x180144990 (--1CRenderTargetManager@@EEAA@XZ.c)
 * Callees:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x18005BBA4 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800B32D4 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetManager::ReleaseTargets(CRenderTargetManager *this)
{
  __int64 i; // rdi
  __int64 v3; // rcx

  *((_DWORD *)this + 20) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 56, 8u);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 12); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *((_DWORD *)this + 12) = 0;
  DynArrayImpl<1>::ShrinkToSize((__int64)this + 24);
  CComposition::ProcessRenderingStatus(*((_QWORD *)this + 2), 0);
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 27) = 0;
}
