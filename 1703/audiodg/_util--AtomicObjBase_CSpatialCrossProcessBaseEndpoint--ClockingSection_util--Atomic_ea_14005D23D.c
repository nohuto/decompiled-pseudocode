/*
 * XREFs of _util::AtomicObjBase_CSpatialCrossProcessBaseEndpoint::ClockingSection_util::AtomicObj_CSpatialCrossProcessBaseEndpoint::ClockingSection_util::ReaderLockPolicy__util::AtomicObjState_util::ReaderLockPolicy_::_AcquireReadWrite_::_1_::catch$0 @ 0x14005D23D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall util::AtomicObjBase_CSpatialCrossProcessBaseEndpoint::ClockingSection_util::AtomicObj_CSpatialCrossProcessBaseEndpoint::ClockingSection_util::ReaderLockPolicy__util::AtomicObjState_util::ReaderLockPolicy_::_AcquireReadWrite_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 40);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 80) = *v3;
  return &loc_14005D22F;
}
