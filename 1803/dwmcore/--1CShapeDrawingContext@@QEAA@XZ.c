/*
 * XREFs of ??1CShapeDrawingContext@@QEAA@XZ @ 0x1801C0F88
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801C129C (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall CShapeDrawingContext::~CShapeDrawingContext(CShapeDrawingContext *this)
{
  char *v2; // rcx

  v2 = (char *)*((_QWORD *)this + 64);
  if ( v2 )
  {
    std::_Deallocate(v2, (*((_QWORD *)this + 66) - (_QWORD)v2) / 56LL, 0x38uLL);
    *((_QWORD *)this + 64) = 0LL;
    *((_QWORD *)this + 65) = 0LL;
    *((_QWORD *)this + 66) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 64);
  operator delete(*((void **)this + 6));
}
