/*
 * XREFs of ?GetHMonitor@DWMInputDisplay@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x1800209B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 */

__int64 __fastcall DWMInputDisplay::GetHMonitor(DWMInputDisplay *this, HMONITOR *a2)
{
  unsigned int v2; // ebx
  HMONITOR v4; // rax
  BOOL v5; // eax
  LPARAM dwData; // [rsp+48h] [rbp+10h] BYREF

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
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 142, 87);
  }
  return v2;
}
