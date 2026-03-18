/*
 * XREFs of ?Reset@CDrawListPrimitiveBuilder@@QEAAXXZ @ 0x18003F86C
 * Callers:
 *     ??1CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x18003FA50 (--1CDrawListPrimitiveBuilder@@QEAA@XZ.c)
 *     ?DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z @ 0x18014B514 (-DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawListPrimitiveBuilder::Reset(CDrawListPrimitiveBuilder *this)
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
