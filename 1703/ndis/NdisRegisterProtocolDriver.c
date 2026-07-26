/*
 * XREFs of NdisRegisterProtocolDriver @ 0x1C00B7D70
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C001D1C4 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_Z @ 0x1C0044008 (WPP_SF_Z.c)
 *     WPP_SF_qZL @ 0x1C0051670 (WPP_SF_qZL.c)
 *     ??_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z @ 0x1C005BB14 (--_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z @ 0x1C00B24A4 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z.c)
 *     ndisInitializeRef @ 0x1C00B6E54 (ndisInitializeRef.c)
 *     ??4?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00B81D0 (--4-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ndisWriteDriverNDISVersionToServiceKey @ 0x1C00B83FC (ndisWriteDriverNDISVersionToServiceKey.c)
 *     ndisValidate60Protocol @ 0x1C00B84FC (ndisValidate60Protocol.c)
 */

NDIS_STATUS __stdcall NdisRegisterProtocolDriver(
        NDIS_HANDLE ProtocolDriverContext,
        PNDIS_PROTOCOL_DRIVER_CHARACTERISTICS ProtocolCharacteristics,
        PNDIS_HANDLE NdisProtocolHandle)
{
  _NDIS_PROTOCOL_BLOCK *v6; // rbx
  unsigned __int8 MinorNdisVersion; // r8
  USHORT v8; // dx
  bool v9; // cl
  char v10; // al
  char v11; // cl
  char v12; // al
  char v13; // cl
  char v14; // al
  NDIS_STATUS v15; // edi
  unsigned __int8 MajorNdisVersion; // al
  _UNICODE_STRING *p_Name; // r15
  __int64 v18; // rdi
  _NDIS_PROTOCOL_BLOCK *PoolWithTag; // rax
  unsigned __int8 v20; // cl
  unsigned __int8 v21; // dl
  unsigned int Flags; // eax
  unsigned __int8 v23; // al
  _QWORD *ProtocolDriver; // rax
  int v25; // r8d
  _QWORD *v26; // rdi
  int v27; // eax
  void *v29; // rcx
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  __int64 v32; // [rsp+20h] [rbp-40h]
  UNICODE_STRING String2; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING v34; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v35; // [rsp+50h] [rbp-10h] BYREF
  PVOID P; // [rsp+98h] [rbp+38h] BYREF

  *(_DWORD *)&String2.Length = 786442;
  *(_DWORD *)&v34.Length = 917516;
  String2.Buffer = L"TCPIP";
  *(_DWORD *)&v35.Length = 1310738;
  v34.Buffer = L"TCPIP6";
  v35.Buffer = L"NDISTEST6";
  v6 = 0LL;
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_Z(0xAu, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, &ProtocolCharacteristics->Name.Length);
  if ( !ndisNsiInitialized )
    RtlRunOnceExecuteOnce(&ndisNsiInitOnceBlock, (PRTL_RUN_ONCE_INIT_FN)ndisInitializeNsiInitFn, 0LL, 0LL);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( ProtocolCharacteristics->MajorNdisVersion != 6 )
    goto LABEL_56;
  MinorNdisVersion = ProtocolCharacteristics->MinorNdisVersion;
  if ( MinorNdisVersion == 2 )
    goto LABEL_56;
  v8 = MinorNdisVersion == 0 ? 0x78 : 0;
  v9 = MinorNdisVersion == 1;
  if ( MinorNdisVersion == 20 )
    v9 = 1;
  v10 = v9;
  if ( MinorNdisVersion == 30 )
    v10 = 1;
  v11 = v10;
  if ( MinorNdisVersion == 40 )
    v11 = 1;
  v12 = v11;
  if ( MinorNdisVersion == 50 )
    v12 = 1;
  if ( MinorNdisVersion == 51 )
    v12 = 1;
  v13 = v12;
  if ( MinorNdisVersion == 60 )
    v13 = 1;
  v14 = v13;
  if ( MinorNdisVersion == 70 )
    v14 = 1;
  if ( !v14 )
  {
    if ( (MinorNdisVersion == 0 ? 0x78 : 0) != 0 )
      goto LABEL_25;
LABEL_56:
    v15 = -1073676284;
    goto LABEL_48;
  }
  if ( ProtocolCharacteristics->Header.Type != 0x95 || ProtocolCharacteristics->Header.Revision < 2u )
    goto LABEL_54;
  v8 = 128;
LABEL_25:
  if ( ProtocolCharacteristics->Header.Size < v8 )
  {
LABEL_54:
    v15 = -1073676283;
    goto LABEL_48;
  }
  v15 = -1073676283;
  if ( (unsigned int)ndisValidate60Protocol(ProtocolCharacteristics) == -1073676283 )
    goto LABEL_48;
  MajorNdisVersion = ProtocolCharacteristics->MajorNdisVersion;
  if ( (MajorNdisVersion > 6u || MajorNdisVersion == 6 && ProtocolCharacteristics->MinorNdisVersion >= 0x32u)
    && (ProtocolCharacteristics->Flags & 0xFFFFFF9) != 0 )
  {
    v15 = -1073741811;
    goto LABEL_48;
  }
  p_Name = &ProtocolCharacteristics->Name;
  v18 = (unsigned __int16)(ProtocolCharacteristics->Name.Length + 986);
  PoolWithTag = (_NDIS_PROTOCOL_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)v18, 0x6270444Eu);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_60;
  memset(PoolWithTag, 0, (unsigned __int16)v18);
  v6->Bind._p = 0LL;
  v6->NotifyBindCompleteWorkItem.m_callback = _NDIS_PROTOCOL_BLOCK::NotifyBindComplete;
  v6->NotifyBindCompleteWorkItem.m_context = v6;
  v6->NotifyBindCompleteWorkItem.m_workitem.WorkerRoutine = (void (__fastcall *)(void *))KWorkItemBase<MINIPORT_HOOK_DRIVER,KCoalescingWorkItem<MINIPORT_HOOK_DRIVER>>::CallbackThunk;
  v6->NotifyBindCompleteWorkItem.m_workitem.List.Flink = 0LL;
  v6->NotifyBindCompleteWorkItem.m_workitem.Parameter = &v6->NotifyBindCompleteWorkItem;
  v6->NotifyBindCompleteWorkItem.m_queued = 0;
  KeInitializeMutex(&v6->Mutex, 0xFFFFu);
  v6->Header.Size = v18;
  *(_WORD *)&v6->Header.Type = 259;
  v20 = ProtocolCharacteristics->MajorNdisVersion;
  v6->MajorNdisVersion = v20;
  v21 = ProtocolCharacteristics->MinorNdisVersion;
  v6->MinorNdisVersion = v21;
  v6->MajorDriverVersion = ProtocolCharacteristics->MajorDriverVersion;
  v6->MinorDriverVersion = ProtocolCharacteristics->MinorDriverVersion;
  v6->Name.Buffer = (wchar_t *)&v6[1].Header.Type;
  v6->ProtocolDriverContext = ProtocolDriverContext;
  Flags = ProtocolCharacteristics->Flags;
  v6->Flags = Flags;
  if ( v20 <= 6u && (v20 != 6 || v21 < 0x32u) )
    v6->Flags = Flags & 0xF0000000;
  v6->Name.Length = p_Name->Length;
  v6->Name.MaximumLength = p_Name->Length;
  RtlUpcaseUnicodeString(&v6->Name, &ProtocolCharacteristics->Name, 0);
  v6->IsIPv4 = RtlCompareUnicodeString(&v6->Name, &String2, 0) == 0;
  v6->IsIPv6 = RtlCompareUnicodeString(&v6->Name, &v34, 0) == 0;
  v6->IsNdisTest6 = RtlCompareUnicodeString(&v6->Name, &v35, 0) == 0;
  v6->BindAdapterHandlerEx = ProtocolCharacteristics->BindAdapterHandlerEx;
  v6->UnbindAdapterHandlerEx = ProtocolCharacteristics->UnbindAdapterHandlerEx;
  v6->OpenAdapterCompleteHandlerEx = ProtocolCharacteristics->OpenAdapterCompleteHandlerEx;
  v6->CloseAdapterCompleteHandlerEx = ProtocolCharacteristics->CloseAdapterCompleteHandlerEx;
  v6->PnPEventHandler = (int (__fastcall *)(void *, _NET_PNP_EVENT *))ProtocolCharacteristics->NetPnPEventHandler;
  v6->UninstallHandler = ProtocolCharacteristics->UninstallHandler;
  v6->StatusHandlerEx = ProtocolCharacteristics->StatusHandlerEx;
  v6->ReceiveNetBufferListsHandler = ProtocolCharacteristics->ReceiveNetBufferListsHandler;
  v6->SendNetBufferListsCompleteHandler = ProtocolCharacteristics->SendNetBufferListsCompleteHandler;
  v6->OidRequestCompleteHandler = ProtocolCharacteristics->OidRequestCompleteHandler;
  v23 = ProtocolCharacteristics->MajorNdisVersion;
  if ( v23 > 6u || v23 == 6 && ProtocolCharacteristics->MinorNdisVersion )
    v6->DirectOidRequestCompleteHandler = ProtocolCharacteristics->DirectOidRequestCompleteHandler;
  ndisInitializeRef((__int64)&v6->Ref, 15);
  ProtocolDriver = ndisBindGetProtocolDriver(&P, &v6->Name, 1);
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::operator=(&v6->Bind, ProtocolDriver);
  v26 = P;
  if ( P && _InterlockedExchangeAdd((volatile signed __int32 *)P + 14, 0xFFFFFFFF) == 1 && v26 )
  {
    v29 = (void *)v26[4];
    if ( v29 )
      ExFreePoolWithTag(v29, 0x7274534Bu);
    v30 = v26[2];
    v31 = (_QWORD *)v26[3];
    if ( *(_QWORD **)(v30 + 8) != v26 + 2 || (_QWORD *)*v31 != v26 + 2 )
      __fastfail(3u);
    *v31 = v30;
    *(_QWORD *)(v30 + 8) = v31;
    ExFreePoolWithTag(v26, 0x44745042u);
  }
  if ( !v6->Bind._p )
  {
    _NDIS_PROTOCOL_BLOCK::`scalar deleting destructor'(v6);
    ExFreePoolWithTag(v6, 0);
LABEL_60:
    v15 = -1073741670;
    goto LABEL_48;
  }
  *NdisProtocolHandle = v6;
  if ( ProtocolCharacteristics->SetOptionsHandler )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0x56u, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, (__int64)v6);
    v27 = ProtocolCharacteristics->SetOptionsHandler(v6, v6->ProtocolDriverContext);
    v15 = v27;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qD(0x57u, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, (__int64)v6, v27);
  }
  else
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0x58u, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, (__int64)v6);
    v15 = 0;
  }
  if ( v15 )
  {
    _NDIS_PROTOCOL_BLOCK::`scalar deleting destructor'(v6);
    ExFreePoolWithTag(v6, 0);
    v6 = 0LL;
    *NdisProtocolHandle = 0LL;
  }
  else
  {
    LOBYTE(v25) = 1;
    ndisWriteDriverNDISVersionToServiceKey(
      v6->MajorNdisVersion,
      v6->MinorNdisVersion,
      v25,
      v6->MajorDriverVersion,
      v6->MinorDriverVersion,
      (__int64)&v6->Name);
    ndisRegisterProtocolDriverCommon(v6);
    v15 = 0;
  }
LABEL_48:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
  {
    LODWORD(v32) = v15;
    WPP_SF_qZL(
      0xBu,
      &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids,
      (__int64)v6,
      &ProtocolCharacteristics->Name.Length,
      v32);
  }
  return v15;
}
