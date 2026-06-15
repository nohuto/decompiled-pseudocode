/*
 * XREFs of _Init_thread_header @ 0x14001E438
 * Callers:
 *     ?VTFromRegType@CRegParser@ATL@@KAHPEBGAEAG@Z @ 0x1400537A0 (-VTFromRegType@CRegParser@ATL@@KAHPEBGAEAG@Z.c)
 * Callees:
 *     _Init_thread_wait @ 0x14001E4F0 (_Init_thread_wait.c)
 */

void __fastcall Init_thread_header(_DWORD *a1)
{
  EnterCriticalSection(&stru_140085DC0);
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
  LeaveCriticalSection(&stru_140085DC0);
}
