/*
 * XREFs of PinCreate @ 0x1C0018920
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00011A8 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00013EC (WPP_RECORDER_SF_qd.c)
 *     PinAddPinToList @ 0x1C00020D8 (PinAddPinToList.c)
 *     __security_check_cookie @ 0x1C00089A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0009630 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000A580 (memset.c)
 *     PinValidateDataFormat @ 0x1C00185F0 (PinValidateDataFormat.c)
 */

__int64 __fastcall PinCreate(PKSPIN Pin, __int64 a2)
{
  const KSPIN_DESCRIPTOR_EX *Descriptor; // rbp
  char v3; // bl
  __int64 v5; // r14
  __int64 ConnectionFormat; // rdx
  NTSTATUS v7; // ebx
  char v8; // r10
  unsigned int *v9; // rax
  unsigned __int64 v10; // rcx
  unsigned int v11; // r11d
  unsigned __int64 v12; // rcx
  int v13; // r9d
  unsigned __int64 v14; // r8
  unsigned int v15; // ecx
  ULONG DataRangesCount; // r15d
  ULONG v17; // edi
  __int64 v18; // r12
  __int64 v19; // r13
  int v20; // eax
  unsigned int v21; // eax
  size_t v22; // r15
  char *PoolWithTag; // rax
  char *v24; // rdi
  char v26; // [rsp+40h] [rbp-58h]
  __int64 v27; // [rsp+48h] [rbp-50h]
  PKSDEVICE Device; // [rsp+50h] [rbp-48h]
  GUID v29; // [rsp+58h] [rbp-40h]

  Descriptor = Pin->Descriptor;
  v3 = 0;
  v26 = 0;
  v5 = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      8u,
      0xEu,
      (__int64)&WPP_1eb1219369133eb445a80eae098b7c49_Traceguids,
      Pin);
  Device = KsGetDevice(Pin);
  if ( !Device )
    goto LABEL_4;
  if ( HIDWORD(Descriptor[1].Dispatch) >= LODWORD(Descriptor[1].Dispatch) )
  {
LABEL_6:
    v7 = -1073741670;
    goto LABEL_45;
  }
  ConnectionFormat = (__int64)Pin->ConnectionFormat;
  v27 = ConnectionFormat;
  if ( (*(_DWORD *)(ConnectionFormat + 4) & 2) != 0 )
  {
    v8 = 0;
    v9 = (unsigned int *)(ConnectionFormat + ((*(_DWORD *)ConnectionFormat + 7) & 0xFFFFFFF8));
    v29 = AUDIO_SIGNALPROCESSINGMODE_RAW;
    v10 = *v9;
    if ( v10 < 8 )
    {
LABEL_4:
      v7 = -1073741811;
LABEL_45:
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        ConnectionFormat,
        8u,
        0xFu,
        (__int64)&WPP_1eb1219369133eb445a80eae098b7c49_Traceguids,
        Pin,
        v7);
      return (unsigned int)v7;
    }
    v11 = v9[1];
    ConnectionFormat = (__int64)(v9 + 2);
    v12 = v10 - 8;
    v13 = 0;
    if ( v11 )
    {
      while ( v12 >= 0x18 )
      {
        if ( *(_QWORD *)(ConnectionFormat + 8) == *(_QWORD *)&KSATTRIBUTEID_AUDIOSIGNALPROCESSING_MODE.Data1
          && *(_QWORD *)(ConnectionFormat + 16) == *(_QWORD *)KSATTRIBUTEID_AUDIOSIGNALPROCESSING_MODE.Data4 )
        {
          if ( v12 < 0x28 || *(_DWORD *)ConnectionFormat != 40 )
            goto LABEL_4;
          v8 = 1;
          v29 = *(GUID *)(ConnectionFormat + 24);
        }
        v14 = (*(_DWORD *)ConnectionFormat + 7) & 0xFFFFFFF8;
        if ( v12 < v14 )
          goto LABEL_4;
        ConnectionFormat += v14;
        v12 -= v14;
        if ( ++v13 >= v11 )
          goto LABEL_18;
      }
      goto LABEL_4;
    }
LABEL_18:
    if ( v8 )
    {
      ConnectionFormat = LODWORD(Descriptor[1].PinDescriptor.Interfaces);
      v7 = -1073741198;
      if ( !(_DWORD)ConnectionFormat )
        goto LABEL_45;
      v15 = 0;
      while ( *(_OWORD *)&v29 != *(_OWORD *)(*(_QWORD *)&Descriptor[1].PinDescriptor.MediumsCount + 16LL * v15) )
      {
        if ( ++v15 >= (unsigned int)ConnectionFormat )
          goto LABEL_45;
      }
      v3 = 0;
    }
    ConnectionFormat = v27;
  }
  DataRangesCount = Descriptor->PinDescriptor.DataRangesCount;
  v17 = 0;
  if ( !DataRangesCount )
  {
LABEL_44:
    v7 = -1073741198;
    goto LABEL_45;
  }
  do
  {
    v18 = v5;
    if ( v3 )
      break;
    v19 = (__int64)Descriptor->PinDescriptor.DataRanges[v17];
    v5 = v19;
    v20 = PinValidateDataFormat((__int64)Descriptor, v19, ConnectionFormat);
    v7 = v20;
    if ( v20 < 0 )
    {
      if ( v20 != -1073741198 )
        goto LABEL_42;
    }
    else
    {
      v26 = 1;
    }
    ConnectionFormat = v27;
    v3 = v26;
    if ( v20 < 0 )
      v5 = v18;
    v17 += ((*(_DWORD *)(v19 + 4) & 2) != 0) + 1;
  }
  while ( v17 < DataRangesCount );
  if ( !v5 )
    goto LABEL_44;
  v21 = *(_DWORD *)(v5 + 112) + 176;
  if ( v21 < 0xB0 )
  {
    v7 = -1073741811;
  }
  else
  {
    v22 = v21;
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, v21, 0x41627845u);
    Pin->Context = PoolWithTag;
    v24 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_6;
    v7 = KsAddItemToObjectBag(Pin->Bag, PoolWithTag, ExFreePool);
    if ( v7 >= 0 )
    {
      memset(v24, 0, v22);
      *((_QWORD *)v24 + 2) = Device;
      *((_QWORD *)v24 + 19) = v24 + 176;
      *((_QWORD *)v24 + 3) = Pin;
      v24[47] = 0;
      *((_QWORD *)v24 + 4) = Descriptor;
      *((_QWORD *)v24 + 18) = v5;
      *((_QWORD *)v24 + 9) = v24 + 64;
      *((_QWORD *)v24 + 8) = v24 + 64;
      KeInitializeSpinLock((PKSPIN_LOCK)v24 + 14);
      KeInitializeEvent((PRKEVENT)v24 + 5, NotificationEvent, 0);
      v7 = (**(__int64 (__fastcall ***)(PKSPIN))(*((_QWORD *)v24 + 18) + 128LL))(Pin);
      if ( v7 < 0 )
        goto LABEL_45;
      ++HIDWORD(Descriptor[1].Dispatch);
      v24[168] = 1;
      KsPinRegisterPowerCallbacks(Pin, (PFNKSPINPOWER)PinGoToLowPowerState, (PFNKSPINPOWER)PinGoToFullPowerState);
      v7 = PinAddPinToList(Pin);
    }
    else
    {
      ExFreePool(v24);
    }
  }
LABEL_42:
  if ( v7 < 0 )
    goto LABEL_45;
  return (unsigned int)v7;
}
