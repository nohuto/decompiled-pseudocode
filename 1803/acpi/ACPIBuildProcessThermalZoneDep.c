/*
 * XREFs of ACPIBuildProcessThermalZoneDep @ 0x1C0010660
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0009C70 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZoneDep(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v3; // edi
  volatile signed __int32 *v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rcx
  void *v7; // rax
  void *v8; // rdx
  __int64 v10; // [rsp+40h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  memset((void *)(a1 + 80), 0, 0x28uLL);
  *(_DWORD *)(a1 + 32) = 5;
  if ( (*(_BYTE *)(v1 + 952) & 0x20) == 0 )
  {
    v4 = *(volatile signed __int32 **)(a1 + 56);
    if ( v4 )
    {
      AMLIDereferenceHandleEx(v4);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v5 = AMLIGetNamedChild(*(_QWORD **)(v1 + 712), 1346716767);
    *(_QWORD *)(a1 + 56) = v5;
    if ( v5 )
      v3 = AMLIAsyncEvalObject(v5, a1 + 80, 0LL, 0LL, ACPIBuildCompleteMustSucceed, a1);
    else
      _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x20uLL);
  }
  v6 = *(_QWORD *)(v1 + 8);
  v7 = &unk_1C005B1F0;
  v8 = &unk_1C005B1F0;
  if ( (v6 & 0x200000000000LL) != 0 )
  {
    v7 = *(void **)(v1 + 560);
    if ( (v6 & 0x400000000000LL) != 0 )
      v8 = *(void **)(v1 + 568);
  }
  v10 = (__int64)v8;
  LOBYTE(v8) = 4;
  WPP_RECORDER_SF_Dqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v8,
    6,
    75,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    v3,
    v1,
    (__int64)v7,
    v10);
  if ( v3 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v3, 0LL, a1);
  return v3;
}
