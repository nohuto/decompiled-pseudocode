/*
 * XREFs of PinCreate @ 0x1C00144D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0001008 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0001254 (WPP_RECORDER_SF_qd.c)
 *     PinAddPinToList @ 0x1C0002038 (PinAddPinToList.c)
 *     __security_check_cookie @ 0x1C0006850 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00074E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008440 (memset.c)
 *     PinValidateDataFormat @ 0x1C00141A4 (PinValidateDataFormat.c)
 */

__int64 __fastcall PinCreate(PKSPIN Pin)
{
  const KSPIN_DESCRIPTOR_EX *Descriptor; // rbp
  char v2; // bl
  __int64 v4; // r13
  NTSTATUS v5; // ebx
  PKSDATAFORMAT ConnectionFormat; // r12
  char v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned int v10; // r11d
  char *v11; // rdx
  unsigned __int64 v12; // rcx
  int v13; // r10d
  unsigned __int64 v14; // r9
  unsigned int Interfaces; // edx
  unsigned int v16; // ecx
  ULONG DataRangesCount; // r15d
  ULONG v18; // edi
  __int64 v19; // r14
  int v20; // eax
  unsigned int v21; // eax
  size_t v22; // r14
  char *PoolWithTag; // rax
  char *v24; // rdi
  char v26; // [rsp+40h] [rbp-58h]
  PKSDEVICE Device; // [rsp+48h] [rbp-50h]
  GUID v28; // [rsp+50h] [rbp-48h]

  Descriptor = Pin->Descriptor;
  v2 = 0;
  v26 = 0;
  v4 = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      8u,
      0xEu,
      (__int64)&WPP_f45567b61f903821dcfca6276dd00e2d_Traceguids,
      Pin);
  Device = KsGetDevice(Pin);
  if ( !Device )
    goto LABEL_4;
  if ( HIDWORD(Descriptor[1].Dispatch) >= LODWORD(Descriptor[1].Dispatch) )
  {
LABEL_6:
    v5 = -1073741670;
    goto LABEL_43;
  }
  ConnectionFormat = Pin->ConnectionFormat;
  if ( (ConnectionFormat->Flags & 2) != 0 )
  {
    v7 = 0;
    v8 = (ConnectionFormat->FormatSize + 7) & 0xFFFFFFF8;
    v28 = AUDIO_SIGNALPROCESSINGMODE_RAW;
    v9 = *(unsigned int *)((char *)&ConnectionFormat->FormatSize + v8);
    if ( v9 < 8 )
    {
LABEL_4:
      v5 = -1073741811;
LABEL_43:
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        8u,
        0xFu,
        (__int64)&WPP_f45567b61f903821dcfca6276dd00e2d_Traceguids,
        Pin,
        v5);
      return (unsigned int)v5;
    }
    v10 = *(ULONG *)((char *)&ConnectionFormat->Flags + v8);
    v11 = (char *)&ConnectionFormat->Alignment + v8 + 8;
    v12 = v9 - 8;
    v13 = 0;
    if ( v10 )
    {
      while ( v12 >= 0x18 )
      {
        if ( *((_QWORD *)v11 + 1) == *(_QWORD *)&KSATTRIBUTEID_AUDIOSIGNALPROCESSING_MODE.Data1
          && *((_QWORD *)v11 + 2) == *(_QWORD *)KSATTRIBUTEID_AUDIOSIGNALPROCESSING_MODE.Data4 )
        {
          if ( v12 < 0x28 || *(_DWORD *)v11 != 40 )
            goto LABEL_4;
          v7 = 1;
          v28 = *(GUID *)(v11 + 24);
        }
        v14 = (*(_DWORD *)v11 + 7) & 0xFFFFFFF8;
        if ( v12 < v14 )
          goto LABEL_4;
        v11 += v14;
        v12 -= v14;
        if ( ++v13 >= v10 )
          goto LABEL_18;
      }
      goto LABEL_4;
    }
LABEL_18:
    if ( v7 )
    {
      Interfaces = (unsigned int)Descriptor[1].PinDescriptor.Interfaces;
      v5 = -1073741198;
      if ( !Interfaces )
        goto LABEL_43;
      v16 = 0;
      while ( *(_OWORD *)&v28 != *(_OWORD *)(*(_QWORD *)&Descriptor[1].PinDescriptor.MediumsCount + 16LL * v16) )
      {
        if ( ++v16 >= Interfaces )
          goto LABEL_43;
      }
    }
    v2 = 0;
  }
  DataRangesCount = Descriptor->PinDescriptor.DataRangesCount;
  v18 = 0;
  if ( !DataRangesCount )
  {
LABEL_42:
    v5 = -1073741198;
    goto LABEL_43;
  }
  do
  {
    if ( v2 )
      break;
    v19 = (__int64)Descriptor->PinDescriptor.DataRanges[v18];
    v20 = PinValidateDataFormat((__int64)Descriptor, v19, (__int64)ConnectionFormat);
    v5 = v20;
    if ( v20 < 0 )
    {
      if ( v20 != -1073741198 )
        goto LABEL_40;
      v2 = v26;
    }
    else
    {
      v2 = 1;
      v4 = v19;
      v26 = 1;
    }
    v18 += ((*(_DWORD *)(v19 + 4) & 2) != 0) + 1;
  }
  while ( v18 < DataRangesCount );
  if ( !v4 )
    goto LABEL_42;
  v21 = *(_DWORD *)(v4 + 112) + 160;
  if ( v21 < 0xA0 )
  {
    v5 = -1073741811;
  }
  else
  {
    v22 = v21;
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, v21, 0x41627845u);
    Pin->Context = PoolWithTag;
    v24 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_6;
    v5 = KsAddItemToObjectBag(Pin->Bag, PoolWithTag, ExFreePool);
    if ( v5 >= 0 )
    {
      memset(v24, 0, v22);
      *((_QWORD *)v24 + 2) = Device;
      *((_QWORD *)v24 + 17) = v24 + 160;
      *((_QWORD *)v24 + 3) = Descriptor;
      *((_QWORD *)v24 + 16) = v4;
      *((_QWORD *)v24 + 7) = v24 + 48;
      *((_QWORD *)v24 + 6) = v24 + 48;
      KeInitializeSpinLock((PKSPIN_LOCK)v24 + 12);
      KeInitializeEvent((PRKEVENT)(v24 + 104), NotificationEvent, 0);
      v5 = (**(__int64 (__fastcall ***)(PKSPIN))(*((_QWORD *)v24 + 16) + 128LL))(Pin);
      if ( v5 < 0 )
        goto LABEL_43;
      ++HIDWORD(Descriptor[1].Dispatch);
      v24[152] = 1;
      KsPinRegisterPowerCallbacks(Pin, (PFNKSPINPOWER)PinGoToLowPowerState, (PFNKSPINPOWER)PinGoToFullPowerState);
      v5 = PinAddPinToList(Pin);
    }
    else
    {
      ExFreePool(v24);
    }
  }
LABEL_40:
  if ( v5 < 0 )
    goto LABEL_43;
  return (unsigned int)v5;
}
