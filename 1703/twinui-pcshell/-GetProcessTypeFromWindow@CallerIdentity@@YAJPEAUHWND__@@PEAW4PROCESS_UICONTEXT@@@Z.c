/*
 * XREFs of ?GetProcessTypeFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAW4PROCESS_UICONTEXT@@@Z @ 0x18017572C
 * Callers:
 *     ?HandleCreation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x18003B4B0 (-HandleCreation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CallerIdentity::GetProcessTypeFromWindow(
        CallerIdentity *this,
        _DWORD *a2,
        enum PROCESS_UICONTEXT *a3)
{
  signed int v4; // eax
  signed int v5; // ebx
  HANDLE v6; // rdi
  signed int LastError; // eax
  DWORD dwProcessId; // [rsp+50h] [rbp+18h] BYREF
  int v10; // [rsp+58h] [rbp+20h] BYREF

  if ( GetWindowThreadProcessId((HWND)this, &dwProcessId) )
  {
    v6 = OpenProcess(0x1000u, 0, dwProcessId);
    if ( v6 )
    {
      if ( (unsigned int)GetProcessUIContextInformation(v6, &v10) )
      {
        v5 = 0;
        *a2 = v10;
      }
      else
      {
        v5 = -2147024890;
      }
      CloseHandle(v6);
    }
    else
    {
      LastError = GetLastError();
      v5 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v5 = LastError;
      if ( v5 >= 0 )
        return (unsigned int)-2147467259;
    }
  }
  else
  {
    v4 = GetLastError();
    v5 = (unsigned __int16)v4 | 0x80070000;
    if ( v4 <= 0 )
      v5 = v4;
    if ( v5 >= 0 )
      return (unsigned int)-2147467259;
  }
  return (unsigned int)v5;
}
