/*
 * XREFs of XilEndpoint_AllocateStreamContextArray @ 0x1C000FF58
 * Callers:
 *     Endpoint_Enable @ 0x1C0011310 (Endpoint_Enable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C0015680 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C0015930 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C00068AC (CommonBuffer_ReleaseBuffer.c)
 *     XilCommonBuffer_AcquireBufferEx @ 0x1C0006CB8 (XilCommonBuffer_AcquireBufferEx.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     XilEndpoint_SendRequestToAllocateSecureStreamContextArray @ 0x1C00105C4 (XilEndpoint_SendRequestToAllocateSecureStreamContextArray.c)
 */

__int64 __fastcall XilEndpoint_AllocateStreamContextArray(__int64 a1)
{
  __int64 v1; // rbx
  char *v2; // rdi
  bool v4; // dl
  unsigned int v5; // r15d
  void *v6; // rsi
  unsigned int v7; // ebp
  char v8; // cl
  int v9; // eax
  unsigned __int16 v10; // r9
  int v11; // ebx
  int v13; // [rsp+28h] [rbp-40h]
  int v14; // [rsp+30h] [rbp-38h]
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  __int64 v16; // [rsp+78h] [rbp+10h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = 0LL;
  v4 = 1;
  v5 = 1 << (*(_BYTE *)(a1 + 12) + 1);
  v6 = *(void **)(**(_QWORD **)a1 + 120LL);
  v7 = 16 * v5;
  if ( *(_BYTE *)(**(_QWORD **)a1 + 441LL) )
  {
    if ( *(_DWORD *)(**(_QWORD **)a1 + 444LL) == 2 )
    {
      v8 = *(_BYTE *)(*(_QWORD *)(v1 + 16) + 608LL);
      v4 = v8 == 0;
      v9 = 3 - (v8 != 0);
    }
    else
    {
      v4 = 0;
      v9 = 2;
    }
  }
  else
  {
    v9 = 1;
  }
  if ( v4 )
  {
    v2 = XilCommonBuffer_AcquireBufferEx(v6, v7, v1, 829714501, v9);
    if ( !v2 )
    {
      v10 = 17;
      goto LABEL_21;
    }
LABEL_15:
    *(_QWORD *)(a1 + 32) = v2;
    return 0;
  }
  if ( v9 != 2 )
  {
    if ( v9 == 3 )
    {
      v2 = XilCommonBuffer_AcquireBufferEx(v6, v7, v1, 829714501, 3);
      if ( !v2 )
      {
        v10 = 16;
LABEL_21:
        v14 = *(_DWORD *)(v1 + 144);
        v13 = *(unsigned __int8 *)(*(_QWORD *)(v1 + 16) + 135LL);
        goto LABEL_12;
      }
    }
    goto LABEL_15;
  }
  if ( KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilendpoint.c",
      535);
  v2 = XilCommonBuffer_AcquireBufferEx(v6, v7, v1, 829714501, 2);
  if ( v2 )
  {
    v11 = XilEndpoint_SendRequestToAllocateSecureStreamContextArray(v1 + 1312, v5, &v16, &v15);
    if ( v11 < 0 )
    {
      CommonBuffer_ReleaseBuffer((__int64)v6, v2);
      return (unsigned int)v11;
    }
    *((_QWORD *)v2 + 3) = v15;
    *(_QWORD *)(a1 + 40) = v16;
    goto LABEL_15;
  }
  v10 = 15;
  v14 = *(_DWORD *)(v1 + 144);
  v13 = *(unsigned __int8 *)(*(_QWORD *)(v1 + 16) + 135LL);
LABEL_12:
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(v1 + 80),
    2u,
    0xDu,
    v10,
    (__int64)&WPP_66b275f889f43c2a0e65fafc4e468fb0_Traceguids,
    v13,
    v14);
  return (unsigned int)-1073741670;
}
