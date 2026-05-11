/*
 * XREFs of USBType1RenderCreatePin @ 0x1C0020940
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0001008 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0001254 (WPP_RECORDER_SF_qd.c)
 *     USBType1AsyncEndpointInitialize @ 0x1C00201F4 (USBType1AsyncEndpointInitialize.c)
 *     USBType1PinFormatChange @ 0x1C0020600 (USBType1PinFormatChange.c)
 *     USBType1Create1MsecBuffers @ 0x1C0020760 (USBType1Create1MsecBuffers.c)
 */

__int64 __fastcall USBType1RenderCreatePin(PVOID *PointerToPointerToItem)
{
  _QWORD *v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // r14
  int v5; // ebx
  __int64 v6; // rax
  bool v7; // zf
  char v8; // al
  struct _NPAGED_LOOKASIDE_LIST *PoolWithTag; // rax
  __int64 Depth; // [rsp+30h] [rbp-28h]

  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    8u,
    0x18u,
    (__int64)&WPP_d82a33061db734901bbdbf9feb709785_Traceguids,
    PointerToPointerToItem);
  v2 = PointerToPointerToItem[2];
  v3 = v2[17];
  v4 = v2[16];
  v5 = USBType1Create1MsecBuffers((__int64)PointerToPointerToItem);
  if ( v5 < 0 )
    goto LABEL_13;
  *(_BYTE *)(v3 + 80) = *(_QWORD *)(v4 + 176) != 0LL;
  v6 = *(_QWORD *)(v2[16] + 160LL);
  if ( !*(_BYTE *)(v6 + 4) || (v7 = *(_WORD *)(v6 + 5) == 0, v8 = 1, v7) )
    v8 = 0;
  *(_BYTE *)(v3 + 83) = v8;
  PoolWithTag = (struct _NPAGED_LOOKASIDE_LIST *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x80uLL, 0x41627845u);
  *(_QWORD *)(v3 + 112) = PoolWithTag;
  if ( PoolWithTag )
  {
    ExInitializeNPagedLookasideList(
      PoolWithTag,
      (PALLOCATE_FUNCTION)USBType1AllocateRequest,
      (PFREE_FUNCTION)USBType1FreeRequest,
      0x200u,
      *(char *)(*(_QWORD *)(v2[2] + 40LL) + 76LL) + 8LL,
      0x41627845u,
      0x32u);
    v5 = KsAddItemToObjectBag(PointerToPointerToItem[1], *(PVOID *)(v3 + 112), ExFreePool);
    if ( v5 < 0 )
      ExFreePool(*(PVOID *)(v3 + 112));
    else
      v5 = USBType1PinFormatChange(PointerToPointerToItem);
  }
  if ( *(_BYTE *)(v3 + 80) )
  {
    if ( v5 < 0 )
    {
LABEL_13:
      LODWORD(Depth) = v5;
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        8u,
        0x19u,
        (__int64)&WPP_d82a33061db734901bbdbf9feb709785_Traceguids,
        PointerToPointerToItem,
        Depth);
      return (unsigned int)v5;
    }
    *(_DWORD *)(v3 + 840) = *((_DWORD *)v2 + 22);
    v5 = USBType1AsyncEndpointInitialize((__int64)PointerToPointerToItem);
  }
  if ( v5 < 0 )
    goto LABEL_13;
  return (unsigned int)v5;
}
