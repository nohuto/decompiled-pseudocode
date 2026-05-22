/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_a6dafc035b20d634b29ec3c0443d964a_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180059B40
 * Callers:
 *     <none>
 * Callees:
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x180056074 (--0MPCHolographicInputManager@@AEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_a6dafc035b20d634b29ec3c0443d964a_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        void **a2)
{
  struct MPCHolographicInputManager *v2; // rax
  void *v4; // rbx
  _BYTE v5[32]; // [rsp+28h] [rbp-20h] BYREF
  MPCHolographicInputManager *v7; // [rsp+68h] [rbp+20h]

  try
  {
    v7 = (MPCHolographicInputManager *)operator new(0xD70uLL);
    MPCHolographicInputManager::MPCHolographicInputManager(v7);
    MPCHolographicInputManager::s_instance = v2;
  }
  catch ( ... )
  {
    v4 = *a2;
    __ExceptionPtrCreate(v5);
    __ExceptionPtrCurrentException(v5);
    __ExceptionPtrAssign(v4, v5);
    __ExceptionPtrDestroy(v5);
    return 0LL;
  }
  return 1LL;
}
