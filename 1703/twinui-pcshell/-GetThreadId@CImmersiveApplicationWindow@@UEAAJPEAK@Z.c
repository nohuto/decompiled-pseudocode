/*
 * XREFs of ?GetThreadId@CImmersiveApplicationWindow@@UEAAJPEAK@Z @ 0x180065A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApplicationWindow::GetThreadId(HWND *this, unsigned int *a2)
{
  DWORD WindowThreadProcessId; // ebx
  signed int v4; // ecx
  signed int LastError; // eax
  DWORD dwProcessId; // [rsp+30h] [rbp+8h] BYREF

  WindowThreadProcessId = GetWindowThreadProcessId(this[2], &dwProcessId);
  if ( WindowThreadProcessId )
  {
    v4 = 0;
    *a2 = WindowThreadProcessId;
  }
  else
  {
    LastError = GetLastError();
    v4 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v4 = LastError;
    if ( v4 >= 0 )
      return (unsigned int)-2147467259;
  }
  return (unsigned int)v4;
}
