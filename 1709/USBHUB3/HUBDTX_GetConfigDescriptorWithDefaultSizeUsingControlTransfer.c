/*
 * XREFs of HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer @ 0x1C002333C
 * Callers:
 *     HUBDSM_GettingConfigDescriptorWhileRenuemrating @ 0x1C001AD90 (HUBDSM_GettingConfigDescriptorWhileRenuemrating.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x1C0022F80 (HUBDTX_GetDescriptor.c)
 */

void __fastcall HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer(_QWORD *a1)
{
  void *v2; // rcx
  int Descriptor; // eax
  __int64 v4; // [rsp+28h] [rbp-20h]

  v2 = (void *)a1[252];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x64334855u);
  a1[252] = 0LL;
  a1[251] = 0LL;
  Descriptor = HUBDTX_GetDescriptor((__int64)a1, (__int64)a1 + 1732, 255, 2, 0, 0);
  if ( Descriptor < 0 )
  {
    LODWORD(v4) = Descriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 1432LL),
      2u,
      5u,
      0x25u,
      (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
      v4);
    HUBSM_AddEvent((__int64)(a1 + 63), 4004);
  }
}
