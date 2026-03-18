/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C0003610
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_qLdqss @ 0x1C0004B9C (WPP_RECORDER_SF_qLdqss.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C00052E8 (WPP_RECORDER_SF_qdqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0006240 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase1(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // ebp
  unsigned int v4; // r15d
  int v5; // r14d
  __int64 v6; // rsi
  __int64 v7; // r8
  char v8; // r10
  void *v9; // rax
  void *v10; // rdx
  __int64 v12; // r8
  void *v13; // rax
  void *v14; // rdx
  __int64 (__fastcall *v15)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+20h] [rbp-58h]

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
    goto LABEL_3;
  }
  if ( (*(_QWORD *)(v1 + 8) & 0x8000000000000LL) != 0 )
  {
    *(_DWORD *)(a1 + 212) = 5;
LABEL_3:
    v8 = 0;
    v9 = &unk_1C0067B08;
    v10 = &unk_1C0067B08;
    if ( v1 )
    {
      v7 = *(_QWORD *)(v1 + 8);
      v8 = v1;
      if ( (v7 & 0x200000000000LL) != 0 )
      {
        v9 = *(void **)(v1 + 560);
        if ( (v7 & 0x400000000000LL) != 0 )
          v10 = *(void **)(v1 + 568);
      }
    }
    WPP_RECORDER_SF_qLdqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v10,
      v7,
      56,
      (_DWORD)v15,
      a1,
      v4,
      *(_DWORD *)(a1 + 212),
      v8,
      (__int64)v9,
      (__int64)v10);
    ACPIDeviceCompleteGenericPhase(v6, v4, 0LL, a1);
    if ( v6 )
      AMLIDereferenceHandleEx(v6);
    return 0LL;
  }
  *(_DWORD *)(a1 + 212) = 4;
  if ( v3 != 4 )
    goto LABEL_3;
  v6 = AMLIGetNamedChild(*(_QWORD *)(v1 + 712), 1397310559LL);
  if ( !v6 )
  {
    _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 952LL), 0x100uLL);
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(v1 + 952) & 0x100LL) != 0 )
    goto LABEL_3;
  _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 952LL), 0x100uLL);
  *(_DWORD *)(a1 + 56) |= 0x1000000u;
  v15 = ACPIDeviceCompleteGenericPhase;
  v4 = AMLIAsyncEvalObject(v6, 0LL, 0LL, 0LL);
  AMLIDereferenceHandleEx(v6);
  v6 = 0LL;
  if ( v4 != 259 )
    goto LABEL_3;
  v12 = *(_QWORD *)(v1 + 8);
  v13 = &unk_1C0067B08;
  v14 = &unk_1C0067B08;
  if ( (v12 & 0x200000000000LL) != 0 )
  {
    v13 = *(void **)(v1 + 560);
    if ( (v12 & 0x400000000000LL) != 0 )
      v14 = *(void **)(v1 + 568);
  }
  WPP_RECORDER_SF_qdqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v14,
    10,
    55,
    (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
    a1,
    *(_DWORD *)(a1 + 212),
    v1,
    (__int64)v13,
    (__int64)v14);
  return 259LL;
}
