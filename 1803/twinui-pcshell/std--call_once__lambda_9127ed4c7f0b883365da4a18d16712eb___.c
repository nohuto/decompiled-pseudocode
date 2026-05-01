/*
 * XREFs of std::call_once__lambda_9127ed4c7f0b883365da4a18d16712eb___ @ 0x1801FA230
 * Callers:
 *     ?GetRuntimeSiteAggregator@XamlExplorerHost@@AE$AAA?AV?$ComPtr@UIObjMgr@@@WRL@Microsoft@@XZ @ 0x1801FAF7C (-GetRuntimeSiteAggregator@XamlExplorerHost@@AE$AAA-AV-$ComPtr@UIObjMgr@@@WRL@Microsoft@@XZ.c)
 * Callees:
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1801FA57C (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1801FBD34 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall std::call_once__lambda_9127ed4c7f0b883365da4a18d16712eb___(struct std::once_flag *a1, __int64 a2)
{
  __int64 v4; // rax
  _BYTE v5[16]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v6[2]; // [rsp+38h] [rbp-30h] BYREF
  _BYTE v7[32]; // [rsp+48h] [rbp-20h] BYREF

  __ExceptionPtrCreate(v5);
  v6[0] = v5;
  v6[1] = a2;
  if ( !std::_Execute_once(
          a1,
          (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_9127ed4c7f0b883365da4a18d16712eb_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
          v6) )
  {
    if ( __ExceptionPtrToBool(v5) )
    {
      v4 = std::exception_ptr::exception_ptr((std::exception_ptr *)v7, (const struct std::exception_ptr *)v5);
      std::rethrow_exception(v4);
    }
    std::_XGetLastError();
    JUMPOUT(0x1801FA2C3LL);
  }
  __ExceptionPtrDestroy(v5);
}
