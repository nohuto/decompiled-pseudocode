/*
 * XREFs of ??$destroy@V?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@std@@@?$_Wrap_alloc@V?$allocator@V?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@std@@@std@@@std@@QEAAXPEAV?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@1@@Z @ 0x1800AE708
 * Callers:
 *     _std::vector_std::unique_ptr_CAppSubmixContext_std::default_delete_CAppSubmixContext____std::allocator_std::unique_ptr_CAppSubmixContext_std::default_delete_CAppSubmixContext_______::emplace_back_std::unique_ptr_CAppSubmixContext_std::default_delete_CAppSubmixContext______::_1_::catch$99 @ 0x1800AE99F (_std--vector_std--unique_ptr_CAppSubmixContext_std--default_delete_CAppSubmixContext____std--all.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Wrap_alloc<std::allocator<std::unique_ptr<CAppSubmixContext>>>::destroy<std::unique_ptr<CAppSubmixContext>>(
        __int64 a1,
        __int64 **a2)
{
  __int64 *v2; // rbx

  v2 = *a2;
  if ( *a2 )
  {
    wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(*a2);
    operator delete(v2, (const struct std::nothrow_t *)8);
  }
}
