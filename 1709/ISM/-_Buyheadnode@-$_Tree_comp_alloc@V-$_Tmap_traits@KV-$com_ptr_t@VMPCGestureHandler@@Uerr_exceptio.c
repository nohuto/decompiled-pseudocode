/*
 * XREFs of ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@XZ @ 0x18005BBF8
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_810dcc79efb0a72353c94b2711027391_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x18005BE40 (--$_Callback_once@V-$tuple@$$QEAV_lambda_810dcc79efb0a72353c94b2711027391_@@AEAVexception_ptr@st.c)
 *     ?Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z @ 0x18008BBBC (-Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z @ 0x18009B4CC (-Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 */

_WORD *std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::_Buyheadnode()
{
  _WORD *result; // rax
  _QWORD *v1; // rcx

  result = operator new(0x30uLL);
  try
  {
    if ( result )
      *(_QWORD *)result = result;
    if ( result != (_WORD *)-8LL )
      *((_QWORD *)result + 1) = result;
    v1 = result + 8;
    if ( result != (_WORD *)-16LL )
      *v1 = result;
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<SPATIAL_NODE_ID const,std::wstring>,void *>>>::deallocate(
      (__int64)v1,
      result);
    throw;
  }
  result[12] = 257;
  return result;
}
