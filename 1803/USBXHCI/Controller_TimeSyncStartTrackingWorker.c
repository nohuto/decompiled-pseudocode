/*
 * XREFs of Controller_TimeSyncStartTrackingWorker @ 0x1C000A3E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C0007804 (Controller_DetectFrameMicroframeBoundary.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     DynamicLock_Acquire @ 0x1C003E230 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003E42C (DynamicLock_Release.c)
 */

__int64 __fastcall Controller_TimeSyncStartTrackingWorker(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  int v3; // ebp
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  PWDF_DRIVER_GLOBALS v9; // rcx
  int v10; // eax
  int v11; // edx
  __int64 v12; // r14
  __int64 v13; // rcx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3048))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C004B430);
  v3 = Controller_DetectFrameMicroframeBoundary(v2);
  DynamicLock_Acquire(*(_QWORD *)(v2 + 560));
  v4 = (_QWORD *)(v2 + 584);
  while ( 1 )
  {
    v5 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
      break;
    if ( (_QWORD *)v5[1] != v4 || (v6 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    if ( v3 < 0 )
      goto LABEL_8;
    v7 = WdfFunctions_01023;
    v8 = v5[2];
    v9 = WdfDriverGlobals;
    *((_BYTE *)v5 + 40) = 1;
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(v7 + 120))(v9, *(_QWORD *)(v2 + 576), v8);
    v3 = v10;
    if ( v10 < 0 )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v2 + 72),
        v11,
        4,
        270,
        (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
        v10);
LABEL_8:
      v12 = 0LL;
      goto LABEL_9;
    }
    v12 = 9LL;
LABEL_9:
    DynamicLock_Release(*(_QWORD *)(v2 + 560));
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01023 + 2120))(
      WdfDriverGlobals,
      v5[3],
      (unsigned int)v3,
      v12);
    DynamicLock_Acquire(*(_QWORD *)(v2 + 560));
  }
  v13 = *(_QWORD *)(v2 + 560);
  *(_BYTE *)(v2 + 608) = 0;
  return DynamicLock_Release(v13);
}
