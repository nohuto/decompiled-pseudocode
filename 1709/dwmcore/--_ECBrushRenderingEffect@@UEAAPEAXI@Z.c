/*
 * XREFs of ??_ECBrushRenderingEffect@@UEAAPEAXI@Z @ 0x18006C940
 * Callers:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x180048640 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?Release@CRenderingTechnique@@UEAAKXZ @ 0x18006DA70 (-Release@CRenderingTechnique@@UEAAKXZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z @ 0x180070218 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

CBrushRenderingEffect *__fastcall CBrushRenderingEffect::`vector deleting destructor'(
        CBrushRenderingEffect *this,
        char a2)
{
  CDrawListBitmap *v3; // rsi
  __int64 v5; // rdi
  CRenderingTechnique *v6; // rcx
  void (*v7)(void); // rax
  struct CObjectCache *ObjectCache; // rax

  v3 = (CBrushRenderingEffect *)((char *)this + 120);
  v5 = 4LL;
  do
  {
    v3 = (CDrawListBitmap *)((char *)v3 - 24);
    CDrawListBitmap::~CDrawListBitmap(v3);
    --v5;
  }
  while ( v5 );
  v6 = (CRenderingTechnique *)*((_QWORD *)this + 2);
  if ( v6 )
  {
    *((_QWORD *)this + 2) = 0LL;
    v7 = *(void (**)(void))(*(_QWORD *)v6 + 8LL);
    if ( (char *)v7 == (char *)CRenderingTechnique::Release )
      CRenderingTechnique::Release(v6);
    else
      v7();
  }
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    ObjectCache = CThreadContext::GetObjectCache(v6);
    if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
    {
      WPF::ProcessHeapImpl::Free(this);
    }
    else
    {
      *(_QWORD *)this = *((_QWORD *)ObjectCache + 1);
      ++*((_DWORD *)ObjectCache + 1);
      *((_QWORD *)ObjectCache + 1) = this;
    }
  }
  return this;
}
