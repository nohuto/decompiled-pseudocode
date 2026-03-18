/*
 * XREFs of Interrupter_FilterAllMSIResources @ 0x1C0059098
 * Callers:
 *     Interrupter_FilterRemoveResourceRequirements @ 0x1C00594B0 (Interrupter_FilterRemoveResourceRequirements.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall Interrupter_FilterAllMSIResources(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  char v3; // r13
  unsigned int v4; // edi
  __int64 v5; // r15
  int v7; // r12d
  unsigned int v8; // esi
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int16 v12; // ax
  __int128 v13; // xmm1
  __int64 v15; // [rsp+28h] [rbp-90h]
  __int64 v16; // [rsp+30h] [rbp-88h]
  unsigned int v17; // [rsp+40h] [rbp-78h]
  _OWORD v19[2]; // [rsp+50h] [rbp-68h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = a2;
  while ( v4 < (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2320))(
                 WdfDriverGlobals,
                 v5) )
  {
    v7 = 0;
    v8 = 0;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2328))(
           WdfDriverGlobals,
           v5,
           v4);
    while ( 1 )
    {
      v17 = v8;
      if ( v8 >= (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2384))(
                   WdfDriverGlobals,
                   v9) )
        break;
      v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2392))(
              WdfDriverGlobals,
              v9,
              v8);
      if ( *(_BYTE *)(v10 + 1) == 2 )
      {
        if ( (*(_BYTE *)(v10 + 4) & 3) == 3 )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2400))(
            WdfDriverGlobals,
            v9,
            v8);
          v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
          v12 = 54;
        }
        else
        {
          v19[0] = *(_OWORD *)v10;
          v13 = *(_OWORD *)(v10 + 16);
          LOBYTE(v19[0]) = 0;
          v19[1] = v13;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *, _QWORD))(WdfFunctions_01023 + 2376))(
            WdfDriverGlobals,
            v9,
            v19,
            v8);
          ++v7;
          v3 = 1;
          ++v8;
          v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
          v12 = 55;
        }
        LODWORD(v16) = v17;
        LODWORD(v15) = v4;
        WPP_RECORDER_SF_dd(v11, 4u, 9u, v12, (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids, v15, v16);
      }
      else
      {
        ++v8;
      }
    }
    v5 = a2;
    if ( v7 )
    {
      ++v4;
    }
    else
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2336))(
        WdfDriverGlobals,
        a2,
        v4);
      LODWORD(v15) = v4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        9u,
        0x38u,
        (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids,
        v15);
    }
  }
  if ( !v3 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      9u,
      0x39u,
      (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids);
    return (unsigned int)-1073741823;
  }
  return v2;
}
