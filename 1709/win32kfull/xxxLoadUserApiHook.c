/*
 * XREFs of xxxLoadUserApiHook @ 0x1C00586D0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxDefWindowProc @ 0x1C0093900 (xxxDefWindowProc.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxLoadHmodIndex @ 0x1C0059E80 (xxxLoadHmodIndex.c)
 */

__int64 __fastcall xxxLoadUserApiHook(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 CurrentProcess; // rax
  __int64 v4; // rcx
  int v5; // eax
  bool v7; // sf
  __int64 v8; // rcx

  v2 = 0;
  if ( gihmodUserApiHook < 0 )
    return 0LL;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) )
    return 0LL;
  v4 = *(_QWORD *)(gptiCurrent + 400LL);
  v5 = *(_DWORD *)(v4 + 380);
  if ( _bittest(&v5, gihmodUserApiHook) )
    return 1LL;
  if ( (*(_DWORD *)(gptiCurrent + 464LL) & 0x1000000D) != 0 )
    return 0LL;
  v7 = (*(_DWORD *)(v4 + 12) & 0x80u) != 0;
  v8 = (unsigned int)gihmodUserApiHookWOW;
  if ( !v7 )
    v8 = (unsigned int)gihmodUserApiHook;
  LOBYTE(v2) = xxxLoadHmodIndex(v8) != 0;
  return v2;
}
