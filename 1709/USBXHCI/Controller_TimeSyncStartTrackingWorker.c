/*
 * XREFs of Controller_TimeSyncStartTrackingWorker @ 0x1C0012CE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C00106F8 (Controller_DetectFrameMicroframeBoundary.c)
 *     DynamicLock_Acquire @ 0x1C003FB80 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003FD7C (DynamicLock_Release.c)
 */

__int64 __fastcall Controller_TimeSyncStartTrackingWorker(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  int v3; // ebp
  __int64 v4; // rdi
  __int64 *v5; // rsi
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v11; // [rsp+28h] [rbp-10h]

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3048))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C004E430);
  v3 = Controller_DetectFrameMicroframeBoundary(v2);
  DynamicLock_Acquire(*(_QWORD *)(v2 + 544));
  v4 = v2 + 568;
  while ( *(_QWORD *)v4 != v4 )
  {
    v5 = *(__int64 **)v4;
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || (v6 = *v5, *(__int64 **)(*v5 + 8) != v5) )
      __fastfail(3u);
    *(_QWORD *)v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    DynamicLock_Release(*(_QWORD *)(v2 + 544));
    if ( v3 < 0 )
    {
      v8 = 0LL;
    }
    else
    {
      *((_BYTE *)v5 + 40) = 1;
      DynamicLock_Acquire(*(_QWORD *)(v2 + 544));
      v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 120))(
             WdfDriverGlobals,
             *(_QWORD *)(v2 + 560),
             v5[2]);
      v3 = v7;
      if ( v7 < 0 )
      {
        LODWORD(v11) = v7;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v2 + 72),
          2u,
          4u,
          0x10Cu,
          (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
          v11);
        DynamicLock_Release(*(_QWORD *)(v2 + 544));
      }
      DynamicLock_Release(*(_QWORD *)(v2 + 544));
      v8 = 9LL;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
      WdfDriverGlobals,
      v5[3],
      (unsigned int)v3,
      v8);
    DynamicLock_Acquire(*(_QWORD *)(v2 + 544));
  }
  v9 = *(_QWORD *)(v2 + 544);
  *(_BYTE *)(v2 + 592) = 0;
  return DynamicLock_Release(v9);
}
