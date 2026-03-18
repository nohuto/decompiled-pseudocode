/*
 * XREFs of IoGetDeviceInterfaceAlias @ 0x1405C1E50
 * Callers:
 *     PiCMGetDeviceInterfaceAlias @ 0x1405C1C98 (PiCMGetDeviceInterfaceAlias.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1405017B8 (PiPnpRtlApplyMandatoryFilters.c)
 *     _CmValidateDeviceInterfaceName @ 0x140505D30 (_CmValidateDeviceInterfaceName.c)
 *     _PnpGetObjectProperty @ 0x140506D2C (_PnpGetObjectProperty.c)
 *     PnpUnicodeStringToWstrFree @ 0x140509650 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x140509688 (PnpUnicodeStringToWstr.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14050ACE8 (_CmOpenDeviceInterfaceRegKey.c)
 *     _PnpStringFromGuid @ 0x14050B138 (_PnpStringFromGuid.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x1405C21AC (_CmGetDeviceInterfacePathFormat.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1405C2238 (_CmGetDeviceInterfaceReferenceString.c)
 *     _CmGetDeviceInterfaceName @ 0x1405DEBB0 (_CmGetDeviceInterfaceName.c)
 */

NTSTATUS __stdcall IoGetDeviceInterfaceAlias(
        PUNICODE_STRING SymbolicLinkName,
        const GUID *AliasInterfaceClassGuid,
        PUNICODE_STRING AliasSymbolicLinkName)
{
  void *v6; // r15
  PVOID v7; // rdi
  void *v8; // rsi
  int v9; // eax
  __int64 v10; // rcx
  NTSTATUS ObjectProperty; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PVOID PoolWithTag; // rax
  __int64 v14; // r14
  __int64 v15; // rcx
  NTSTATUS DeviceInterfaceReferenceString; // esi
  PVOID v17; // rax
  void *v18; // rsi
  __int64 v19; // rcx
  WCHAR *v20; // r14
  char v21; // di
  __int64 v22; // r9
  __int64 v24; // rcx
  unsigned int v25; // ebx
  __int64 v26; // rcx
  int IsServiceSession; // [rsp+20h] [rbp-E0h]
  int IsServiceSessiona; // [rsp+20h] [rbp-E0h]
  char v29; // [rsp+60h] [rbp-A0h] BYREF
  char v30; // [rsp+61h] [rbp-9Fh] BYREF
  unsigned int v31; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v32; // [rsp+68h] [rbp-98h] BYREF
  int v33[2]; // [rsp+70h] [rbp-90h] BYREF
  int v34; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v35[4]; // [rsp+7Ch] [rbp-84h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-78h] BYREF
  wchar_t v38[40]; // [rsp+B0h] [rbp-50h] BYREF

  v29 = 0;
  *(_QWORD *)v33 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( !SymbolicLinkName || !SymbolicLinkName->Buffer || !SymbolicLinkName->Length )
  {
    ObjectProperty = -1073741811;
    goto LABEL_29;
  }
  v9 = PnpUnicodeStringToWstr((__int16 **)v33, 0LL, &SymbolicLinkName->Length);
  v8 = *(void **)v33;
  ObjectProperty = v9;
  if ( v9 >= 0 )
  {
    if ( CmValidateDeviceInterfaceName(v10, *(__int64 *)v33) < 0 )
    {
      ObjectProperty = -1073741811;
      goto LABEL_33;
    }
    SeCaptureSubjectContext(&SubjectContext);
    ObjectProperty = PiPnpRtlApplyMandatoryFilters(*(__int64 *)&PiPnpRtlCtx, (__int64)v8, 3, 0LL, &SubjectContext, &v29);
    SeReleaseSubjectContext(&SubjectContext);
    if ( ObjectProperty >= 0 )
    {
      if ( !v29 )
      {
        ObjectProperty = -1073741790;
        goto LABEL_33;
      }
      ObjectProperty = PnpStringFromGuid((int *)AliasInterfaceClassGuid, v38);
      if ( ObjectProperty >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x20207050u);
        v6 = PoolWithTag;
        if ( PoolWithTag )
        {
          v14 = *(_QWORD *)v33;
          ObjectProperty = PnpGetObjectProperty(
                             *(__int64 *)&PiPnpRtlCtx,
                             *(__int64 *)v33,
                             3u,
                             0LL,
                             0LL,
                             (__int64)&DEVPKEY_Device_InstanceId,
                             (__int64)&v34,
                             (__int64)PoolWithTag,
                             400,
                             (__int64)v35,
                             0);
          if ( ObjectProperty < 0 )
            goto LABEL_28;
          if ( v34 != 18 )
          {
            ObjectProperty = -1073741585;
            goto LABEL_28;
          }
          v31 = 128;
          v7 = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x20207050u);
          if ( v7 )
          {
            DeviceInterfaceReferenceString = CmGetDeviceInterfaceReferenceString(v15, v14, v7, 128LL, &v31);
            if ( DeviceInterfaceReferenceString == -1073741789 )
            {
              ExFreePoolWithTag(v7, 0);
              v7 = ExAllocatePoolWithTag(PagedPool, 2LL * v31, 0x20207050u);
              if ( !v7 )
                goto LABEL_36;
              DeviceInterfaceReferenceString = CmGetDeviceInterfaceReferenceString(v24, v14, v7, v31, &v31);
            }
            if ( DeviceInterfaceReferenceString == -1073741772 )
              ExFreePoolWithTag(v7, 0);
            ObjectProperty = 0;
            if ( DeviceInterfaceReferenceString != -1073741772 )
              ObjectProperty = DeviceInterfaceReferenceString;
            v17 = 0LL;
            if ( DeviceInterfaceReferenceString != -1073741772 )
              v17 = v7;
            v7 = v17;
            v18 = v17;
            if ( ObjectProperty < 0 )
              goto LABEL_28;
            ObjectProperty = CmGetDeviceInterfacePathFormat(3221225524LL, v14, &v30);
            if ( ObjectProperty < 0 )
              goto LABEL_28;
            v32 = 512;
            v20 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x20207050u);
            if ( v20 )
            {
              v21 = v30;
              LOBYTE(IsServiceSession) = v30;
              ObjectProperty = CmGetDeviceInterfaceName(v19, v38, v6, v18, IsServiceSession, v20, 512, &v32);
              if ( ObjectProperty != -1073741789 )
              {
LABEL_24:
                v7 = v18;
                if ( ObjectProperty >= 0 )
                {
                  ObjectProperty = RtlInitUnicodeStringEx(AliasSymbolicLinkName, v20);
                  if ( ObjectProperty >= 0 )
                  {
                    ObjectProperty = CmOpenDeviceInterfaceRegKey(
                                       *(__int64 *)&PiPnpRtlCtx,
                                       (__int64)v20,
                                       0x30u,
                                       v22,
                                       131097,
                                       0,
                                       (__int64)&Handle,
                                       0LL);
                    if ( ObjectProperty < 0 )
                      RtlFreeAnsiString(AliasSymbolicLinkName);
                    else
                      ZwClose(Handle);
                  }
                }
                goto LABEL_28;
              }
              ExFreePoolWithTag(v20, 0);
              v25 = v32;
              v20 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 2LL * v32, 0x20207050u);
              if ( v20 )
              {
                LOBYTE(IsServiceSessiona) = v21;
                ObjectProperty = CmGetDeviceInterfaceName(v26, v38, v6, v18, IsServiceSessiona, v20, v25, &v32);
                goto LABEL_24;
              }
              ObjectProperty = -1073741670;
              v7 = v18;
LABEL_28:
              ExReleaseResourceLite(&PnpRegistryDeviceResource);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              v8 = *(void **)v33;
LABEL_29:
              if ( v7 )
                ExFreePoolWithTag(v7, 0);
              if ( v6 )
                ExFreePoolWithTag(v6, 0);
              goto LABEL_33;
            }
          }
        }
LABEL_36:
        ObjectProperty = -1073741670;
        goto LABEL_28;
      }
    }
  }
LABEL_33:
  PnpUnicodeStringToWstrFree(v8, (__int64)SymbolicLinkName);
  return ObjectProperty;
}
