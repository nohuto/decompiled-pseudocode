/*
 * XREFs of XilEndpoint_AllocateStreamContextArray @ 0x1C00173A8
 * Callers:
 *     Endpoint_Enable @ 0x1C00185D0 (Endpoint_Enable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C001C8D0 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C001CB80 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C000F6FC (CommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x1C000F878 (CommonBuffer_AcquireShadowBuffer.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C000FA0C (CommonBuffer_ReleaseBuffer.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     XilEndpoint_SendRequestToAllocateSecureStreamContextArray @ 0x1C0017958 (XilEndpoint_SendRequestToAllocateSecureStreamContextArray.c)
 */

__int64 __fastcall XilEndpoint_AllocateStreamContextArray(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v3; // ebp
  int v4; // edi
  __int64 v5; // r14
  _DWORD *v6; // rdi
  unsigned __int16 v7; // r9
  int v8; // ebx
  __int64 v9; // rax
  int v11; // [rsp+28h] [rbp-40h]
  int v12; // [rsp+30h] [rbp-38h]
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF
  __int64 v14; // [rsp+78h] [rbp+10h] BYREF

  v1 = *(_QWORD *)a1;
  v3 = 1 << (*(_BYTE *)(a1 + 12) + 1);
  v4 = 16 * v3;
  v5 = *(_QWORD *)(**(_QWORD **)a1 + 120LL);
  if ( !*(_BYTE *)(*(_QWORD *)a1 + 1336LL) )
  {
    v9 = CommonBuffer_AcquireBuffer(*(PVOID *)(*(_QWORD *)v1 + 120LL), v4, v1, 829714501);
    if ( !v9 )
    {
      v7 = 16;
      v12 = *(_DWORD *)(v1 + 144);
      v11 = *(unsigned __int8 *)(*(_QWORD *)(v1 + 16) + 135LL);
      goto LABEL_6;
    }
    *(_QWORD *)(a1 + 32) = v9;
    return 0;
  }
  if ( KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilendpoint.c",
      464);
  v6 = CommonBuffer_AcquireShadowBuffer(v4, v1, 829714501);
  if ( v6 )
  {
    v8 = XilEndpoint_SendRequestToAllocateSecureStreamContextArray(v1 + 1312, v3, &v14, &v13);
    if ( v8 < 0 )
    {
      CommonBuffer_ReleaseBuffer(v5, v6);
      return (unsigned int)v8;
    }
    *((_QWORD *)v6 + 3) = v13;
    *(_QWORD *)(a1 + 40) = v14;
    *(_QWORD *)(a1 + 32) = v6;
    return 0;
  }
  v7 = 15;
  v12 = *(_DWORD *)(v1 + 144);
  v11 = *(unsigned __int8 *)(*(_QWORD *)(v1 + 16) + 135LL);
LABEL_6:
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(v1 + 80),
    2u,
    0xDu,
    v7,
    (__int64)&WPP_087bf061c5a2393c98692efa6d3efb48_Traceguids,
    v11,
    v12);
  return (unsigned int)-1073741670;
}
