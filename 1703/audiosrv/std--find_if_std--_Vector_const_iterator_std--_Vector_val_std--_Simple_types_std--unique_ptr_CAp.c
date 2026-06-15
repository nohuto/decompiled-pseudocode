/*
 * XREFs of std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_bed0d40b1d996ef4e9b02a65721dba6d___ @ 0x1800AEB20
 * Callers:
 *     ?GetAppSubmixClientContext@CProcessSubmixManager@@UEAAJPEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800AF180 (-GetAppSubmixClientContext@CProcessSubmixManager@@UEAAJPEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_bed0d40b1d996ef4e9b02a65721dba6d___(
        _QWORD *a1,
        _QWORD **a2,
        _QWORD **a3,
        __int64 *a4)
{
  _QWORD **i; // r15
  __int64 v8; // r14
  int v9; // esi
  _QWORD *result; // rax

  for ( i = a2; i != a3; ++i )
  {
    v8 = *a4;
    v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**i + 40LL))(**i);
    if ( v9 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 40LL))(v8) )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
