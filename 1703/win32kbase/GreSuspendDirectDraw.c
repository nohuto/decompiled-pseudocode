/*
 * XREFs of GreSuspendDirectDraw @ 0x1C005AC10
 * Callers:
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C005AB24 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C005EFF0 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvDisableMDEV @ 0x1C0098680 (DrvDisableMDEV.c)
 * Callees:
 *     GreUnlockVisRgn @ 0x1C0037960 (GreUnlockVisRgn.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0037A44 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreLockVisRgn @ 0x1C0037BE0 (GreLockVisRgn.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00386EC (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C005AD88 (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     hdevEnumerate @ 0x1C005BFB0 (hdevEnumerate.c)
 *     GreLockDisplayDevice @ 0x1C005C1F0 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C005C230 (GreUnlockDisplayDevice.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     DrvDxgkDisplayOnOff @ 0x1C0091950 (DrvDxgkDisplayOnOff.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GreSuspendDirectDraw(HDEV a1, unsigned int a2)
{
  PDEV *i; // rcx
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // ecx
  int v8; // edx
  int v9; // r8d
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  char v14; // [rsp+48h] [rbp+10h] BYREF
  char v15; // [rsp+50h] [rbp+18h] BYREF
  __int64 v16; // [rsp+58h] [rbp+20h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
  DisplayScenarioJournalDisplayUniquenessIncremented();
  DxLddmPrimaryLockCleanUp(a1);
  if ( (a2 & 1) != 0 && !gProtocolType )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v15);
    for ( i = 0LL; ; i = (PDEV *)v6 )
    {
      v5 = hdevEnumerate(i);
      v6 = v5;
      if ( !v5 )
        break;
      v7 = *(_DWORD *)(v5 + 32) & 0x20401;
      v16 = v5;
      if ( v7 == 1 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v16) )
      {
        GreLockVisRgn(v6, v8, v9);
        GreLockDisplayDevice(v6);
        v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, char *))qword_1C018BB88)(
                *(_QWORD *)(*(_QWORD *)(v6 + 2592) + 256LL),
                *(unsigned int *)(*(_QWORD *)(v6 + 2592) + 272LL),
                &v14);
        *(_DWORD *)(v6 + 2632) = 1;
        if ( ((a2 & 8) == 0 || v10) && *(_QWORD *)(v6 + 2744) )
        {
          if ( ((a2 >> 2) & 1) == 0 || (LOBYTE(v11) = 0, !v14) )
            LOBYTE(v11) = 1;
          DrvDxgkDisplayOnOff(v6, v11, 3LL);
          if ( ((a2 >> 2) & 1) == 0 || (v13 = 0LL, !v14) )
            v13 = 1LL;
          (*(void (__fastcall **)(_QWORD, __int64))(v6 + 2744))(*(_QWORD *)(v6 + 1816), v13);
        }
        *(_DWORD *)(v6 + 2632) = 0;
        GreUnlockDisplayDevice(v6);
        GreUnlockVisRgn(v6);
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion(v12);
    }
  }
}
