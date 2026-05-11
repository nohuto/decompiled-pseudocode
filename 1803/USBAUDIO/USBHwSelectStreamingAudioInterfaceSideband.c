/*
 * XREFs of USBHwSelectStreamingAudioInterfaceSideband @ 0x1C0020738
 * Callers:
 *     USBHwSelectStreamingAudioInterface @ 0x1C0020B5C (USBHwSelectStreamingAudioInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00013EC (WPP_RECORDER_SF_qd.c)
 *     USBD_UrbFree @ 0x1C00079D0 (USBD_UrbFree.c)
 *     USBD_CreateHandle @ 0x1C0007F5C (USBD_CreateHandle.c)
 *     USBD_CloseHandle @ 0x1C0008350 (USBD_CloseHandle.c)
 *     USBD_GetEndpointOffloadInformationForIndex @ 0x1C00083C4 (USBD_GetEndpointOffloadInformationForIndex.c)
 *     USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild @ 0x1C00083F8 (USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild.c)
 *     memmove @ 0x1C000A240 (memmove.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C001FCE4 (USBHwSubmitUrbToUsbdSynch.c)
 *     USBHwFreeOffloadInformation @ 0x1C0020E74 (USBHwFreeOffloadInformation.c)
 */

__int64 __fastcall USBHwSelectStreamingAudioInterfaceSideband(__int64 a1, __int64 a2)
{
  USBD_HANDLE v2; // r12
  unsigned int v3; // edi
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdx
  ULONG v9; // r8d
  _QWORD *PoolWithTag; // r13
  int v11; // ebx
  __int64 v12; // rdi
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  unsigned __int16 v16; // r9
  unsigned int *EndpointOffloadInformationForIndex; // rax
  __int16 v18; // r9
  unsigned int *v19; // rax
  __int16 v20; // r9
  PURB v21; // rsi
  int v22; // eax
  __int64 v23; // rdi
  unsigned int *v24; // rax
  __int64 v25; // rdx
  unsigned int *v26; // r15
  unsigned __int16 v27; // r9
  PVOID v28; // rax
  __int64 v29; // rdx
  unsigned __int16 v30; // r9
  unsigned int *v31; // rax
  unsigned int *v32; // r14
  PVOID v33; // rax
  unsigned int v34; // edx
  __int64 v35; // r14
  void *v36; // rcx
  PVOID v37; // rax
  PURB v38; // rdx
  __int64 v40; // [rsp+30h] [rbp-18h]
  PURB Urb; // [rsp+98h] [rbp+50h] BYREF
  USBD_HANDLE USBDHandle; // [rsp+A0h] [rbp+58h] BYREF
  _QWORD *v44; // [rsp+A8h] [rbp+60h]

  v2 = 0LL;
  v3 = *(unsigned __int8 *)(a2 + 4);
  v44 = *(_QWORD **)(a1 + 16);
  USBDHandle = 0LL;
  v5 = v44[2];
  v6 = v44[18];
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 72LL);
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x61627845u);
  if ( !PoolWithTag )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v8,
      9u,
      0x11u,
      (__int64)&WPP_c3cce433baea39899fa4d65e1e7a922b_Traceguids);
    v11 = -1073741670;
LABEL_3:
    v12 = a1;
    USBHwFreeOffloadInformation(a1);
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v13,
      9u,
      0x18u,
      (__int64)&WPP_c3cce433baea39899fa4d65e1e7a922b_Traceguids,
      a1,
      v11);
    goto LABEL_43;
  }
  PoolWithTag[1] = 0LL;
  *PoolWithTag = a2;
  v14 = USBD_CreateHandle(*(PDEVICE_OBJECT *)(v5 + 24), *(PDEVICE_OBJECT *)(v5 + 40), v9, 0x39627845u, &USBDHandle);
  v2 = USBDHandle;
  v11 = v14;
  if ( v14 < 0 )
  {
    v16 = 18;
LABEL_6:
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v15,
      9u,
      v16,
      (__int64)&WPP_c3cce433baea39899fa4d65e1e7a922b_Traceguids,
      v14);
    goto LABEL_41;
  }
  v14 = USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild(
          USBDHandle,
          *(_QWORD *)(v7 + 24),
          PoolWithTag,
          v3,
          (char **)&Urb);
  v11 = v14;
  if ( v14 < 0 )
  {
    v16 = 19;
    goto LABEL_6;
  }
  EndpointOffloadInformationForIndex = USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, 0);
  *((_WORD *)EndpointOffloadInformationForIndex + 2) = v18;
  if ( v3 > 1 && *(_QWORD *)(v6 + 176) )
  {
    v19 = USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, 1u);
    *((_WORD *)v19 + 2) = v20;
  }
  v21 = Urb;
  v22 = *(_DWORD *)(v6 + 216) & 0xF000;
  if ( v22 )
  {
    if ( v22 == 4096 )
    {
      LODWORD(Urb->UrbOSFeatureDescriptorRequest.hca.Reserved8[3]) = 3872;
      goto LABEL_17;
    }
    if ( v22 != 0x2000 )
      goto LABEL_17;
  }
  LODWORD(Urb->UrbOSFeatureDescriptorRequest.hca.Reserved8[3]) = 500 * *(_DWORD *)(v6 + 220);
  if ( !*(_QWORD *)(v6 + 176) )
    HIDWORD(v21->UrbOSFeatureDescriptorRequest.hca.Reserved8[3]) |= 8u;
LABEL_17:
  v11 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(v5 + 40), Urb, v2);
  if ( Urb->UrbHeader.Status < 0 )
    v11 = -1073741808;
  if ( v11 < 0 )
    goto LABEL_3;
  v23 = v44[19];
  USBHwFreeOffloadInformation(a1);
  v24 = USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, 0);
  v26 = v24;
  if ( !v24 )
  {
    v27 = v25 + 20;
LABEL_22:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v25,
      9u,
      v27,
      (__int64)&WPP_c3cce433baea39899fa4d65e1e7a922b_Traceguids);
    v11 = -1073741437;
    goto LABEL_3;
  }
  v28 = ExAllocatePoolWithTag((POOL_TYPE)512, *v24, 0x62627845u);
  *(_QWORD *)(v23 + 80) = v28;
  if ( !v28 )
  {
    v30 = 21;
LABEL_26:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v29,
      9u,
      v30,
      (__int64)&WPP_c3cce433baea39899fa4d65e1e7a922b_Traceguids);
    v11 = -1073741670;
    goto LABEL_3;
  }
  memmove(v28, v26, *v26);
  if ( *(_QWORD *)(v6 + 176) )
  {
    v31 = USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, 1u);
    v32 = v31;
    if ( !v31 )
    {
      v27 = v25 + 21;
      goto LABEL_22;
    }
    v33 = ExAllocatePoolWithTag((POOL_TYPE)512, *v31, 0x63627845u);
    *(_QWORD *)(v23 + 88) = v33;
    if ( !v33 )
    {
      v30 = 23;
      goto LABEL_26;
    }
    memmove(v33, v32, *v32);
  }
  v34 = (unsigned int)v21->UrbOSFeatureDescriptorRequest.hca.Reserved8[0];
  *(_DWORD *)(v23 + 56) = v34;
  *(_QWORD *)(v23 + 64) = v21->UrbControlTransfer.hca.Reserved8[2];
  if ( v34 > 0x14 )
  {
    v11 = -1073741438;
  }
  else
  {
    v35 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL);
    v36 = *(void **)(v35 + 72);
    if ( v36 )
    {
      ExFreePool(v36);
      *(_QWORD *)(v35 + 72) = 0LL;
      v34 = *(_DWORD *)(v23 + 56);
    }
    v37 = ExAllocatePoolWithTag((POOL_TYPE)512, 24LL * v34, 0x41627845u);
    *(_QWORD *)(v23 + 72) = v37;
    if ( !v37 )
      v11 = -1073741670;
  }
  if ( v11 < 0 )
    goto LABEL_3;
  memmove(
    *(void **)(v23 + 72),
    &v21->UrbOSFeatureDescriptorRequest.hca.Reserved8[1],
    24LL * *(unsigned int *)(v23 + 56));
LABEL_41:
  if ( v11 < 0 )
    goto LABEL_3;
  v12 = a1;
LABEL_43:
  if ( PoolWithTag )
    ExFreePool(PoolWithTag);
  v38 = Urb;
  if ( Urb )
    USBD_UrbFree(v2, Urb);
  if ( v2 )
    USBD_CloseHandle(v2);
  LODWORD(v40) = v11;
  WPP_RECORDER_SF_qd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)v38,
    9u,
    0x19u,
    (__int64)&WPP_c3cce433baea39899fa4d65e1e7a922b_Traceguids,
    v12,
    v40);
  return (unsigned int)v11;
}
