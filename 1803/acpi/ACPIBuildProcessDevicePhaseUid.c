/*
 * XREFs of ACPIBuildProcessDevicePhaseUid @ 0x1C000E860
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0009C70 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseUid(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 *v3; // rax
  unsigned int v4; // eax
  __int64 v5; // rdx
  void *v6; // rcx
  unsigned int v7; // edi
  void *v8; // rax

  v1 = *(_QWORD *)(a1 + 40);
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x400000000000uLL);
  v3 = AMLIGetNamedChild(*(_QWORD **)(v1 + 712), 1145653343);
  if ( !v3 )
    KeBugCheckEx(0xA5u, 0xDuLL, v1, 0x4449485FuLL, 0LL);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v3);
  *(_DWORD *)(a1 + 32) = 7;
  v4 = ACPIGet(v1, 0x4449485Fu, 671612966, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 560, 0LL);
  v5 = *(_QWORD *)(v1 + 8);
  v6 = &unk_1C005B1F0;
  v7 = v4;
  v8 = &unk_1C005B1F0;
  if ( (v5 & 0x200000000000LL) != 0 )
  {
    v6 = *(void **)(v1 + 560);
    if ( (v5 & 0x400000000000LL) != 0 )
      v8 = *(void **)(v1 + 568);
  }
  LOBYTE(v5) = 4;
  WPP_RECORDER_SF_Dqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v5,
    6,
    49,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    v7,
    v1,
    (__int64)v6,
    (__int64)v8);
  if ( v7 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v7, 0LL, a1);
  return v7;
}
