/*
 * XREFs of xxxLoadUserApiHook @ 0x1C003C330
 * Callers:
 *     xxxDefWindowProc @ 0x1C003E580 (xxxDefWindowProc.c)
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 * Callees:
 *     xxxLoadHmodIndex @ 0x1C003ACEC (xxxLoadHmodIndex.c)
 */

__int64 __fastcall xxxLoadUserApiHook(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 CurrentProcess; // rax
  __int64 v3; // rcx
  int v4; // eax
  bool v6; // sf
  int v7; // ecx

  v1 = 0;
  if ( gihmodUserApiHook < 0 )
    return 0LL;
  CurrentProcess = PsGetCurrentProcess(a1);
  if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) )
    return 0LL;
  v3 = *(_QWORD *)(gptiCurrent + 376LL);
  v4 = *(_DWORD *)(v3 + 372);
  if ( _bittest(&v4, gihmodUserApiHook) )
    return 1LL;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x1000000D) != 0 )
    return 0LL;
  v6 = (*(_DWORD *)(v3 + 12) & 0x80u) != 0;
  v7 = gihmodUserApiHookWOW;
  if ( !v6 )
    v7 = gihmodUserApiHook;
  LOBYTE(v1) = xxxLoadHmodIndex(v7) != 0;
  return v1;
}
