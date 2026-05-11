/*
 * XREFs of USBHwSelectStreamingAudioInterface @ 0x1C001C04C
 * Callers:
 *     USBType1StateChangePin @ 0x1C0004980 (USBType1StateChangePin.c)
 *     USBType1ChangePowerState @ 0x1C0004C90 (USBType1ChangePowerState.c)
 *     USBCaptureStateChangePin @ 0x1C00055E0 (USBCaptureStateChangePin.c)
 *     USBCaptureChangePowerState @ 0x1C0005A80 (USBCaptureChangePowerState.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C001F0E4 (USBParseGetAudioStreamingDataranges.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0001254 (WPP_RECORDER_SF_qd.c)
 *     memmove @ 0x1C0008100 (memmove.c)
 *     memset @ 0x1C0008440 (memset.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C001B834 (USBHwSubmitUrbToUsbdSynch.c)
 *     USBParseGetEndpointDescriptor @ 0x1C001CD60 (USBParseGetEndpointDescriptor.c)
 */

__int64 __fastcall USBHwSelectStreamingAudioInterface(__int64 a1, _BYTE *a2)
{
  int v4; // edi
  __int64 v5; // rax
  _QWORD *v6; // r12
  char v7; // al
  unsigned __int8 v8; // r14
  __int64 EndpointDescriptor; // rax
  char *PoolWithTag; // rax
  char *v11; // rbx
  __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int i; // edx
  __int64 v15; // r13
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rsi
  unsigned int v20; // ecx
  __int64 v21; // rbp
  void *v22; // rcx
  PVOID v23; // rax
  __int64 v25; // [rsp+30h] [rbp-58h]
  __int64 v26; // [rsp+40h] [rbp-48h]
  int v27; // [rsp+A0h] [rbp+18h]

  v4 = -1073741808;
  v26 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  v5 = *(_QWORD *)(v26 + 16);
  v6 = *(_QWORD **)(v5 + 72);
  if ( !*(_BYTE *)(v5 + 64) && !*(_BYTE *)(v5 + 67) )
  {
    v7 = a2[4];
    v8 = 0;
    if ( !v7
      || v7 == 1
      && ((EndpointDescriptor = USBParseGetEndpointDescriptor(v6[5], a2, 0LL)) == 0
       || !*(_WORD *)(EndpointDescriptor + 4)) )
    {
      v8 = 1;
    }
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      8u,
      0xAu,
      (__int64)&WPP_9da756f16d253f0c344fa6bb2cc63508_Traceguids,
      a1,
      v8);
    v27 = (unsigned __int8)a2[4];
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned int)(24 * v27 + 56), 0x41627845u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_37;
    memset(PoolWithTag, 0, (unsigned int)(24 * v27 + 56));
    v12 = v6[5];
    v13 = 0;
    for ( i = *(unsigned __int8 *)(v12 + 4); v13 < i; ++v13 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v6[2] + 16LL * v13) + 2LL) == a2[2] )
        break;
    }
    if ( v13 == i )
      goto LABEL_34;
    v15 = *(_QWORD *)(a1 + 16);
    v11[34] = a2[2];
    *((_WORD *)v11 + 16) = 24 * (v27 + 1);
    v11[35] = a2[3];
    if ( v8 )
    {
      if ( v27 )
        *((_DWORD *)v11 + 18) = 0;
      goto LABEL_22;
    }
    v16 = *(_QWORD *)(v15 + 128);
    v17 = *(_DWORD *)(v16 + 208) & 0xF000;
    switch ( v17 )
    {
      case 0:
        goto LABEL_17;
      case 0x1000:
        *((_DWORD *)v11 + 18) = 3872;
        break;
      case 0x2000:
LABEL_17:
        *((_DWORD *)v11 + 18) = 500 * *(_DWORD *)(v16 + 212);
        if ( !*(_QWORD *)(v16 + 176) )
          *((_DWORD *)v11 + 19) |= 8u;
        break;
    }
LABEL_22:
    *(_WORD *)v11 = 24 * v27 + 56;
    *((_WORD *)v11 + 1) = 1;
    *((_QWORD *)v11 + 3) = v6[3];
    v18 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(v26 + 40), (ULONG_PTR)v11);
    if ( *((int *)v11 + 1) < 0 )
      v18 = -1073741808;
    v4 = v18;
    if ( v18 >= 0 )
    {
      v19 = *(_QWORD *)(v15 + 136);
      if ( !v8 )
      {
        v20 = *((_DWORD *)v11 + 12);
        *(_DWORD *)(v19 + 56) = v20;
        *(_QWORD *)(v19 + 64) = *((_QWORD *)v11 + 8);
        if ( v20 > 0x14 )
        {
          v4 = -1073741438;
        }
        else
        {
          v21 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 136LL);
          v22 = *(void **)(v21 + 72);
          if ( v22 )
          {
            ExFreePool(v22);
            *(_QWORD *)(v21 + 72) = 0LL;
          }
          v23 = ExAllocatePoolWithTag((POOL_TYPE)512, 24LL * *(unsigned int *)(v19 + 56), 0x41627845u);
          *(_QWORD *)(v19 + 72) = v23;
          if ( !v23 )
            v4 = -1073741670;
        }
        if ( v4 >= 0 )
          memmove(*(void **)(v19 + 72), v11 + 56, 24LL * *(unsigned int *)(v19 + 56));
      }
    }
LABEL_34:
    ExFreePool(v11);
    goto LABEL_36;
  }
  v4 = -1073741632;
LABEL_36:
  if ( v4 < 0 )
  {
LABEL_37:
    LODWORD(v25) = v4;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      8u,
      0xBu,
      (__int64)&WPP_9da756f16d253f0c344fa6bb2cc63508_Traceguids,
      a1,
      v25);
  }
  return (unsigned int)v4;
}
