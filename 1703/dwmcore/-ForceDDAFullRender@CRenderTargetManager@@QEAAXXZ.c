/*
 * XREFs of ?ForceDDAFullRender@CRenderTargetManager@@QEAAXXZ @ 0x180144BC4
 * Callers:
 *     ?ForceFullRender@CComposition@@QEAAX_N@Z @ 0x18005BB10 (-ForceFullRender@CComposition@@QEAAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetManager::ForceDDAFullRender(CRenderTargetManager *this)
{
  __int64 i; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( *((_DWORD *)this + 24) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 12); i = (unsigned int)(i + 1) )
    {
      v3 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * i);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 176LL))(v3) )
      {
        v4 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * i);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 200LL))(v4);
      }
    }
  }
}
