/*
 * XREFs of USBType1RenderClosePin @ 0x1C0025660
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00011A8 (WPP_RECORDER_SF_q.c)
 *     USBHwFreeOffloadInformation @ 0x1C0020E74 (USBHwFreeOffloadInformation.c)
 */

__int64 __fastcall USBType1RenderClosePin(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  void *v5; // rcx

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL);
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    a2,
    8u,
    0x1Au,
    (__int64)&WPP_3782699cdfb7314fc0fa753a1da472e6_Traceguids,
    a1);
  if ( *(_BYTE *)(v3 + 96) )
    IoFreeWorkItem(*(PIO_WORKITEM *)(v3 + 968));
  ExDeleteNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)(v3 + 128));
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL);
  v5 = *(void **)(v4 + 72);
  if ( v5 )
  {
    ExFreePool(v5);
    *(_QWORD *)(v4 + 72) = 0LL;
  }
  USBHwFreeOffloadInformation(a1);
  return 0LL;
}
