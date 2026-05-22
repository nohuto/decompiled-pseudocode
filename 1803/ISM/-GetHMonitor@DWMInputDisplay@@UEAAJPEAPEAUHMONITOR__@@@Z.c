/*
 * XREFs of ?GetHMonitor@DWMInputDisplay@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x180017860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputDisplay::GetHMonitor(DWMInputDisplay *this, HMONITOR *a2)
{
  unsigned int v2; // ebx
  HMONITOR v4; // rax
  BOOL v5; // eax
  LPARAM dwData; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 )
  {
    v4 = (HMONITOR)*((_QWORD *)this + 3);
    if ( !v4 )
    {
      dwData = 0LL;
      v5 = EnumDisplayMonitors(
             0LL,
             0LL,
             (MONITORENUMPROC)lambda_1862f4448b0c18fc2289e23f0d227847_::_lambda_invoker_cdecl_,
             (LPARAM)&dwData);
      v4 = (HMONITOR)(dwData & -(__int64)v5);
    }
    *a2 = v4;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v2;
}
