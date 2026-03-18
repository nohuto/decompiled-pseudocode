/*
 * XREFs of ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F8460
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00686F4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C00894E0 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F8848 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

__int64 __fastcall DrvUpdateDisplayModeInMdev(struct _MDEV *a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int (__fastcall *v12)(_QWORD); // rax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int updated; // esi
  struct _DEVCAPS *v19; // rdx
  _DWORD *v20; // rcx
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // r8d
  __int64 v24; // rax
  int v25; // r8d
  int v26; // r8d
  __int64 v27; // rcx
  int v28; // r8d
  __int64 v29; // rcx
  int v30; // r8d
  __int64 v31; // rcx
  int v32; // r8d
  __int64 v33; // rcx
  int v34; // r8d
  struct _ERESOURCE *v35; // rcx
  __int64 v36; // rcx
  int v37; // r8d
  __int64 v38; // rcx
  int v39; // r8d
  __int64 v40; // rcx
  struct _ERESOURCE *v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // [rsp+40h] [rbp+18h] BYREF

  if ( !(unsigned int)IsDwmActive(a1) || *((_DWORD *)a1 + 5) != 1 )
  {
    v6 = WdLogNewEntry5_WdEvent(v5, v4);
    *(_QWORD *)(v6 + 24) = 5LL;
LABEL_3:
    WdLogEvent5_WdEvent(v6);
    return 0LL;
  }
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdEvent(v5, v4);
    *(_QWORD *)(v6 + 24) = 25952LL;
    goto LABEL_3;
  }
  if ( *((_WORD *)a2 + 10) != 1 )
  {
    v6 = WdLogNewEntry5_WdEvent(v5, v4);
    *(_QWORD *)(v6 + 24) = 25957LL;
    goto LABEL_3;
  }
  v8 = *(_QWORD *)a1;
  if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C01907E8)(
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 2592LL) + 256LL),
                          *(unsigned int *)(*(_QWORD *)(*(_QWORD *)a1 + 2592LL) + 272LL)) )
  {
    v12 = *(unsigned int (__fastcall **)(_QWORD))(v8 + 2688);
    if ( v12 && v12(*(_QWORD *)(v8 + 1816)) )
    {
      EngAcquireSemaphore(*(HSEMAPHORE *)(v8 + 48));
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemPointer()", *(_QWORD *)(v8 + 48), 4);
      EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
      EngAcquireSemaphore(ghsemHT);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemHT", (int)ghsemHT, 6);
      EngAcquireSemaphore(*(HSEMAPHORE *)(v8 + 40));
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemDevLock()", *(_QWORD *)(v8 + 40), 11);
      EngAcquireSemaphore((HSEMAPHORE)ghsemDwmState);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDwmState", (int)ghsemDwmState, 7);
      EngAcquireSemaphore((HSEMAPHORE)ghsemPalette);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPalette", (int)ghsemPalette, 13);
      EngAcquireSemaphore(ghsemPublicPFT);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, 14);
      EngAcquireSemaphore(ghsemRFONTList);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemRFONTList", (int)ghsemRFONTList, 15);
      GreAcquireHmgrSemaphore(v14, v13, v15);
      updated = DrvUpdateDisplayModeInPdev(*((HDEV *)a1 + 4), a2);
      if ( updated )
      {
        v19 = gpGdiDevCaps;
        v20 = *(_DWORD **)(*((_QWORD *)a1 + 4) + 2608LL);
        *((_DWORD *)a1 + 12) = v20[19];
        *((_DWORD *)a1 + 13) = v20[20];
        *((_DWORD *)a1 + 14) = v20[19] + v20[43];
        *((_DWORD *)a1 + 15) = v20[20] + v20[44];
        v43 = *(_QWORD *)a1;
        vGetDeviceCaps((struct PDEVOBJ *)&v43, v19);
      }
      else
      {
        v24 = WdLogNewEntry5_WdEvent(v17, v16);
        *(_QWORD *)(v24 + 24) = 6LL;
        WdLogEvent5_WdEvent(v24);
      }
      GreReleaseHmgrSemaphore(v22, v21, v23);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemRFONTList", (int)ghsemRFONTList, v25);
      if ( ghsemRFONTList )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemRFONTList);
        PsLeavePriorityRegion(v27);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, v26);
      if ( ghsemPublicPFT )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPublicPFT);
        PsLeavePriorityRegion(v29);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemPalette", (int)ghsemPalette, v28);
      if ( ghsemPalette )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemPalette);
        PsLeavePriorityRegion(v31);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (int)ghsemDwmState, v30);
      if ( ghsemDwmState )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDwmState);
        PsLeavePriorityRegion(v33);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemDevLock()", *(_QWORD *)(v8 + 40), v32);
      v35 = *(struct _ERESOURCE **)(v8 + 40);
      if ( v35 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v35);
        PsLeavePriorityRegion(v36);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT", (int)ghsemHT, v34);
      if ( ghsemHT )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
        PsLeavePriorityRegion(v38);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (int)ghsemSprite, v37);
      if ( ghsemSprite )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
        PsLeavePriorityRegion(v40);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemPointer()", *(_QWORD *)(v8 + 48), v39);
      v41 = *(struct _ERESOURCE **)(v8 + 48);
      if ( v41 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v41);
        PsLeavePriorityRegion(v42);
      }
      return updated;
    }
    v11 = WdLogNewEntry5_WdEvent(v10, v9);
    *(_QWORD *)(v11 + 24) = 0LL;
  }
  else
  {
    v11 = WdLogNewEntry5_WdEvent(v10, v9);
    *(_QWORD *)(v11 + 24) = 7LL;
  }
  WdLogEvent5_WdEvent(v11);
  return 0;
}
