/*
 * XREFs of ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x1800236A0
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001BBE0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180053BB0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

CDrawListCache *__fastcall CDrawListCache::`scalar deleting destructor'(CDrawListCache *this, char a2)
{
  __int64 v2; // rdi
  __int64 v5; // r14
  CMILRefCountBase *v6; // rcx
  void (*v7)(void); // rax
  void *v8; // r8

  v2 = 0LL;
  for ( *(_QWORD *)this = &CDrawListCache::`vftable'; (unsigned int)v2 < *((_DWORD *)this + 10); v2 = (unsigned int)(v2 + 1) )
  {
    v5 = *((_QWORD *)this + 4);
    v6 = *(CMILRefCountBase **)(v5 + 8 * v2);
    if ( v6 )
    {
      v7 = *(void (**)(void))(*(_QWORD *)v6 + 8LL);
      if ( (char *)v7 == (char *)CMILRefCountBase::Release )
        CMILRefCountBase::Release(v6);
      else
        v7();
      *(_QWORD *)(v5 + 8 * v2) = 0LL;
    }
  }
  v8 = (void *)*((_QWORD *)this + 4);
  if ( v8 )
    HeapFree(WPF::g_processHeap, 0, v8);
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    HeapFree(WPF::g_processHeap, 0, this);
  return this;
}
