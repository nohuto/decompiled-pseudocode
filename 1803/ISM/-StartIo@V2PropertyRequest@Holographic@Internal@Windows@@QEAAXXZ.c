/*
 * XREFs of ?StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ @ 0x1800C1840
 * Callers:
 *     ?HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z @ 0x1800C1A48 (-HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x1800C2EFC (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800A1100 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800B9954 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x1800BE9B4 (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     ?HolographicDriverHandleWrapper_DeviceIoControlFailed_@HolographicDriverClientContinuousTrace@@QEAAXKKPEBXAEBU_GUID@@@Z @ 0x1800BF000 (-HolographicDriverHandleWrapper_DeviceIoControlFailed_@HolographicDriverClientContinuousTrace@@Q.c)
 *     ?HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z @ 0x1800C1A48 (-HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z.c)
 *     std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x1800CD3E0 (std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd7.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 */

void __fastcall Windows::Internal::Holographic::V2PropertyRequest::StartIo(
        Windows::Internal::Holographic::V2PropertyRequest *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  struct _OVERLAPPED *lpOverlapped; // r13
  void **v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r14
  void *lpOutBuffer; // r12
  DWORD v10; // r15d
  __int64 v11; // rbp
  signed int v12; // ebx
  signed int LastError; // ebp
  _DWORD *v14; // rcx
  const char *nOutBufferSize; // [rsp+28h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  DWORD nInBufferSize; // [rsp+80h] [rbp+8h]
  void *lpInBuffer; // [rsp+88h] [rbp+10h]

  if ( *((_DWORD *)this + 26) == -2147023899 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x69,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertyrequests.h",
      a4);
    JUMPOUT(0x1800C1A45LL);
  }
  *((_DWORD *)this + 26) = -2147023899;
  lpOverlapped = (struct _OVERLAPPED *)((char *)this + 8);
  memset_0((char *)this + 8, 0, 0x20uLL);
  v6 = (void **)((char *)this + 80);
  v7 = *((_QWORD *)this + 11);
  if ( (unsigned __int64)(v7 - *((_QWORD *)this + 10)) < 0xC )
  {
    std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___((char *)this + 80);
    v7 = *((_QWORD *)this + 11);
  }
  v8 = *((_QWORD *)this + 5);
  lpOutBuffer = *v6;
  v10 = *((_DWORD *)this + 12);
  v11 = v7 - (_QWORD)*v6;
  nInBufferSize = *((_DWORD *)this + 16);
  lpInBuffer = (void *)*((_QWORD *)this + 7);
  if ( !*(_QWORD *)(v8 + 48) )
  {
    v12 = -2147483634;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0xEA,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)0x8000000ELL,
      (unsigned __int16 *)"this driver handle is not associated with a completion port, so DeviceIoControlHelper must be used",
      nOutBufferSize);
    goto LABEL_21;
  }
  AcquireSRWLockShared((PSRWLOCK)(v8 + 112));
  v12 = *(_DWORD *)(v8 + 120);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xED,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)(unsigned int)v12);
LABEL_8:
    if ( v8 != -112 )
      ReleaseSRWLockShared((PSRWLOCK)(v8 + 112));
    goto LABEL_21;
  }
  if ( !DeviceIoControl(*(HANDLE *)(v8 + 128), v10, lpInBuffer, nInBufferSize, lpOutBuffer, v11, 0LL, lpOverlapped) )
  {
    LastError = GetLastError();
    if ( LastError != 997 )
    {
      v14 = (_DWORD *)*((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
      if ( v14 )
      {
        if ( *v14 )
        {
          HolographicDriverClientContinuousTrace::Instance();
          HolographicDriverClientContinuousTrace::HolographicDriverHandleWrapper_DeviceIoControlFailed_(
            (HolographicDriverClientContinuousTrace *)(v8 + 12),
            LastError,
            v10,
            (const void *)v8,
            (const struct _GUID *)(v8 + 12));
        }
      }
    }
    v12 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v12 = LastError;
    goto LABEL_8;
  }
  if ( v8 != -112 )
    ReleaseSRWLockShared((PSRWLOCK)(v8 + 112));
  v12 = 0;
LABEL_21:
  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x7D,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertyrequests.h",
    (const char *)(v12 >= 0),
    (unsigned __int16 *)"IO on handle bound to completion port shouldn't succeed synchronously",
    nOutBufferSize);
  if ( v12 != -2147023899 )
    Windows::Internal::Holographic::V2PropertyRequest::HandleCompletion(this, v12, 0LL);
}
