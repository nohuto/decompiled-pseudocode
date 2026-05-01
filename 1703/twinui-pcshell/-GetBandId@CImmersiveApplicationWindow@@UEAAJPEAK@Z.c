/*
 * XREFs of ?GetBandId@CImmersiveApplicationWindow@@UEAAJPEAK@Z @ 0x180065900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApplicationWindow::GetBandId(CImmersiveApplicationWindow *this, unsigned int *a2)
{
  signed int v3; // r8d
  signed int LastError; // eax
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  if ( (unsigned int)GetWindowBand(*((_QWORD *)this + 2), &v6) )
  {
    v3 = 0;
    *a2 = v6;
  }
  else
  {
    LastError = GetLastError();
    v3 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v3 = LastError;
    if ( v3 >= 0 )
      return (unsigned int)-2147467259;
  }
  return (unsigned int)v3;
}
