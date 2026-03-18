/*
 * XREFs of ?GetBaseWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C015FDE0
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0002648 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0002FEC (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0003050 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?GetBaseWindowForInputType@CInputSink@@IEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C015FE54 (-GetBaseWindowForInputType@CInputSink@@IEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z.c)
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
