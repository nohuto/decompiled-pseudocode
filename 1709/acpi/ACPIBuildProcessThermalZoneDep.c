/*
 * XREFs of ACPIBuildProcessThermalZoneDep @ 0x1C0012820
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0014D80 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZoneDep(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v3; // edi
  __int64 v4; // rcx
  const char *v5; // rax
  const char *v6; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  memset((void *)(a1 + 80), 0, 0x28uLL);
  *(_DWORD *)(a1 + 32) = 5;
  if ( (*(_BYTE *)(v1 + 952) & 0x20) == 0 )
  {
    v8 = *(_QWORD *)(a1 + 56);
    if ( v8 )
    {
      AMLIDereferenceHandleEx(v8);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v9 = AMLIGetNamedChild(*(__int64 **)(v1 + 712), 1346716767);
    *(_QWORD *)(a1 + 56) = v9;
    if ( v9 )
      v3 = AMLIAsyncEvalObject(v9, a1 + 80, 0LL, 0LL);
    else
      _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x20uLL);
  }
  v4 = *(_QWORD *)(v1 + 8);
  v5 = (const char *)&unk_1C0067B08;
  v6 = (const char *)&unk_1C0067B08;
  if ( (v4 & 0x200000000000LL) != 0 )
  {
    v5 = *(const char **)(v1 + 560);
    if ( (v4 & 0x400000000000LL) != 0 )
      v6 = *(const char **)(v1 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x4Bu,
    (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
    v3,
    v1,
    v5,
    v6);
  if ( v3 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL);
  return v3;
}
