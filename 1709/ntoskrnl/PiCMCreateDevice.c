/*
 * XREFs of PiCMCreateDevice @ 0x1406CF00C
 * Callers:
 *     PiCMHandleIoctl @ 0x140525E40 (PiCMHandleIoctl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x1400DF360 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlStringCchLengthW @ 0x1400DF440 (RtlStringCchLengthW.c)
 *     RtlStringCchCopyExW @ 0x1400DF820 (RtlStringCchCopyExW.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14017F2A0 (ZwDeleteValueKey.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x140520CAC (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x140520DD0 (_CmGetDeviceRegProp.c)
 *     _CmValidateDeviceName @ 0x140521BB0 (_CmValidateDeviceName.c)
 *     _RegRtlQueryValue @ 0x140521C44 (_RegRtlQueryValue.c)
 *     PiCMReturnBufferResultData @ 0x140525C50 (PiCMReturnBufferResultData.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140526314 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiPnpRtlBeginOperation @ 0x140526B30 (PiPnpRtlBeginOperation.c)
 *     PpDevNodeUnlockTree @ 0x1405270EC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14052717C (PpDevNodeLockTree.c)
 *     PiPnpRtlEndOperation @ 0x140528D6C (PiPnpRtlEndOperation.c)
 *     _CmIsRootDevice @ 0x140551BE8 (_CmIsRootDevice.c)
 *     PpDeviceRegistration @ 0x140555454 (PpDeviceRegistration.c)
 *     PiAuDoesClientHaveAccess @ 0x140574D38 (PiAuDoesClientHaveAccess.c)
 *     _CmCreateDevice @ 0x14058A7FC (_CmCreateDevice.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14058C190 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     _RegRtlSetValue @ 0x14058E7F0 (_RegRtlSetValue.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1406C259C (PiPnpRtlEnsureObjectCached.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x1406CE894 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMGenerateDeviceInstance @ 0x1406D0308 (PiCMGenerateDeviceInstance.c)
 *     PiInitializeDevice @ 0x1406D3418 (PiInitializeDevice.c)
 */

__int64 __fastcall PiCMCreateDevice(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r12
  unsigned int v7; // r15d
  wchar_t *PoolWithTag; // rdi
  char v9; // r14
  int v10; // esi
  _WORD *v11; // r13
  int DeviceInputData; // ebx
  signed int inited; // ebx
  int v14; // eax
  struct _KTHREAD *v15; // rax
  char PreviousMode; // di
  wchar_t *v18; // r13
  char v19; // r12
  int v20; // r15d
  __int64 v21; // rcx
  int v22; // r12d
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rcx
  int DeviceRegProp; // eax
  __int64 v28; // rdx
  int v29; // ecx
  int DeviceInstanceCsConfigFlags; // eax
  char v31; // dl
  int v32; // eax
  struct _KTHREAD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // [rsp+58h] [rbp-99h] BYREF
  _WORD *v36; // [rsp+60h] [rbp-91h]
  __int64 v37; // [rsp+68h] [rbp-89h] BYREF
  int v38; // [rsp+70h] [rbp-81h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-79h] BYREF
  size_t pcchLength; // [rsp+80h] [rbp-71h] BYREF
  int v41; // [rsp+88h] [rbp-69h] BYREF
  int v42; // [rsp+8Ch] [rbp-65h] BYREF
  int v43; // [rsp+90h] [rbp-61h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp-59h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-51h]
  PVOID P; // [rsp+A8h] [rbp-49h] BYREF
  UNICODE_STRING v47; // [rsp+B0h] [rbp-41h] BYREF
  char v48[4]; // [rsp+C0h] [rbp-31h] BYREF
  int v49; // [rsp+C4h] [rbp-2Dh]
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+C8h] [rbp-29h]
  unsigned int v51; // [rsp+D0h] [rbp-21h]
  PCWSTR SourceString; // [rsp+D8h] [rbp-19h]
  unsigned int v53; // [rsp+E0h] [rbp-11h]
  int v54; // [rsp+E4h] [rbp-Dh]
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-9h] BYREF
  UNICODE_STRING ValueName; // [rsp+F8h] [rbp+7h] BYREF

  v6 = a3;
  v7 = a4;
  v38 = 0;
  v41 = 0;
  PoolWithTag = 0LL;
  *a6 = 0;
  v9 = 0;
  Object = 0LL;
  v10 = 0;
  Handle = 0LL;
  v11 = 0LL;
  P = 0LL;
  pcchLength = 0LL;
  v36 = 0LL;
  DeviceInputData = PiCMCaptureCreateDeviceInputData(a1, a2, a5, v48);
  if ( DeviceInputData < 0 )
    goto LABEL_15;
  if ( !PiAuDoesClientHaveAccess(2u) )
  {
    inited = -1073741790;
    goto LABEL_4;
  }
  v18 = (wchar_t *)pszSrc;
  if ( !pszSrc || v51 < 2 || !SourceString || v53 < 2 )
  {
    inited = -1073741811;
    v11 = 0LL;
    goto LABEL_58;
  }
  if ( !v6 || v7 < 0x14 || (v19 = v49, (v49 & 0xFFFFFFF0) != 0) || (v20 = v49 & 2, !CmIsRootDevice(SourceString)) )
  {
    inited = -1073741811;
    goto LABEL_30;
  }
  inited = PiPnpRtlBeginOperation((__int64 **)&P);
  if ( inited < 0 )
  {
LABEL_35:
    v11 = 0LL;
    goto LABEL_4;
  }
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x34706E50u);
  if ( !PoolWithTag )
  {
    inited = -1073741670;
    goto LABEL_35;
  }
  v22 = v19 & 4;
  if ( !v22 )
  {
    inited = CmValidateDeviceName(v21, v18);
LABEL_40:
    if ( inited >= 0 )
    {
      if ( !v22 )
      {
        inited = RtlStringCchCopyExW(PoolWithTag, 0xC8uLL, v18, 0LL, 0LL, 0x800u);
        if ( inited < 0 )
          goto LABEL_48;
      }
      inited = CmOpenDeviceRegKey(
                 *(__int64 *)&PiPnpRtlCtx,
                 (__int64)PoolWithTag,
                 0x10u,
                 0,
                 131103,
                 0,
                 (__int64)&Handle,
                 0LL);
      if ( (int)(inited + 0x80000000) < 0 || inited == -1073741810 )
      {
        if ( v20 )
        {
          if ( Handle )
          {
LABEL_47:
            inited = -1073741771;
LABEL_48:
            v11 = 0LL;
            goto LABEL_4;
          }
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
          LOBYTE(v35) = 0;
          v9 = 1;
          inited = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)PoolWithTag, 131078, &KeyHandle, &v35, 0);
          if ( inited < 0 )
            goto LABEL_52;
          if ( !(_BYTE)v35 )
          {
            inited = -1073741771;
            ZwClose(KeyHandle);
LABEL_52:
            v10 = pcchLength;
            goto LABEL_53;
          }
          v42 = 1;
          inited = RegRtlSetValue(KeyHandle, L"Phantom", 4u, &v42, 4u);
          ZwClose(KeyHandle);
          if ( inited < 0 )
            goto LABEL_52;
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v10 = pcchLength;
        }
        else
        {
          if ( Handle )
          {
            if ( RtlInitUnicodeStringEx(&DestinationString, PoolWithTag) >= 0 )
            {
              PpDevNodeLockTree(0);
              v24 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
              Object = v24;
              if ( v24 )
                v25 = *(_QWORD *)(v24[39] + 40LL);
              else
                v25 = 0LL;
              PpDevNodeUnlockTree(0);
              if ( v25 )
              {
                if ( (*(_DWORD *)(v25 + 396) & 0x10000) == 0 )
                  goto LABEL_47;
              }
              else
              {
                PiPnpRtlEnsureObjectCached(v26, (__int64)PoolWithTag);
              }
            }
          }
          else
          {
            v33 = KeGetCurrentThread();
            --v33->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            LOBYTE(v35) = 0;
            v9 = 1;
            inited = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)PoolWithTag, 131103, &Handle, &v35, 0);
            if ( inited < 0 )
              goto LABEL_52;
            ExReleaseResourceLite(&PnpRegistryDeviceResource);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            v9 = 0;
            v10 = pcchLength;
            if ( !(_BYTE)v35 )
            {
              inited = -1073741771;
              goto LABEL_53;
            }
          }
          inited = RtlInitUnicodeStringEx(&v47, PoolWithTag);
          v9 = 0;
          if ( inited < 0 )
            goto LABEL_53;
          v37 = 4LL;
          DeviceRegProp = CmGetDeviceRegProp(
                            *(__int64 *)&PiPnpRtlCtx,
                            (__int64)PoolWithTag,
                            (__int64)Handle,
                            11,
                            (__int64)&v37 + 4,
                            (__int64)&v38,
                            (__int64)&v37,
                            0);
          v29 = v38;
          if ( DeviceRegProp < 0 )
            v29 = 0;
          v38 = v29;
          DeviceInstanceCsConfigFlags = PnpGetDeviceInstanceCsConfigFlags(&v47.Length, v28, &v41);
          v31 = v41;
          if ( DeviceInstanceCsConfigFlags < 0 )
            v31 = 0;
          if ( (v38 & 0x12) != 0 || (v31 & 2) != 0 )
          {
            inited = -1073741808;
            v9 = 0;
            goto LABEL_53;
          }
          inited = PiInitializeDevice(&v47);
          if ( inited < 0 )
          {
LABEL_53:
            v11 = v36;
            goto LABEL_4;
          }
          LODWORD(v37) = 4;
          if ( (int)RegRtlQueryValue(Handle, L"Phantom", (_DWORD *)&v37 + 1, &v43, (unsigned int *)&v37) < 0
            || HIDWORD(v37) != 4
            || (v32 = v43, (_DWORD)v37 != 4) )
          {
            v32 = 0;
          }
          if ( v32 && RtlInitUnicodeStringEx(&ValueName, L"Phantom") >= 0 )
            ZwDeleteValueKey(Handle, &ValueName);
          if ( (v49 & 8) != 0 )
          {
            LODWORD(v37) = 512;
            v11 = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x34706E50u);
            if ( !v11 )
            {
              inited = -1073741670;
              v9 = 0;
              goto LABEL_4;
            }
            if ( (int)CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        (__int64)PoolWithTag,
                        (__int64)Handle,
                        5,
                        (__int64)&v37 + 4,
                        (__int64)v11,
                        (__int64)&v37,
                        0) >= 0
              && HIDWORD(v37) == 1
              && (unsigned int)v37 <= 0x200 )
            {
              if ( *v11 )
              {
                inited = RtlInitUnicodeStringEx(&v47, PoolWithTag);
                if ( inited >= 0 )
                {
                  LOBYTE(v34) = 1;
                  inited = PpDeviceRegistration((__int64)&v47, v34, 0LL, 0);
                }
              }
            }
            goto LABEL_57;
          }
        }
        v11 = v36;
      }
      else
      {
        v11 = 0LL;
      }
LABEL_57:
      v7 = a4;
      v6 = a3;
      goto LABEL_58;
    }
LABEL_30:
    v11 = 0LL;
    goto LABEL_4;
  }
  inited = PiCMGenerateDeviceInstance(v18);
  if ( !v20 )
    goto LABEL_40;
  v7 = a4;
  v11 = 0LL;
  v6 = a3;
LABEL_58:
  v9 = 0;
  if ( inited >= 0 )
  {
    inited = RtlStringCchLengthW(PoolWithTag, 0xC8uLL, &pcchLength);
    if ( inited < 0 )
    {
      v10 = 0;
    }
    else
    {
      v10 = pcchLength + 1;
      if ( (unsigned __int64)v7 - 20 < 2 * (pcchLength + 1) )
        inited = -1073741789;
    }
    v9 = 0;
    if ( inited >= 0 )
    {
      v14 = PiCMReturnBufferResultData(inited, 2 * v10, 0, PoolWithTag, 2 * v10, v54, v6, v7, a6);
      v9 = 0;
      goto LABEL_5;
    }
  }
LABEL_4:
  v14 = PiCMReturnBufferResultData(inited, 2 * v10, 0, 0LL, 0, v54, a3, a4, a6);
LABEL_5:
  DeviceInputData = v14;
  if ( Handle )
    ZwClose(Handle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x34706E50u);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v9 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
LABEL_15:
  v15 = KeGetCurrentThread();
  PreviousMode = v15->PreviousMode;
  if ( pszSrc )
    PiControlFreeUserModeCallersBuffer(v15->PreviousMode, (void *)pszSrc);
  if ( SourceString )
    PiControlFreeUserModeCallersBuffer(PreviousMode, (void *)SourceString);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return (unsigned int)DeviceInputData;
}
