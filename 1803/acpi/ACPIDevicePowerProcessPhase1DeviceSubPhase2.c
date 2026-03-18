/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x1C001C920
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0019CA0 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qLdqss @ 0x1C001FDA4 (WPP_RECORDER_SF_qLdqss.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase2(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  int v4; // ebp
  __int64 v5; // r14
  __int64 v6; // rdx
  void *v7; // r8
  __int64 result; // rax
  int v9; // r8d
  void *v10; // rdx
  __int64 v11; // r9

  v1 = *(_QWORD *)(a1 + 40);
  v2 = *(int *)(a1 + 104);
  v4 = 0;
  *(_DWORD *)(a1 + 212) = 5;
  v5 = *(_QWORD *)(v1 + 8 * v2 + 408);
  if ( !v5 )
  {
    v9 = 0;
    v10 = &unk_1C005B1F0;
    if ( v1 )
    {
      v11 = *(_QWORD *)(v1 + 8);
      v9 = v1;
      if ( (v11 & 0x200000000000LL) != 0 && (v11 & 0x400000000000LL) != 0 )
        v10 = *(void **)(v1 + 568);
    }
    WPP_RECORDER_SF_qLdqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v10, v9, 58);
    goto LABEL_13;
  }
  *(_DWORD *)(a1 + 56) |= 0x1000000u;
  v4 = AMLIAsyncEvalObject(v5, 0LL, 0LL, 0LL, ACPIDeviceCompleteGenericPhase, a1);
  v7 = &unk_1C005B1F0;
  if ( v1 )
  {
    v6 = *(_QWORD *)(v1 + 8);
    if ( (v6 & 0x200000000000LL) != 0 && (v6 & 0x400000000000LL) != 0 )
      v7 = *(void **)(v1 + 568);
  }
  WPP_RECORDER_SF_qLdqss(WPP_GLOBAL_Control->DeviceExtension, v6, (_DWORD)v7, 57);
  result = 259LL;
  if ( v4 != 259 )
  {
LABEL_13:
    ACPIDeviceCompleteGenericPhase(v5, v4, 0LL, a1);
    return 0LL;
  }
  return result;
}
