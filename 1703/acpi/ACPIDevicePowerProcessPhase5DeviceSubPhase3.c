/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C000A4D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000BD60 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C000DCF4 (WPP_RECORDER_SF_qLqss.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C000DE58 (WPP_RECORDER_SF_qqss.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C0022070 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase3(__int64 a1)
{
  _QWORD *v1; // rbx
  void *v2; // rsi
  unsigned int v3; // r14d
  __int64 v4; // r15
  int v5; // edx
  void *v7; // r8
  void *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  int v13; // ebp
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // edx
  void *v18; // rax
  char v19; // [rsp+30h] [rbp-78h]
  _QWORD v20[6]; // [rsp+50h] [rbp-58h] BYREF

  v1 = *(_QWORD **)(a1 + 40);
  v2 = &unk_1C0066CD0;
  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  v7 = &unk_1C0066CD0;
  v8 = &unk_1C0066CD0;
  if ( v1 )
  {
    v9 = v1[1];
    v5 = (int)v1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v7 = (void *)v1[70];
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = (void *)v1[71];
    }
  }
  v19 = v5;
  LOBYTE(v5) = 4;
  WPP_RECORDER_SF_qqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v5,
    10,
    75,
    (__int64)&WPP_32a24c5e9860357aa59cb74721ebb774_Traceguids,
    a1,
    v19,
    (__int64)v7,
    (__int64)v8);
  v12 = 6;
  v13 = *(_DWORD *)(a1 + 56);
  if ( *(_DWORD *)(a1 + 104) != 1 )
    v12 = 8;
  *(_DWORD *)(a1 + 212) = v12;
  if ( (v1[1] & 0x8000000000000LL) != 0 )
    goto LABEL_10;
  v4 = AMLIGetNamedChild(v1[89], 1262701663LL, v10, v11);
  if ( !v4 )
  {
    if ( (v13 & 4) != 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 952LL), 0x80uLL);
    }
    else if ( (v13 & 8) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 952LL), 0xFFFFFFFFFFFFFF7FuLL);
    }
    goto LABEL_10;
  }
  memset(v20, 0, 0x28uLL);
  WORD1(v20[0]) = 1;
  if ( (v13 & 4) != 0 )
  {
    v20[2] = 1LL;
    _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 952LL), 0x80uLL);
  }
  else
  {
    if ( (v13 & 8) == 0 )
    {
LABEL_10:
      ACPIDeviceCompleteGenericPhase(v4, v3, 0LL, a1);
      return 0LL;
    }
    v20[2] = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 952LL), 0xFFFFFFFFFFFFFF7FuLL);
  }
  *(_DWORD *)(a1 + 56) |= 0x1000000u;
  v3 = AMLIAsyncEvalObject(v4, 0LL, 1LL, v20, ACPIDeviceCompleteGenericPhase, a1);
  AMLIDereferenceHandleEx(v4, v15);
  v16 = v1[1];
  v17 = 0;
  v4 = 0LL;
  v18 = &unk_1C0066CD0;
  if ( (v16 & 0x200000000000LL) != 0 )
  {
    v2 = (void *)v1[70];
    if ( (v16 & 0x400000000000LL) != 0 )
      v18 = (void *)v1[71];
  }
  LOBYTE(v17) = 4;
  WPP_RECORDER_SF_qLqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v17,
    10,
    76,
    (__int64)&WPP_32a24c5e9860357aa59cb74721ebb774_Traceguids,
    a1,
    v3,
    (char)v1,
    (__int64)v2,
    (__int64)v18);
  if ( v3 != 259 )
    goto LABEL_10;
  return 0LL;
}
