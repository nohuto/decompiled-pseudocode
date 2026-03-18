/*
 * XREFs of ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F7638
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C005C288 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C0037AD0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0037B60 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C0082638 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F7A20 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 */

__int64 __fastcall DrvUpdateDisplayModeInMdev(struct _MDEV *a1, struct _D3DKMT_GETPATHSMODALITY *a2)
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
  __int64 v14; // rcx
  int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int updated; // esi
  struct _DEVCAPS *v19; // rdx
  _DWORD *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  struct _ERESOURCE *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  struct _ERESOURCE *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // [rsp+40h] [rbp+18h] BYREF

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
    *(_QWORD *)(v6 + 24) = 26586LL;
    goto LABEL_3;
  }
  if ( *((_WORD *)a2 + 10) != 1 )
  {
    v6 = WdLogNewEntry5_WdEvent(v5, v4);
    *(_QWORD *)(v6 + 24) = 26591LL;
    goto LABEL_3;
  }
  v8 = *(_QWORD *)a1;
  if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C018BB80)(
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
      EngAcquireSemaphore(ghsemDwmState);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDwmState", (int)ghsemDwmState, 7);
      EngAcquireSemaphore(ghsemPalette);
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
        v33 = *(_QWORD *)a1;
        vGetDeviceCaps((struct PDEVOBJ *)&v33, v19);
      }
      else
      {
        v22 = WdLogNewEntry5_WdEvent(v17, v16);
        *(_QWORD *)(v22 + 24) = 6LL;
        WdLogEvent5_WdEvent(v22);
      }
      GreReleaseHmgrSemaphore(v21);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemRFONTList");
      if ( ghsemRFONTList )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemRFONTList);
        PsLeavePriorityRegion(v23);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemPublicPFT");
      if ( ghsemPublicPFT )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPublicPFT);
        PsLeavePriorityRegion(v24);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemPalette");
      if ( ghsemPalette )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPalette);
        PsLeavePriorityRegion(v25);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState");
      if ( ghsemDwmState )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
        PsLeavePriorityRegion(v26);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemDevLock()");
      v27 = *(struct _ERESOURCE **)(v8 + 40);
      if ( v27 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v27);
        PsLeavePriorityRegion(v28);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT");
      if ( ghsemHT )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
        PsLeavePriorityRegion(v29);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite");
      if ( ghsemSprite )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
        PsLeavePriorityRegion(v30);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemPointer()");
      v31 = *(struct _ERESOURCE **)(v8 + 48);
      if ( v31 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v31);
        PsLeavePriorityRegion(v32);
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
