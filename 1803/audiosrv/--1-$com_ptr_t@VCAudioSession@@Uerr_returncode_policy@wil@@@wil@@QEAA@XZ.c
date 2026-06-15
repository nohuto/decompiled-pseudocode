/*
 * XREFs of ??1?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180017F1C
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800333A0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$1 @ 0x18006A6EC (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$1.c)
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$2 @ 0x18006A710 (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$2.c)
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$9 @ 0x18006A7C7 (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$9.c)
 * Callees:
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x1800341C0 (-Release@CAudioSession@@UEAAKXZ.c)
 */

void __fastcall wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(
        CAudioSession **a1)
{
  CAudioSession *v1; // rcx
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 16LL);
    if ( (char *)v2 == (char *)CAudioSession::Release )
      CAudioSession::Release(v1);
    else
      v2();
  }
}
