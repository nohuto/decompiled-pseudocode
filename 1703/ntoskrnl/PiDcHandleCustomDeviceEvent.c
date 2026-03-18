/*
 * XREFs of PiDcHandleCustomDeviceEvent @ 0x140457A84
 * Callers:
 *     PnpProcessCustomDeviceEvent @ 0x140457A28 (PnpProcessCustomDeviceEvent.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14004C84C (RtlStringCbCopyW.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14016A0F0 (_wcsicmp.c)
 *     _CmIsLocalMachineContainer @ 0x1404690C8 (_CmIsLocalMachineContainer.c)
 *     _CmGetDeviceRegProp @ 0x1404831A0 (_CmGetDeviceRegProp.c)
 *     PiPnpRtlBeginOperation @ 0x14048823C (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140488F04 (PiPnpRtlEndOperation.c)
 *     PnpQueryDeviceRelations @ 0x1404A769C (PnpQueryDeviceRelations.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1404DF81C (_CmGetDeviceContainerIdFromBase.c)
 *     PiDcContainerRequiresConfiguration @ 0x140594944 (PiDcContainerRequiresConfiguration.c)
 *     _CmMoveBaseContainer @ 0x14073D06C (_CmMoveBaseContainer.c)
 */

__int64 __fastcall PiDcHandleCustomDeviceEvent(__int64 a1)
{
  __int64 v1; // rdx
  NTSTATUS DeviceContainerIdFromBase; // ebx
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
  PVOID P[2]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t pszSrc[40]; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t Str2[40]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t Str1[40]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v26[80]; // [rsp+150h] [rbp+50h] BYREF

  v1 = *(_QWORD *)(a1 + 152);
  DeviceContainerIdFromBase = 0;
  v21 = 0LL;
  P[0] = 0LL;
  v4 = *(_QWORD *)(v1 + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED.Data1;
  if ( !v4 )
    v4 = *(_QWORD *)(v1 + 12) - *(_QWORD *)GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED.Data4;
  if ( !v4 )
  {
    DeviceContainerIdFromBase = PiPnpRtlBeginOperation(P);
    if ( DeviceContainerIdFromBase >= 0 )
    {
      DeviceContainerIdFromBase = PnpQueryDeviceRelations(*(_QWORD *)(a1 + 144), 6LL, 0LL, &v21);
      if ( DeviceContainerIdFromBase >= 0 )
      {
        v6 = v21;
        if ( !v21 )
        {
LABEL_40:
          if ( P[0] )
            PiPnpRtlEndOperation(P[0]);
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
        if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, (int)a1 + 160, (__int64)&v20, (__int64)Str1, (__int64)&v19, 0) >= 0
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
                  DeviceRegProp = CmGetDeviceRegProp(PiPnpRtlCtx, v14, (__int64)&v20, (__int64)v26, (__int64)&v19, 0);
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
                      PiDcContainerRequiresConfiguration((int)pszSrc);
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
                        PiDcContainerRequiresConfiguration((int)Str2);
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
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      }
    }
    v6 = v21;
    goto LABEL_37;
  }
  return (unsigned int)DeviceContainerIdFromBase;
}
