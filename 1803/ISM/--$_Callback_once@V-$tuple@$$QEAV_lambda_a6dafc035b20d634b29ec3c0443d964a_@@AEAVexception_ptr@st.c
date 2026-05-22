/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_a6dafc035b20d634b29ec3c0443d964a_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180050E50
 * Callers:
 *     <none>
 * Callees:
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18004D1DC (--0MPCHolographicInputManager@@AEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_a6dafc035b20d634b29ec3c0443d964a_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        void **a2)
{
  void *v3; // rbx
  _BYTE v4[32]; // [rsp+28h] [rbp-20h] BYREF
  MPCHolographicInputManager *v6; // [rsp+68h] [rbp+20h]

  try
  {
    v6 = (MPCHolographicInputManager *)operator new(0x910uLL);
    MPCHolographicInputManager::s_instance = MPCHolographicInputManager::MPCHolographicInputManager(v6);
  }
  catch ( ... )
  {
    v3 = *a2;
    __ExceptionPtrCreate(v4);
    __ExceptionPtrCurrentException(v4);
    __ExceptionPtrAssign(v3, v4);
    __ExceptionPtrDestroy(v4);
    return 0LL;
  }
  return 1LL;
}
