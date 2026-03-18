/*
 * XREFs of XilCoreCommonBuffer_FreeUnusedResources @ 0x1C0040A50
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0001460 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     CommonBuffer_RebalanceResourcesWorkItem @ 0x1C000F9B0 (CommonBuffer_RebalanceResourcesWorkItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_q @ 0x1C0015FA8 (WPP_RECORDER_SF_q.c)
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x1C00601E8 (SecureDmaEnabler_FreeCommonBufferPage.c)
 */

__int64 **__fastcall XilCoreCommonBuffer_FreeUnusedResources(__int64 **a1)
{
  KIRQL v2; // al
  __int64 **v3; // rdx
  __int64 **v4; // rcx
  __int64 *v5; // rbx
  __int64 **result; // rax
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v11; // [rsp+38h] [rbp-8h]

  v11 = (__int64 *)&v10;
  v10 = (__int64 *)&v10;
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 2);
  v3 = a1 + 23;
  *((_BYTE *)a1 + 25) = v2;
  v4 = (__int64 **)a1[23];
  if ( v4 != a1 + 23 )
  {
    *v11 = (__int64)v4;
    (*v3)[1] = (__int64)v11;
    *a1[24] = (__int64)&v10;
    v11 = a1[24];
    a1[24] = (__int64 *)(a1 + 23);
    *v3 = (__int64 *)v3;
  }
  *((_DWORD *)a1 + 50) -= *((_DWORD *)a1 + 44);
  *((_DWORD *)a1 + 44) = 0;
  ++*((_DWORD *)a1 + 53);
  KeReleaseSpinLock((PKSPIN_LOCK)a1 + 2, *((_BYTE *)a1 + 25));
  while ( 1 )
  {
    v5 = v10;
    result = &v10;
    if ( v10 == (__int64 *)&v10 )
      break;
    if ( (__int64 **)v10[1] != &v10 || (v7 = (__int64 *)*v10, *(__int64 **)(*v10 + 8) != v10) )
      __fastfail(3u);
    v10 = (__int64 *)*v10;
    v7[1] = (__int64)&v10;
    v5[1] = (__int64)v5;
    *v5 = (__int64)v5;
    WPP_RECORDER_SF_q(a1[1][9], 4u, 8u, 0x18u, (__int64)&WPP_476c7f6a61583b4cf1c220e4dc815a48_Traceguids, v5[3]);
    v8 = v5[3];
    v9 = **a1;
    if ( *(_BYTE *)(v9 + 441) )
      SecureDmaEnabler_FreeCommonBufferPage(v9, v8);
    else
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(
        WdfDriverGlobals,
        *(_QWORD *)(v8 + 16));
  }
  return result;
}
