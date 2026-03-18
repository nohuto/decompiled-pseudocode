/*
 * XREFs of HUBDSM_GettingMSOSExtendedDescriptorHeader @ 0x1C001BE50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009C18 (HUBSM_AddEvent.c)
 *     HUBDTX_GetMsOsFeatureDescriptor @ 0x1C00239F4 (HUBDTX_GetMsOsFeatureDescriptor.c)
 */

__int64 __fastcall HUBDSM_GettingMSOSExtendedDescriptorHeader(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  void *v4; // rcx
  int MsOsFeatureDescriptor; // eax
  __int64 v7; // [rsp+28h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 960);
  v4 = *(void **)(v3 + 2104);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x64334855u);
  *(_QWORD *)(v3 + 2104) = 0LL;
  MsOsFeatureDescriptor = HUBDTX_GetMsOsFeatureDescriptor(v3, 0, a3, 4, v3 + 1732, 16LL);
  if ( MsOsFeatureDescriptor < 0 )
  {
    LODWORD(v7) = MsOsFeatureDescriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
      2u,
      5u,
      0x3Bu,
      (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
      v7);
    HUBSM_AddEvent(v3 + 504, 4004);
  }
  return 1000LL;
}
