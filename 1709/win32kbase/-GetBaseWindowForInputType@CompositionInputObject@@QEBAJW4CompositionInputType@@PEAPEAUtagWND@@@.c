/*
 * XREFs of ?GetBaseWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C01516F0
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAX_KKPEAUtagINPUTDEST@@@Z @ 0x1C00134C0 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAX_KKPEAUtagINPUTDEST@@@Z.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00387DC (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00388B0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?GetBaseWindowForInputType@CInputSink@@IEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C01517B0 (-GetBaseWindowForInputType@CInputSink@@IEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z.c)
 */

__int64 __fastcall CompositionInputObject::GetBaseWindowForInputType(__int64 a1, unsigned int a2, _QWORD *a3)
{
  int BaseWindowForInputType; // ebx

  *a3 = 0LL;
  BaseWindowForInputType = CPushLock::AcquireLockShared((CPushLock *)(a1 + 32));
  if ( BaseWindowForInputType >= 0 )
  {
    BaseWindowForInputType = CInputSink::GetBaseWindowForInputType(a1 + 24, a2, a3);
    CPushLock::ReleaseLock((CPushLock *)(a1 + 32));
  }
  return (unsigned int)BaseWindowForInputType;
}
