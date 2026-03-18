/*
 * XREFs of ??1CDrawListBitmap@@QEAA@XZ @ 0x180076FC8
 * Callers:
 *     ??_ECBrushRenderingEffect@@UEAAPEAXI@Z @ 0x180073160 (--_ECBrushRenderingEffect@@UEAAPEAXI@Z.c)
 *     ??_GCCommonRenderingEffect@@UEAAPEAXI@Z @ 0x180073F00 (--_GCCommonRenderingEffect@@UEAAPEAXI@Z.c)
 *     ??_ECDrawListBitmap@@QEAAPEAXI@Z @ 0x1800772E4 (--_ECDrawListBitmap@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawListBitmap::~CDrawListBitmap(CDrawListBitmap *this)
{
  __int64 v2; // rcx
  CRenderTargetImageSource *v3; // rcx
  void (*v4)(void); // rax

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *(CRenderTargetImageSource **)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    v4 = *(void (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v4 == (char *)CRenderTargetImageSource::Release )
      CRenderTargetImageSource::Release(v3);
    else
      v4();
  }
}
