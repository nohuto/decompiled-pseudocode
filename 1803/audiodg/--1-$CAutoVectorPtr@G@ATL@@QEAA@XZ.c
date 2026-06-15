/*
 * XREFs of ??1?$CAutoVectorPtr@G@ATL@@QEAA@XZ @ 0x14004FA94
 * Callers:
 *     _ATL::CExpansionVector::Add_::_1_::dtor$0 @ 0x140050709 (_ATL--CExpansionVector--Add_--_1_--dtor$0.c)
 *     _ATL::CExpansionVector::Add_::_1_::dtor$1 @ 0x140050730 (_ATL--CExpansionVector--Add_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ATL::CAutoVectorPtr<unsigned short>::~CAutoVectorPtr<unsigned short>(void **a1)
{
  operator delete(*a1);
  *a1 = 0LL;
}
