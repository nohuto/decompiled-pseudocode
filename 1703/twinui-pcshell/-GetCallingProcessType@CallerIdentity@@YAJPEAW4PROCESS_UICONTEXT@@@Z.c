/*
 * XREFs of ?GetCallingProcessType@CallerIdentity@@YAJPEAW4PROCESS_UICONTEXT@@@Z @ 0x1801756B8
 * Callers:
 *     ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x1800088B0 (-_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ.c)
 *     ?AllowSetForegroundWindow@CTrustedComponentForegroundControl@@EEAAJXZ @ 0x18002C450 (-AllowSetForegroundWindow@CTrustedComponentForegroundControl@@EEAAJXZ.c)
 * Callees:
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKPEAPEAX@Z @ 0x180175FE0 (-GetCallingProcessHandle@CallerIdentity@@YAJKPEAPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::GetCallingProcessType(CallerIdentity *this, enum PROCESS_UICONTEXT *a2, void **a3)
{
  int CallingProcessHandle; // ebx
  HANDLE CurrentProcess; // rax
  HANDLE hObject; // [rsp+38h] [rbp+10h] BYREF
  int v8; // [rsp+40h] [rbp+18h] BYREF

  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(this, (unsigned int)&hObject, a3);
  if ( CallingProcessHandle == -2147417833 )
  {
    CurrentProcess = GetCurrentProcess();
    hObject = CurrentProcess;
    CallingProcessHandle = 0;
  }
  else
  {
    CurrentProcess = hObject;
  }
  if ( CallingProcessHandle >= 0 )
  {
    if ( (unsigned int)GetProcessUIContextInformation(CurrentProcess, &v8) )
    {
      CallingProcessHandle = 0;
      *(_DWORD *)this = v8;
    }
    else
    {
      CallingProcessHandle = -2147024890;
    }
    CloseHandle(hObject);
  }
  return (unsigned int)CallingProcessHandle;
}
