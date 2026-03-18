/*
 * XREFs of NtRIMRegisterForInput @ 0x1C0117D50
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
  __int64 v14; // rcx
  __int64 CurrentProcess; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  unsigned int v21; // ebx

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v14);
  v16 = IsProcessDwm(CurrentProcess);
  v20 = 0LL;
  if ( v16 )
    v21 = RIMRegisterForInputWithCallbacks(
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
    v21 = -1073741790;
  UserSessionSwitchLeaveCrit(v20, v17, v18, v19);
  return v21;
}
