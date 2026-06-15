/*
 * XREFs of ??1?$CAutoPtr@VCStreamGroupAttributes@@@ATL@@QEAA@XZ @ 0x18007B9C8
 * Callers:
 *     _CBaseStreamGroupProxy::_CBaseStreamGroupProxy_::_1_::dtor$2 @ 0x180059D7E (_CBaseStreamGroupProxy--_CBaseStreamGroupProxy_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ATL::CAutoPtr<CStreamGroupAttributes>::~CAutoPtr<CStreamGroupAttributes>(void **a1)
{
  operator delete(*a1, (const struct std::nothrow_t *)0x10);
  *a1 = 0LL;
}
