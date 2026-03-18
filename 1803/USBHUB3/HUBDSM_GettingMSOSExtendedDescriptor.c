/*
 * XREFs of HUBDSM_GettingMSOSExtendedDescriptor @ 0x1C001BD70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C0009C18 (HUBSM_AddEvent.c)
 *     HUBDTX_GetMsOsFeatureDescriptor @ 0x1C00239F4 (HUBDTX_GetMsOsFeatureDescriptor.c)
 */

__int64 __fastcall HUBDSM_GettingMSOSExtendedDescriptor(__int64 a1)
{
  __int64 v1; // rbx
  PVOID PoolWithTag; // rax
  int v3; // r8d
  int MsOsFeatureDescriptor; // eax
  __int64 v6; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 960);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, *(unsigned int *)(v1 + 1732), 0x64334855u);
  *(_QWORD *)(v1 + 2104) = PoolWithTag;
  if ( !PoolWithTag )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x3Cu,
      (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids);
    MsOsFeatureDescriptor = -1073741823;
LABEL_4:
    LODWORD(v6) = MsOsFeatureDescriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x3Du,
      (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
      v6);
    HUBSM_AddEvent(v1 + 504, 4004);
    return 1000LL;
  }
  MsOsFeatureDescriptor = HUBDTX_GetMsOsFeatureDescriptor(
                            v1,
                            0,
                            v3,
                            4,
                            (__int64)PoolWithTag,
                            *(unsigned int *)(v1 + 1732));
  if ( MsOsFeatureDescriptor < 0 )
    goto LABEL_4;
  return 1000LL;
}
