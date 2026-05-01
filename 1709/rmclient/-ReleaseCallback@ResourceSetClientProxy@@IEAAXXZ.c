/*
 * XREFs of ?ReleaseCallback@ResourceSetClientProxy@@IEAAXXZ @ 0x18000F054
 * Callers:
 *     ?ReleaseResourcesImpl@ResourceSetClientProxy@@IEAAJK@Z @ 0x18000F138 (-ReleaseResourcesImpl@ResourceSetClientProxy@@IEAAJK@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18000E650 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

void __fastcall ResourceSetClientProxy::ReleaseCallback(struct IUnknown **this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx

  v1 = (struct _RTL_CRITICAL_SECTION *)(this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 56));
  if ( this[54] )
    ATL::AtlComPtrAssign(this + 54, 0LL);
  LeaveCriticalSection(v1);
}
