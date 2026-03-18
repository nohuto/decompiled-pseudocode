/*
 * XREFs of ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C005BE80
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0068EFC (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     GreUnlockVisRgn @ 0x1C0037960 (GreUnlockVisRgn.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0037A44 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreLockVisRgn @ 0x1C0037BE0 (GreLockVisRgn.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0038F1C (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     hdevEnumerate @ 0x1C005BFB0 (hdevEnumerate.c)
 *     GreLockSprite @ 0x1C005C0E0 (GreLockSprite.c)
 *     GreLockDisplayDevice @ 0x1C005C1F0 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C005C230 (GreUnlockDisplayDevice.c)
 *     DxLddmFindProcessEntry @ 0x1C005C270 (DxLddmFindProcessEntry.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1C00EFF9C (-DxLddmLogProcessPrimaryLockCount@@YAXK@Z.c)
 */

void __fastcall DxLddmCleanupAtProcessDestroy(unsigned int a1)
{
  unsigned int v2; // esi
  __int64 v3; // rdi
  unsigned int v4; // ebp
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  int v8; // r8d
  __int64 *ProcessEntry; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  void (__fastcall *v15)(__int64, __int64); // rbp
  __int64 v16; // rbx
  __int64 CurrentProcess; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  int v20; // eax
  void (__fastcall *v21)(_QWORD, __int64); // rax
  int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v27);
  v3 = hdevEnumerate(0LL);
  if ( v3 )
  {
    do
    {
      v4 = v2;
      v5 = *(_DWORD *)(v3 + 32) & 0x20001;
      v27 = v3;
      if ( v5 == 1 )
      {
        LOBYTE(v6) = PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v27);
        if ( v6 )
        {
          GreLockVisRgn(v3, v7, v8);
          GreLockSprite(v3);
          GreLockDisplayDevice(v3);
          ProcessEntry = (__int64 *)DxLddmFindProcessEntry(v3 + 2640, a1);
          v14 = (__int64)ProcessEntry;
          if ( ProcessEntry )
          {
            v18 = *ProcessEntry;
            v19 = (_QWORD *)ProcessEntry[1];
            if ( *(_QWORD *)(v18 + 8) != v14 || *v19 != v14 )
              __fastfail(3u);
            *v19 = v18;
            *(_QWORD *)(v18 + 8) = v19;
            v20 = *(_DWORD *)(v14 + 20);
            if ( v20 )
            {
              *(_DWORD *)(v3 + 2656) -= v20;
              v21 = *(void (__fastcall **)(_QWORD, __int64))(v3 + 2664);
              if ( v21 )
                v21(*(_QWORD *)(v3 + 1816), v14 + 28);
              if ( (int)IsvSpUnTearDownSpritesSupported() >= 0 )
                vSpUnTearDownSprites(v3, v14 + 28, 1LL);
            }
            v22 = -1;
            v23 = v2 + *(_DWORD *)(v14 + 24);
            if ( v23 >= v2 )
              v22 = v2 + *(_DWORD *)(v14 + 24);
            v2 = v22;
            if ( v23 < v4 )
              v2 = -1;
            Win32FreePool(v14);
          }
          v15 = *(void (__fastcall **)(__int64, __int64))(v3 + 2672);
          if ( v15 )
          {
            v16 = *(_QWORD *)(v3 + 1816);
            CurrentProcess = PsGetCurrentProcess(v11, v10, v12, v13);
            v15(v16, CurrentProcess);
          }
          else
          {
            v24 = WdLogNewEntry5_WdError(v11, v10, v12);
            *(_QWORD *)(v24 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
            WdLogEvent5_WdError(v24);
          }
          GreUnlockDisplayDevice(v3);
          EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
          if ( ghsemSprite )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
            PsLeavePriorityRegion(v25);
          }
          GreUnlockVisRgn(v3);
        }
      }
      v3 = hdevEnumerate((PDEV *)v3);
    }
    while ( v3 );
    if ( v2 )
      DxLddmLogProcessPrimaryLockCount(v2);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v26);
  }
}
