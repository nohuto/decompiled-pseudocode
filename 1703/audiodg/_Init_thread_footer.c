/*
 * XREFs of _Init_thread_footer @ 0x14001E3D8
 * Callers:
 *     ?VTFromRegType@CRegParser@ATL@@KAHPEBGAEAG@Z @ 0x1400537A0 (-VTFromRegType@CRegParser@ATL@@KAHPEBGAEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_footer(_DWORD *a1)
{
  __int64 v2; // rdx

  EnterCriticalSection(&stru_140085DC0);
  v2 = (unsigned int)tls_index;
  *a1 = ++Init_global_epoch;
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v2) + 4LL) = Init_global_epoch;
  LeaveCriticalSection(&stru_140085DC0);
  return Init_thread_notify();
}
