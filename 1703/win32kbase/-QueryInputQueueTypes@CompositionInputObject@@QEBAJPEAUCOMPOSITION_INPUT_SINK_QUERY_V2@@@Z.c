/*
 * XREFs of ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C0010568
 * Callers:
 *     NtQueryCompositionInputSink @ 0x1C000C650 (NtQueryCompositionInputSink.c)
 *     ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x1C000F2FC (-CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     ?QueryInputQueueTypes@CInputSink@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C00110A0 (-QueryInputQueueTypes@CInputSink@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00111F8 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C001125C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

__int64 __fastcall CompositionInputObject::QueryInputQueueTypes(
        CompositionInputObject *this,
        struct COMPOSITION_INPUT_SINK_QUERY_V2 *a2)
{
  int InputQueueTypes; // ebx

  InputQueueTypes = CPushLock::AcquireLockShared((CompositionInputObject *)((char *)this + 32));
  if ( InputQueueTypes >= 0 )
  {
    InputQueueTypes = CInputSink::QueryInputQueueTypes((CompositionInputObject *)((char *)this + 24), a2);
    CPushLock::ReleaseLock((CompositionInputObject *)((char *)this + 32));
  }
  return (unsigned int)InputQueueTypes;
}
