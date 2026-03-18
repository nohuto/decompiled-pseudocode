/*
 * XREFs of ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0048CE0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0006240 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0014E98 (WPP_RECORDER_SF_qD.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     AMLIGetParent @ 0x1C001BBA0 (AMLIGetParent.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     WPP_RECORDER_SF_qd @ 0x1C004A584 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase2SystemSubPhase1(__int64 a1)
{
  bool v1; // di
  int v3; // r14d
  __int64 *v4; // rbp
  signed __int32 v5; // r15d
  int v6; // ebx
  int v7; // r12d
  __int64 *v8; // r10
  __int64 *v9; // rdx
  __int64 *v10; // r8
  __int64 v11; // rcx
  char v12; // al
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 *v15; // rbx
  __int64 v16; // rax
  int v17; // edx
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
    (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
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
      v8 = (__int64 *)*v8;
      v10 = (__int64 *)v9[6];
      if ( v10 != v9 + 6 )
        break;
LABEL_7:
      if ( v5 )
        goto LABEL_9;
      _InterlockedAnd64(v9 + 2, 0xFFFFFFFFFFFDFFFFuLL);
LABEL_10:
      if ( v6 == 5 || (v12 = 0, v7 == 3) )
        v12 = 1;
      if ( v5 && v12 == 1 || v1 )
      {
        if ( (v9[2] & 0x40) != 0 )
          goto LABEL_17;
      }
      else
      {
        if ( *((_DWORD *)v9 + 11) < v6 )
        {
          if ( (v9[2] & 0x200) == 0 )
            _InterlockedOr64(v9 + 2, 0x40uLL);
          goto LABEL_23;
        }
        v13 = v9[2];
        if ( (v13 & 0x40) != 0 )
        {
LABEL_17:
          _InterlockedAnd64(v9 + 2, 0xFFFFFFFFFFFFFFBFuLL);
LABEL_23:
          if ( _InterlockedCompareExchange((volatile signed __int32 *)v9 + 16, 3, 0) == 1 )
            *((_DWORD *)v9 + 17) = 3;
          goto LABEL_25;
        }
        if ( (v13 & 0x2000) != 0 )
          goto LABEL_23;
      }
LABEL_25:
      if ( v8 == &AcpiPowerNodeList )
        goto LABEL_26;
    }
    while ( 1 )
    {
      v11 = *(v10 - 1);
      v10 = (__int64 *)*v10;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 688), 0, 0);
      if ( v5 )
        break;
      if ( v10 == v9 + 6 )
        goto LABEL_7;
    }
LABEL_9:
    _InterlockedOr64(v9 + 2, 0x20000uLL);
    goto LABEL_10;
  }
LABEL_26:
  v14 = (unsigned int)AcpiMostRecentSleepState;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  if ( v6 != 1 )
    goto LABEL_32;
  v15 = (__int64 *)AMLIGetParent(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 712LL));
  v4 = AMLIGetNamedChild(v15, 1262573407);
  AMLIDereferenceHandleEx((__int64)v15);
  if ( !v4 )
    goto LABEL_32;
  memset(v19, 0, 0x28uLL);
  WORD1(v19[0]) = 1;
  v16 = (unsigned int)v14 < 7 ? (unsigned int)AcpiSystemStateTranslation[v14] : 0xFFFFFFFFLL;
  v19[2] = v16;
  v3 = AMLIAsyncEvalObject(v4, 0LL, 1u, v19, ACPIDeviceCompleteGenericPhase, a1);
  AMLIDereferenceHandleEx((__int64)v4);
  v4 = 0LL;
  LOBYTE(v17) = 4;
  WPP_RECORDER_SF_qD(
    WPP_GLOBAL_Control->DeviceExtension,
    v17,
    10,
    63,
    (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
    a1,
    v3);
  result = 259LL;
  if ( v3 != 259 )
  {
LABEL_32:
    ACPIDeviceCompleteGenericPhase((__int64)v4, v3, 0LL, a1);
    return 0LL;
  }
  return result;
}
