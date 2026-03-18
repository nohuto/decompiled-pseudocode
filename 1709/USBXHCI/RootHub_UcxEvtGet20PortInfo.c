/*
 * XREFs of RootHub_UcxEvtGet20PortInfo @ 0x1C0020B30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 */

__int64 __fastcall RootHub_UcxEvtGet20PortInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  int v5; // eax
  __int64 v6; // r10
  unsigned __int16 v7; // r9
  __int64 v8; // r8
  unsigned __int16 v9; // di
  unsigned __int16 i; // r11
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  int v16; // [rsp+28h] [rbp-50h]
  _QWORD v17[5]; // [rsp+30h] [rbp-48h] BYREF

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
    v7 = 195;
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
  if ( (_WORD)v5 != *(_WORD *)(v3 + 20) )
  {
    v5 = (unsigned __int16)v5;
    v7 = 196;
    goto LABEL_3;
  }
  LOWORD(v5) = *(_WORD *)(v17[1] + 6LL);
  if ( (unsigned __int16)v5 < 0x14u )
  {
    v5 = (unsigned __int16)v5;
    v7 = 197;
    goto LABEL_3;
  }
  v8 = 0LL;
  v9 = 0;
  for ( i = 0; (unsigned int)i < *(_DWORD *)(v3 + 16); ++i )
  {
    if ( v9 >= *(_WORD *)(v4 + 4) )
      break;
    v11 = (unsigned __int64)i << 6;
    if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + v11 + 1) == 2 )
    {
      v12 = v9;
      **(_WORD **)(v6 + 8LL * v9) = i + 1;
      v13 = *(_QWORD *)(v6 + 8LL * v9);
      if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + v11 + 5) == 1 )
        *(_DWORD *)(v13 + 4) = 116;
      else
        *(_DWORD *)(v13 + 4) = 102;
      v14 = *(_QWORD *)(v6 + 8LL * v9);
      if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + v11 + 4) == 1 )
        *(_DWORD *)(v14 + 8) = 116;
      else
        *(_DWORD *)(v14 + 8) = 102;
      if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 272LL) & 0x400000LL) == 0 )
        *(_BYTE *)(*(_QWORD *)(v6 + 8LL * v9) + 16LL) = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v11 + 7);
      ++v9;
      *(_BYTE *)(*(_QWORD *)(v6 + 8 * v12) + 2LL) = *(_BYTE *)(v11 + *(_QWORD *)(v3 + 48));
      *(_BYTE *)(*(_QWORD *)(v6 + 8 * v12) + 3LL) = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v11 + 2);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           v8);
}
