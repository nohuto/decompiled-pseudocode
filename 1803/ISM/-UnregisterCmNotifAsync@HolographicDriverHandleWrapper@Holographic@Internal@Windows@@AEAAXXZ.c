/*
 * XREFs of ?UnregisterCmNotifAsync@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXXZ @ 0x1800C0E0C
 * Callers:
 *     ?DeviceHandleCallbackStatic@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x1800C0CB0 (-DeviceHandleCallbackStatic@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@CAKPEAU.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003128 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::UnregisterCmNotifAsync(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rsi
  PVOID Ptr; // rbx
  RTL_SRWLOCK *v4; // rax
  void *v5; // rbp
  void *v6; // rdi
  bool v7; // zf
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = this + 17;
  Ptr = 0LL;
  AcquireSRWLockExclusive(this + 17);
  v4 = this + 18;
  v5 = 0LL;
  v6 = 0LL;
  if ( &v10 != (char *)v4 )
  {
    Ptr = v4->Ptr;
    v4->Ptr = 0LL;
    v5 = Ptr;
    v6 = Ptr;
  }
  v7 = v1 == 0LL;
  if ( v1 )
  {
    ReleaseSRWLockExclusive(v1);
    v7 = v1 == 0LL;
  }
  if ( v7 )
    v6 = v5;
  if ( v6
    && !TrySubmitThreadpoolCallback(
          (PTP_SIMPLE_CALLBACK)Windows::Internal::Holographic::HolographicDriverHandleWrapper::UnregisterCmNotifCallback,
          Ptr,
          0LL) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x305,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      v8);
    JUMPOUT(0x1800C0EB2LL);
  }
}
