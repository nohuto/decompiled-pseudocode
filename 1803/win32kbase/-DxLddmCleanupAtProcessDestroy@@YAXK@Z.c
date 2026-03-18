/*
 * XREFs of ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C004E708
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C006127C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0031BBC (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     GreLockVisRgn @ 0x1C00333D0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0033460 (GreUnlockVisRgn.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0033588 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreLockSprite @ 0x1C0034910 (GreLockSprite.c)
 *     hdevEnumerate @ 0x1C004E820 (hdevEnumerate.c)
 *     GreLockDisplayDevice @ 0x1C004E9C0 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C004EA00 (GreUnlockDisplayDevice.c)
 *     ?DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z @ 0x1C004EA3C (-DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1C00C87CC (-DxLddmLogProcessPrimaryLockCount@@YAXK@Z.c)
 */

void __fastcall DxLddmCleanupAtProcessDestroy(unsigned int a1)
{
  HDEV v2; // rdi
  int v3; // eax
  int v4; // eax
  int v5; // edx
  int v6; // r8d
  void (__fastcall *v7)(__int64, __int64); // rsi
  __int64 v8; // rbx
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  int v11; // r8d
  __int64 v12; // rbx
  HDEV v13; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v13);
  v2 = (HDEV)hdevEnumerate(0LL);
  if ( v2 )
  {
    do
    {
      v3 = *((_DWORD *)v2 + 10);
      v13 = v2;
      if ( (v3 & 0x20000) == 0 && (v3 & 1) != 0 )
      {
        LOBYTE(v4) = PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v13);
        if ( v4 )
        {
          GreLockVisRgn((__int64)v2, v5, v6);
          GreLockSprite();
          GreLockDisplayDevice(v2);
          DxLddmPrimaryLockProcessDestroy(v2, a1, &v14);
          v7 = (void (__fastcall *)(__int64, __int64))*((_QWORD *)v2 + 331);
          if ( v7 )
          {
            v8 = *((_QWORD *)v2 + 224);
            CurrentProcess = PsGetCurrentProcess();
            v7(v8, CurrentProcess);
          }
          else
          {
            v12 = WdLogNewEntry5_WdError();
            *(_QWORD *)(v12 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
            WdLogEvent5_WdError(v12);
          }
          GreUnlockDisplayDevice(v2);
          EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
          if ( ghsemSprite )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
            PsLeavePriorityRegion();
          }
          GreUnlockVisRgn((int)v2, v10, v11);
        }
      }
      v2 = (HDEV)hdevEnumerate(v2);
    }
    while ( v2 );
    if ( v14 )
      DxLddmLogProcessPrimaryLockCount(v14);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
}
