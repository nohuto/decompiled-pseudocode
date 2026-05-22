/*
 * XREFs of ?UnregisterCmNotifAsync@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXXZ @ 0x1800B46DC
 * Callers:
 *     ?DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x1800B4570 (-DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@CAKPEAUHCMNOT.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800559E8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::UnregisterCmNotifAsync(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  PVOID Ptr; // rsi
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = this + 10;
  AcquireSRWLockExclusive(this + 10);
  Ptr = this[12].Ptr;
  this[12].Ptr = 0LL;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
  if ( Ptr )
  {
    if ( !TrySubmitThreadpoolCallback(
            (PTP_SIMPLE_CALLBACK)Windows::Internal::Holographic::HolographicDriverHandleWrapper::UnregisterCmNotifCallback,
            Ptr,
            0LL) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x2BD,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
        v4);
  }
}
