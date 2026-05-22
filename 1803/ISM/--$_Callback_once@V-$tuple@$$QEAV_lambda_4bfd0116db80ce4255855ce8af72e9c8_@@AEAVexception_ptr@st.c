/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_4bfd0116db80ce4255855ce8af72e9c8_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180008AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003128 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0MPC3DStateHelper@@AEAA@XZ @ 0x180007780 (--0MPC3DStateHelper@@AEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_4bfd0116db80ce4255855ce8af72e9c8_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        void **a2)
{
  const char *v2; // r9
  void *v4; // rbx
  _BYTE v5[32]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  MPC3DStateHelper *v8; // [rsp+68h] [rbp+20h]

  try
  {
    v8 = (MPC3DStateHelper *)operator new(0x50uLL);
    MPC3DStateHelper::s_instance = MPC3DStateHelper::MPC3DStateHelper(v8);
    if ( !SetEvent(MPC3DStateHelper::s_isInstanceCreatedEvent) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x86F,
        (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
        v2);
      JUMPOUT(0x180008B26LL);
    }
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
