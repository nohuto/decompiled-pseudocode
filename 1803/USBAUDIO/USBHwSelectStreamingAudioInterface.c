/*
 * XREFs of USBHwSelectStreamingAudioInterface @ 0x1C0020B5C
 * Callers:
 *     USBType1StateChangePin @ 0x1C0004BC0 (USBType1StateChangePin.c)
 *     USBType1ChangePowerState @ 0x1C0004EE0 (USBType1ChangePowerState.c)
 *     USBCaptureStateChangePin @ 0x1C0005820 (USBCaptureStateChangePin.c)
 *     USBCaptureChangePowerState @ 0x1C0005D00 (USBCaptureChangePowerState.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C0023C18 (USBParseGetAudioStreamingDataranges.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C00013EC (WPP_RECORDER_SF_qd.c)
 *     memmove @ 0x1C000A240 (memmove.c)
 *     memset @ 0x1C000A580 (memset.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C001FCE4 (USBHwSubmitUrbToUsbdSynch.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x1C0020738 (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     USBParseGetEndpointDescriptor @ 0x1C0021880 (USBParseGetEndpointDescriptor.c)
 */

__int64 __fastcall USBHwSelectStreamingAudioInterface(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rbx
  int v5; // edi
  __int64 v6; // rax
  _QWORD *v7; // r12
  char v8; // al
  unsigned __int8 v9; // r14
  __int64 EndpointDescriptor; // rax
  struct _URB *PoolWithTag; // rax
  struct _URB *v13; // rbx
  __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned int i; // edx
  __int64 v17; // r13
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rsi
  unsigned int NumberOfPipes; // edx
  __int64 v23; // rbp
  void *v24; // rcx
  PVOID v25; // rax
  __int64 v26; // [rsp+30h] [rbp-58h]
  __int64 v27; // [rsp+40h] [rbp-48h]
  int v28; // [rsp+A0h] [rbp+18h]

  v2 = *(_QWORD *)(a1 + 16);
  v5 = -1073741808;
  v27 = *(_QWORD *)(v2 + 16);
  v6 = *(_QWORD *)(v27 + 16);
  v7 = *(_QWORD **)(v6 + 72);
  if ( !*(_BYTE *)(v6 + 64) && !*(_BYTE *)(v6 + 67) )
  {
    v8 = a2[4];
    v9 = 0;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        EndpointDescriptor = USBParseGetEndpointDescriptor(v7[5], a2, 0LL);
        if ( !EndpointDescriptor || !*(_WORD *)(EndpointDescriptor + 4) )
          v9 = 1;
      }
    }
    else
    {
      v9 = 1;
    }
    if ( *(_BYTE *)(v2 + 47) && !v9 )
      return USBHwSelectStreamingAudioInterfaceSideband(a1, (__int64)a2);
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      8u,
      0x1Au,
      (__int64)&WPP_c3cce433baea39899fa4d65e1e7a922b_Traceguids,
      a1,
      v9);
    v28 = (unsigned __int8)a2[4];
    PoolWithTag = (struct _URB *)ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned int)(24 * v28 + 56), 0x41627845u);
    v13 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_41;
    memset(PoolWithTag, 0, (unsigned int)(24 * v28 + 56));
    v14 = v7[5];
    v15 = 0;
    for ( i = *(unsigned __int8 *)(v14 + 4); v15 < i; ++v15 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v7[2] + 16LL * v15) + 2LL) == a2[2] )
        break;
    }
    if ( v15 == i )
      goto LABEL_38;
    v17 = *(_QWORD *)(a1 + 16);
    v13->UrbSelectInterface.Interface.InterfaceNumber = a2[2];
    v13->UrbSelectInterface.Interface.Length = 24 * (v28 + 1);
    v13->UrbSelectInterface.Interface.AlternateSetting = a2[3];
    if ( v9 )
    {
      if ( v28 )
        v13->UrbSelectInterface.Interface.Pipes[0].MaximumTransferSize = 0;
      goto LABEL_26;
    }
    v18 = *(_QWORD *)(v17 + 144);
    v19 = *(_DWORD *)(v18 + 216) & 0xF000;
    switch ( v19 )
    {
      case 0:
        goto LABEL_21;
      case 0x1000:
        v13->UrbSelectInterface.Interface.Pipes[0].MaximumTransferSize = 3872;
        break;
      case 0x2000:
LABEL_21:
        v13->UrbSelectInterface.Interface.Pipes[0].MaximumTransferSize = 500 * *(_DWORD *)(v18 + 220);
        if ( !*(_QWORD *)(v18 + 176) )
          v13->UrbSelectInterface.Interface.Pipes[0].PipeFlags |= 8u;
        break;
    }
LABEL_26:
    v13->UrbHeader.Length = 24 * v28 + 56;
    v13->UrbHeader.Function = 1;
    v13->UrbSelectInterface.ConfigurationHandle = (USBD_CONFIGURATION_HANDLE)v7[3];
    v20 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(v27 + 40), v13, 0LL);
    if ( v13->UrbHeader.Status < 0 )
      v20 = -1073741808;
    v5 = v20;
    if ( v20 >= 0 )
    {
      v21 = *(_QWORD *)(v17 + 152);
      if ( !v9 )
      {
        NumberOfPipes = v13->UrbSelectInterface.Interface.NumberOfPipes;
        *(_DWORD *)(v21 + 56) = NumberOfPipes;
        *(_QWORD *)(v21 + 64) = v13->UrbSelectInterface.Interface.Pipes[0].PipeHandle;
        if ( NumberOfPipes > 0x14 )
        {
          v5 = -1073741438;
        }
        else
        {
          v23 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL);
          v24 = *(void **)(v23 + 72);
          if ( v24 )
          {
            ExFreePool(v24);
            *(_QWORD *)(v23 + 72) = 0LL;
            NumberOfPipes = *(_DWORD *)(v21 + 56);
          }
          v25 = ExAllocatePoolWithTag((POOL_TYPE)512, 24LL * NumberOfPipes, 0x41627845u);
          *(_QWORD *)(v21 + 72) = v25;
          if ( !v25 )
            v5 = -1073741670;
        }
        if ( v5 >= 0 )
          memmove(*(void **)(v21 + 72), &v13->UrbOSFeatureDescriptorRequest.UrbLink, 24LL * *(unsigned int *)(v21 + 56));
      }
    }
LABEL_38:
    ExFreePool(v13);
    goto LABEL_40;
  }
  v5 = -1073741632;
LABEL_40:
  if ( v5 < 0 )
  {
LABEL_41:
    LODWORD(v26) = v5;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      8u,
      0x1Bu,
      (__int64)&WPP_c3cce433baea39899fa4d65e1e7a922b_Traceguids,
      a1,
      v26);
  }
  return (unsigned int)v5;
}
