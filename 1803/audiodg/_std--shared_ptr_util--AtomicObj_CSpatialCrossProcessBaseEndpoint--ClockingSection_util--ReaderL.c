/*
 * XREFs of _std::shared_ptr_util::AtomicObj_CSpatialCrossProcessBaseEndpoint::ClockingSection_util::ReaderLockPolicy___::_Setp_util::AtomicObj_CSpatialCrossProcessBaseEndpoint::ClockingSection_util::ReaderLockPolicy____::_1_::catch$1 @ 0x14005B2E4
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x14001D6E1 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall __noreturn std::shared_ptr_util::AtomicObj_CSpatialCrossProcessBaseEndpoint::ClockingSection_util::ReaderLockPolicy___::_Setp_util::AtomicObj_CSpatialCrossProcessBaseEndpoint::ClockingSection_util::ReaderLockPolicy____::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  v2 = *(void (__fastcall ****)(_QWORD, __int64))(a2 + 72);
  if ( v2 )
    (**v2)(v2, 1LL);
  throw;
}
