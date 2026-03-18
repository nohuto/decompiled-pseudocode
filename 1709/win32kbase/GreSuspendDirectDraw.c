/*
 * XREFs of GreSuspendDirectDraw @ 0x1C0067770
 * Callers:
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0060708 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C0067684 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     DrvDisableMDEV @ 0x1C00A27D0 (DrvDisableMDEV.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C003CD58 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     GreLockVisRgn @ 0x1C003E280 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C003FD70 (GreUnlockVisRgn.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0042C1C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C00678EC (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     hdevEnumerate @ 0x1C00684D0 (hdevEnumerate.c)
 *     GreLockDisplayDevice @ 0x1C0068620 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C0068660 (GreUnlockDisplayDevice.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     DrvDxgkDisplayOnOff @ 0x1C0094F90 (DrvDxgkDisplayOnOff.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GreSuspendDirectDraw(HDEV a1, unsigned int a2)
{
  __int64 i; // rcx
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // eax
  int v8; // edx
  int v9; // r8d
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // r8d
  __int64 v14; // rdx
  char v15; // [rsp+48h] [rbp+10h] BYREF
  char v16; // [rsp+50h] [rbp+18h] BYREF
  __int64 v17; // [rsp+58h] [rbp+20h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
  DisplayScenarioJournalDisplayUniquenessIncremented();
  DxLddmPrimaryLockCleanUp(a1);
  if ( (a2 & 1) != 0 && !gProtocolType )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v16);
    for ( i = 0LL; ; i = v6 )
    {
      v5 = hdevEnumerate(i);
      v6 = v5;
      if ( !v5 )
        break;
      v17 = v5;
      v7 = *(_DWORD *)(v5 + 32);
      if ( (v7 & 1) != 0
        && (v7 & 0x400) == 0
        && (v7 & 0x20000) == 0
        && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v17) )
      {
        GreLockVisRgn(v6, v8, v9);
        GreLockDisplayDevice(v6);
        v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, char *))qword_1C01907F0)(
                *(_QWORD *)(*(_QWORD *)(v6 + 2592) + 256LL),
                *(unsigned int *)(*(_QWORD *)(v6 + 2592) + 272LL),
                &v15);
        *(_DWORD *)(v6 + 2632) = 1;
        if ( ((a2 & 8) == 0 || v10) && *(_QWORD *)(v6 + 2744) )
        {
          if ( ((a2 >> 2) & 1) == 0 || (LOBYTE(v11) = 0, !v15) )
            LOBYTE(v11) = 1;
          DrvDxgkDisplayOnOff(v6, v11, 3LL);
          if ( ((a2 >> 2) & 1) == 0 || (v14 = 0LL, !v15) )
            v14 = 1LL;
          (*(void (__fastcall **)(_QWORD, __int64))(v6 + 2744))(*(_QWORD *)(v6 + 1816), v14);
        }
        *(_DWORD *)(v6 + 2632) = 0;
        GreUnlockDisplayDevice(v6);
        GreUnlockVisRgn(v6, v12, v13);
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion();
    }
  }
}
