/*
 * XREFs of IopGetDeviceInterfaces @ 0x140519D98
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x1404412FC (PfSnOpenVolumesForPrefetch.c)
 *     IoGetDeviceInterfaces @ 0x140517360 (IoGetDeviceInterfaces.c)
 *     PiCMGetDeviceInterfaceList @ 0x140518AB4 (PiCMGetDeviceInterfaceList.c)
 *     ExpHwidProcessInterface @ 0x14055F97C (ExpHwidProcessInterface.c)
 *     IoRegisterPlugPlayNotification @ 0x140585FB0 (IoRegisterPlugPlayNotification.c)
 *     IopOpenSystemVariableDevice @ 0x1406BCF98 (IopOpenSystemVariableDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyExW @ 0x1400DF820 (RtlStringCchCopyExW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x140519634 (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     _PnpStringFromGuid @ 0x140519B48 (_PnpStringFromGuid.c)
 *     _CmOpenInterfaceClassRegKey @ 0x14051AE00 (_CmOpenInterfaceClassRegKey.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x14051AE6C (_CmSetDeviceInterfacePathFormat.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14051C998 (_CmOpenDeviceInterfaceRegKey.c)
 *     _PnpGetObjectProperty @ 0x140523128 (_PnpGetObjectProperty.c)
 *     PnpGetObjectProperty @ 0x14052531C (PnpGetObjectProperty.c)
 *     PnpUnicodeStringToWstrFree @ 0x140527F10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x140527F48 (PnpUnicodeStringToWstr.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x140528568 (PiPnpRtlApplyMandatoryFilters.c)
 */

__int64 __fastcall IopGetDeviceInterfaces(int *a1, const UNICODE_STRING *a2, int a3, char a4, _QWORD *a5, _DWORD *a6)
{
  _DWORD *v6; // r15
  PCUNICODE_STRING v7; // r13
  PVOID v8; // r14
  char v9; // si
  WCHAR *v10; // r12
  _WORD *v11; // rdi
  int MatchingFilteredDeviceInterfaceList; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v14; // r8d
  int v15; // r9d
  int v16; // eax
  int ObjectProperty; // eax
  int v18; // r9d
  PVOID v19; // r15
  PVOID v20; // rax
  unsigned int v21; // eax
  unsigned int v22; // r12d
  size_t v23; // rax
  NTSTRSAFE_PWSTR v24; // r14
  __int64 v25; // rcx
  __int64 v26; // r8
  _WORD *i; // rsi
  __int64 v29; // rax
  _WORD *PoolWithTag; // rax
  WCHAR *v31; // rax
  int v32; // ebx
  unsigned int v33; // r14d
  unsigned int cchDest; // [rsp+60h] [rbp-A0h] BYREF
  char cchDest_4; // [rsp+64h] [rbp-9Ch] BYREF
  char cchDest_5; // [rsp+65h] [rbp-9Bh] BYREF
  char cchDest_6; // [rsp+66h] [rbp-9Ah]
  PCUNICODE_STRING String1; // [rsp+68h] [rbp-98h]
  __int64 v39; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+78h] [rbp-88h]
  WCHAR *v41; // [rsp+80h] [rbp-80h]
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  int v43; // [rsp+90h] [rbp-70h] BYREF
  int v44; // [rsp+94h] [rbp-6Ch]
  unsigned int v45; // [rsp+98h] [rbp-68h]
  HANDLE v46; // [rsp+A0h] [rbp-60h] BYREF
  size_t pcchRemaining; // [rsp+A8h] [rbp-58h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v50; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v51; // [rsp+C8h] [rbp-38h]
  _QWORD v52[5]; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v54; // [rsp+108h] [rbp+8h] BYREF
  wchar_t v55[40]; // [rsp+130h] [rbp+30h] BYREF

  v6 = a6;
  v7 = a2;
  String1 = a2;
  v44 = a3;
  v51 = a5;
  v8 = 0LL;
  cchDest_6 = a4;
  v9 = 0;
  *a5 = 0LL;
  v10 = 0LL;
  v40 = (__int64)a6;
  P = 0LL;
  v11 = 0LL;
  v50 = 0LL;
  Handle = 0LL;
  v46 = 0LL;
  v41 = 0LL;
  cchDest = 0;
  v45 = 0;
  MatchingFilteredDeviceInterfaceList = PnpStringFromGuid(a1, v55);
  if ( MatchingFilteredDeviceInterfaceList < 0 )
    goto LABEL_86;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v16 = CmOpenInterfaceClassRegKey(PiPnpRtlCtx, (unsigned int)v55, v14, v15, 983103, 0, (__int64)&Handle, 0LL);
  MatchingFilteredDeviceInterfaceList = v16;
  if ( v16 == -1073741772 || v16 == -1073741766 )
  {
    cchDest = 1;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2uLL, 0x20207050u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0;
      MatchingFilteredDeviceInterfaceList = 0;
    }
    else
    {
      MatchingFilteredDeviceInterfaceList = -1073741670;
    }
    goto LABEL_27;
  }
  if ( v16 >= 0 )
  {
    ObjectProperty = PnpGetObjectProperty(
                       0x47706E50u,
                       0x400uLL,
                       (__int64)Handle,
                       0LL,
                       (__int64)&DEVPKEY_DeviceInterfaceClass_DefaultInterface,
                       (__int64)&v39,
                       (__int64)&P,
                       (__int64)&v43,
                       0);
    MatchingFilteredDeviceInterfaceList = ObjectProperty;
    if ( ObjectProperty < 0 || (_DWORD)v39 != 18 )
    {
      if ( ObjectProperty != -1073741275 && ObjectProperty != -1073741772 && ObjectProperty != -1073741766 )
      {
        if ( ObjectProperty >= 0 )
          MatchingFilteredDeviceInterfaceList = -1073741823;
        goto LABEL_26;
      }
      v19 = P;
      goto LABEL_8;
    }
    v19 = P;
    if ( (int)CmOpenDeviceInterfaceRegKey(PiPnpRtlCtx, (_DWORD)P, 48, v18, 131097, 0, (__int64)&v46, 0LL) < 0 )
    {
      v9 = 0;
LABEL_70:
      ExFreePoolWithTag(v19, 0);
      v19 = 0LL;
      P = 0LL;
      goto LABEL_9;
    }
    if ( String1 )
    {
      HIDWORD(v39) = 400;
      v31 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x20207050u);
      v41 = v31;
      v10 = v31;
      if ( !v31 )
      {
        MatchingFilteredDeviceInterfaceList = -1073741670;
        goto LABEL_25;
      }
      if ( (int)PnpGetObjectProperty(
                  PiPnpRtlCtx,
                  (_DWORD)v19,
                  3,
                  (_DWORD)v46,
                  0LL,
                  (__int64)&DEVPKEY_Device_InstanceId,
                  (__int64)&v39,
                  (__int64)v31,
                  HIDWORD(v39),
                  (__int64)&v39 + 4,
                  0) < 0
        || (_DWORD)v39 != 18
        || RtlInitUnicodeStringEx(&DestinationString, v10) < 0
        || !RtlEqualUnicodeString(String1, &DestinationString, 1u) )
      {
        goto LABEL_68;
      }
    }
    if ( (v44 & 1) == 0 )
    {
      v9 = 0;
      HIDWORD(v39) = 1;
      if ( (int)PnpGetObjectProperty(
                  PiPnpRtlCtx,
                  (_DWORD)v19,
                  3,
                  (_DWORD)v46,
                  0LL,
                  (__int64)&DEVPKEY_DeviceInterface_Enabled,
                  (__int64)&v39,
                  (__int64)&cchDest_5,
                  1,
                  (__int64)&v39 + 4,
                  0) < 0
        || v39 != 0x100000011LL )
      {
        goto LABEL_69;
      }
      if ( cchDest_5 != -1 )
      {
LABEL_68:
        v9 = 0;
        goto LABEL_69;
      }
    }
    cchDest_4 = 0;
    SeCaptureSubjectContext(&v54);
    v32 = PiPnpRtlApplyMandatoryFilters(PiPnpRtlCtx, (int)v19, 3, (int)v46, (BOOLEAN)&v54, (__int64)&cchDest_4);
    SeReleaseSubjectContext(&v54);
    if ( v32 < 0 )
      goto LABEL_68;
    v9 = 1;
    if ( !cchDest_4 )
      goto LABEL_68;
LABEL_69:
    ZwClose(v46);
    if ( !v9 )
      goto LABEL_70;
LABEL_8:
    LODWORD(v8) = v43;
LABEL_9:
    if ( String1 )
    {
      MatchingFilteredDeviceInterfaceList = PnpUnicodeStringToWstr(&v50, 0LL, String1);
      if ( MatchingFilteredDeviceInterfaceList < 0 )
        goto LABEL_25;
    }
    memset(v52, 0, sizeof(v52));
    v20 = (PVOID)v52[0];
    if ( v9 )
      v20 = v19;
    v52[0] = v20;
    SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v52[1]);
    v21 = 4096;
    cchDest = 4096;
    if ( v9 )
    {
      v33 = (unsigned int)v8 >> 1;
      if ( v33 >= 0x1000 )
      {
        v21 = v33 + 1;
        cchDest = v33 + 1;
      }
    }
    MatchingFilteredDeviceInterfaceList = -1073741789;
    v22 = 0;
    while ( v22 < 5 )
    {
      if ( v11 )
      {
        ExFreePoolWithTag(v11, 0);
        v21 = cchDest;
      }
      v11 = ExAllocatePoolWithTag(PagedPool, 2LL * v21, 0x20207050u);
      if ( !v11 )
      {
        MatchingFilteredDeviceInterfaceList = -1073741670;
        break;
      }
      v23 = cchDest;
      v45 = cchDest;
      if ( v9 )
      {
        MatchingFilteredDeviceInterfaceList = RtlStringCchCopyExW(
                                                v11,
                                                cchDest,
                                                (NTSTRSAFE_PCWSTR)v19,
                                                &ppszDestEnd,
                                                &pcchRemaining,
                                                0x800u);
        if ( MatchingFilteredDeviceInterfaceList < 0 )
          break;
        if ( !pcchRemaining )
        {
          MatchingFilteredDeviceInterfaceList = -1073741823;
          break;
        }
        v23 = pcchRemaining - 1;
        v24 = ++ppszDestEnd;
      }
      else
      {
        v24 = v11;
        ppszDestEnd = v11;
      }
      pcchRemaining = v23;
      MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                              *(__int64 *)&PiPnpRtlCtx,
                                              (__int64)v55,
                                              v50,
                                              (v44 & 1) == 0,
                                              (__int64)IopDeviceInterfaceFilterCallback,
                                              (__int64)v52,
                                              (__int64)v24,
                                              v23,
                                              (__int64)&cchDest,
                                              0);
      ++v22;
      v21 = v24 - v11 + cchDest;
      cchDest = v21;
      if ( MatchingFilteredDeviceInterfaceList != -1073741789 )
        break;
    }
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v52[1]);
    if ( MatchingFilteredDeviceInterfaceList < 0 )
      goto LABEL_24;
    if ( !cchDest )
    {
      cchDest = 1;
      if ( !v45 )
      {
        ExFreePoolWithTag(v11, 0);
        v11 = ExAllocatePoolWithTag(PagedPool, 2LL * cchDest, 0x20207050u);
        if ( !v11 )
        {
          MatchingFilteredDeviceInterfaceList = -1073741670;
LABEL_24:
          v10 = v41;
LABEL_25:
          v6 = (_DWORD *)v40;
LABEL_26:
          v7 = String1;
          goto LABEL_27;
        }
      }
      *v11 = 0;
    }
    if ( !cchDest_6 )
    {
      for ( i = v11; *i; i += v29 + 1 )
      {
        LOBYTE(v26) = 1;
        MatchingFilteredDeviceInterfaceList = CmSetDeviceInterfacePathFormat(v25, i, v26);
        if ( MatchingFilteredDeviceInterfaceList < 0 )
          break;
        v29 = -1LL;
        do
          ++v29;
        while ( i[v29] );
      }
    }
    goto LABEL_24;
  }
LABEL_27:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( MatchingFilteredDeviceInterfaceList >= 0 )
  {
    *v51 = v11;
    if ( v6 )
      *v6 = 2 * cchDest;
    v11 = 0LL;
    v8 = P;
    goto LABEL_31;
  }
  v8 = P;
LABEL_86:
  *v51 = 0LL;
  if ( v6 )
    *v6 = 0;
LABEL_31:
  if ( Handle )
    ZwClose(Handle);
  PnpUnicodeStringToWstrFree(v50, v7);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)MatchingFilteredDeviceInterfaceList;
}
