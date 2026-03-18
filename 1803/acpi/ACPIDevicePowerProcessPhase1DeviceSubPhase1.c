/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C001C6B0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C0008814 (WPP_RECORDER_SF_qdqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0019CA0 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qLdqss @ 0x1C001FDA4 (WPP_RECORDER_SF_qLdqss.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase1(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // ebp
  int v4; // r15d
  int v5; // r14d
  __int64 *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r8
  const char *v9; // rax
  const char *v10; // rdx
  char v12; // r10
  void *v13; // rax
  void *v14; // rdx
  int v15; // [rsp+20h] [rbp-58h]

  v1 = *(_QWORD *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 104);
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 56);
  v6 = 0LL;
  memset((void *)(a1 + 216), 0, 0x28uLL);
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_WORD *)(a1 + 218) = 1;
  if ( v3 == 1 || (v5 & 0x10) != 0 )
  {
    *(_DWORD *)(a1 + 212) = 6;
    goto LABEL_15;
  }
  if ( (*(_QWORD *)(v1 + 8) & 0x8000000000000LL) != 0 )
  {
    *(_DWORD *)(a1 + 212) = 5;
    goto LABEL_15;
  }
  *(_DWORD *)(a1 + 212) = 4;
  if ( v3 != 4 )
  {
LABEL_15:
    v12 = 0;
    v13 = &unk_1C005B1F0;
    v14 = &unk_1C005B1F0;
    if ( v1 )
    {
      v7 = *(_QWORD *)(v1 + 8);
      v12 = v1;
      if ( (v7 & 0x200000000000LL) != 0 )
      {
        v13 = *(void **)(v1 + 560);
        if ( (v7 & 0x400000000000LL) != 0 )
          v14 = *(void **)(v1 + 568);
      }
    }
    WPP_RECORDER_SF_qLdqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v14,
      v7,
      56,
      v15,
      a1,
      v4,
      *(_DWORD *)(a1 + 212),
      v12,
      (__int64)v13,
      (__int64)v14);
    ACPIDeviceCompleteGenericPhase((__int64)v6, v4, 0LL, a1);
    if ( v6 )
      AMLIDereferenceHandleEx((volatile signed __int32 *)v6);
    return 0LL;
  }
  v6 = AMLIGetNamedChild(*(_QWORD **)(v1 + 712), 1397310559);
  if ( !v6 )
  {
    _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 952LL), 0x100uLL);
    goto LABEL_15;
  }
  if ( (*(_DWORD *)(v1 + 952) & 0x100LL) != 0 )
    goto LABEL_15;
  _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 952LL), 0x100uLL);
  *(_DWORD *)(a1 + 56) |= 0x1000000u;
  v4 = AMLIAsyncEvalObject(v6, 0LL, 0LL, 0LL, ACPIDeviceCompleteGenericPhase, a1);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v6);
  v6 = 0LL;
  if ( v4 != 259 )
    goto LABEL_15;
  v8 = *(_QWORD *)(v1 + 8);
  v9 = (const char *)&unk_1C005B1F0;
  v10 = (const char *)&unk_1C005B1F0;
  if ( (v8 & 0x200000000000LL) != 0 )
  {
    v9 = *(const char **)(v1 + 560);
    if ( (v8 & 0x400000000000LL) != 0 )
      v10 = *(const char **)(v1 + 568);
  }
  WPP_RECORDER_SF_qdqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)v10,
    0xAu,
    0x37u,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a1,
    *(_DWORD *)(a1 + 212),
    v1,
    v9,
    v10);
  return 259LL;
}
