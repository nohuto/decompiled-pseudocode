/*
 * XREFs of ACPIBuildProcessDevicePhaseDep @ 0x1C000ECB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0012240 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C0022070 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseDep(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v3; // edi
  __int64 v4; // rdx
  const char *v5; // rax
  __int64 v6; // rcx
  const char *v7; // rdx
  __int64 v9; // rcx
  __int64 *v10; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  memset((void *)(a1 + 80), 0, 0x28uLL);
  if ( (*(_BYTE *)(v1 + 952) & 0x20) == 0 )
  {
    v9 = *(_QWORD *)(a1 + 56);
    if ( v9 )
    {
      AMLIDereferenceHandleEx(v9, v4);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v10 = AMLIGetNamedChild(*(__int64 **)(v1 + 712), 1346716767);
    *(_QWORD *)(a1 + 56) = v10;
    if ( v10 )
      v3 = AMLIAsyncEvalObject(v10, a1 + 80, 0LL, 0LL, ACPIBuildCompleteMustSucceed, a1);
    else
      _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x20uLL);
  }
  *(_DWORD *)(a1 + 32) = 5;
  v5 = (const char *)&unk_1C0066CD0;
  v6 = *(_QWORD *)(v1 + 8);
  v7 = (const char *)&unk_1C0066CD0;
  if ( (v6 & 0x200000000000LL) != 0 )
  {
    v5 = *(const char **)(v1 + 560);
    if ( (v6 & 0x400000000000LL) != 0 )
      v7 = *(const char **)(v1 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x1Fu,
    (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
    v3,
    v1,
    v5,
    v7);
  if ( v3 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL);
  return v3;
}
