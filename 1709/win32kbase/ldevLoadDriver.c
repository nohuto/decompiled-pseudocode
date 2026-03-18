/*
 * XREFs of ldevLoadDriver @ 0x1C006DE40
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C005DFCC (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C006B718 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     ldevUnloadImage @ 0x1C006DD30 (ldevUnloadImage.c)
 *     ldevLoadImage @ 0x1C006E0A0 (ldevLoadImage.c)
 *     MakeSystemRelativePath @ 0x1C006E2F0 (MakeSystemRelativePath.c)
 *     FreeSystemRelativePath @ 0x1C006E3F4 (FreeSystemRelativePath.c)
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C006E878 (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     WinSqmSetString @ 0x1C00ECD6C (WinSqmSetString.c)
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
  PERESOURCE v13; // rcx
  __int64 v14; // rax
  unsigned int (__fastcall *v16)(__int64, _QWORD, _QWORD *); // rax
  PERESOURCE v17; // rcx
  unsigned int (__fastcall *v18)(__int64, __int64, PFILE_OBJECT, __int64); // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v25[3]; // [rsp+40h] [rbp-20h] BYREF
  BOOL v26; // [rsp+58h] [rbp-8h]
  int v27; // [rsp+90h] [rbp+30h]

  v4 = a2;
  v6 = WdLogNewEntry5_WdEvent(Source, a2);
  *(_QWORD *)(v6 + 24) = Source;
  WdLogEvent5_WdEvent(v6);
  if ( !Source || !*Source )
    return 0LL;
  EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
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
      v23 = WdLogNewEntry5_WdError(v21, v20, v22);
      WdLogEvent5_WdError(v23);
      return 0LL;
    }
  }
  v8 = L"cdd";
  if ( !v7 )
    v8 = Source;
  Image = ldevLoadImage(v8, v7);
  if ( !Image )
    goto LABEL_11;
  if ( v27 )
  {
    v12 = WdLogNewEntry5_WdTrace(v10);
    WdLogEvent5_WdTrace(v12);
LABEL_11:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    v13 = ghsemDriverMgmt;
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
      PsLeavePriorityRegion();
    }
    goto LABEL_13;
  }
  v25[2] = Destination.Buffer;
  v25[0] = 0LL;
  v26 = a3 == 3;
  v25[1] = 0LL;
  if ( v4 == 4 )
    WinSqmSetString(v10, v9, Source);
  v16 = *(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)(Image + 16) + 32LL);
  if ( !v16
    || !v16(196865LL, (unsigned int)(16 * (v7 + 1)), v25)
    || (unsigned int)(LODWORD(v25[0]) - 0x20000) > 0x10101
    || !(unsigned int)ldevFillTable(Image, v25) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
      PsLeavePriorityRegion();
    }
LABEL_33:
    ldevUnloadImage(Image);
    Image = 0LL;
    goto LABEL_25;
  }
  *(_DWORD *)(Image + 24) = v4;
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  v17 = ghsemDriverMgmt;
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
    PsLeavePriorityRegion();
  }
  v18 = *(unsigned int (__fastcall **)(__int64, __int64, PFILE_OBJECT, __int64))(*(_QWORD *)(Image + 896) + 616LL);
  if ( !v18 )
    goto LABEL_25;
  if ( !v18(qword_1C0191048, qword_1C0191040, FileObject, qword_1C0191050) )
    goto LABEL_33;
  *(_DWORD *)(Image + 904) = 1;
LABEL_25:
  v19 = WdLogNewEntry5_WdTrace(v17);
  WdLogEvent5_WdTrace(v19);
LABEL_13:
  if ( v7 )
    FreeSystemRelativePath(&Destination);
  v14 = WdLogNewEntry5_WdTrace(v13);
  *(_QWORD *)(v14 + 24) = Image;
  WdLogEvent5_WdTrace(v14);
  return Image;
}
