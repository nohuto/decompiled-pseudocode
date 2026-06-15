/*
 * XREFs of AudioServerCloseVpoContext @ 0x1800A1BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall AudioServerCloseVpoContext(__int64 **a1)
{
  __int64 *v1; // rbx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(v1 + 2);
    wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(v1 + 1);
    wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(v1);
    operator delete(v1, (const struct std::nothrow_t *)0x18);
  }
  return 0LL;
}
