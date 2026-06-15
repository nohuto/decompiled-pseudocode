/*
 * XREFs of ??1?$CAutoPtr@VCStreamGroupAttributes@@@ATL@@QEAA@XZ @ 0x18005B5C4
 * Callers:
 *     _CBaseStreamGroupProxy::_CBaseStreamGroupProxy_::_1_::dtor$2 @ 0x180038068 (_CBaseStreamGroupProxy--_CBaseStreamGroupProxy_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ATL::CAutoPtr<CStreamGroupAttributes>::~CAutoPtr<CStreamGroupAttributes>(void **a1)
{
  operator delete(*a1, (const struct std::nothrow_t *)0x10);
  *a1 = 0LL;
}
