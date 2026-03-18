/*
 * XREFs of ?IsCurrentProcessDispBroker@@YA_NXZ @ 0x1C00DC0C4
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C00ABC7C (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsCurrentProcessDispBroker(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  bool result; // al
  PVOID CurrentProcess; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3);
  result = 0;
  if ( CurrentProcessWin32Process )
  {
    if ( *(_DWORD *)(CurrentProcessWin32Process + 832) >= 0x3000u )
      return 1;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v5, v4);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        return 1;
    }
  }
  return result;
}
