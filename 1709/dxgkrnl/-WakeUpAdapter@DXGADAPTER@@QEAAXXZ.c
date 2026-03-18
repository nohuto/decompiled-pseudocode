/*
 * XREFs of ?WakeUpAdapter@DXGADAPTER@@QEAAXXZ @ 0x1C0173190
 * Callers:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00027F8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?CSAccountingInProgress@DXGGLOBAL@@QEBAHXZ @ 0x1C001D700 (-CSAccountingInProgress@DXGGLOBAL@@QEBAHXZ.c)
 *     DpiRequestDevicePowerState @ 0x1C002D9A0 (DpiRequestDevicePowerState.c)
 *     ?ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCESS@@_K@Z @ 0x1C01ABA2C (-ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCE.c)
 */

void __fastcall DXGADAPTER::WakeUpAdapter(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  DXGGLOBAL *v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 CurrentProcess; // rax
  __int64 v9; // rcx
  __int64 v10; // r8

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 8013);
  DXGPUSHLOCK::AcquireShared((DXGADAPTER *)((char *)this + 72));
  if ( *((_DWORD *)this + 44) == 1 )
  {
    v4 = (DXGGLOBAL *)*((_QWORD *)this + 2);
    if ( DXGGLOBAL::CSAccountingInProgress(v4) )
    {
      v7 = *((_QWORD *)this + 24);
      CurrentProcess = PsGetCurrentProcess(v6, v5);
      DXGGLOBAL::ReportDripsBlocker(v4, 0LL, v7, CurrentProcess, 1LL);
    }
    DpiRequestDevicePowerState(*((_QWORD *)this + 24), 1, 0);
  }
  ExReleasePushLockSharedEx((char *)this + 72, 0LL);
  KeLeaveCriticalRegion();
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, 8013);
}
