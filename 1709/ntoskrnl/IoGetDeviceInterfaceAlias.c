/*
 * XREFs of IoGetDeviceInterfaceAlias @ 0x14044B2B0
 * Callers:
 *     PiCMGetDeviceInterfaceAlias @ 0x14044B0D0 (PiCMGetDeviceInterfaceAlias.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x14044B5FC (_CmGetDeviceInterfacePathFormat.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x14044B688 (_CmGetDeviceInterfaceReferenceString.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     _PnpStringFromGuid @ 0x140519B48 (_PnpStringFromGuid.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14051C998 (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmValidateDeviceInterfaceName @ 0x14051E570 (_CmValidateDeviceInterfaceName.c)
 *     _PnpGetObjectProperty @ 0x140523128 (_PnpGetObjectProperty.c)
 *     PnpUnicodeStringToWstrFree @ 0x140527F10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x140527F48 (PnpUnicodeStringToWstr.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x140528568 (PiPnpRtlApplyMandatoryFilters.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     _CmGetDeviceInterfaceName @ 0x14057FAF4 (_CmGetDeviceInterfaceName.c)
 */

NTSTATUS __stdcall IoGetDeviceInterfaceAlias(
        PUNICODE_STRING SymbolicLinkName,
        const GUID *AliasInterfaceClassGuid,
        PUNICODE_STRING AliasSymbolicLinkName)
{
  void *v6; // r14
  PVOID v7; // rsi
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rcx
  int ObjectProperty; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PVOID PoolWithTag; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  WCHAR *v18; // rdi
  char v19; // r12
  int v20; // r9d
  __int64 v22; // rcx
  unsigned int v23; // ebx
  __int64 v24; // rcx
  int IsServiceSession; // [rsp+20h] [rbp-E0h]
  int IsServiceSessiona; // [rsp+20h] [rbp-E0h]
  char v27; // [rsp+60h] [rbp-A0h] BYREF
  char v28; // [rsp+61h] [rbp-9Fh] BYREF
  unsigned int v29; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v30; // [rsp+68h] [rbp-98h] BYREF
  int v31[2]; // [rsp+70h] [rbp-90h] BYREF
  int v32; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v33[4]; // [rsp+7Ch] [rbp-84h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v36[80]; // [rsp+B0h] [rbp-50h] BYREF

  v27 = 0;
  *(_QWORD *)v31 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( !SymbolicLinkName || !SymbolicLinkName->Buffer || !SymbolicLinkName->Length )
  {
    ObjectProperty = -1073741811;
    goto LABEL_25;
  }
  v9 = PnpUnicodeStringToWstr(v31, 0LL, SymbolicLinkName);
  v8 = *(_QWORD *)v31;
  ObjectProperty = v9;
  if ( v9 >= 0 )
  {
    if ( (int)CmValidateDeviceInterfaceName(v10, *(_QWORD *)v31) < 0 )
    {
      ObjectProperty = -1073741811;
      goto LABEL_29;
    }
    SeCaptureSubjectContext(&SubjectContext);
    ObjectProperty = PiPnpRtlApplyMandatoryFilters(PiPnpRtlCtx, v8, 3, 0, (BOOLEAN)&SubjectContext, (__int64)&v27);
    SeReleaseSubjectContext(&SubjectContext);
    if ( ObjectProperty >= 0 )
    {
      if ( !v27 )
      {
        ObjectProperty = -1073741790;
        goto LABEL_29;
      }
      ObjectProperty = PnpStringFromGuid(AliasInterfaceClassGuid, v36);
      if ( ObjectProperty >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x20207050u);
        v6 = PoolWithTag;
        if ( PoolWithTag )
        {
          v14 = *(_QWORD *)v31;
          ObjectProperty = PnpGetObjectProperty(
                             PiPnpRtlCtx,
                             v31[0],
                             3,
                             0,
                             0LL,
                             (__int64)&DEVPKEY_Device_InstanceId,
                             (__int64)&v32,
                             (__int64)PoolWithTag,
                             400,
                             (__int64)v33,
                             0);
          if ( ObjectProperty < 0 )
          {
LABEL_24:
            ExReleaseResourceLite(&PnpRegistryDeviceResource);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            v8 = *(_QWORD *)v31;
LABEL_25:
            if ( v7 )
              ExFreePoolWithTag(v7, 0);
            if ( v6 )
              ExFreePoolWithTag(v6, 0);
            goto LABEL_29;
          }
          if ( v32 != 18 )
          {
            ObjectProperty = -1073741585;
            goto LABEL_24;
          }
          v29 = 128;
          v7 = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x20207050u);
          if ( v7 )
          {
            ObjectProperty = CmGetDeviceInterfaceReferenceString(v15, v14, v7, 128LL, &v29);
            if ( ObjectProperty != -1073741789 )
              goto LABEL_14;
            ExFreePoolWithTag(v7, 0);
            v7 = ExAllocatePoolWithTag(PagedPool, 2LL * v29, 0x20207050u);
            if ( v7 )
            {
              ObjectProperty = CmGetDeviceInterfaceReferenceString(v22, v14, v7, v29, &v29);
LABEL_14:
              if ( ObjectProperty == -1073741772 )
              {
                ObjectProperty = 0;
                ExFreePoolWithTag(v7, 0);
                v7 = 0LL;
              }
              if ( ObjectProperty < 0 )
                goto LABEL_24;
              ObjectProperty = CmGetDeviceInterfacePathFormat(v16, v14, &v28);
              if ( ObjectProperty < 0 )
                goto LABEL_24;
              v30 = 512;
              v18 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x20207050u);
              if ( v18 )
              {
                v19 = v28;
                LOBYTE(IsServiceSession) = v28;
                ObjectProperty = CmGetDeviceInterfaceName(v17, v36, v6, v7, IsServiceSession, v18, 512, &v30);
                if ( ObjectProperty != -1073741789 )
                {
LABEL_20:
                  if ( ObjectProperty >= 0 )
                  {
                    ObjectProperty = RtlInitUnicodeStringEx(AliasSymbolicLinkName, v18);
                    if ( ObjectProperty >= 0 )
                    {
                      ObjectProperty = CmOpenDeviceInterfaceRegKey(
                                         PiPnpRtlCtx,
                                         (_DWORD)v18,
                                         48,
                                         v20,
                                         131097,
                                         0,
                                         (__int64)&Handle,
                                         0LL);
                      if ( ObjectProperty >= 0 )
                        ZwClose(Handle);
                      else
                        RtlFreeUnicodeString(AliasSymbolicLinkName);
                    }
                  }
                  goto LABEL_24;
                }
                ExFreePoolWithTag(v18, 0);
                v23 = v30;
                v18 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 2LL * v30, 0x20207050u);
                if ( v18 )
                {
                  LOBYTE(IsServiceSessiona) = v19;
                  ObjectProperty = CmGetDeviceInterfaceName(v24, v36, v6, v7, IsServiceSessiona, v18, v23, &v30);
                  goto LABEL_20;
                }
              }
            }
          }
        }
        ObjectProperty = -1073741670;
        goto LABEL_24;
      }
    }
  }
LABEL_29:
  PnpUnicodeStringToWstrFree(v8, SymbolicLinkName);
  return ObjectProperty;
}
