/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x1C0005D20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qdqss @ 0x1C00052E8 (WPP_RECORDER_SF_qdqss.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C000544C (WPP_RECORDER_SF_qLqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0006240 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase1(__int64 a1)
{
  _QWORD *v1; // rbx
  const char *v2; // rbp
  int v3; // r12d
  unsigned int v4; // esi
  __int64 v5; // r14
  __int64 v6; // rdx
  const char *v8; // r8
  const char *v9; // rcx
  char v10; // r15
  __int64 v11; // rax
  KIRQL v12; // al
  _QWORD *i; // rdx
  char v14; // r8
  const char *v15; // rcx
  __int64 v16; // rdx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 40);
  v2 = (const char *)&unk_1C0067B08;
  v3 = *(_DWORD *)(a1 + 104);
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v8 = (const char *)&unk_1C0067B08;
  v9 = (const char *)&unk_1C0067B08;
  v10 = 1;
  if ( v1 )
  {
    v11 = v1[1];
    v6 = (__int64)v1;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v8 = (const char *)v1[70];
      if ( (v11 & 0x400000000000LL) != 0 )
        v9 = (const char *)v1[71];
    }
  }
  WPP_RECORDER_SF_qdqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v6,
    0xAu,
    0x48u,
    (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
    a1,
    (v3 != 1) + 4,
    v6,
    v8,
    v9);
  if ( v3 != 1 )
  {
    *(_DWORD *)(a1 + 212) = 5;
    goto LABEL_13;
  }
  *(_DWORD *)(a1 + 212) = 4;
  v12 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  for ( i = (_QWORD *)v1[46]; i; i = (_QWORD *)*i )
  {
    if ( (*(_BYTE *)(i[1] + 16LL) & 0x10) == 0 )
    {
      v10 = 0;
      break;
    }
  }
  KeReleaseSpinLock(&AcpiPowerLock, v12);
  if ( !v10 )
  {
    v4 = -1073741823;
    goto LABEL_13;
  }
  v5 = v1[52];
  if ( v5 )
  {
    *(_DWORD *)(a1 + 56) |= 0x1000000u;
    v4 = AMLIAsyncEvalObject(v5, 0LL, 0LL, 0LL);
  }
  v14 = 0;
  v15 = (const char *)&unk_1C0067B08;
  if ( v1 )
  {
    v16 = v1[1];
    v14 = (char)v1;
    if ( (v16 & 0x200000000000LL) != 0 )
    {
      v2 = (const char *)v1[70];
      if ( (v16 & 0x400000000000LL) != 0 )
        v15 = (const char *)v1[71];
    }
  }
  WPP_RECORDER_SF_qLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0x49u,
    (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
    a1,
    v4,
    v14,
    v2,
    v15);
  result = 259LL;
  if ( v4 != 259 )
  {
    v4 = 0;
LABEL_13:
    ACPIDeviceCompleteGenericPhase(v5, v4, 0LL, a1);
    return 0LL;
  }
  return result;
}
