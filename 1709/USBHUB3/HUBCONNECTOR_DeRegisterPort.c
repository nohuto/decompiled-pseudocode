/*
 * XREFs of HUBCONNECTOR_DeRegisterPort @ 0x1C006D39C
 * Callers:
 *     HUBCONNECTOR_UnMapHubPorts @ 0x1C006DCCC (HUBCONNECTOR_UnMapHubPorts.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBCONNECTOR_DeRegisterPort(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  __int64 *v4; // r15
  __int64 i; // rbx
  _QWORD *v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rax

  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005B110);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 56),
    0LL);
  if ( (*(_DWORD *)(a1 + 204) & 0x20) != 0 )
  {
    v4 = (__int64 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                       WdfDriverGlobals,
                       WdfDriverGlobals->Driver,
                       off_1C005B110)
                   + 40);
    for ( i = *v4; ; i = v6[10] )
    {
      v6 = (_QWORD *)(i - 80);
      if ( v4 == v6 + 10 )
        break;
      if ( RtlCompareMemory(v6, (const void *)(a1 + 1368), 0x38uLL) == 56 )
        goto LABEL_7;
    }
    v6 = 0LL;
LABEL_7:
    if ( v6 )
    {
      v7 = *(_DWORD *)(a1 + 208);
      if ( v7 == 512 )
      {
        v6[7] = 0LL;
      }
      else
      {
        if ( v7 != 768 )
        {
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 1432),
            2u,
            6u,
            0x14u,
            (__int64)&WPP_87e3f05bec5a3ef5eeee36d3d8873aec_Traceguids,
            *(_DWORD *)(a1 + 208));
          goto LABEL_20;
        }
        v6[8] = 0LL;
      }
      if ( !v6[7] && !v6[8] )
      {
        v8 = v6[10];
        if ( *(_QWORD **)(v8 + 8) != v6 + 10 || (v9 = (_QWORD *)v6[11], (_QWORD *)*v9 != v6 + 10) )
          __fastfail(3u);
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        ExFreePoolWithTag(v6, 0x70334855u);
      }
      _InterlockedAnd((volatile signed __int32 *)(a1 + 204), 0xFFFFFFDF);
    }
    else
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 1432), 2u, 4u, 0x13u, (__int64)&WPP_87e3f05bec5a3ef5eeee36d3d8873aec_Traceguids);
      v2 = -1073741823;
    }
  }
LABEL_20:
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          WdfDriverGlobals->Driver,
          off_1C005B110);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v10 + 56));
  return v2;
}
