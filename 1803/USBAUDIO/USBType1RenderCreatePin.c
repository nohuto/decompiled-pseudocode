/*
 * XREFs of USBType1RenderCreatePin @ 0x1C00254B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00011A8 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00013EC (WPP_RECORDER_SF_qd.c)
 *     USBType1AsyncEndpointInitialize @ 0x1C0024D54 (USBType1AsyncEndpointInitialize.c)
 *     USBType1PinFormatChange @ 0x1C0025160 (USBType1PinFormatChange.c)
 *     USBType1Create1MsecBuffers @ 0x1C00252C0 (USBType1Create1MsecBuffers.c)
 */

__int64 __fastcall USBType1RenderCreatePin(PVOID *PointerToPointerToItem, __int64 a2)
{
  _QWORD *v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // rax
  bool v9; // zf
  char v10; // al
  struct _NPAGED_LOOKASIDE_LIST *PoolWithTag; // rax
  __int64 Depth; // [rsp+30h] [rbp-28h]

  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    a2,
    8u,
    0x18u,
    (__int64)&WPP_3782699cdfb7314fc0fa753a1da472e6_Traceguids,
    PointerToPointerToItem);
  v3 = PointerToPointerToItem[2];
  v4 = v3[19];
  v5 = v3[18];
  v7 = USBType1Create1MsecBuffers((__int64)PointerToPointerToItem);
  if ( v7 < 0 )
    goto LABEL_13;
  *(_BYTE *)(v4 + 96) = *(_QWORD *)(v5 + 176) != 0LL;
  v8 = *(_QWORD *)(v3[18] + 160LL);
  if ( !*(_BYTE *)(v8 + 4) || (v9 = *(_WORD *)(v8 + 5) == 0, v10 = 1, v9) )
    v10 = 0;
  *(_BYTE *)(v4 + 99) = v10;
  PoolWithTag = (struct _NPAGED_LOOKASIDE_LIST *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x80uLL, 0x41627845u);
  *(_QWORD *)(v4 + 128) = PoolWithTag;
  if ( PoolWithTag )
  {
    ExInitializeNPagedLookasideList(
      PoolWithTag,
      (PALLOCATE_FUNCTION)USBType1AllocateRequest,
      (PFREE_FUNCTION)USBType1FreeRequest,
      0x200u,
      *(char *)(*(_QWORD *)(v3[2] + 40LL) + 76LL) + 8LL,
      0x41627845u,
      0x32u);
    v7 = KsAddItemToObjectBag(PointerToPointerToItem[1], *(PVOID *)(v4 + 128), ExFreePool);
    if ( v7 < 0 )
      ExFreePool(*(PVOID *)(v4 + 128));
    else
      v7 = USBType1PinFormatChange(PointerToPointerToItem);
  }
  if ( *(_BYTE *)(v4 + 96) )
  {
    if ( v7 < 0 )
    {
LABEL_13:
      LODWORD(Depth) = v7;
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v6,
        8u,
        0x19u,
        (__int64)&WPP_3782699cdfb7314fc0fa753a1da472e6_Traceguids,
        PointerToPointerToItem,
        Depth);
      return (unsigned int)v7;
    }
    *(_DWORD *)(v4 + 856) = *((_DWORD *)v3 + 26);
    v7 = USBType1AsyncEndpointInitialize((__int64)PointerToPointerToItem);
  }
  if ( v7 < 0 )
    goto LABEL_13;
  return (unsigned int)v7;
}
