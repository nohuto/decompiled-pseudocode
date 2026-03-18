/*
 * XREFs of Endpoint_EvaluateContextCompletion @ 0x1C0011B20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C00068AC (CommonBuffer_ReleaseBuffer.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_dddL @ 0x1C0016088 (WPP_RECORDER_SF_dddL.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     Etw_EndpointUpdate @ 0x1C0036734 (Etw_EndpointUpdate.c)
 */

__int64 __fastcall Endpoint_EvaluateContextCompletion(__int64 a1, int a2)
{
  _QWORD *v2; // rdi
  unsigned int v5; // esi
  unsigned __int8 v6; // al
  __int64 v7; // r10
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edx
  __int64 v11; // rax

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
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(*v2 + 16LL) + 135LL),
      *(_DWORD *)(*v2 + 144LL));
LABEL_6:
    v5 = -1073741823;
    goto LABEL_7;
  }
  v6 = *(_BYTE *)(a1 + 60);
  v7 = *v2;
  if ( v6 != 1 )
  {
    v10 = v6;
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_dddL(*(_QWORD *)(*(_QWORD *)v7 + 72LL), v10, *(unsigned __int8 *)(*(_QWORD *)(v7 + 16) + 135LL), 29);
    goto LABEL_6;
  }
  *(_WORD *)(v7 + 100) = *((_WORD *)v2 + 8);
  v8 = *v2;
  LOBYTE(v8) = 4;
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(*(_QWORD *)*v2 + 72LL),
    v8,
    13,
    28,
    (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
    *(_BYTE *)(*(_QWORD *)(*v2 + 16LL) + 135LL),
    *(_DWORD *)(*v2 + 144LL),
    *((_DWORD *)v2 + 4));
  Etw_EndpointUpdate(v9, *v2);
LABEL_7:
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01023 + 1632))(WdfDriverGlobals, v2);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           v11,
           v5);
}
