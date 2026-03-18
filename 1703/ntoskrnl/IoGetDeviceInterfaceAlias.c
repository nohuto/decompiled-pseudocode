/*
 * XREFs of IoGetDeviceInterfaceAlias @ 0x14056BDA0
 * Callers:
 *     PiCMGetDeviceInterfaceAlias @ 0x14056BBEC (PiCMGetDeviceInterfaceAlias.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x140484E40 (_PnpGetObjectProperty.c)
 *     _CmValidateDeviceInterfaceName @ 0x1404878A0 (_CmValidateDeviceInterfaceName.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x140489ECC (PiPnpRtlApplyMandatoryFilters.c)
 *     PnpUnicodeStringToWstrFree @ 0x14048AF14 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14048AF4C (PnpUnicodeStringToWstr.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1404E175C (_CmOpenDeviceInterfaceRegKey.c)
 *     _PnpStringFromGuid @ 0x1404E2F18 (_PnpStringFromGuid.c)
 *     _CmGetDeviceInterfaceName @ 0x1404E60A4 (_CmGetDeviceInterfaceName.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x14056C0E8 (_CmGetDeviceInterfacePathFormat.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x14056C174 (_CmGetDeviceInterfaceReferenceString.c)
 */

NTSTATUS __stdcall IoGetDeviceInterfaceAlias(
        PUNICODE_STRING SymbolicLinkName,
        const GUID *AliasInterfaceClassGuid,
        PUNICODE_STRING AliasSymbolicLinkName)
{
  void *v6; // r14
  PVOID v7; // rsi
  wchar_t *v8; // rdi
  int v9; // eax
  __int64 v10; // rcx
  NTSTATUS ObjectProperty; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PVOID PoolWithTag; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  size_t v17; // rcx
  wchar_t *v18; // rdi
  char v19; // r12
  __int64 v20; // r9
  __int64 v22; // rcx
  unsigned int v23; // ebx
  size_t v24; // rcx
  size_t v25; // [rsp+30h] [rbp-D0h]
  size_t v26; // [rsp+30h] [rbp-D0h]
  char v27; // [rsp+60h] [rbp-A0h] BYREF
  char v28; // [rsp+61h] [rbp-9Fh] BYREF
  unsigned int v29; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v30; // [rsp+68h] [rbp-98h] BYREF
  int v31[2]; // [rsp+70h] [rbp-90h] BYREF
  int v32; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v33[4]; // [rsp+7Ch] [rbp-84h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-78h] BYREF
  WCHAR v36[40]; // [rsp+B0h] [rbp-50h] BYREF

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
  v9 = PnpUnicodeStringToWstr(v31, 0LL, &SymbolicLinkName->Length);
  v8 = *(wchar_t **)v31;
  ObjectProperty = v9;
  if ( v9 >= 0 )
  {
    if ( CmValidateDeviceInterfaceName(v10, *(__int64 *)v31) < 0 )
    {
      ObjectProperty = -1073741811;
      goto LABEL_29;
    }
    SeCaptureSubjectContext(&SubjectContext);
    ObjectProperty = PiPnpRtlApplyMandatoryFilters(*(__int64 *)&PiPnpRtlCtx, v8, 3, 0LL, &SubjectContext, &v27);
    SeReleaseSubjectContext(&SubjectContext);
    if ( ObjectProperty >= 0 )
    {
      if ( !v27 )
      {
        ObjectProperty = -1073741790;
        goto LABEL_29;
      }
      ObjectProperty = PnpStringFromGuid((int *)AliasInterfaceClassGuid, v36);
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
                             *(__int64 *)&PiPnpRtlCtx,
                             *(__int64 *)v31,
                             3u,
                             0LL,
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
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            v8 = *(wchar_t **)v31;
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
              v18 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x20207050u);
              if ( v18 )
              {
                v19 = v28;
                LODWORD(v25) = 512;
                ObjectProperty = CmGetDeviceInterfaceName(
                                   v17,
                                   v36,
                                   (wchar_t *)v6,
                                   (const wchar_t *)v7,
                                   v28,
                                   v18,
                                   v25,
                                   &v30);
                if ( ObjectProperty != -1073741789 )
                {
LABEL_20:
                  if ( ObjectProperty >= 0 )
                  {
                    ObjectProperty = RtlInitUnicodeStringEx(AliasSymbolicLinkName, v18);
                    if ( ObjectProperty >= 0 )
                    {
                      ObjectProperty = CmOpenDeviceInterfaceRegKey(
                                         *(__int64 *)&PiPnpRtlCtx,
                                         (__int64)v18,
                                         0x30u,
                                         v20,
                                         131097,
                                         0,
                                         (__int64)&Handle,
                                         0LL);
                      if ( ObjectProperty < 0 )
                        RtlFreeUnicodeString(AliasSymbolicLinkName);
                      else
                        ZwClose(Handle);
                    }
                  }
                  goto LABEL_24;
                }
                ExFreePoolWithTag(v18, 0);
                v23 = v30;
                v18 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v30, 0x20207050u);
                if ( v18 )
                {
                  LODWORD(v26) = v23;
                  ObjectProperty = CmGetDeviceInterfaceName(
                                     v24,
                                     v36,
                                     (wchar_t *)v6,
                                     (const wchar_t *)v7,
                                     v19,
                                     v18,
                                     v26,
                                     &v30);
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
  PnpUnicodeStringToWstrFree(v8, (__int64)SymbolicLinkName);
  return ObjectProperty;
}
