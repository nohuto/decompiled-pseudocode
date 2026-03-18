/*
 * XREFs of NtRIMRegisterForInput @ 0x1C01209C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtRIMRegisterForInput(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 CurrentProcess; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // ebx

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v15, v14);
  v17 = IsProcessDwm(CurrentProcess);
  v19 = 0LL;
  if ( v17 )
    v20 = RIMRegisterForInputWithCallbacks(
            a1,
            a2,
            a3,
            a4,
            gpWin32kDriverObject,
            a5,
            a6,
            0LL,
            0,
            a8,
            Win32kRIMDevChangeCallback,
            a9,
            1,
            0LL,
            a10);
  else
    v20 = -1073741790;
  UserSessionSwitchLeaveCrit(v19, v18);
  return v20;
}
