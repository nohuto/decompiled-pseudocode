/*
 * XREFs of Endpoint_EvaluateContextCompletion @ 0x1C0018DE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0005320 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C000FA0C (CommonBuffer_ReleaseBuffer.c)
 *     WPP_RECORDER_SF_dddL @ 0x1C001D2D8 (WPP_RECORDER_SF_dddL.c)
 *     Etw_EndpointUpdate @ 0x1C0038B58 (Etw_EndpointUpdate.c)
 */

__int64 __fastcall Endpoint_EvaluateContextCompletion(__int64 a1, int a2)
{
  _QWORD *v2; // rdi
  unsigned int v5; // esi
  unsigned __int8 v6; // al
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rax

  v2 = *(_QWORD **)(a1 + 48);
  CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)*v2 + 120LL), (_DWORD *)v2[1]);
  v5 = 0;
  v2[1] = 0LL;
  if ( a2 == 3 )
  {
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)*v2 + 72LL),
      4u,
      0xDu,
      0x1Bu,
      (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(*v2 + 16LL) + 135LL),
      *(_DWORD *)(*v2 + 144LL));
LABEL_6:
    v5 = -1073741823;
    goto LABEL_7;
  }
  v6 = *(_BYTE *)(a1 + 60);
  if ( v6 != 1 )
  {
    v8 = v6;
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_dddL(
      *(_QWORD *)(*(_QWORD *)*v2 + 72LL),
      v8,
      *(unsigned __int8 *)(*(_QWORD *)(*v2 + 16LL) + 135LL),
      29);
    goto LABEL_6;
  }
  *(_WORD *)(*v2 + 100LL) = *((_WORD *)v2 + 8);
  WPP_RECORDER_SF_ddd(
    *(_QWORD *)(*(_QWORD *)*v2 + 72LL),
    4u,
    0xDu,
    0x1Cu,
    (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
    *(unsigned __int8 *)(*(_QWORD *)(*v2 + 16LL) + 135LL),
    *(_DWORD *)(*v2 + 144LL),
    *((_DWORD *)v2 + 4));
  Etw_EndpointUpdate(v7, *v2);
LABEL_7:
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           v9,
           v5);
}
