/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C0003350
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C000544C (WPP_RECORDER_SF_qLqss.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C00055B0 (WPP_RECORDER_SF_qqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0006240 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C002C4C0 (memset.c)
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
  int v10; // eax
  int v11; // ebp
  __int64 v13; // rcx
  int v14; // edx
  void *v15; // rax
  char v16; // [rsp+30h] [rbp-78h]
  _QWORD v17[6]; // [rsp+50h] [rbp-58h] BYREF

  v1 = *(_QWORD **)(a1 + 40);
  v2 = &unk_1C0067B08;
  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  v7 = &unk_1C0067B08;
  v8 = &unk_1C0067B08;
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
  v16 = v5;
  LOBYTE(v5) = 4;
  WPP_RECORDER_SF_qqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v5,
    10,
    76,
    (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
    a1,
    v16,
    (__int64)v7,
    (__int64)v8);
  v10 = 6;
  v11 = *(_DWORD *)(a1 + 56);
  if ( *(_DWORD *)(a1 + 104) != 1 )
    v10 = 8;
  *(_DWORD *)(a1 + 212) = v10;
  if ( (v1[1] & 0x8000000000000LL) != 0 )
    goto LABEL_10;
  v4 = AMLIGetNamedChild(v1[89], 1262701663LL);
  if ( !v4 )
  {
    if ( (v11 & 4) != 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 952LL), 0x80uLL);
    }
    else if ( (v11 & 8) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 952LL), 0xFFFFFFFFFFFFFF7FuLL);
    }
    goto LABEL_10;
  }
  memset(v17, 0, 0x28uLL);
  WORD1(v17[0]) = 1;
  if ( (v11 & 4) != 0 )
  {
    v17[2] = 1LL;
    _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 952LL), 0x80uLL);
  }
  else
  {
    if ( (v11 & 8) == 0 )
    {
LABEL_10:
      ACPIDeviceCompleteGenericPhase(v4, v3, 0LL, a1);
      return 0LL;
    }
    v17[2] = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 952LL), 0xFFFFFFFFFFFFFF7FuLL);
  }
  *(_DWORD *)(a1 + 56) |= 0x1000000u;
  v3 = AMLIAsyncEvalObject(v4, 0LL, 1LL, v17);
  AMLIDereferenceHandleEx(v4);
  v13 = v1[1];
  v14 = 0;
  v4 = 0LL;
  v15 = &unk_1C0067B08;
  if ( (v13 & 0x200000000000LL) != 0 )
  {
    v2 = (void *)v1[70];
    if ( (v13 & 0x400000000000LL) != 0 )
      v15 = (void *)v1[71];
  }
  LOBYTE(v14) = 4;
  WPP_RECORDER_SF_qLqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v14,
    10,
    77,
    (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
    a1,
    v3,
    (char)v1,
    (__int64)v2,
    (__int64)v15);
  if ( v3 != 259 )
    goto LABEL_10;
  return 0LL;
}
