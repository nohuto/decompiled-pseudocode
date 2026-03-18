/*
 * XREFs of ??1CPreComputeContext@@QEAA@XZ @ 0x1800A29B8
 * Callers:
 *     ??_ECVisualTree@@UEAAPEAXI@Z @ 0x180040FD0 (--_ECVisualTree@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x180070288 (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x1800C22F0 (--1CLightStack@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXXZ @ 0x1802113D8 (-_Tidy@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@std@@AEAAXXZ @ 0x180211484 (-_Tidy@-$vector@VCVisualDepthGeometry@@V-$allocator@VCVisualDepthGeometry@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall CPreComputeContext::~CPreComputeContext(CPreComputeContext *this)
{
  CContentBounder *v2; // rcx
  char *v3; // rdi
  char *v4; // rsi

  v2 = (CContentBounder *)*((_QWORD *)this + 74);
  if ( v2 )
    CContentBounder::`scalar deleting destructor'(v2);
  operator delete(*((void **)this + 136));
  operator delete(*((void **)this + 131));
  operator delete(*((void **)this + 126));
  operator delete(*((void **)this + 122));
  operator delete(*((void **)this + 118));
  operator delete(*((void **)this + 114));
  operator delete(*((void **)this + 110));
  operator delete(*((void **)this + 106));
  operator delete(*((void **)this + 102));
  operator delete(*((void **)this + 98));
  operator delete(*((void **)this + 94));
  operator delete(*((void **)this + 90));
  v3 = (char *)*((_QWORD *)this + 85);
  if ( v3 )
  {
    v4 = (char *)*((_QWORD *)this + 86);
    if ( v3 != v4 )
    {
      do
      {
        std::vector<CVisualDepthGeometry>::_Tidy(v3 + 32);
        std::vector<CDepthSortingLayer>::_Tidy(v3);
        v3 += 56;
      }
      while ( v3 != v4 );
      v3 = (char *)*((_QWORD *)this + 85);
    }
    std::_Deallocate(v3, (*((_QWORD *)this + 87) - (_QWORD)v3) / 56LL, 0x38uLL);
    *((_QWORD *)this + 85) = 0LL;
    *((_QWORD *)this + 86) = 0LL;
    *((_QWORD *)this + 87) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 632);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 600);
  operator delete(*((void **)this + 70));
  CLightStack::~CLightStack((CPreComputeContext *)((char *)this + 264));
  operator delete(*((void **)this + 31));
  operator delete(*((void **)this + 27));
  operator delete(*((void **)this + 23));
  operator delete(*((void **)this + 19));
  operator delete(*((void **)this + 15));
  operator delete(*((void **)this + 11));
  operator delete(*((void **)this + 7));
  operator delete(*((void **)this + 3));
}
