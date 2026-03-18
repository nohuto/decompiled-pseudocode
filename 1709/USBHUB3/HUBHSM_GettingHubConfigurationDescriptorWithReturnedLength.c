/*
 * XREFs of HUBHSM_GettingHubConfigurationDescriptorWithReturnedLength @ 0x1C0008500
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     HUBHTX_GetDescriptor @ 0x1C0002CB4 (HUBHTX_GetDescriptor.c)
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBHSM_GettingHubConfigurationDescriptorWithReturnedLength(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int16 *v2; // rsi
  PVOID PoolWithTag; // rax
  __int64 v4; // r9
  int Descriptor; // edi
  void *v6; // rcx
  int v8; // [rsp+20h] [rbp-18h]
  __int64 v9; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(unsigned __int16 **)(v1 + 1248);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v2[1], 0x68334855u);
  *(_QWORD *)(v1 + 1248) = PoolWithTag;
  if ( PoolWithTag )
  {
    LOBYTE(v4) = 2;
    Descriptor = HUBHTX_GetDescriptor(v1, (__int64)PoolWithTag, v2[1], v4, v8, 0);
  }
  else
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v1 + 2512), 2u, 3u, 0x13u, (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids);
    Descriptor = -1073741670;
  }
  ExFreePoolWithTag(v2, 0x68334855u);
  if ( Descriptor < 0 )
  {
    LODWORD(v9) = Descriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1 + 2512),
      2u,
      3u,
      0x14u,
      (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids,
      v9);
    v6 = *(void **)(v1 + 1248);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0x68334855u);
      *(_QWORD *)(v1 + 1248) = 0LL;
    }
    HUBSM_AddEvent(v1 + 1256, 2004LL);
  }
  return 1000LL;
}
