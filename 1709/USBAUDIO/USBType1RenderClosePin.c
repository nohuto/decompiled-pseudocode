/*
 * XREFs of USBType1RenderClosePin @ 0x1C0020AF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0001008 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall USBType1RenderClosePin(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  void *v4; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 136LL);
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    8u,
    0x1Au,
    (__int64)&WPP_d82a33061db734901bbdbf9feb709785_Traceguids,
    a1);
  if ( *(_BYTE *)(v2 + 80) )
    IoFreeWorkItem(*(PIO_WORKITEM *)(v2 + 952));
  ExDeleteNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)(v2 + 112));
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 136LL);
  v4 = *(void **)(v3 + 72);
  if ( v4 )
  {
    ExFreePool(v4);
    *(_QWORD *)(v3 + 72) = 0LL;
  }
  return 0LL;
}
