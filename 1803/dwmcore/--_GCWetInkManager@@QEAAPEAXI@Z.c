/*
 * XREFs of ??_GCWetInkManager@@QEAAPEAXI@Z @ 0x180149CFC
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180033E24 (-Initialize@CComposition@@IEAAJXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801497E4 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CWetInkManager *__fastcall CWetInkManager::`scalar deleting destructor'(CWetInkManager *this)
{
  __int64 v1; // rbx
  __int64 v3; // rsi

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 2);
    if ( v1 != v3 )
    {
      do
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)(v1 + 8));
        v1 += 72LL;
      }
      while ( v1 != v3 );
      v1 = *((_QWORD *)this + 1);
    }
    std::_Deallocate((char *)v1, (*((_QWORD *)this + 3) - v1) / 72, 0x48uLL);
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
  operator delete(this);
  return this;
}
