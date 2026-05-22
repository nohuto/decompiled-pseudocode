/*
 * XREFs of ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x1800B4C5C
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2Static@SpatialGraphDriverClient@Holographic@Internal@Windows@@CAKPEAX@Z @ 0x1800B4C20 (-PropertyUpdatedListenerThreadProcV2Static@SpatialGraphDriverClient@Holographic@Internal@Windows.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180003350 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800367A8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x18007BCB4 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18008CA50 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?DeviceIoControlOverlapped@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0KPEAU_OVERLAPPED@@@Z @ 0x1800B3C98 (-DeviceIoControlOverlapped@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPE.c)
 *     ?CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z @ 0x1800B41E8 (-CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z.c)
 *     _lambda_d8cf32afb77b790db641381db8dab81f_::operator() @ 0x1800B5100 (_lambda_d8cf32afb77b790db641381db8dab81f_--operator().c)
 *     ?InvokePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXW4SpatialGraphPropertyFlags@234@@Z @ 0x1800B5220 (-InvokePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXW4S.c)
 *     ?Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJPEAUHSTRING__@@W4HandleWrapperDesiredAccess@234@_NPEAXPEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@Z @ 0x1800B6D94 (-Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJPEAUHSTRING__@@W4Handle.c)
 *     ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x1800B9104 (--0-$vector@EV-$allocator@E@std@@@std@@QEAA@_KAEBV-$allocator@E@1@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::PropertyUpdatedListenerThreadProcV2(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this)
{
  int v2; // r8d
  HANDLE IoCompletionPort; // r9
  unsigned int v4; // edi
  int v5; // eax
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r9
  void *v9; // rsi
  __int64 v10; // r8
  RTL_SRWLOCK *v11; // rbx
  RTL_SRWLOCK *v12; // rdi
  __int64 v13; // r8
  const char *v14; // r9
  PVOID Ptr; // rsi
  signed int LastError; // eax
  unsigned __int64 v17; // rcx
  char *v18; // rcx
  unsigned __int64 v19; // rax
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v20; // rbx
  signed int v21; // eax
  unsigned __int64 v22; // rcx
  char *v24; // [rsp+30h] [rbp-D8h]
  char *v25; // [rsp+30h] [rbp-D8h]
  signed int v26; // [rsp+48h] [rbp-C0h] BYREF
  signed int v27; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v28; // [rsp+50h] [rbp-B8h] BYREF
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v29[2]; // [rsp+58h] [rbp-B0h] BYREF
  void **v30; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE hHandle; // [rsp+70h] [rbp-98h]
  void *Block; // [rsp+78h] [rbp-90h] BYREF
  __int64 v33; // [rsp+80h] [rbp-88h]
  __int64 v34; // [rsp+88h] [rbp-80h]
  HANDLE Handles[3]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v36[11]; // [rsp+A8h] [rbp-60h] BYREF
  struct _OVERLAPPED v37; // [rsp+100h] [rbp-8h] BYREF
  struct _OVERLAPPED v38; // [rsp+120h] [rbp+18h] BYREF
  __int128 v39; // [rsp+140h] [rbp+38h] BYREF
  __int64 v40; // [rsp+150h] [rbp+48h]
  __int128 v41; // [rsp+158h] [rbp+50h] BYREF
  __int64 v42; // [rsp+168h] [rbp+60h]
  _BYTE v43[24]; // [rsp+170h] [rbp+68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  v36[10] = -2LL;
  IoCompletionPort = CreateIoCompletionPort((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL, 0);
  v30 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
  hHandle = IoCompletionPort;
  if ( IoCompletionPort )
  {
    *(_OWORD *)v29 = 0LL;
    LOBYTE(v2) = 1;
    v5 = Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::Create(
           *(_QWORD *)(*((_QWORD *)this + 11) + 32LL),
           0,
           v2,
           (_DWORD)IoCompletionPort,
           (__int64)v29);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v6 = v29[0];
      *((_QWORD *)v29[0] + 13) = *(_QWORD *)(*((_QWORD *)this + 11) + 104LL);
      *((_BYTE *)v6 + 112) = 1;
      v26 = *((_BYTE *)this + 106) == 0 ? 0x80070032 : 0;
      v40 = 0LL;
      v39 = SPATIAL_GRAPH_DEVICE_PROPERTY_STATIC_NODES_CHANGE_ID;
      memset(&v37, 0, sizeof(v37));
      v27 = *((_BYTE *)this + 105) == 0 ? 0x80070032 : 0;
      v42 = 0LL;
      v41 = SPATIAL_GRAPH_DEVICE_PROPERTY_ERROR_STATUSES;
      std::vector<unsigned char>::vector<unsigned char>(&Block, 528LL);
      memset(&v38, 0, sizeof(v38));
      v28 = 0;
      v36[0] = &v30;
      v36[1] = &v37;
      v36[2] = &v39;
      v36[3] = v43;
      v36[4] = &v28;
      v36[5] = &v26;
      v36[6] = &v38;
      v36[7] = &v41;
      v9 = Block;
      v36[8] = Block;
      v36[9] = &v27;
      while ( 1 )
      {
        if ( v26 >= 0 )
        {
          v26 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlOverlapped(
                  (RTL_SRWLOCK *)v6,
                  v7,
                  &v39,
                  v8,
                  v43,
                  0x14u,
                  &v37);
          wil::details::in1diag3::FailFast_IfMsg(
            retaddr,
            (void *)0x13B,
            (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
            (const char *)(v26 >= 0),
            (unsigned __int16 *)"IO on handle bound to completion port shouldn't succeed synchronously",
            v24);
          v8 = (unsigned int)v26;
          if ( v26 != -2147023899 )
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x13E,
              (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
              (const char *)(unsigned int)v26);
        }
        if ( v27 >= 0 )
        {
          v27 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlOverlapped(
                  (RTL_SRWLOCK *)v6,
                  v7,
                  &v41,
                  v8,
                  v9,
                  (int)v33 - (int)v9,
                  &v38);
          wil::details::in1diag3::FailFast_IfMsg(
            retaddr,
            (void *)0x14D,
            (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
            (const char *)(v27 >= 0),
            (unsigned __int16 *)"IO on handle bound to completion port shouldn't succeed synchronously",
            v25);
          if ( v27 != -2147023899 )
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x150,
              (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
              (const char *)(unsigned int)v27);
        }
        Handles[0] = hHandle;
        Handles[1] = *((HANDLE *)this + 14);
        if ( !WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF) )
        {
          do
            lambda_d8cf32afb77b790db641381db8dab81f_::operator()(v36);
          while ( !WaitForSingleObject(hHandle, 0) );
          v7 = v28;
          if ( v28 )
          {
            Windows::Internal::Holographic::SpatialGraphDriverClient::InvokePropertiesUpdatedCallback(this, v28, v10);
            v28 = 0;
          }
        }
        if ( *((_BYTE *)this + 107) )
          break;
        v6 = v29[0];
        v9 = Block;
      }
      v11 = (RTL_SRWLOCK *)v29[0];
      v12 = (RTL_SRWLOCK *)((char *)v29[0] + 80);
      AcquireSRWLockExclusive((PSRWLOCK)v29[0] + 10);
      Ptr = v11[12].Ptr;
      v11[12].Ptr = 0LL;
      if ( v12 )
        ReleaseSRWLockExclusive(v12);
      if ( Ptr && (unsigned int)CM_Unregister_Notification(Ptr) )
      {
        LastError = GetLastError();
        v17 = (unsigned __int16)LastError | 0x80070000;
        if ( LastError <= 0 )
          v17 = (unsigned int)LastError;
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v17);
        __debugbreak();
      }
      Windows::Internal::Holographic::HolographicDriverHandleWrapper::CloseDriverHandle(v11, 6, v13, v14);
      while ( v26 == -2147023899 )
      {
        WaitForSingleObject(hHandle, 0xFFFFFFFF);
        lambda_d8cf32afb77b790db641381db8dab81f_::operator()(v36);
      }
      v4 = 0;
      v18 = (char *)Block;
      if ( Block )
      {
        if ( (unsigned __int64)(v34 - (_QWORD)Block) >= 0x1000 )
        {
          if ( ((unsigned __int8)Block & 0x1F) != 0
            || (v19 = *((_QWORD *)Block - 1), v19 >= (unsigned __int64)Block)
            || (v18 = (char *)Block - v19 - 8, (unsigned __int64)v18 > 0x1F) )
          {
            _o__invalid_parameter_noinfo_noreturn(v18);
            __debugbreak();
          }
          v18 = (char *)*((_QWORD *)Block - 1);
        }
        operator delete(v18);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xE5,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)v5);
    }
    if ( v29[1] )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v29[1] + 2, 0xFFFFFFFF) == 1 )
      {
        v20 = v29[1];
        (**(void (__fastcall ***)(Windows::Internal::Holographic::HolographicDriverHandleWrapper *))v29[1])(v29[1]);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(Windows::Internal::Holographic::HolographicDriverHandleWrapper *))(*(_QWORD *)v29[1] + 8LL))(v29[1]);
      }
    }
  }
  else
  {
    v4 = wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0xE1,
           (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
           0LL);
  }
  v30 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
  if ( hHandle && !CloseHandle(hHandle) )
  {
    v21 = GetLastError();
    v22 = (unsigned __int16)v21 | 0x80070000;
    if ( v21 <= 0 )
      v22 = (unsigned int)v21;
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v22);
    __debugbreak();
  }
  return v4;
}
