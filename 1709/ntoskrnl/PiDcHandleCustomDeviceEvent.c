/*
 * XREFs of PiDcHandleCustomDeviceEvent @ 0x14054D954
 * Callers:
 *     PnpProcessCustomDeviceEvent @ 0x14054AD9C (PnpProcessCustomDeviceEvent.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlStringCbCopyW @ 0x1400DF4A4 (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     _CmGetDeviceRegProp @ 0x140520DD0 (_CmGetDeviceRegProp.c)
 *     PiPnpRtlBeginOperation @ 0x140526B30 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140528D6C (PiPnpRtlEndOperation.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140550CA0 (_CmGetDeviceContainerIdFromBase.c)
 *     PnpQueryDeviceRelations @ 0x140553234 (PnpQueryDeviceRelations.c)
 *     _CmIsLocalMachineContainer @ 0x14059CD48 (_CmIsLocalMachineContainer.c)
 *     PiDcContainerRequiresConfiguration @ 0x1405C60D8 (PiDcContainerRequiresConfiguration.c)
 *     _CmMoveBaseContainer @ 0x1407817A0 (_CmMoveBaseContainer.c)
 */

__int64 __fastcall PiDcHandleCustomDeviceEvent(__int64 a1)
{
  __int64 v1; // rdx
  int DeviceContainerIdFromBase; // ebx
  __int64 v4; // rax
  _DWORD *v6; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v8; // eax
  _DWORD *v9; // rcx
  bool v10; // r14
  __int64 i; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  int DeviceRegProp; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdi
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh] BYREF
  _DWORD *v21; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t pszSrc[40]; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t Str2[40]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t Str1[40]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v26[80]; // [rsp+150h] [rbp+50h] BYREF

  v1 = *(_QWORD *)(a1 + 152);
  DeviceContainerIdFromBase = 0;
  v21 = 0LL;
  P = 0LL;
  v4 = *(_QWORD *)(v1 + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED.Data1;
  if ( !v4 )
    v4 = *(_QWORD *)(v1 + 12) - *(_QWORD *)GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED.Data4;
  if ( !v4 )
  {
    DeviceContainerIdFromBase = PiPnpRtlBeginOperation((__int64 **)&P);
    if ( DeviceContainerIdFromBase >= 0 )
    {
      DeviceContainerIdFromBase = PnpQueryDeviceRelations(*(_QWORD *)(a1 + 144), 6LL, 0LL, &v21);
      if ( DeviceContainerIdFromBase >= 0 )
      {
        v6 = v21;
        if ( !v21 )
        {
LABEL_40:
          if ( P )
            PiPnpRtlEndOperation((PVOID **)P);
          return (unsigned int)DeviceContainerIdFromBase;
        }
        if ( !*v21 )
        {
LABEL_37:
          if ( v6 )
          {
            v18 = 0LL;
            if ( *v6 )
            {
              do
              {
                ObfDereferenceObject(*(PVOID *)&v6[2 * v18 + 2]);
                v6 = v21;
                v18 = (unsigned int)(v18 + 1);
              }
              while ( (unsigned int)v18 < *v21 );
            }
          }
          goto LABEL_40;
        }
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        v19 = 78;
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    a1 + 160,
                    0LL,
                    37,
                    (__int64)&v20,
                    (__int64)Str1,
                    (__int64)&v19,
                    0) >= 0
          && v20 == 1
          && v19 == 78 )
        {
          DeviceContainerIdFromBase = CmGetDeviceContainerIdFromBase(*(_QWORD *)&PiPnpRtlCtx, a1 + 160, Str1, Str2);
          if ( DeviceContainerIdFromBase >= 0 )
          {
            v8 = wcsicmp(Str1, Str2);
            v9 = v21;
            v10 = v8 != 0;
            for ( i = 0LL; (unsigned int)i < *v9; i = (unsigned int)(i + 1) )
            {
              v12 = *(_QWORD *)&v9[2 * i + 2];
              if ( v12 )
                v13 = *(_QWORD *)(*(_QWORD *)(v12 + 312) + 40LL);
              else
                v13 = 0LL;
              if ( v13 )
              {
                v14 = *(_QWORD *)(v13 + 48);
                if ( v14 )
                {
                  v19 = 78;
                  DeviceRegProp = CmGetDeviceRegProp(
                                    *(__int64 *)&PiPnpRtlCtx,
                                    v14,
                                    0LL,
                                    37,
                                    (__int64)&v20,
                                    (__int64)v26,
                                    (__int64)&v19,
                                    0);
                  DeviceContainerIdFromBase = DeviceRegProp;
                  if ( DeviceRegProp != -1073741275 )
                  {
                    if ( DeviceRegProp < 0 || v20 != 1 || v19 != 78 )
                      goto LABEL_34;
                    DeviceContainerIdFromBase = CmGetDeviceContainerIdFromBase(
                                                  *(_QWORD *)&PiPnpRtlCtx,
                                                  v14,
                                                  v26,
                                                  pszSrc);
                    if ( DeviceContainerIdFromBase < 0 )
                      break;
                    if ( !v10 )
                    {
                      DeviceContainerIdFromBase = CmMoveBaseContainer(v16, Str1, Str2, pszSrc);
                      PiDcContainerRequiresConfiguration(pszSrc);
                      if ( DeviceContainerIdFromBase < 0 )
                        break;
                      DeviceContainerIdFromBase = RtlStringCbCopyW(Str2, 0x4EuLL, pszSrc);
                      if ( DeviceContainerIdFromBase < 0 )
                        break;
                      v10 = 1;
                    }
                    if ( wcsicmp(pszSrc, Str2) )
                    {
                      if ( !(unsigned __int8)CmIsLocalMachineContainer(*(_QWORD *)&PiPnpRtlCtx, pszSrc) )
                      {
                        DeviceContainerIdFromBase = CmMoveBaseContainer(v17, v26, pszSrc, Str2);
                        PiDcContainerRequiresConfiguration(Str2);
                        if ( DeviceContainerIdFromBase < 0 )
                          break;
                      }
                    }
                  }
                  v9 = v21;
                }
              }
            }
          }
        }
        else
        {
LABEL_34:
          DeviceContainerIdFromBase = -1073739509;
        }
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
    }
    v6 = v21;
    goto LABEL_37;
  }
  return (unsigned int)DeviceContainerIdFromBase;
}
