/*
 * XREFs of HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength @ 0x1C00083A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     HUBHTX_GetDescriptor @ 0x1C0002CA4 (HUBHTX_GetDescriptor.c)
 *     HUBSM_AddEvent @ 0x1C0009C18 (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx
  PVOID PoolWithTag; // rax
  __int64 v4; // r9
  int Descriptor; // eax
  void *v6; // rcx
  int v8; // [rsp+20h] [rbp-18h]
  __int64 v9; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(void **)(v1 + 1248);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x68334855u);
    *(_QWORD *)(v1 + 1248) = 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xFFuLL, 0x68334855u);
  *(_QWORD *)(v1 + 1248) = PoolWithTag;
  if ( PoolWithTag )
  {
    LOBYTE(v4) = 2;
    Descriptor = HUBHTX_GetDescriptor(v1, (__int64)PoolWithTag, 255LL, v4, v8, 0);
    if ( Descriptor >= 0 )
      return 1000LL;
  }
  else
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v1 + 2512), 2u, 3u, 0x11u, (__int64)&WPP_657f02cd6e64326733be7ab9e49a31de_Traceguids);
    Descriptor = -1073741670;
  }
  LODWORD(v9) = Descriptor;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v1 + 2512),
    2u,
    3u,
    0x12u,
    (__int64)&WPP_657f02cd6e64326733be7ab9e49a31de_Traceguids,
    v9);
  v6 = *(void **)(v1 + 1248);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x68334855u);
    *(_QWORD *)(v1 + 1248) = 0LL;
  }
  HUBSM_AddEvent(v1 + 1256, 2004LL);
  return 1000LL;
}
