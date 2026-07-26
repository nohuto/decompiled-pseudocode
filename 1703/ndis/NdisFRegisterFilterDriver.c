/*
 * XREFs of NdisFRegisterFilterDriver @ 0x1C00160A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 *     WPP_SF_Z @ 0x1C0044008 (WPP_SF_Z.c)
 *     WPP_SF__guid_ @ 0x1C0044180 (WPP_SF__guid_.c)
 *     WPP_SF_qZ @ 0x1C004AB78 (WPP_SF_qZ.c)
 *     ??_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C0058964 (--_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     Template_zq @ 0x1C0059AE4 (Template_zq.c)
 *     ndisCreateFilterDriverRegistry @ 0x1C00AC898 (ndisCreateFilterDriverRegistry.c)
 *     ?SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z @ 0x1C00ACCF0 (-SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C00ACFDC (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 *     ndisInitializeRef @ 0x1C00B6E54 (ndisInitializeRef.c)
 *     ndisQueryDriverImageName @ 0x1C00B8290 (ndisQueryDriverImageName.c)
 *     ndisWriteDriverNDISVersionToServiceKey @ 0x1C00B83FC (ndisWriteDriverNDISVersionToServiceKey.c)
 *     ndisFInvokeSetOptions @ 0x1C00BE684 (ndisFInvokeSetOptions.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00DAEF8 (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 */

NDIS_STATUS __stdcall NdisFRegisterFilterDriver(
        PDRIVER_OBJECT DriverObject,
        NDIS_HANDLE FilterDriverContext,
        PNDIS_FILTER_DRIVER_CHARACTERISTICS FilterDriverCharacteristics,
        PNDIS_HANDLE NdisFilterDriverHandle)
{
  struct _NDIS_FILTER_DRIVER_BLOCK *v6; // rsi
  int v7; // ecx
  int v8; // r8d
  unsigned __int8 MinorNdisVersion; // dl
  size_t v10; // r13
  bool v11; // cl
  char v12; // al
  char v13; // cl
  unsigned __int8 v14; // al
  char v15; // al
  int (__fastcall *OidRequestHandler)(void *, _NDIS_OID_REQUEST *); // r8
  _BOOL8 v17; // rcx
  _UNICODE_STRING *p_ServiceName; // r12
  unsigned int FilterDriverRegistry; // ebx
  __int64 v20; // r8
  int MajorNdisVersion; // eax
  int v22; // ecx
  unsigned int v23; // r15d
  struct _NDIS_FILTER_DRIVER_BLOCK *PoolWithTag; // rax
  PVOID v25; // rax
  volatile signed __int32 **p_Bind; // r14
  __int64 v27; // rdx
  USHORT Size; // ax
  unsigned __int8 v29; // al
  unsigned int Flags; // eax
  __int64 v31; // rcx
  wchar_t *v32; // rax
  wchar_t *Buffer; // rcx
  unsigned int v34; // edx
  __int64 v35; // r8
  volatile signed __int32 **FilterDriver; // rax
  volatile signed __int32 *v37; // rbx
  volatile signed __int32 *v38; // rcx
  _QWORD *v39; // rbx
  _QWORD *v40; // r15
  KIRQL v41; // al
  int v42; // r8d
  enum CallRunMode v43; // r8d
  unsigned int v45; // eax
  void *v46; // rcx
  __int64 v47; // rdx
  _QWORD *v48; // rcx
  PVOID P; // [rsp+30h] [rbp-68h] BYREF
  PNDIS_HANDLE v50; // [rsp+38h] [rbp-60h]
  GUID Guid; // [rsp+40h] [rbp-58h] BYREF

  v50 = NdisFilterDriverHandle;
  P = FilterDriverContext;
  v6 = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qZ(
      10LL,
      &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids,
      DriverObject,
      &FilterDriverCharacteristics->FriendlyName);
  KeWaitForSingleObject(&ndisPnPMutex, Executive, 0, 0, 0LL);
  if ( FilterDriverCharacteristics->MajorNdisVersion != 6 )
    goto LABEL_68;
  MinorNdisVersion = FilterDriverCharacteristics->MinorNdisVersion;
  if ( MinorNdisVersion == 2 )
  {
    FilterDriverRegistry = -1073676284;
    goto LABEL_55;
  }
  v10 = 224LL;
  LOWORD(v8) = MinorNdisVersion == 0 ? 0xC8 : 0;
  v11 = MinorNdisVersion == 1;
  if ( MinorNdisVersion == 20 )
    v11 = 1;
  v12 = v11;
  if ( MinorNdisVersion == 30 )
    v12 = 1;
  v13 = v12;
  if ( MinorNdisVersion == 40 )
    v13 = 1;
  v14 = v13;
  if ( MinorNdisVersion == 50 )
    v14 = 1;
  if ( MinorNdisVersion == 51 )
    v14 = 1;
  v7 = v14;
  if ( MinorNdisVersion == 60 )
    v7 = 1;
  v15 = v7;
  if ( MinorNdisVersion == 70 )
    v15 = 1;
  if ( v15 )
  {
    if ( FilterDriverCharacteristics->Header.Type != 0x8B
      || FilterDriverCharacteristics->Header.Revision < 2u
      || FilterDriverCharacteristics->Header.Size < 0xE0u )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_(11LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids);
      FilterDriverRegistry = -1073676283;
      goto LABEL_55;
    }
    goto LABEL_23;
  }
  if ( (MinorNdisVersion == 0 ? 0xC8 : 0) == 0 )
  {
LABEL_68:
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_q(12LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, DriverObject);
    FilterDriverRegistry = -1073676284;
    if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
      Template_zq(v7, (unsigned int)&FilterRegistrationFailed, v8, FilterDriverCharacteristics->FriendlyName.Buffer, 0);
    goto LABEL_55;
  }
LABEL_23:
  if ( FilterDriverCharacteristics->AttachHandler
    && FilterDriverCharacteristics->DetachHandler
    && FilterDriverCharacteristics->RestartHandler
    && FilterDriverCharacteristics->PauseHandler )
  {
    OidRequestHandler = FilterDriverCharacteristics->OidRequestHandler;
    v17 = FilterDriverCharacteristics->OidRequestCompleteHandler == 0LL;
    if ( v17 == (OidRequestHandler == 0LL) )
    {
      if ( !OidRequestHandler && FilterDriverCharacteristics->CancelOidRequestHandler )
      {
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
          WPP_SF_q(15LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, DriverObject);
        FilterDriverRegistry = -1073676283;
        if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
          Template_zq(
            v17,
            (unsigned int)&FilterRegistrationFailed,
            (_DWORD)OidRequestHandler,
            FilterDriverCharacteristics->FriendlyName.Buffer,
            3);
        goto LABEL_55;
      }
      if ( MinorNdisVersion )
      {
        OidRequestHandler = FilterDriverCharacteristics->DirectOidRequestHandler;
        v17 = FilterDriverCharacteristics->DirectOidRequestCompleteHandler == 0LL;
        if ( v17 != (OidRequestHandler == 0LL) )
        {
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
            WPP_SF_q(16LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, DriverObject);
          FilterDriverRegistry = -1073676283;
          if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
            Template_zq(
              v17,
              (unsigned int)&FilterRegistrationFailed,
              (_DWORD)OidRequestHandler,
              FilterDriverCharacteristics->FriendlyName.Buffer,
              4);
          goto LABEL_55;
        }
        if ( !OidRequestHandler && FilterDriverCharacteristics->CancelDirectOidRequestHandler )
        {
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
            WPP_SF_q(17LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, DriverObject);
          FilterDriverRegistry = -1073676283;
          if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
            Template_zq(
              v17,
              (unsigned int)&FilterRegistrationFailed,
              (_DWORD)OidRequestHandler,
              FilterDriverCharacteristics->FriendlyName.Buffer,
              5);
          goto LABEL_55;
        }
      }
      if ( !FilterDriverCharacteristics->SendNetBufferListsHandler
        && FilterDriverCharacteristics->CancelSendNetBufferListsHandler )
      {
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
          WPP_SF_q(18LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, DriverObject);
        FilterDriverRegistry = -1073676283;
        if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
          Template_zq(
            v17,
            (unsigned int)&FilterRegistrationFailed,
            (_DWORD)OidRequestHandler,
            FilterDriverCharacteristics->FriendlyName.Buffer,
            6);
      }
      else
      {
        p_ServiceName = &FilterDriverCharacteristics->ServiceName;
        FilterDriverRegistry = ndisCreateFilterDriverRegistry(&FilterDriverCharacteristics->ServiceName);
        if ( FilterDriverRegistry )
          goto LABEL_55;
        MajorNdisVersion = FilterDriverCharacteristics->MajorNdisVersion;
        if ( ((unsigned __int8)MajorNdisVersion > 6u
           || (_BYTE)MajorNdisVersion == 6 && FilterDriverCharacteristics->MinorNdisVersion >= 0x32u)
          && (v20 = FilterDriverCharacteristics->Flags, (v20 & 0xFFFFFFF8) != 0) )
        {
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
            WPP_SF_d(19LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, v20);
          FilterDriverRegistry = -1073741811;
        }
        else
        {
          v22 = FilterDriverCharacteristics->UniqueName.Length + p_ServiceName->Length;
          v23 = v22 + FilterDriverCharacteristics->FriendlyName.Length + 488;
          if ( v23 <= 0xFFFF )
          {
            PoolWithTag = (struct _NDIS_FILTER_DRIVER_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, v23, 0x7666444Eu);
            v6 = PoolWithTag;
            if ( !PoolWithTag )
            {
              FilterDriverRegistry = -1073741670;
              goto LABEL_55;
            }
            memset(PoolWithTag, 0, v23);
            v25 = P;
            p_Bind = (volatile signed __int32 **)&v6->Bind;
            v6->Bind._p = 0LL;
            *(_WORD *)&v6->Header.Type = 260;
            v6->Header.Size = v23;
            v6->DriverObject = DriverObject;
            v6->FilterDriverContext = v25;
            KeInitializeSpinLock(&v6->Lock);
            LOBYTE(v27) = 5;
            ndisInitializeRef(&v6->Ref, v27);
            v6->DeviceList.Blink = &v6->DeviceList;
            v6->DeviceList.Flink = &v6->DeviceList;
            Size = FilterDriverCharacteristics->Header.Size;
            if ( Size < 0xE0u )
              v10 = Size;
            memmove(&v6->DefaultFilterCharacteristics, FilterDriverCharacteristics, v10);
            v29 = v6->DefaultFilterCharacteristics.MajorNdisVersion;
            if ( v29 <= 6u && (v29 != 6 || v6->DefaultFilterCharacteristics.MinorNdisVersion < 0x32u) )
              v6->DefaultFilterCharacteristics.Flags &= ~1u;
            Flags = v6->DefaultFilterCharacteristics.Flags;
            v6->DefaultFilterCharacteristics.FriendlyName.Buffer = (wchar_t *)&v6[1].Header.Type;
            v6->Flags = Flags;
            v31 = (__int64)&v6[1] + FilterDriverCharacteristics->FriendlyName.Length;
            v6->DefaultFilterCharacteristics.UniqueName.Buffer = (wchar_t *)v31;
            v32 = (wchar_t *)(v31 + FilterDriverCharacteristics->UniqueName.Length);
            Buffer = v6->DefaultFilterCharacteristics.FriendlyName.Buffer;
            v6->DefaultFilterCharacteristics.ServiceName.Buffer = v32;
            memmove(
              Buffer,
              FilterDriverCharacteristics->FriendlyName.Buffer,
              FilterDriverCharacteristics->FriendlyName.Length);
            RtlUpcaseUnicodeString(
              &v6->DefaultFilterCharacteristics.UniqueName,
              &FilterDriverCharacteristics->UniqueName,
              0);
            memmove(
              v6->DefaultFilterCharacteristics.ServiceName.Buffer,
              FilterDriverCharacteristics->ServiceName.Buffer,
              p_ServiceName->Length);
            if ( RtlGUIDFromString(&FilterDriverCharacteristics->UniqueName, &Guid) < 0 )
            {
              if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                WPP_SF_Z(
                  21LL,
                  &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids,
                  &FilterDriverCharacteristics->UniqueName);
            }
            else
            {
              LOBYTE(v35) = 1;
              FilterDriver = (volatile signed __int32 **)ndisBindGetFilterDriver(&P, &Guid, v35);
              if ( p_Bind != FilterDriver )
              {
                v37 = *FilterDriver;
                *FilterDriver = 0LL;
                v38 = *p_Bind;
                if ( *p_Bind && !_InterlockedDecrement(v38 + 18) && v38 )
                  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v38);
                *p_Bind = v37;
              }
              v39 = P;
              if ( P && !_InterlockedDecrement((volatile signed __int32 *)P + 18) && v39 )
              {
                v46 = (void *)v39[7];
                if ( v46 )
                  ExFreePoolWithTag(v46, 0x7274534Bu);
                v47 = v39[2];
                v48 = (_QWORD *)v39[3];
                if ( *(_QWORD **)(v47 + 8) != v39 + 2 || (_QWORD *)*v48 != v39 + 2 )
                  __fastfail(3u);
                *v48 = v47;
                *(_QWORD *)(v47 + 8) = v48;
                ExFreePoolWithTag(v39, 0x446C4642u);
              }
              if ( *p_Bind )
              {
                v40 = v50;
                *v50 = v6;
                if ( !FilterDriverCharacteristics->SetOptionsHandler
                  || (v45 = ndisFInvokeSetOptions(v6), (FilterDriverRegistry = v45) == 0) )
                {
                  v41 = KeAcquireSpinLockRaiseToDpc(&ndisFilterDriverListLock);
                  v6->NextFilterDriver = ndisFilterDriverList;
                  ndisFilterDriverList = v6;
                  KeReleaseSpinLock(&ndisFilterDriverListLock, v41);
                  ObfReferenceObject(ndisDriverObject);
                  ndisQueryDriverImageName(&FilterDriverCharacteristics->ServiceName, &v6->ImageName);
                  LOBYTE(v42) = 1;
                  ndisWriteDriverNDISVersionToServiceKey(
                    FilterDriverCharacteristics->MajorNdisVersion,
                    FilterDriverCharacteristics->MinorNdisVersion,
                    v42,
                    FilterDriverCharacteristics->MajorDriverVersion,
                    FilterDriverCharacteristics->MinorDriverVersion,
                    (__int64)&FilterDriverCharacteristics->ServiceName);
                  FilterDriverRegistry = 0;
                  NDIS_BIND_FILTER_DRIVER::SetRunningDriver((NDIS_BIND_FILTER_DRIVER *)(*p_Bind + 2), v6, v43);
                  goto LABEL_55;
                }
                if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                  WPP_SF_d(23LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, v45);
                *v40 = 0LL;
LABEL_123:
                if ( !FilterDriverRegistry )
                  goto LABEL_55;
                goto LABEL_124;
              }
              if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                WPP_SF__guid_(22LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, &Guid);
            }
            FilterDriverRegistry = -1073741823;
LABEL_124:
            if ( v6 )
            {
              _NDIS_FILTER_DRIVER_BLOCK::`scalar deleting destructor'(v6, v34);
              ExFreePoolWithTag(v6, 0);
            }
            goto LABEL_55;
          }
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
            WPP_SF_q(20LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, DriverObject);
          FilterDriverRegistry = -1073741811;
          if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
            Template_zq(
              v22,
              (unsigned int)&FilterRegistrationFailed,
              v20,
              FilterDriverCharacteristics->FriendlyName.Buffer,
              7);
        }
      }
    }
    else
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_q(14LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, DriverObject);
      FilterDriverRegistry = -1073676283;
      if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
        Template_zq(
          v17,
          (unsigned int)&FilterRegistrationFailed,
          (_DWORD)OidRequestHandler,
          FilterDriverCharacteristics->FriendlyName.Buffer,
          2);
    }
  }
  else
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_q(13LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, DriverObject);
    FilterDriverRegistry = -1073676283;
    if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
    {
      Template_zq(v7, (unsigned int)&FilterRegistrationFailed, v8, FilterDriverCharacteristics->FriendlyName.Buffer, 1);
      goto LABEL_123;
    }
  }
LABEL_55:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_d(24LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, FilterDriverRegistry);
  KeReleaseMutex(&ndisPnPMutex, 0);
  return FilterDriverRegistry;
}
