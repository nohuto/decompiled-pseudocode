/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_0d63f0eebaff590cd6794bb27eb1a224_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x1800424C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_0d63f0eebaff590cd6794bb27eb1a224_::operator() @ 0x18003AF20 (_lambda_0d63f0eebaff590cd6794bb27eb1a224_--operator().c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_0d63f0eebaff590cd6794bb27eb1a224_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rbx
  _BYTE v4[32]; // [rsp+28h] [rbp-20h] BYREF

  try
  {
    lambda_0d63f0eebaff590cd6794bb27eb1a224_::operator()(*(_QWORD **)(a2 + 8));
  }
  catch ( ... )
  {
    v3 = *(void **)a2;
    __ExceptionPtrCreate(v4);
    __ExceptionPtrCurrentException(v4);
    __ExceptionPtrAssign(v3, v4);
    __ExceptionPtrDestroy(v4);
    return 0LL;
  }
  return 1LL;
}
