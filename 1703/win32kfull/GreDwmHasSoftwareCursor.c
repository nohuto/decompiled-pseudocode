/*
 * XREFs of GreDwmHasSoftwareCursor @ 0x1C00B9B90
 * Callers:
 *     DwmDestroyDeviceSpecificResources @ 0x1C00A26D0 (DwmDestroyDeviceSpecificResources.c)
 *     zzzEnableDwmPointerSupport @ 0x1C00B9A10 (zzzEnableDwmPointerSupport.c)
 * Callees:
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C006A07C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C006A0B8 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 */

__int64 __fastcall GreDwmHasSoftwareCursor(__int64 a1, struct PDEVOBJ *a2)
{
  int v3; // esi
  unsigned int v4; // ebx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = (int)a2;
  v4 = 0;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v6, a2, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  if ( g_pDwmState
    && (*((_DWORD *)g_pDwmState + 25) || v3)
    && *((_DWORD *)g_pDwmState + 40)
    && (*(_QWORD *)(a1 + 3552) != a1 + 3552 || (*(_DWORD *)(a1 + 32) & 0x20000) != 0) )
  {
    v4 = 1;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v6);
  return v4;
}
