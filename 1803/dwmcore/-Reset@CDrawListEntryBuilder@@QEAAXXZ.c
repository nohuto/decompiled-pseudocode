/*
 * XREFs of ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x1800AD784
 * Callers:
 *     ?FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x180055DF8 (-FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntr.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AD960 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z @ 0x18015F254 (-DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1802109EC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawListEntryBuilder::Reset(CDrawListEntryBuilder *this)
{
  __int64 i; // rdi
  __int64 v3; // r14
  CMILRefCountBase *v4; // rcx
  void (*v5)(void); // rax
  __int64 v6; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
  {
    v3 = *((_QWORD *)this + 5);
    v4 = *(CMILRefCountBase **)(v3 + 8 * i);
    if ( v4 )
    {
      v5 = *(void (**)(void))(*(_QWORD *)v4 + 8LL);
      if ( (char *)v5 == (char *)CMILRefCountBase::Release )
        CMILRefCountBase::Release(v4);
      else
        v5();
      *(_QWORD *)(v3 + 8 * i) = 0LL;
    }
  }
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 26) = 0;
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
}
