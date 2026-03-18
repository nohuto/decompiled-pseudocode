/*
 * XREFs of FCallerOk @ 0x1C0137A04
 * Callers:
 *     xxxSetWindowWord @ 0x1C01376A4 (xxxSetWindowWord.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FCallerOk(__int64 a1)
{
  __int64 v2; // rcx
  HANDLE ThreadProcessId; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  HANDLE v7; // rax
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(v2 + 440) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 440LL) & 0xC) == 0 )
    return 0LL;
  ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v2);
  v4 = gpidLogon;
  if ( ThreadProcessId == (HANDLE)gpidLogon )
  {
    v7 = PsGetThreadProcessId((PETHREAD)*gptiCurrent);
    v4 = gpidLogon;
    if ( v7 != (HANDLE)gpidLogon )
      return 0LL;
  }
  v5 = 0;
  if ( gbEnforceUIPI )
    return 1LL;
  CurrentProcess = PsGetCurrentProcess(v4);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    return 1LL;
  v9 = *(_QWORD *)(gptiCurrent + 376LL);
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL);
  if ( *(_DWORD *)(v9 + 732) == *(_DWORD *)(v10 + 732) )
    return *(_DWORD *)(v9 + 736) == *(_DWORD *)(v10 + 736);
  return v5;
}
