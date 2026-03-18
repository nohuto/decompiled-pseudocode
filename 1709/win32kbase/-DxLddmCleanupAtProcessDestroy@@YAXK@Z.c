/*
 * XREFs of ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00683A8
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007B8E0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C003E02C (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     GreLockVisRgn @ 0x1C003E280 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C003FD70 (GreUnlockVisRgn.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0042C1C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     hdevEnumerate @ 0x1C00684D0 (hdevEnumerate.c)
 *     GreLockDisplayDevice @ 0x1C0068620 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C0068660 (GreUnlockDisplayDevice.c)
 *     DxLddmFindProcessEntry @ 0x1C00686A0 (DxLddmFindProcessEntry.c)
 *     GreLockSprite @ 0x1C00686C0 (GreLockSprite.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1C00F2ABC (-DxLddmLogProcessPrimaryLockCount@@YAXK@Z.c)
 */

void __fastcall DxLddmCleanupAtProcessDestroy(unsigned int a1)
{
  unsigned int v2; // esi
  __int64 v3; // rdi
  int v4; // eax
  unsigned int v5; // ebp
  int v6; // eax
  int v7; // edx
  int v8; // r8d
  __int64 *ProcessEntry; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  void (__fastcall *v13)(__int64, __int64); // rbp
  __int64 v14; // rbx
  __int64 CurrentProcess; // rax
  __int64 v16; // rdx
  int v17; // r8d
  __int64 v18; // rax
  _QWORD *v19; // rcx
  int v20; // eax
  void (__fastcall *v21)(_QWORD, __int64); // rax
  int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rbx
  __int64 v25; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v25);
  v3 = hdevEnumerate(0LL);
  if ( v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v3 + 32);
      v5 = v2;
      v25 = v3;
      if ( (v4 & 0x20000) == 0 && (v4 & 1) != 0 )
      {
        LOBYTE(v6) = PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v25);
        if ( v6 )
        {
          GreLockVisRgn(v3, v7, v8);
          GreLockSprite(v3);
          GreLockDisplayDevice(v3);
          ProcessEntry = (__int64 *)DxLddmFindProcessEntry(v3 + 2640, a1);
          v12 = (__int64)ProcessEntry;
          if ( ProcessEntry )
          {
            v18 = *ProcessEntry;
            if ( *(_QWORD *)(v18 + 8) != v12 || (v19 = *(_QWORD **)(v12 + 8), *v19 != v12) )
              __fastfail(3u);
            *v19 = v18;
            *(_QWORD *)(v18 + 8) = v19;
            v20 = *(_DWORD *)(v12 + 20);
            if ( v20 )
            {
              *(_DWORD *)(v3 + 2656) -= v20;
              v21 = *(void (__fastcall **)(_QWORD, __int64))(v3 + 2664);
              if ( v21 )
                v21(*(_QWORD *)(v3 + 1816), v12 + 28);
              if ( (int)IsvSpUnTearDownSpritesSupported() >= 0 )
                vSpUnTearDownSprites(v3, v12 + 28, 1LL);
            }
            v22 = -1;
            v23 = v2 + *(_DWORD *)(v12 + 24);
            if ( v23 >= v2 )
              v22 = v2 + *(_DWORD *)(v12 + 24);
            v2 = v22;
            if ( v23 < v5 )
              v2 = -1;
            Win32FreePool(v12);
          }
          v13 = *(void (__fastcall **)(__int64, __int64))(v3 + 2672);
          if ( v13 )
          {
            v14 = *(_QWORD *)(v3 + 1816);
            CurrentProcess = PsGetCurrentProcess(v11, v10);
            v13(v14, CurrentProcess);
          }
          else
          {
            v24 = WdLogNewEntry5_WdError();
            *(_QWORD *)(v24 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
            WdLogEvent5_WdError(v24);
          }
          GreUnlockDisplayDevice(v3);
          EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
          if ( ghsemSprite )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
            PsLeavePriorityRegion();
          }
          GreUnlockVisRgn(v3, v16, v17);
        }
      }
      v3 = hdevEnumerate(v3);
    }
    while ( v3 );
    if ( v2 )
      DxLddmLogProcessPrimaryLockCount(v2);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
}
