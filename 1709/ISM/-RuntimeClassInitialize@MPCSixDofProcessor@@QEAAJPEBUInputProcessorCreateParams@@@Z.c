/*
 * XREFs of ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18004D7E8
 * Callers:
 *     ?Create@MPCSixDofProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18004D8E0 (-Create@MPCSixDofProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x180007784 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1800077A8 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18005FB40 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCSixDofProcessor::RuntimeClassInitialize(
        LARGE_INTEGER *this,
        const struct InputProcessorCreateParams *a2)
{
  int v3; // eax
  std::exception_ptr *v4; // rax
  _BYTE v5[16]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v6[2]; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v7[24]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  char v9; // [rsp+80h] [rbp+20h] BYREF

  v3 = MPCInputProviderBase::RuntimeClassInitialize((MPCInputProviderBase *)this, a2);
  if ( v3 >= 0 )
  {
    QueryPerformanceFrequency(this + 521);
    v9 = 0;
    __ExceptionPtrCreate(v5);
    v6[0] = v5;
    v6[1] = &v9;
    if ( std::_Execute_once(
           (struct std::once_flag *)&MPCSixDofProcessor::s_registryWatcherCreated,
           (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_2ab80ba63dcc212dafbb4e4695138308_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
           v6) )
    {
      __ExceptionPtrDestroy(v5);
    }
    else
    {
      if ( __ExceptionPtrToBool(v5) )
      {
        v4 = std::exception_ptr::exception_ptr((std::exception_ptr *)v7, (const struct std::exception_ptr *)v5);
        std::rethrow_exception(v4);
      }
      std::_XGetLastError();
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
      (const char *)(unsigned int)v3);
  }
}
