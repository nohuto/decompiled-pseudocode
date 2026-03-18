/*
 * XREFs of ACPIBuildProcessDevicePhaseUid @ 0x1C0028420
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0002C00 (ACPIGet.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0012240 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseUid(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 *v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 v6; // rdx
  const char *v7; // rcx
  unsigned int v8; // edi
  const char *v9; // rax

  v1 = *(_QWORD *)(a1 + 40);
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x400000000000uLL);
  v3 = AMLIGetNamedChild(*(__int64 **)(v1 + 712), 1145653343);
  if ( !v3 )
    KeBugCheckEx(0xA5u, 0xDuLL, v1, 0x4449485FuLL, 0LL);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v3, v4);
  *(_DWORD *)(a1 + 32) = 7;
  v5 = ACPIGet((__int64 *)v1, 1145653343, 671612966, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 560, 0LL);
  v6 = *(_QWORD *)(v1 + 8);
  v7 = (const char *)&unk_1C0066CD0;
  v8 = v5;
  v9 = (const char *)&unk_1C0066CD0;
  if ( (v6 & 0x200000000000LL) != 0 )
  {
    v7 = *(const char **)(v1 + 560);
    if ( (v6 & 0x400000000000LL) != 0 )
      v9 = *(const char **)(v1 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x31u,
    (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
    v8,
    v1,
    v7,
    v9);
  if ( v8 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v8, 0LL, a1);
  return v8;
}
