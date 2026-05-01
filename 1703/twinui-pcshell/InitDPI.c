/*
 * XREFs of InitDPI @ 0x18017C7F8
 * Callers:
 *     ?GetFlyoutRectForLocationAndBorderFlag@CPeopleBarFlyoutExperienceManager@@AEAAJUPoint@Foundation@Windows@@PEAUtagRECT@@PEAW4Border@CSingleViewShellExperience@@@Z @ 0x1800A24D4 (-GetFlyoutRectForLocationAndBorderFlag@CPeopleBarFlyoutExperienceManager@@AEAAJUPoint@Foundation.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18018C37C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18018C3DC (-UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

int InitDPI()
{
  HDC ProcAddress; // rax
  int v1; // ebx
  HMODULE ModuleHandleW; // rax
  HDC v3; // rbx

  ProcAddress = (HDC)qword_1802439C0;
  v1 = 1;
  if ( qword_1802439C0 == -1 )
  {
    ModuleHandleW = GetModuleHandleW(L"USER32.DLL");
    if ( ModuleHandleW )
    {
      ProcAddress = (HDC)GetProcAddress(ModuleHandleW, "IsProcessDPIAware");
      qword_1802439C0 = (__int64)ProcAddress;
    }
    else
    {
      ProcAddress = (HDC)qword_1802439C0;
    }
  }
  if ( ProcAddress )
  {
    LODWORD(ProcAddress) = ((__int64 (*)(void))ProcAddress)();
    v1 = (int)ProcAddress;
  }
  if ( dword_1802439C8 == -1 || dword_180244ECC != v1 )
  {
    dword_180244ECC = v1;
    ProcAddress = GetDC(0LL);
    v3 = ProcAddress;
    if ( ProcAddress )
    {
      dword_1802439C8 = GetDeviceCaps(ProcAddress, 88);
      GetDeviceCaps(v3, 90);
      LODWORD(ProcAddress) = ReleaseDC(0LL, v3);
    }
    else
    {
      dword_1802439C8 = 96;
    }
  }
  return (int)ProcAddress;
}
