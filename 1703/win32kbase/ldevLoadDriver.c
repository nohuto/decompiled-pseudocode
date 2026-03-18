/*
 * XREFs of ldevLoadDriver @ 0x1C005F8A0
 * Callers:
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C005F630 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00F836C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ldevUnloadImage @ 0x1C005F790 (ldevUnloadImage.c)
 *     ldevLoadImage @ 0x1C005FB00 (ldevLoadImage.c)
 *     MakeSystemRelativePath @ 0x1C005FD50 (MakeSystemRelativePath.c)
 *     FreeSystemRelativePath @ 0x1C005FE54 (FreeSystemRelativePath.c)
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C0062848 (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     WinSqmSetString @ 0x1C00E7780 (WinSqmSetString.c)
 */

__int64 __fastcall ldevLoadDriver(PCWSTR Source, __int64 a2, int a3)
{
  int v4; // r14d
  __int64 v6; // rax
  int v7; // r15d
  const WCHAR *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 Image; // rbx
  __int64 v12; // rax
  HSEMAPHORE v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int (__fastcall *v17)(__int64, _QWORD, _QWORD *); // rax
  HSEMAPHORE v18; // rcx
  __int64 v19; // rcx
  unsigned int (__fastcall *v20)(__int64, __int64, PFILE_OBJECT, __int64); // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v28[3]; // [rsp+40h] [rbp-20h] BYREF
  BOOL v29; // [rsp+58h] [rbp-8h]
  int v30; // [rsp+90h] [rbp+30h]

  v4 = a2;
  v6 = WdLogNewEntry5_WdEvent(Source, a2);
  *(_QWORD *)(v6 + 24) = Source;
  WdLogEvent5_WdEvent(v6);
  if ( !Source || !*Source )
    return 0LL;
  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
  v7 = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  if ( !gbDisableCddRemoteSessionFiltering && v4 == 1 && (unsigned int)(a3 - 2) <= 1 )
  {
    v7 = 1;
    if ( gbForceCddRemoteSessionBitmapSupport )
      a3 = 3;
    if ( !(unsigned int)MakeSystemRelativePath(Source, &Destination) )
    {
      v25 = WdLogNewEntry5_WdError(v23, v22, v24);
      WdLogEvent5_WdError(v25);
      return 0LL;
    }
  }
  v8 = L"cdd";
  if ( !v7 )
    v8 = Source;
  Image = ldevLoadImage(v8, v7);
  if ( !Image )
    goto LABEL_11;
  if ( v30 )
  {
    v12 = WdLogNewEntry5_WdTrace(v10);
    WdLogEvent5_WdTrace(v12);
LABEL_11:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    v13 = ghsemDriverMgmt;
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion(v14);
    }
    goto LABEL_13;
  }
  v28[2] = Destination.Buffer;
  v28[0] = 0LL;
  v29 = a3 == 3;
  v28[1] = 0LL;
  if ( v4 == 4 )
    WinSqmSetString(v10, v9, Source);
  v17 = *(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)(Image + 16) + 32LL);
  if ( !v17
    || !v17(196865LL, (unsigned int)(16 * (v7 + 1)), v28)
    || (unsigned int)(LODWORD(v28[0]) - 0x20000) > 0x10101
    || !(unsigned int)ldevFillTable(Image, v28) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion(v26);
    }
LABEL_33:
    ldevUnloadImage(Image);
    Image = 0LL;
    goto LABEL_25;
  }
  *(_DWORD *)(Image + 24) = v4;
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  v18 = ghsemDriverMgmt;
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    PsLeavePriorityRegion(v19);
  }
  v20 = *(unsigned int (__fastcall **)(__int64, __int64, PFILE_OBJECT, __int64))(*(_QWORD *)(Image + 896) + 616LL);
  if ( !v20 )
    goto LABEL_25;
  if ( !v20(qword_1C018C318, qword_1C018C310, FileObject, qword_1C018C320) )
    goto LABEL_33;
  *(_DWORD *)(Image + 904) = 1;
LABEL_25:
  v21 = WdLogNewEntry5_WdTrace(v18);
  WdLogEvent5_WdTrace(v21);
LABEL_13:
  if ( v7 )
    FreeSystemRelativePath(&Destination);
  v15 = WdLogNewEntry5_WdTrace(v13);
  *(_QWORD *)(v15 + 24) = Image;
  WdLogEvent5_WdTrace(v15);
  return Image;
}
