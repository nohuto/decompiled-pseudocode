/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_0fe84b0df1de98c8718b27672fc0a862_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180099F90
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_0fe84b0df1de98c8718b27672fc0a862_::operator() @ 0x180096EC0 (_lambda_0fe84b0df1de98c8718b27672fc0a862_--operator().c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_0fe84b0df1de98c8718b27672fc0a862_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  void *v4; // rbx
  _BYTE v5[32]; // [rsp+28h] [rbp-20h] BYREF

  try
  {
    lambda_0fe84b0df1de98c8718b27672fc0a862_::operator()(*(unsigned __int64 **)(a2 + 8), a2, a3);
  }
  catch ( ... )
  {
    v4 = *(void **)a2;
    __ExceptionPtrCreate(v5);
    __ExceptionPtrCurrentException(v5);
    __ExceptionPtrAssign(v4, v5);
    __ExceptionPtrDestroy(v5);
    return 0LL;
  }
  return 1LL;
}
