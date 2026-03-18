/*
 * XREFs of ?GetContentAsCoRenderContentNoRef@CVisual@@QEBA_NPEAPEAVCCoRenderContent@@@Z @ 0x18013CCD8
 * Callers:
 *     ?SetBounds@CCoRenderVisualProxy@@UEAAJIPEBUtagRECT@@@Z @ 0x18014B520 (-SetBounds@CCoRenderVisualProxy@@UEAAJIPEBUtagRECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::GetContentAsCoRenderContentNoRef(CVisual *this, struct CCoRenderContent **a2)
{
  char v3; // bl
  __int64 v4; // rcx

  v3 = 0;
  v4 = *((_QWORD *)this + 31);
  if ( v4 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, 41LL) )
  {
    v3 = 1;
    *a2 = (struct CCoRenderContent *)*((_QWORD *)this + 31);
  }
  return v3;
}
