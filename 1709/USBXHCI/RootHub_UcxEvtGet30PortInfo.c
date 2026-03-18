/*
 * XREFs of RootHub_UcxEvtGet30PortInfo @ 0x1C0020D40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     RootHub_Read30PortSpeeds @ 0x1C002037C (RootHub_Read30PortSpeeds.c)
 */

__int64 __fastcall RootHub_UcxEvtGet30PortInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  int v5; // eax
  __int64 v6; // rdi
  unsigned __int16 v7; // r9
  __int64 v8; // r8
  unsigned __int16 v9; // bp
  unsigned __int16 v10; // si
  unsigned __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // eax
  int v16; // [rsp+28h] [rbp-70h]
  _QWORD v17[5]; // [rsp+40h] [rbp-58h] BYREF

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004E278);
  memset(v17, 0, sizeof(v17));
  LOWORD(v17[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v17);
  v4 = v17[1];
  v5 = *(_DWORD *)v17[1];
  v6 = *(_QWORD *)(v17[1] + 8LL);
  if ( *(_DWORD *)v17[1] < 0x10u )
  {
    v7 = 198;
LABEL_3:
    v16 = v5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      2u,
      0xBu,
      v7,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v16);
    v8 = 3221225485LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             v8);
  }
  LOWORD(v5) = *(_WORD *)(v17[1] + 4LL);
  if ( (_WORD)v5 != *(_WORD *)(v3 + 22) )
  {
    v5 = (unsigned __int16)v5;
    v7 = 199;
    goto LABEL_3;
  }
  LOWORD(v5) = *(_WORD *)(v17[1] + 6LL);
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
      if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + v11 + 1) == 3 )
      {
        **(_WORD **)(v6 + 8LL * v9) = v10 + 1;
        v12 = *(_QWORD *)(v6 + 8LL * v9);
        if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + v11 + 5) == 1 )
          *(_DWORD *)(v12 + 4) = 116;
        else
          *(_DWORD *)(v12 + 4) = 102;
        v13 = *(_QWORD *)(v6 + 8LL * v9);
        if ( *(_BYTE *)(v3 + 56) == 1 )
          *(_DWORD *)(v13 + 8) = 116;
        else
          *(_DWORD *)(v13 + 8) = 102;
        *(_BYTE *)(*(_QWORD *)(v6 + 8LL * v9) + 2LL) = *(_BYTE *)(v11 + *(_QWORD *)(v3 + 48));
        *(_BYTE *)(*(_QWORD *)(v6 + 8LL * v9) + 3LL) = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v11 + 2);
        if ( *(_WORD *)(v4 + 6) >= 0x18u )
        {
          v14 = RootHub_Read30PortSpeeds(
                  v3,
                  *(_QWORD *)(*(_QWORD *)(v6 + 8LL * v9) + 16LL),
                  (unsigned __int16 *)(*(_QWORD *)(v6 + 8LL * v9) + 14LL),
                  *(_WORD *)(*(_QWORD *)(v6 + 8LL * v9) + 12LL),
                  *(_QWORD *)(*(_QWORD *)(v3 + 48) + ((unsigned __int64)v10 << 6) + 56),
                  *(_WORD *)(*(_QWORD *)(v3 + 48) + ((unsigned __int64)v10 << 6) + 54),
                  *(_BYTE *)(*(_QWORD *)(v3 + 48) + ((unsigned __int64)v10 << 6)));
          v8 = v14;
          if ( v14 )
            return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2104))(
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
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           v8);
}
