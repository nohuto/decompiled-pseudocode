/*
 * XREFs of ?EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEAU3@@Z @ 0x180160020
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x180083B90 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FEFC (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800AAB10 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z @ 0x18014B124 (-CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ??$ReleaseInterface@VCRenderDataDrawFrame@@@@YAXAEAPEAVCRenderDataDrawFrame@@@Z @ 0x180160000 (--$ReleaseInterface@VCRenderDataDrawFrame@@@@YAXAEAPEAVCRenderDataDrawFrame@@@Z.c)
 */

__int64 __fastcall CRenderData::EndBoundingFrame(
        CRenderData *this,
        int *a2,
        struct CRenderDataDrawFrame **a3,
        struct IDrawingContext **a4,
        struct IDrawingContext *a5)
{
  CRenderDataDrawFrame *v5; // rdi
  unsigned int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // r12d
  struct CRenderDataDrawFrame *v14; // rdi
  __int64 v15; // rbx
  CDrawingContext *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  struct IDrawingContext *v19; // rax
  struct CComposition *v20; // rdx
  int v21; // eax
  struct CSolidColorLegacyMilBrush *v22; // rdi
  struct _D3DCOLORVALUE v24; // [rsp+30h] [rbp-38h] BYREF
  struct CSolidColorLegacyMilBrush *v25; // [rsp+78h] [rbp+10h] BYREF

  v5 = *a3;
  v10 = 0;
  v11 = *((_QWORD *)*a3 + 4);
  v12 = *(_QWORD *)*a3;
  v13 = *((_DWORD *)v5 + 4);
  if ( v11 )
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 40));
  v14 = (struct CRenderDataDrawFrame *)*((_QWORD *)v5 + 4);
  v15 = *((_QWORD *)*a3 + 3);
  *(_OWORD *)v15 = *(_OWORD *)(v12 + 52);
  if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsWellOrdered((float *)v15) )
  {
    *(_QWORD *)(v15 + 8) = v18;
    *(_QWORD *)v15 = v18;
  }
  CDrawingContext::EndFrame(v16, (__int64)v16, v17);
  ReleaseInterface<CRenderDataDrawFrame>(a3);
  v19 = a5;
  *a3 = v14;
  if ( v14 )
    v19 = (struct IDrawingContext *)*((_QWORD *)v14 + 1);
  *a4 = v19;
  *a2 = v13;
  if ( v19 )
  {
    v20 = (struct CComposition *)*((_QWORD *)this + 2);
    v25 = 0LL;
    *(_QWORD *)&v24.r = 0x3F8000003F800000LL;
    *(_QWORD *)&v24.b = 0x3F8000003F800000LL;
    v21 = CSolidColorLegacyMilBrush::CreateFromColor(&v25, v20, &v24);
    v22 = v25;
    v10 = v21;
    if ( v21 >= 0 )
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct CSolidColorLegacyMilBrush *, _QWORD))(*(_QWORD *)*a4 + 8LL))(
              *a4,
              v15,
              v25,
              0LL);
    if ( v22 )
      CMILCOMBase::InternalRelease(v22);
  }
  return v10;
}
