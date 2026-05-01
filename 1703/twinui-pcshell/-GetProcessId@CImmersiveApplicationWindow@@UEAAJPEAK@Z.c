/*
 * XREFs of ?GetProcessId@CImmersiveApplicationWindow@@UEAAJPEAK@Z @ 0x1800659C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApplicationWindow::GetProcessId(HWND *this, unsigned int *a2)
{
  unsigned int v2; // ebx
  signed int LastError; // eax
  signed int v4; // ecx

  v2 = 0;
  if ( !GetWindowThreadProcessId(this[2], a2) )
  {
    LastError = GetLastError();
    v4 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v4 = LastError;
    if ( v4 >= 0 )
      return (unsigned int)-2147467259;
    return (unsigned int)v4;
  }
  return v2;
}
