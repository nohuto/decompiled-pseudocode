/*
 * XREFs of RootHub_UcxEvtGet20PortInfo @ 0x1C001C250
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall RootHub_UcxEvtGet20PortInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rsi
  unsigned __int16 v7; // r9
  __int64 i; // r9
  __int64 v9; // r8
  unsigned __int16 v10; // r11
  unsigned __int64 v11; // rdx
  __int64 v12; // r10
  int v13; // eax
  int v14; // ecx
  int v16; // [rsp+28h] [rbp-50h]
  _QWORD v17[5]; // [rsp+30h] [rbp-48h] BYREF

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004B278);
  memset(v17, 0, sizeof(v17));
  LOWORD(v17[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
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
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
      v16);
    v9 = 3221225485LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             v9,
             i);
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
  v9 = 0LL;
  v10 = 0;
  for ( i = 0LL; (unsigned int)(unsigned __int16)i < *(_DWORD *)(v3 + 16); LOWORD(i) = i + 1 )
  {
    if ( v10 >= *(_WORD *)(v4 + 4) )
      break;
    v11 = (unsigned __int64)(unsigned __int16)i << 6;
    if ( *(_BYTE *)(v11 + *(_QWORD *)(v3 + 48) + 1) == 2 )
    {
      v12 = v10;
      **(_WORD **)(v6 + 8LL * v10) = i + 1;
      v13 = 116;
      if ( *(_BYTE *)(v11 + *(_QWORD *)(v3 + 48) + 5) != 1 )
        v13 = 102;
      *(_DWORD *)(*(_QWORD *)(v6 + 8LL * v10) + 4LL) = v13;
      v14 = 116;
      if ( *(_BYTE *)(v11 + *(_QWORD *)(v3 + 48) + 4) != 1 )
        v14 = 102;
      *(_DWORD *)(*(_QWORD *)(v6 + 8LL * v10) + 8LL) = v14;
      if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 272LL) & 0x400000LL) == 0 )
        *(_BYTE *)(*(_QWORD *)(v6 + 8LL * v10) + 16LL) = *(_BYTE *)(v11 + *(_QWORD *)(v3 + 48) + 7);
      ++v10;
      *(_BYTE *)(*(_QWORD *)(v6 + 8 * v12) + 2LL) = *(_BYTE *)(v11 + *(_QWORD *)(v3 + 48));
      *(_BYTE *)(*(_QWORD *)(v6 + 8 * v12) + 3LL) = *(_BYTE *)(v11 + *(_QWORD *)(v3 + 48) + 2);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v9,
           i);
}
