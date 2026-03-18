/*
 * XREFs of _Init_thread_header @ 0x140003BF8
 * Callers:
 *     wWinMain @ 0x140001A80 (wWinMain.c)
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140001F10 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x1400022B0 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     _Init_thread_wait @ 0x140003CB0 (_Init_thread_wait.c)
 */

void __fastcall Init_thread_header(_DWORD *a1)
{
  EnterCriticalSection(&CriticalSection);
  while ( 1 )
  {
    if ( !*a1 )
    {
      *a1 = -1;
      goto LABEL_7;
    }
    if ( *a1 != -1 )
      break;
    Init_thread_wait(0x64u);
  }
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL) = Init_global_epoch;
LABEL_7:
  LeaveCriticalSection(&CriticalSection);
}
