/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@PEAV12@00AEAV?$allocator@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x180017AB0
 * Callers:
 *     ??$emplace_back@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800179F4 (--$emplace_back@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$com_.c)
 *     ??$emplace_back@AEBV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXAEBV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180043C84 (--$emplace_back@AEBV-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$c.c)
 *     ??$emplace_back@AEBV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXAEBV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18005EC7C (--$emplace_back@AEBV-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$co.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Uninitialized_move_al_unchecked<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy> *,wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>>>(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v4; // rax
  _QWORD *v5; // [rsp+50h] [rbp+18h]
  _QWORD *v6; // [rsp+58h] [rbp+20h]

  v5 = a3;
  v6 = a3;
  try
  {
    while ( a1 != a2 )
    {
      v4 = *a1;
      *a1 = 0LL;
      *a3++ = v4;
      v5 = a3;
      ++a1;
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>(v6, v5);
    throw;
  }
  return a3;
}
