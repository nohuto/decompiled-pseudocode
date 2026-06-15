/*
 * XREFs of ??1CVpoContext@@IEAA@XZ @ 0x140044EF4
 * Callers:
 *     _ATL::CComObject_CVpoContext_::CComObject_CVpoContext__::_1_::dtor$0 @ 0x140044E20 (_ATL--CComObject_CVpoContext_--CComObject_CVpoContext__--_1_--dtor$0.c)
 *     ??1?$CComAggObject@VCVpoContext@@@ATL@@UEAA@XZ @ 0x140044E2C (--1-$CComAggObject@VCVpoContext@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCVpoContext@@@ATL@@QEAA@XZ @ 0x140044E8C (--1-$CComContainedObject@VCVpoContext@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComObject@VCVpoContext@@@ATL@@UEAA@XZ @ 0x140044E94 (--1-$CComObject@VCVpoContext@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CVpoContext_::_CComObject_CVpoContext__::_1_::dtor$0 @ 0x140044EE8 (_ATL--CComObject_CVpoContext_--_CComObject_CVpoContext__--_1_--dtor$0.c)
 * Callees:
 *     ?FindKey@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEBAHAEBK@Z @ 0x140045328 (-FindKey@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@Q.c)
 *     ?RemoveAt@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAHH@Z @ 0x140045998 (-RemoveAt@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CVpoContext::~CVpoContext(CVpoContext *this)
{
  unsigned int Key; // eax
  __int64 v3; // rcx

  Key = ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::FindKey(
          this,
          (char *)this + 88);
  if ( Key != -1 )
    ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::RemoveAt(
      v3,
      Key);
  if ( *((_BYTE *)this + 64) )
  {
    *((_BYTE *)this + 64) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  }
}
