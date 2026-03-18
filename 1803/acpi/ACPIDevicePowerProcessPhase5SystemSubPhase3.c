/*
 * XREFs of ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C001E5C0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C0008CB0 (WPP_RECORDER_SF_qqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0019CA0 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 *     AMLIGetParent @ 0x1C0043D24 (AMLIGetParent.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5SystemSubPhase3(__int64 a1)
{
  _QWORD *v1; // rbx
  const char *v2; // rax
  __int64 v3; // rbp
  int v4; // r14d
  __int64 *v5; // rsi
  char v6; // r8
  const char *v8; // rdx
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rax
  __int64 result; // rax
  _QWORD v13[6]; // [rsp+50h] [rbp-48h] BYREF

  v1 = *(_QWORD **)(a1 + 40);
  v2 = (const char *)&unk_1C005B1F0;
  v3 = *(unsigned int *)(a1 + 104);
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  v8 = (const char *)&unk_1C005B1F0;
  if ( v1 )
  {
    v9 = v1[1];
    v6 = (char)v1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v2 = (const char *)v1[70];
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = (const char *)v1[71];
    }
  }
  WPP_RECORDER_SF_qqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0x53u,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a1,
    v6,
    v2,
    v8);
  *(_DWORD *)(a1 + 212) = 6;
  if ( (_DWORD)v3 == 1 )
    goto LABEL_11;
  memset(v13, 0, 0x28uLL);
  WORD1(v13[0]) = 1;
  v10 = (volatile signed __int32 *)AMLIGetParent(v1[89]);
  v5 = AMLIGetNamedChild(v10, 1398034527);
  AMLIDereferenceHandleEx(v10);
  if ( !v5 )
    goto LABEL_11;
  v11 = (unsigned int)v3 < 7 ? (unsigned int)AcpiSystemStateTranslation[v3] : 0xFFFFFFFFLL;
  v13[2] = v11;
  v4 = AMLIAsyncEvalObject(v5, 0LL, 1LL, v13, ACPIDeviceCompleteGenericPhase, a1);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v5);
  result = 259LL;
  v5 = 0LL;
  if ( v4 != 259 )
  {
LABEL_11:
    ACPIDeviceCompleteGenericPhase((__int64)v5, v4, 0LL, a1);
    return 0LL;
  }
  return result;
}
