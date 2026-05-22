/*
 * XREFs of ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18003ACE0
 * Callers:
 *     ?Create@MPCSixDofProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18003ADD0 (-Create@MPCSixDofProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1800092C8 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1800092F8 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ?InitializeConstants@MPCSixDofProcessor@@EEAAXXZ @ 0x18003AE90 (-InitializeConstants@MPCSixDofProcessor@@EEAAXXZ.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180049778 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall MPCSixDofProcessor::RuntimeClassInitialize(
        LARGE_INTEGER *this,
        const struct InputProcessorCreateParams *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  std::exception_ptr *v6; // rax
  _BYTE v7[16]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v8[2]; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v9[24]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  char v11; // [rsp+80h] [rbp+20h] BYREF

  v3 = MPCInputProviderBase::RuntimeClassInitialize((MPCInputProviderBase *)this, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    MPCSixDofProcessor::InitializeConstants((MPCSixDofProcessor *)&this[3]);
    QueryPerformanceFrequency(this + 362);
    v11 = 0;
    __ExceptionPtrCreate(v7);
    v8[0] = v7;
    v8[1] = &v11;
    if ( !std::_Execute_once(
            (struct std::once_flag *)&MPCSixDofProcessor::s_registryWatcherCreated,
            (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_2ab80ba63dcc212dafbb4e4695138308_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
            v8) )
    {
      if ( !__ExceptionPtrToBool(v7) )
      {
        std::_XGetLastError();
        __debugbreak();
      }
      v6 = std::exception_ptr::exception_ptr((std::exception_ptr *)v9, (const struct std::exception_ptr *)v7);
      std::rethrow_exception(v6);
    }
    __ExceptionPtrDestroy(v7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
