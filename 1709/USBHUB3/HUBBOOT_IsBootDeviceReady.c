/*
 * XREFs of HUBBOOT_IsBootDeviceReady @ 0x1C00356F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     HUBHTX_GetPortStatusForBootDevice @ 0x1C0005A10 (HUBHTX_GetPortStatusForBootDevice.c)
 *     HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice @ 0x1C002AFD0 (HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice.c)
 */

char __fastcall HUBBOOT_IsBootDeviceReady(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // r9
  __int64 v4; // rcx
  char v5; // si
  unsigned __int16 v6; // r9
  __int64 v7; // r10
  __int64 v8; // rcx
  int v10; // [rsp+48h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)a2 + 2344LL) & 0x10) != 0 )
  {
    v3 = 98;
    v4 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 1432LL);
LABEL_18:
    WPP_RECORDER_SF_(v4, 4u, 5u, v3, (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids);
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a2 + 8) + 1336LL), 0xFFFFFFF7);
    HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice(a2);
    return 1;
  }
  v5 = 0;
  *(_DWORD *)(a2 + 2240) = 0;
  if ( (int)HUBHTX_GetPortStatusForBootDevice(a2, &v10) >= 0 )
  {
    if ( (*(_DWORD *)(a2 + 1636) & 0x400) == 0 || (v10 & 0x10000) != 0 )
    {
      v7 = *(_QWORD *)(a2 + 8);
      if ( *(_DWORD *)(v7 + 1424) == 2 )
      {
        v8 = *(_QWORD *)(v7 + 1432);
        v6 = 101;
        goto LABEL_21;
      }
      if ( (v10 & 1) != 0 )
      {
        v3 = 102;
      }
      else
      {
        if ( (*(_DWORD *)(a2 + 1456) & 0x800) == 0 || (v10 & 0x1E0) != 0xC0 )
        {
          _InterlockedAnd((volatile signed __int32 *)(v7 + 1336), 0xFFFFFFF7);
          v6 = 105;
          goto LABEL_20;
        }
        if ( (*(_DWORD *)(v7 + 1336) & 8) == 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(v7 + 1336), 8u);
          v6 = 103;
          goto LABEL_20;
        }
        v3 = 104;
      }
      v4 = *(_QWORD *)(v7 + 1432);
      goto LABEL_18;
    }
    v6 = 100;
  }
  else
  {
    v6 = 99;
  }
LABEL_20:
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 1432LL);
LABEL_21:
  WPP_RECORDER_SF_(v8, 4u, 5u, v6, (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids);
  if ( _InterlockedExchange((volatile __int32 *)(a2 + 2240), 1) == 1 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a2 + 8) + 1432LL),
      4u,
      5u,
      0x6Au,
      (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids);
    return 1;
  }
  return v5;
}
