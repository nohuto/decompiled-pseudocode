/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C001DE20
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C0008CB0 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0015708 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0019CA0 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase3(__int64 a1)
{
  __int64 v1; // rbx
  const char *v2; // rsi
  int v3; // r14d
  __int64 *v4; // r15
  char v5; // dl
  const char *v7; // r8
  const char *v8; // rcx
  __int64 v9; // rax
  int v10; // r12d
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  const char *v15; // rax
  _QWORD v17[6]; // [rsp+50h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (const char *)&unk_1C005B1F0;
  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  v7 = (const char *)&unk_1C005B1F0;
  v8 = (const char *)&unk_1C005B1F0;
  if ( v1 )
  {
    v9 = *(_QWORD *)(v1 + 8);
    v5 = v1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(v1 + 560);
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = *(const char **)(v1 + 568);
    }
  }
  WPP_RECORDER_SF_qqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0x4Cu,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a1,
    v5,
    v7,
    v8);
  v10 = *(_DWORD *)(a1 + 56);
  v11 = 8;
  if ( *(_DWORD *)(a1 + 104) == 1 )
    v11 = 6;
  *(_DWORD *)(a1 + 212) = v11;
  if ( (*(_QWORD *)(v1 + 8) & 0x8000000000000LL) != 0 )
    goto LABEL_24;
  v4 = AMLIGetNamedChild(*(_QWORD **)(v1 + 712), 1262701663);
  if ( !v4 )
  {
    if ( (v10 & 4) != 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 952LL), 0x80uLL);
    }
    else if ( (v10 & 8) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 952LL), 0xFFFFFFFFFFFFFF7FuLL);
    }
    goto LABEL_24;
  }
  memset(v17, 0, 0x28uLL);
  WORD1(v17[0]) = 1;
  if ( (v10 & 4) != 0 )
  {
    v12 = 1LL;
  }
  else
  {
    if ( (v10 & 8) == 0 )
    {
LABEL_24:
      ACPIDeviceCompleteGenericPhase((__int64)v4, v3, 0LL, a1);
      return 0LL;
    }
    v12 = 0LL;
  }
  v13 = *(_QWORD *)(a1 + 40);
  v17[2] = v12;
  if ( v12 == 1 )
    _InterlockedOr64((volatile signed __int64 *)(v13 + 952), 0x80uLL);
  else
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 952), 0xFFFFFFFFFFFFFF7FuLL);
  *(_DWORD *)(a1 + 56) |= 0x1000000u;
  v3 = AMLIAsyncEvalObject(v4, 0LL, 1LL, v17, ACPIDeviceCompleteGenericPhase, a1);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v4);
  v14 = *(_QWORD *)(v1 + 8);
  v4 = 0LL;
  v15 = (const char *)&unk_1C005B1F0;
  if ( (v14 & 0x200000000000LL) != 0 )
  {
    v2 = *(const char **)(v1 + 560);
    if ( (v14 & 0x400000000000LL) != 0 )
      v15 = *(const char **)(v1 + 568);
  }
  WPP_RECORDER_SF_qLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0x4Du,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a1,
    v3,
    v1,
    v2,
    v15);
  if ( v3 != 259 )
    goto LABEL_24;
  return 0LL;
}
