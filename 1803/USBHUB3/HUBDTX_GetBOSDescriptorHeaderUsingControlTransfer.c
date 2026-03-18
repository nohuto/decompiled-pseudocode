/*
 * XREFs of HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer @ 0x1C0024864
 * Callers:
 *     HUBDSM_GettingBOSDescriptorHeader @ 0x1C001C810 (HUBDSM_GettingBOSDescriptorHeader.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009C18 (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x1C0023A80 (HUBDTX_GetDescriptor.c)
 */

void __fastcall HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer(_QWORD *a1)
{
  void *v2; // rcx
  PVOID *v3; // rcx
  int Descriptor; // eax
  __int64 v5; // [rsp+28h] [rbp-20h]

  v2 = (void *)a1[257];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x64334855u);
  v3 = (PVOID *)a1[330];
  if ( v3 )
  {
    if ( *v3 )
    {
      ExFreePoolWithTag(*v3, 0x64334855u);
      v3 = (PVOID *)a1[330];
    }
    if ( v3 )
      ExFreePoolWithTag(v3, 0x64334855u);
  }
  a1[257] = 0LL;
  a1[330] = 0LL;
  Descriptor = HUBDTX_GetDescriptor((__int64)a1, (__int64)a1 + 1732, 255, 15, 0, 0);
  if ( Descriptor < 0 )
  {
    LODWORD(v5) = Descriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 1432LL),
      2u,
      5u,
      0x3Au,
      (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
      v5);
    HUBSM_AddEvent((__int64)(a1 + 63), 4004);
  }
}
