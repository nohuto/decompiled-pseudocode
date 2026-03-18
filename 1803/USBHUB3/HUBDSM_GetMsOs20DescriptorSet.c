/*
 * XREFs of HUBDSM_GetMsOs20DescriptorSet @ 0x1C001C6E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C0009C18 (HUBSM_AddEvent.c)
 *     HUBDTX_GetMsOsFeatureDescriptor @ 0x1C00239F4 (HUBDTX_GetMsOsFeatureDescriptor.c)
 */

__int64 __fastcall HUBDSM_GetMsOs20DescriptorSet(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx
  PVOID PoolWithTag; // rax
  int v4; // r8d
  int MsOsFeatureDescriptor; // eax
  __int64 v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(void **)(v1 + 2488);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x64334855u);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, *(unsigned __int16 *)(v1 + 2484), 0x64334855u);
  *(_QWORD *)(v1 + 2488) = PoolWithTag;
  if ( !PoolWithTag )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x2Fu,
      (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids);
    MsOsFeatureDescriptor = -1073741670;
LABEL_6:
    *(_DWORD *)(v1 + 408) = 0;
    LODWORD(v7) = MsOsFeatureDescriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x30u,
      (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
      v7);
    HUBSM_AddEvent(v1 + 504, 4004);
    return 1000LL;
  }
  *(_BYTE *)(v1 + 2052) = *(_BYTE *)(v1 + 2486);
  v8 = *(unsigned __int16 *)(v1 + 2484);
  *(_DWORD *)(v1 + 408) = 0x40000000;
  MsOsFeatureDescriptor = HUBDTX_GetMsOsFeatureDescriptor(v1, 0, v4, 7, (__int64)PoolWithTag, v8);
  if ( MsOsFeatureDescriptor < 0 )
    goto LABEL_6;
  return 1000LL;
}
