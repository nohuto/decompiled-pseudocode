/*
 * XREFs of ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C001CE80
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0019CA0 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001FFE0 (WPP_RECORDER_SF_qd.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 *     AMLIGetParent @ 0x1C0043D24 (AMLIGetParent.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase2SystemSubPhase1(__int64 a1)
{
  bool v1; // di
  int v3; // r14d
  __int64 *v4; // rbp
  signed __int32 v5; // r15d
  int v6; // ebx
  int v7; // r12d
  __int64 *v8; // r11
  __int64 *v9; // rdx
  __int64 *v10; // r9
  __int64 *v11; // r8
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rax
  __int64 v15; // rdi
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rax
  __int64 result; // rax
  _QWORD v19[6]; // [rsp+40h] [rbp-58h] BYREF

  v1 = 0;
  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  *(_DWORD *)(a1 + 212) = 4;
  WPP_RECORDER_SF_qd(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    10,
    62,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a1,
    4);
  v6 = *(_DWORD *)(a1 + 104);
  v7 = *(_DWORD *)(a1 + 108);
  if ( v6 == 6 )
    v1 = v7 == 5;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v8 = (__int64 *)AcpiPowerNodeList;
  if ( (__int64 *)AcpiPowerNodeList != &AcpiPowerNodeList )
  {
    while ( 1 )
    {
      v9 = v8;
      v10 = v8;
      v8 = (__int64 *)*v8;
      v11 = (__int64 *)v9[6];
      if ( v11 != v9 + 6 )
      {
        do
        {
          v12 = *(v11 - 1);
          v11 = (__int64 *)*v11;
          v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 688), 0, 0);
        }
        while ( !v5 && v11 != v9 + 6 );
      }
      if ( v5 )
        _InterlockedOr64(v10 + 2, 0x20000uLL);
      else
        _InterlockedAnd64(v10 + 2, 0xFFFFFFFFFFFDFFFFuLL);
      if ( v6 == 5 || (v13 = 0, v7 == 3) )
        v13 = 1;
      if ( v5 && v13 == 1 || v1 )
      {
        if ( (v9[2] & 0x40) != 0 )
        {
          _InterlockedAnd64(v9 + 2, 0xFFFFFFFFFFFFFFBFuLL);
          goto LABEL_24;
        }
      }
      else
      {
        v14 = v10[2];
        if ( *((_DWORD *)v9 + 11) < v6 )
        {
          if ( (v14 & 0x200) == 0 )
            _InterlockedOr64(v9 + 2, 0x40uLL);
          goto LABEL_24;
        }
        if ( (v14 & 0x40) != 0 )
        {
          _InterlockedAnd64(v10 + 2, 0xFFFFFFFFFFFFFFBFuLL);
LABEL_24:
          if ( _InterlockedCompareExchange((volatile signed __int32 *)v9 + 16, 3, 0) == 1 )
            *((_DWORD *)v9 + 17) = 3;
          goto LABEL_26;
        }
        if ( (v14 & 0x2000) != 0 )
          goto LABEL_24;
      }
LABEL_26:
      if ( v8 == &AcpiPowerNodeList )
      {
        v3 = 0;
        break;
      }
    }
  }
  v15 = (unsigned int)AcpiMostRecentSleepState;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  if ( v6 != 1 )
    goto LABEL_34;
  v16 = (volatile signed __int32 *)AMLIGetParent(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 712LL));
  v4 = AMLIGetNamedChild(v16, 1262573407);
  AMLIDereferenceHandleEx(v16);
  if ( !v4 )
    goto LABEL_34;
  memset(v19, 0, 0x28uLL);
  WORD1(v19[0]) = 1;
  v17 = (unsigned int)v15 < 7 ? (unsigned int)AcpiSystemStateTranslation[v15] : 0xFFFFFFFFLL;
  v19[2] = v17;
  v3 = AMLIAsyncEvalObject(v4, 0LL, 1LL, v19, ACPIDeviceCompleteGenericPhase, a1);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v4);
  v4 = 0LL;
  WPP_RECORDER_SF_qd(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    10,
    63,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a1,
    v3);
  result = 259LL;
  if ( v3 != 259 )
  {
LABEL_34:
    ACPIDeviceCompleteGenericPhase((__int64)v4, v3, 0LL, a1);
    return 0LL;
  }
  return result;
}
