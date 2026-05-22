/*
 * XREFs of ?DeviceIoControlOverlapped@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0KPEAU_OVERLAPPED@@@Z @ 0x1800B3C98
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x1800B4C5C (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800AE32C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x1800B222C (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     ?HolographicDriverHandleWrapper_DeviceIoControlFailed_@HolographicDriverClientContinuousTrace@@QEAAXKKPEBXAEBU_GUID@@@Z @ 0x1800B2860 (-HolographicDriverHandleWrapper_DeviceIoControlFailed_@HolographicDriverClientContinuousTrace@@Q.c)
 */

__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlOverlapped(
        RTL_SRWLOCK *this,
        __int64 a2,
        void *a3,
        __int64 a4,
        void *lpOutBuffer,
        DWORD a6,
        struct _OVERLAPPED *lpOverlapped)
{
  unsigned int Ptr; // ebx
  RTL_SRWLOCK *v10; // rbp
  signed int LastError; // esi
  _DWORD *v12; // rcx
  const char *nOutBufferSize; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( this[6].Ptr )
  {
    v10 = this + 7;
    AcquireSRWLockShared(this + 7);
    Ptr = (unsigned int)this[8].Ptr;
    if ( (Ptr & 0x80000000) == 0 )
    {
      if ( DeviceIoControl(this[9].Ptr, 0x5B8430u, a3, 0x18u, lpOutBuffer, a6, 0LL, lpOverlapped) )
      {
        Ptr = 0;
      }
      else
      {
        LastError = GetLastError();
        if ( LastError != 997 )
        {
          v12 = (_DWORD *)*((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
          if ( v12 )
          {
            if ( *v12 )
            {
              HolographicDriverClientContinuousTrace::Instance();
              HolographicDriverClientContinuousTrace::HolographicDriverHandleWrapper_DeviceIoControlFailed_(
                (HolographicDriverClientContinuousTrace *)((char *)&this[1].Ptr + 4),
                LastError,
                5997616,
                this,
                (const struct _GUID *)((char *)&this[1].Ptr + 4));
            }
          }
        }
        Ptr = (unsigned __int16)LastError | 0x80070000;
        if ( LastError <= 0 )
          Ptr = LastError;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x11E,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
        (const char *)Ptr);
    }
    if ( v10 )
      ReleaseSRWLockShared(v10);
  }
  else
  {
    Ptr = -2147483634;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x11B,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)0x8000000ELL,
      (unsigned __int16 *)"this driver handle is not associated with a completion port, so DeviceIoControlHelper must be used",
      nOutBufferSize);
  }
  return Ptr;
}
