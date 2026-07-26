/*
 * XREFs of NdisRegisterProtocolDriver @ 0x1C00BEDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0010D44 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_Z @ 0x1C0040B38 (WPP_SF_Z.c)
 *     WPP_SF_qZL @ 0x1C00503A8 (WPP_SF_qZL.c)
 *     ??_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z @ 0x1C005B65C (--_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z @ 0x1C00B1F8C (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 *     NdisAllocateRefCount @ 0x1C00BE070 (NdisAllocateRefCount.c)
 *     ndisValidate60Protocol @ 0x1C00BF40C (ndisValidate60Protocol.c)
 *     ndisValidateProtocolDriverCharacteristicsHeader @ 0x1C00BF58C (ndisValidateProtocolDriverCharacteristicsHeader.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00E5F98 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

NDIS_STATUS __stdcall NdisRegisterProtocolDriver(
        NDIS_HANDLE ProtocolDriverContext,
        PNDIS_PROTOCOL_DRIVER_CHARACTERISTICS ProtocolCharacteristics,
        PNDIS_HANDLE NdisProtocolHandle)
{
  _NDIS_PROTOCOL_BLOCK *v3; // r14
  NDIS_STATUS v7; // ebx
  unsigned __int8 MajorNdisVersion; // al
  _UNICODE_STRING *p_Name; // rsi
  unsigned int v10; // ebx
  _NDIS_PROTOCOL_BLOCK *PoolWithTag; // rax
  volatile signed __int32 **p_Bind; // rdi
  unsigned __int8 v13; // cl
  unsigned __int8 MinorNdisVersion; // dl
  unsigned int Flags; // eax
  unsigned __int8 v16; // al
  volatile signed __int32 **ProtocolDriver; // rax
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rcx
  _QWORD *v20; // rbx
  int v21; // eax
  const WCHAR *Buffer; // rdx
  int MinorDriverVersion; // esi
  int MajorDriverVersion; // edi
  int v25; // ebx
  const WCHAR *v26; // rdx
  const WCHAR *v27; // rdx
  const WCHAR *v28; // rdx
  void *v30; // rcx
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  PVOID ValueData; // [rsp+20h] [rbp-50h]
  int v34; // [rsp+30h] [rbp-40h] BYREF
  PVOID P; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING String2; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING v37; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING v38; // [rsp+60h] [rbp-10h] BYREF
  int v39; // [rsp+B8h] [rbp+48h] BYREF

  *(_DWORD *)&String2.Length = 786442;
  String2.Buffer = L"TCPIP";
  v3 = 0LL;
  v34 = 0;
  v37.Buffer = L"TCPIP6";
  *(_DWORD *)&v37.Length = 917516;
  v38.Buffer = L"NDISTEST6";
  *(_DWORD *)&v38.Length = 1310738;
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_Z(0xAu, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, &ProtocolCharacteristics->Name.Length);
  if ( !ndisNsiInitialized )
    RtlRunOnceExecuteOnce(&ndisNsiInitOnceBlock, ndisInitializeNsiInitFn, 0LL, 0LL);
  ndisReferencePackage((__int64)&ndisPkgs);
  v7 = ndisValidateProtocolDriverCharacteristicsHeader(ProtocolCharacteristics, &v34);
  if ( !v7 )
  {
    v7 = -1073676283;
    if ( (unsigned int)ndisValidate60Protocol(ProtocolCharacteristics) != -1073676283 )
    {
      MajorNdisVersion = ProtocolCharacteristics->MajorNdisVersion;
      if ( (MajorNdisVersion > 6u || MajorNdisVersion == 6 && ProtocolCharacteristics->MinorNdisVersion >= 0x32u)
        && (ProtocolCharacteristics->Flags & 0xFFFFFF9) != 0 )
      {
        v7 = -1073741811;
        goto LABEL_31;
      }
      p_Name = &ProtocolCharacteristics->Name;
      v10 = ProtocolCharacteristics->Name.Length + 986;
      PoolWithTag = (_NDIS_PROTOCOL_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x6270444Eu);
      v3 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v10);
        p_Bind = (volatile signed __int32 **)&v3->Bind;
        v3->Bind._p = 0LL;
        v3->NotifyBindCompleteWorkItem.m_callback = _NDIS_PROTOCOL_BLOCK::NotifyBindComplete;
        v3->NotifyBindCompleteWorkItem.m_context = v3;
        v3->NotifyBindCompleteWorkItem.m_workitem.WorkerRoutine = (void (__fastcall *)(void *))KWorkItemBase<MINIPORT_HOOK_DRIVER,KCoalescingWorkItem<MINIPORT_HOOK_DRIVER>>::CallbackThunk;
        v3->NotifyBindCompleteWorkItem.m_workitem.List.Flink = 0LL;
        v3->NotifyBindCompleteWorkItem.m_workitem.Parameter = &v3->NotifyBindCompleteWorkItem;
        v3->NotifyBindCompleteWorkItem.m_queued = 0;
        KeInitializeMutex(&v3->Mutex, 0xFFFFu);
        v3->Header.Size = v10;
        *(_WORD *)&v3->Header.Type = 259;
        v13 = ProtocolCharacteristics->MajorNdisVersion;
        v3->MajorNdisVersion = v13;
        MinorNdisVersion = ProtocolCharacteristics->MinorNdisVersion;
        v3->MinorNdisVersion = MinorNdisVersion;
        v3->MajorDriverVersion = ProtocolCharacteristics->MajorDriverVersion;
        v3->MinorDriverVersion = ProtocolCharacteristics->MinorDriverVersion;
        v3->Name.Buffer = (wchar_t *)&v3[1].Header.Type;
        v3->ProtocolDriverContext = ProtocolDriverContext;
        Flags = ProtocolCharacteristics->Flags;
        v3->Flags = Flags;
        if ( v13 <= 6u && (v13 != 6 || MinorNdisVersion < 0x32u) )
          v3->Flags = Flags & 0xF0000000;
        v3->Name.Length = p_Name->Length;
        v3->Name.MaximumLength = p_Name->Length;
        RtlUpcaseUnicodeString(&v3->Name, &ProtocolCharacteristics->Name, 0);
        v3->IsIPv4 = RtlCompareUnicodeString(&v3->Name, &String2, 0) == 0;
        v3->IsIPv6 = RtlCompareUnicodeString(&v3->Name, &v37, 0) == 0;
        v3->IsNdisTest6 = RtlCompareUnicodeString(&v3->Name, &v38, 0) == 0;
        v3->BindAdapterHandlerEx = ProtocolCharacteristics->BindAdapterHandlerEx;
        v3->UnbindAdapterHandlerEx = ProtocolCharacteristics->UnbindAdapterHandlerEx;
        v3->OpenAdapterCompleteHandlerEx = ProtocolCharacteristics->OpenAdapterCompleteHandlerEx;
        v3->CloseAdapterCompleteHandlerEx = ProtocolCharacteristics->CloseAdapterCompleteHandlerEx;
        v3->PnPEventHandler = (int (__fastcall *)(void *, _NET_PNP_EVENT *))ProtocolCharacteristics->NetPnPEventHandler;
        v3->UninstallHandler = ProtocolCharacteristics->UninstallHandler;
        v3->StatusHandlerEx = ProtocolCharacteristics->StatusHandlerEx;
        v3->ReceiveNetBufferListsHandler = ProtocolCharacteristics->ReceiveNetBufferListsHandler;
        v3->SendNetBufferListsCompleteHandler = ProtocolCharacteristics->SendNetBufferListsCompleteHandler;
        v3->OidRequestCompleteHandler = ProtocolCharacteristics->OidRequestCompleteHandler;
        v16 = ProtocolCharacteristics->MajorNdisVersion;
        if ( v16 > 6u || v16 == 6 && ProtocolCharacteristics->MinorNdisVersion )
          v3->DirectOidRequestCompleteHandler = ProtocolCharacteristics->DirectOidRequestCompleteHandler;
        KeInitializeSpinLock(&v3->Ref.SpinLock);
        *(_DWORD *)&v3->Ref.ReferenceCount = 1;
        v3->Ref.RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)NdisAllocateRefCount(0xFu, 2u);
        ProtocolDriver = ndisBindGetProtocolDriver((volatile signed __int32 **)&P, &v3->Name, 1);
        if ( p_Bind != ProtocolDriver )
        {
          v18 = *ProtocolDriver;
          *ProtocolDriver = 0LL;
          v19 = *p_Bind;
          if ( *p_Bind && _InterlockedExchangeAdd(v19 + 12, 0xFFFFFFFF) == 1 && v19 )
            KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v19);
          *p_Bind = v18;
        }
        v20 = P;
        if ( P && _InterlockedExchangeAdd((volatile signed __int32 *)P + 12, 0xFFFFFFFF) == 1 && v20 )
        {
          v30 = (void *)v20[3];
          if ( v30 )
            ExFreePoolWithTag(v30, 0x7274534Bu);
          v31 = v20[1];
          if ( *(_QWORD **)(v31 + 8) != v20 + 1 || (v32 = (_QWORD *)v20[2], (_QWORD *)*v32 != v20 + 1) )
            __fastfail(3u);
          *v32 = v31;
          *(_QWORD *)(v31 + 8) = v32;
          ExFreePoolWithTag(v20, 0x44745042u);
        }
        if ( *p_Bind )
        {
          *NdisProtocolHandle = v3;
          if ( ProtocolCharacteristics->SetOptionsHandler )
          {
            if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
              WPP_SF_q(0x56u, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, (__int64)v3);
            v21 = ProtocolCharacteristics->SetOptionsHandler(v3, v3->ProtocolDriverContext);
            v7 = v21;
            if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
              WPP_SF_qD(0x57u, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, (__int64)v3, v21);
          }
          else
          {
            if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
              WPP_SF_q(0x58u, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, (__int64)v3);
            v7 = 0;
          }
          if ( v7 )
          {
            _NDIS_PROTOCOL_BLOCK::`scalar deleting destructor'(v3);
            ExFreePoolWithTag(v3, 0);
            v3 = 0LL;
            *NdisProtocolHandle = 0LL;
          }
          else
          {
            Buffer = (const WCHAR *)v3->Name.Buffer;
            MinorDriverVersion = v3->MinorDriverVersion;
            MajorDriverVersion = v3->MajorDriverVersion;
            v25 = v3->MinorNdisVersion;
            v39 = v3->MajorNdisVersion;
            RtlWriteRegistryValue(1u, Buffer, L"NdisMajorVersion", 4u, &v39, 4u);
            v26 = (const WCHAR *)v3->Name.Buffer;
            v39 = v25;
            RtlWriteRegistryValue(1u, v26, L"NdisMinorVersion", 4u, &v39, 4u);
            v27 = (const WCHAR *)v3->Name.Buffer;
            v39 = MajorDriverVersion;
            RtlWriteRegistryValue(1u, v27, L"DriverMajorVersion", 4u, &v39, 4u);
            v28 = (const WCHAR *)v3->Name.Buffer;
            v39 = MinorDriverVersion;
            RtlWriteRegistryValue(1u, v28, L"DriverMinorVersion", 4u, &v39, 4u);
            ndisRegisterProtocolDriverCommon(v3);
            v7 = 0;
          }
          goto LABEL_31;
        }
        _NDIS_PROTOCOL_BLOCK::`scalar deleting destructor'(v3);
        ExFreePoolWithTag(v3, 0);
      }
      v7 = -1073741670;
    }
  }
LABEL_31:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
  {
    LODWORD(ValueData) = v7;
    WPP_SF_qZL(
      0xBu,
      &WPP_4a5d38b576c633146a968e2982301690_Traceguids,
      (__int64)v3,
      &ProtocolCharacteristics->Name.Length,
      ValueData);
  }
  return v7;
}
