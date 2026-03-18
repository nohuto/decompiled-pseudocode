/*
 * XREFs of ??_GCCommonRenderingEffect@@UEAAPEAXI@Z @ 0x180077010
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180086EC0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18008E060 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180094270 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

CCommonRenderingEffect *__fastcall CCommonRenderingEffect::`scalar deleting destructor'(
        CCommonRenderingEffect *this,
        char a2)
{
  _QWORD *v3; // rdi
  __int64 v5; // rsi
  int Current; // eax
  struct CThreadContext *v7; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v10; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CCommonRenderingEffect::`vftable';
  v3 = (_QWORD *)((char *)this + 16);
  v5 = 2LL;
  do
  {
    if ( *v3 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 16LL))(*v3);
      *v3 = 0LL;
    }
    ++v3;
    --v5;
  }
  while ( v5 );
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    Current = CThreadContext::GetCurrent(&v10);
    if ( Current < 0 )
    {
      ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
      JUMPOUT(0x1800FF8F6LL);
    }
    v7 = v10;
    if ( *((_DWORD *)v10 + 23) >= *((_DWORD *)v10 + 22) )
    {
      WPF::ProcessHeapImpl::Free(this);
    }
    else
    {
      *(_QWORD *)this = *((_QWORD *)v10 + 12);
      ++*((_DWORD *)v7 + 23);
      *((_QWORD *)v7 + 12) = this;
    }
  }
  return this;
}
