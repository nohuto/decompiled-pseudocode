/*
 * XREFs of RootHub_UcxEvtGet30PortInfo @ 0x1C001C460
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     RootHub_Read30PortSpeeds @ 0x1C001AAE8 (RootHub_Read30PortSpeeds.c)
 */

__int64 __fastcall RootHub_UcxEvtGet30PortInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  int v5; // eax
  __int64 v6; // r15
  unsigned __int16 v7; // r9
  __int64 v8; // r8
  unsigned __int16 v9; // si
  unsigned __int16 v10; // di
  unsigned __int64 v11; // r9
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // eax
  _QWORD v16[5]; // [rsp+40h] [rbp-58h] BYREF

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004B278);
  memset(v16, 0, sizeof(v16));
  LOWORD(v16[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v16);
  v4 = v16[1];
  v5 = *(_DWORD *)v16[1];
  v6 = *(_QWORD *)(v16[1] + 8LL);
  if ( *(_DWORD *)v16[1] < 0x10u )
  {
    v7 = 198;
LABEL_3:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      2u,
      0xBu,
      v7,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
      v5);
    v8 = 3221225485LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             v8);
  }
  LOWORD(v5) = *(_WORD *)(v16[1] + 4LL);
  if ( (_WORD)v5 != *(_WORD *)(v3 + 22) )
  {
    v5 = (unsigned __int16)v5;
    v7 = 199;
    goto LABEL_3;
  }
  LOWORD(v5) = *(_WORD *)(v16[1] + 6LL);
  if ( (unsigned __int16)v5 < 0xCu )
  {
    v5 = (unsigned __int16)v5;
    v7 = 200;
    goto LABEL_3;
  }
  v9 = 0;
  v10 = 0;
  if ( *(_DWORD *)(v3 + 16) )
  {
    while ( v9 < *(_WORD *)(v4 + 4) )
    {
      v11 = (unsigned __int64)v10 << 6;
      if ( *(_BYTE *)(v11 + *(_QWORD *)(v3 + 48) + 1) == 3 )
      {
        **(_WORD **)(v6 + 8LL * v9) = v10 + 1;
        v12 = 116;
        if ( *(_BYTE *)(v11 + *(_QWORD *)(v3 + 48) + 5) != 1 )
          v12 = 102;
        *(_DWORD *)(*(_QWORD *)(v6 + 8LL * v9) + 4LL) = v12;
        v13 = 116;
        if ( *(_BYTE *)(v3 + 56) != 1 )
          v13 = 102;
        *(_DWORD *)(*(_QWORD *)(v6 + 8LL * v9) + 8LL) = v13;
        *(_BYTE *)(*(_QWORD *)(v6 + 8LL * v9) + 2LL) = *(_BYTE *)(v11 + *(_QWORD *)(v3 + 48));
        *(_BYTE *)(*(_QWORD *)(v6 + 8LL * v9) + 3LL) = *(_BYTE *)(v11 + *(_QWORD *)(v3 + 48) + 2);
        if ( *(_WORD *)(v4 + 6) >= 0x18u )
        {
          v14 = RootHub_Read30PortSpeeds(
                  v3,
                  *(_QWORD *)(*(_QWORD *)(v6 + 8LL * v9) + 16LL),
                  (unsigned __int16 *)(*(_QWORD *)(v6 + 8LL * v9) + 14LL),
                  *(_WORD *)(*(_QWORD *)(v6 + 8LL * v9) + 12LL),
                  *(_QWORD *)(v11 + *(_QWORD *)(v3 + 48) + 56),
                  *(_WORD *)(v11 + *(_QWORD *)(v3 + 48) + 54),
                  *(_BYTE *)(v11 + *(_QWORD *)(v3 + 48)));
          v8 = v14;
          if ( v14 )
            return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
                     WdfDriverGlobals,
                     a2,
                     v8);
        }
        ++v9;
      }
      if ( (unsigned int)++v10 >= *(_DWORD *)(v3 + 16) )
        break;
    }
  }
  v8 = 0LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v8);
}
