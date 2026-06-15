/*
 * XREFs of ??1?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@QEAA@XZ @ 0x1800AEDD8
 * Callers:
 *     _CProcessSubmixManager::GetAppSubmixClientContext_::_1_::dtor$2 @ 0x1800AF552 (_CProcessSubmixManager--GetAppSubmixClientContext_--_1_--dtor$2.c)
 *     _CProcessSubmixManager::GetAppSubmixClientContext_::_1_::dtor$3 @ 0x1800AF55E (_CProcessSubmixManager--GetAppSubmixClientContext_--_1_--dtor$3.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<CAppSubmixClient>::~unique_ptr<CAppSubmixClient>(__int64 **a1)
{
  __int64 *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x10);
  }
}
