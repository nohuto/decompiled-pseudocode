/*
 * XREFs of NdisFRegisterFilterDriver @ 0x1C00206B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 *     WPP_SF_Z @ 0x1C0040B38 (WPP_SF_Z.c)
 *     WPP_SF__guid_ @ 0x1C0040CB8 (WPP_SF__guid_.c)
 *     WPP_SF_qZ @ 0x1C00485F8 (WPP_SF_qZ.c)
 *     ??_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C0057C84 (--_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     McTemplateK0zq @ 0x1C0057FB0 (McTemplateK0zq.c)
 *     ndisInitializeRef @ 0x1C00BE130 (ndisInitializeRef.c)
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C00BE238 (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 *     ndisQueryDriverImageName @ 0x1C00BF2A0 (ndisQueryDriverImageName.c)
 *     ndisWriteDriverNDISVersionToServiceKey @ 0x1C00BF9A4 (ndisWriteDriverNDISVersionToServiceKey.c)
 *     ndisValidateFilterDriverCharacteristicsHeader @ 0x1C00C7F48 (ndisValidateFilterDriverCharacteristicsHeader.c)
 *     ?SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z @ 0x1C00C7FF4 (-SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z.c)
 *     ndisCreateFilterDriverRegistry @ 0x1C00C8068 (ndisCreateFilterDriverRegistry.c)
 *     ndisFInvokeSetOptions @ 0x1C00C9704 (ndisFInvokeSetOptions.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00E4F08 (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 */

NDIS_STATUS __stdcall NdisFRegisterFilterDriver(
        PDRIVER_OBJECT DriverObject,
        NDIS_HANDLE FilterDriverContext,
        PNDIS_FILTER_DRIVER_CHARACTERISTICS FilterDriverCharacteristics,
        PNDIS_HANDLE NdisFilterDriverHandle)
{
  struct _NDIS_FILTER_DRIVER_BLOCK *v4; // rsi
  unsigned int v8; // edx
  int v9; // ecx
  unsigned int FilterDriverRegistry; // ebx
  int (__fastcall *DirectOidRequestHandler)(void *, _NDIS_OID_REQUEST *); // r8
  int (__fastcall *OidRequestHandler)(void *, _NDIS_OID_REQUEST *); // rdx
  _BOOL8 v13; // rcx
  unsigned __int8 MajorNdisVersion; // dl
  _UNICODE_STRING *p_ServiceName; // r12
  __int64 v16; // r8
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // r15d
  struct _NDIS_FILTER_DRIVER_BLOCK *PoolWithTag; // rax
  PVOID v21; // rax
  NDIS_BIND_FILTER_DRIVER **p_Bind; // r14
  __int64 v23; // rdx
  size_t v24; // r8
  unsigned __int8 v25; // al
  unsigned int Flags; // eax
  __int64 v27; // rcx
  wchar_t *v28; // rax
  wchar_t *Buffer; // rcx
  __int64 v30; // r8
  NDIS_BIND_FILTER_DRIVER **FilterDriver; // rax
  NDIS_BIND_FILTER_DRIVER *v32; // rbx
  NDIS_BIND_FILTER_DRIVER *v33; // rcx
  _QWORD *v34; // rbx
  KIRQL v35; // al
  int v36; // r8d
  enum CallRunMode v37; // r8d
  unsigned int v39; // eax
  void *v40; // rcx
  __int64 v41; // rcx
  _QWORD *v42; // rdx
  size_t Size; // [rsp+30h] [rbp-68h] BYREF
  PVOID P; // [rsp+38h] [rbp-60h] BYREF
  GUID Guid; // [rsp+40h] [rbp-58h] BYREF

  P = FilterDriverContext;
  v4 = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qZ(
      10LL,
      &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids,
      DriverObject,
      &FilterDriverCharacteristics->FriendlyName);
  KeWaitForSingleObject(&ndisPnPMutex, Executive, 0, 0, 0LL);
  FilterDriverRegistry = ndisValidateFilterDriverCharacteristicsHeader(FilterDriverCharacteristics, &Size);
  if ( FilterDriverRegistry )
  {
    if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
      McTemplateK0zq(
        v9,
        (unsigned int)&FilterRegistrationFailed,
        (_DWORD)DirectOidRequestHandler,
        FilterDriverCharacteristics->FriendlyName.Buffer,
        0);
    goto LABEL_97;
  }
  if ( FilterDriverCharacteristics->AttachHandler
    && FilterDriverCharacteristics->DetachHandler
    && FilterDriverCharacteristics->RestartHandler
    && FilterDriverCharacteristics->PauseHandler )
  {
    OidRequestHandler = FilterDriverCharacteristics->OidRequestHandler;
    v13 = FilterDriverCharacteristics->OidRequestCompleteHandler == 0LL;
    if ( v13 == (OidRequestHandler == 0LL) )
    {
      if ( !OidRequestHandler && FilterDriverCharacteristics->CancelOidRequestHandler )
      {
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
          WPP_SF_q(13LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, DriverObject);
        FilterDriverRegistry = -1073676283;
        if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
          McTemplateK0zq(
            v13,
            (unsigned int)&FilterRegistrationFailed,
            (_DWORD)DirectOidRequestHandler,
            FilterDriverCharacteristics->FriendlyName.Buffer,
            3);
        goto LABEL_36;
      }
      MajorNdisVersion = FilterDriverCharacteristics->MajorNdisVersion;
      if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && FilterDriverCharacteristics->MinorNdisVersion )
      {
        DirectOidRequestHandler = FilterDriverCharacteristics->DirectOidRequestHandler;
        v13 = FilterDriverCharacteristics->DirectOidRequestCompleteHandler == 0LL;
        if ( v13 != (DirectOidRequestHandler == 0LL) )
        {
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
            WPP_SF_q(14LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, DriverObject);
          FilterDriverRegistry = -1073676283;
          if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
            McTemplateK0zq(
              v13,
              (unsigned int)&FilterRegistrationFailed,
              (_DWORD)DirectOidRequestHandler,
              FilterDriverCharacteristics->FriendlyName.Buffer,
              4);
          goto LABEL_36;
        }
        if ( !DirectOidRequestHandler && FilterDriverCharacteristics->CancelDirectOidRequestHandler )
        {
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
            WPP_SF_q(15LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, DriverObject);
          FilterDriverRegistry = -1073676283;
          if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
            McTemplateK0zq(
              v13,
              (unsigned int)&FilterRegistrationFailed,
              (_DWORD)DirectOidRequestHandler,
              FilterDriverCharacteristics->FriendlyName.Buffer,
              5);
          goto LABEL_36;
        }
      }
      if ( !FilterDriverCharacteristics->SendNetBufferListsHandler
        && FilterDriverCharacteristics->CancelSendNetBufferListsHandler )
      {
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
          WPP_SF_q(16LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, DriverObject);
        FilterDriverRegistry = -1073676283;
        if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
          McTemplateK0zq(
            v13,
            (unsigned int)&FilterRegistrationFailed,
            (_DWORD)DirectOidRequestHandler,
            FilterDriverCharacteristics->FriendlyName.Buffer,
            6);
      }
      else
      {
        p_ServiceName = &FilterDriverCharacteristics->ServiceName;
        FilterDriverRegistry = ndisCreateFilterDriverRegistry(&FilterDriverCharacteristics->ServiceName);
        if ( FilterDriverRegistry )
          goto LABEL_36;
        v17 = FilterDriverCharacteristics->MajorNdisVersion;
        if ( ((unsigned __int8)v17 > 6u || (_BYTE)v17 == 6 && FilterDriverCharacteristics->MinorNdisVersion >= 0x32u)
          && (v16 = FilterDriverCharacteristics->Flags, (v16 & 0xFFFFFFF8) != 0) )
        {
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
            WPP_SF_d(17LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, v16);
          FilterDriverRegistry = -1073741811;
        }
        else
        {
          v18 = p_ServiceName->Length + FilterDriverCharacteristics->UniqueName.Length;
          v19 = v18 + FilterDriverCharacteristics->FriendlyName.Length + 504;
          if ( v19 <= 0xFFFF )
          {
            PoolWithTag = (struct _NDIS_FILTER_DRIVER_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, v19, 0x7666444Eu);
            v4 = PoolWithTag;
            if ( !PoolWithTag )
            {
              FilterDriverRegistry = -1073741670;
              goto LABEL_36;
            }
            memset(PoolWithTag, 0, v19);
            v21 = P;
            p_Bind = (NDIS_BIND_FILTER_DRIVER **)&v4->Bind;
            v4->Bind._p = 0LL;
            *(_WORD *)&v4->Header.Type = 260;
            v4->Header.Size = v19;
            v4->DriverObject = DriverObject;
            v4->FilterDriverContext = v21;
            KeInitializeSpinLock(&v4->Lock);
            LOBYTE(v23) = 5;
            ndisInitializeRef(&v4->Ref, v23);
            v24 = (unsigned int)Size;
            v4->DeviceList.Blink = &v4->DeviceList;
            v4->DeviceList.Flink = &v4->DeviceList;
            memmove(&v4->DefaultFilterCharacteristics, FilterDriverCharacteristics, v24);
            v25 = v4->DefaultFilterCharacteristics.MajorNdisVersion;
            if ( v25 <= 6u && (v25 != 6 || v4->DefaultFilterCharacteristics.MinorNdisVersion < 0x32u) )
              v4->DefaultFilterCharacteristics.Flags &= ~1u;
            Flags = v4->DefaultFilterCharacteristics.Flags;
            v4->DefaultFilterCharacteristics.FriendlyName.Buffer = (wchar_t *)&v4[1].Header.Type;
            v4->Flags = Flags;
            v27 = (__int64)&v4[1] + FilterDriverCharacteristics->FriendlyName.Length;
            v4->DefaultFilterCharacteristics.UniqueName.Buffer = (wchar_t *)v27;
            v28 = (wchar_t *)(v27 + FilterDriverCharacteristics->UniqueName.Length);
            Buffer = v4->DefaultFilterCharacteristics.FriendlyName.Buffer;
            v4->DefaultFilterCharacteristics.ServiceName.Buffer = v28;
            memmove(
              Buffer,
              FilterDriverCharacteristics->FriendlyName.Buffer,
              FilterDriverCharacteristics->FriendlyName.Length);
            RtlUpcaseUnicodeString(
              &v4->DefaultFilterCharacteristics.UniqueName,
              &FilterDriverCharacteristics->UniqueName,
              0);
            memmove(
              v4->DefaultFilterCharacteristics.ServiceName.Buffer,
              FilterDriverCharacteristics->ServiceName.Buffer,
              p_ServiceName->Length);
            if ( RtlGUIDFromString(&FilterDriverCharacteristics->UniqueName, &Guid) < 0 )
            {
              if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                WPP_SF_Z(
                  19LL,
                  &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids,
                  &FilterDriverCharacteristics->UniqueName);
            }
            else
            {
              LOBYTE(v30) = 1;
              FilterDriver = (NDIS_BIND_FILTER_DRIVER **)ndisBindGetFilterDriver(&P, &Guid, v30);
              if ( p_Bind != FilterDriver )
              {
                v32 = *FilterDriver;
                *FilterDriver = 0LL;
                v33 = *p_Bind;
                if ( *p_Bind && !_InterlockedDecrement((volatile signed __int32 *)&v33[1].DriverReady) && v33 )
                  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'(v33);
                *p_Bind = v32;
              }
              v34 = P;
              if ( P && !_InterlockedDecrement((volatile signed __int32 *)P + 16) && v34 )
              {
                v40 = (void *)v34[6];
                if ( v40 )
                  ExFreePoolWithTag(v40, 0x7274534Bu);
                v41 = v34[1];
                if ( *(_QWORD **)(v41 + 8) != v34 + 1 || (v42 = (_QWORD *)v34[2], (_QWORD *)*v42 != v34 + 1) )
                  __fastfail(3u);
                *v42 = v41;
                *(_QWORD *)(v41 + 8) = v42;
                ExFreePoolWithTag(v34, 0x446C4642u);
              }
              if ( *p_Bind )
              {
                *NdisFilterDriverHandle = v4;
                if ( !FilterDriverCharacteristics->SetOptionsHandler
                  || (v39 = ndisFInvokeSetOptions(v4), (FilterDriverRegistry = v39) == 0) )
                {
                  v35 = KeAcquireSpinLockRaiseToDpc(&ndisFilterDriverListLock);
                  v4->NextFilterDriver = ndisFilterDriverList;
                  ndisFilterDriverList = v4;
                  KeReleaseSpinLock(&ndisFilterDriverListLock, v35);
                  ObfReferenceObject(ndisDriverObject);
                  ndisQueryDriverImageName(&FilterDriverCharacteristics->ServiceName, &v4->ImageName);
                  LOBYTE(v36) = 1;
                  ndisWriteDriverNDISVersionToServiceKey(
                    FilterDriverCharacteristics->MajorNdisVersion,
                    FilterDriverCharacteristics->MinorNdisVersion,
                    v36,
                    FilterDriverCharacteristics->MajorDriverVersion,
                    FilterDriverCharacteristics->MinorDriverVersion,
                    (__int64)&FilterDriverCharacteristics->ServiceName);
                  FilterDriverRegistry = 0;
                  NDIS_BIND_FILTER_DRIVER::SetRunningDriver(*p_Bind, v4, v37);
                  goto LABEL_36;
                }
                if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                  WPP_SF_d(21LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, v39);
                *NdisFilterDriverHandle = 0LL;
LABEL_97:
                if ( !FilterDriverRegistry )
                  goto LABEL_36;
                goto LABEL_98;
              }
              if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                WPP_SF__guid_(20LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, &Guid);
            }
            FilterDriverRegistry = -1073741823;
LABEL_98:
            if ( v4 )
            {
              _NDIS_FILTER_DRIVER_BLOCK::`scalar deleting destructor'(v4, v8);
              ExFreePoolWithTag(v4, 0);
            }
            goto LABEL_36;
          }
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
            WPP_SF_q(18LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, DriverObject);
          FilterDriverRegistry = -1073741811;
          if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
            McTemplateK0zq(
              v18,
              (unsigned int)&FilterRegistrationFailed,
              v16,
              FilterDriverCharacteristics->FriendlyName.Buffer,
              7);
        }
      }
    }
    else
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_q(12LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, DriverObject);
      FilterDriverRegistry = -1073676283;
      if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
        McTemplateK0zq(
          v13,
          (unsigned int)&FilterRegistrationFailed,
          (_DWORD)DirectOidRequestHandler,
          FilterDriverCharacteristics->FriendlyName.Buffer,
          2);
    }
  }
  else
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_q(11LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, DriverObject);
    FilterDriverRegistry = -1073676283;
    if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
    {
      McTemplateK0zq(
        v9,
        (unsigned int)&FilterRegistrationFailed,
        (_DWORD)DirectOidRequestHandler,
        FilterDriverCharacteristics->FriendlyName.Buffer,
        1);
      goto LABEL_97;
    }
  }
LABEL_36:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_d(22LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, FilterDriverRegistry);
  KeReleaseMutex(&ndisPnPMutex, 0);
  return FilterDriverRegistry;
}
