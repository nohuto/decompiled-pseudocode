/*
 * XREFs of HUBREG_ValidateAndPopulateEndpointPriorities @ 0x1C002BDA8
 * Callers:
 *     HUBREG_QueryValuesInDeviceHardwareKey @ 0x1C0070AB0 (HUBREG_QueryValuesInDeviceHardwareKey.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_S @ 0x1C002B994 (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00391C0 (memset.c)
 */

__int64 __fastcall HUBREG_ValidateAndPopulateEndpointPriorities(__int64 a1, __int64 a2)
{
  unsigned int v3; // r13d
  unsigned int v4; // eax
  __int64 v5; // r12
  unsigned __int16 v6; // r9
  __int64 result; // rax
  __int64 v8; // rbx
  int v9; // eax
  signed int v10; // ebx
  unsigned __int16 v11; // r9
  unsigned int v12; // ecx
  __int64 v13; // rdx
  wchar_t *v14; // rax
  wchar_t **v15; // r12
  unsigned int i; // ebx
  wchar_t *v17; // rax
  wchar_t *v18; // rax
  __int64 v19; // rcx
  __int16 v20; // ax
  __int64 v21; // r12
  NTSTATUS v22; // eax
  wchar_t *v23; // rax
  __int64 v24; // rcx
  __int16 v25; // ax
  ULONG v26; // edx
  wchar_t *v27; // rax
  __int64 v28; // rcx
  __int16 v29; // ax
  wchar_t *v30; // rax
  __int64 v31; // rcx
  __int16 v32; // ax
  wchar_t *v33; // rax
  __int64 v34; // rcx
  __int16 v35; // ax
  wchar_t *v36; // rax
  __int64 v37; // rcx
  __int16 v38; // ax
  unsigned __int16 v39; // r9
  BOOLEAN v40; // al
  __int64 v41; // [rsp+28h] [rbp-D8h]
  UNICODE_STRING String2; // [rsp+40h] [rbp-C0h] BYREF
  ULONG Value; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v45; // [rsp+60h] [rbp-A0h]
  unsigned int v46; // [rsp+64h] [rbp-9Ch]
  __int64 v47; // [rsp+68h] [rbp-98h] BYREF
  __int64 v48; // [rsp+70h] [rbp-90h]
  _BYTE v49[8]; // [rsp+78h] [rbp-88h] BYREF
  wchar_t *Str; // [rsp+80h] [rbp-80h]
  _QWORD v51[7]; // [rsp+88h] [rbp-78h] BYREF
  wchar_t *v52; // [rsp+C0h] [rbp-40h]
  wchar_t *v53; // [rsp+C8h] [rbp-38h] BYREF
  wchar_t *v54; // [rsp+D0h] [rbp-30h]
  wchar_t *v55; // [rsp+D8h] [rbp-28h]
  wchar_t *v56; // [rsp+E0h] [rbp-20h]
  wchar_t *v57; // [rsp+E8h] [rbp-18h]
  char v58; // [rsp+F0h] [rbp-10h] BYREF

  v48 = a2;
  *(_DWORD *)&String2.Length = 6553600;
  String2.Buffer = (wchar_t *)&v58;
  v3 = 0;
  v47 = 0LL;
  v44 = 0LL;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 112))(WdfDriverGlobals);
  v5 = v4;
  v46 = v4;
  if ( !v4 )
  {
    v6 = 56;
LABEL_3:
    result = WPP_RECORDER_SF_(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
               2u,
               5u,
               v6,
               (__int64)&WPP_78b0949afb12367861659e8bf410c603_Traceguids);
    goto LABEL_112;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  memset(v51, 0, sizeof(v51));
  LODWORD(v51[0]) = 56;
  v51[3] = 0x100000001LL;
  v51[4] = v8;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         v51,
         (unsigned int)ExDefaultNonPagedPoolType,
         1681082453LL,
         20 * v5,
         &v47,
         &v44);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 57;
    LODWORD(v41) = v9;
LABEL_6:
    result = WPP_RECORDER_SF_d(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
               2u,
               5u,
               v11,
               (__int64)&WPP_78b0949afb12367861659e8bf410c603_Traceguids,
               v41);
    goto LABEL_111;
  }
  v12 = 0;
  v45 = 0;
  if ( !(_DWORD)v5 )
    goto LABEL_110;
  while ( 2 )
  {
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 144))(
            WdfDriverGlobals,
            v48,
            v12);
    if ( !v13 )
    {
      v11 = 58;
      goto LABEL_132;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _BYTE *))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      v13,
      v49);
    v14 = Str;
    v15 = &v53;
    v52 = Str;
    for ( i = 1; i < 6; ++i )
    {
      v17 = wcschr(v14, 0x2Cu);
      if ( !v17 )
      {
        v6 = 59;
        goto LABEL_3;
      }
      *v17 = 0;
      v14 = v17 + 1;
      *v15++ = v14;
    }
    v10 = 0;
    *(_DWORD *)&String2.Length = 0;
    String2.Buffer = 0LL;
    if ( v52 )
    {
      v18 = v52;
      v19 = 0x7FFFLL;
      do
      {
        if ( !*v18 )
          break;
        ++v18;
        --v19;
      }
      while ( v19 );
      v10 = v19 == 0 ? 0xC000000D : 0;
      v20 = v19 ? 0x7FFF - v19 : 0;
      if ( v19 )
      {
        String2.Buffer = v52;
        String2.Length = 2 * v20;
        String2.MaximumLength = 2 * v20 + 2;
      }
    }
    if ( v10 < 0 )
    {
      v11 = 60;
      goto LABEL_132;
    }
    if ( RtlEqualUnicodeString(&g_WildcardString, &String2, 0) != 1 )
    {
      v22 = RtlUnicodeStringToInteger(&String2, 0, &Value);
      v10 = v22;
      if ( v22 >= 0 )
      {
        if ( (int)Value >= 1 && (int)Value <= 255 )
        {
          v21 = 20LL * v3;
          *(_WORD *)(v21 + v44) = Value;
          goto LABEL_28;
        }
        LODWORD(v41) = Value;
        result = WPP_RECORDER_SF_d(
                   *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                   2u,
                   5u,
                   0x3Eu,
                   (__int64)&WPP_78b0949afb12367861659e8bf410c603_Traceguids,
                   v41);
        goto LABEL_112;
      }
      v11 = 61;
      goto LABEL_118;
    }
    v21 = 20LL * v3;
    *(_WORD *)(v21 + v44) = -1;
LABEL_28:
    *(_DWORD *)&String2.Length = 0;
    v10 = 0;
    String2.Buffer = 0LL;
    if ( v53 )
    {
      v23 = v53;
      v24 = 0x7FFFLL;
      do
      {
        if ( !*v23 )
          break;
        ++v23;
        --v24;
      }
      while ( v24 );
      v10 = v24 == 0 ? 0xC000000D : 0;
      v25 = v24 ? 0x7FFF - v24 : 0;
      if ( v24 )
      {
        String2.Buffer = v53;
        String2.Length = 2 * v25;
        String2.MaximumLength = 2 * v25 + 2;
      }
    }
    if ( v10 < 0 )
    {
      v11 = 63;
      goto LABEL_132;
    }
    if ( RtlEqualUnicodeString(&g_WildcardString, &String2, 0) != 1 )
    {
      v22 = RtlUnicodeStringToInteger(&String2, 0, &Value);
      v10 = v22;
      if ( v22 < 0 )
      {
        v11 = 64;
        goto LABEL_118;
      }
      v26 = Value;
      if ( (int)Value <= 255 )
      {
        *(_WORD *)(v21 + v44 + 2) = Value;
        goto LABEL_43;
      }
      v11 = 65;
      goto LABEL_116;
    }
    *(_WORD *)(v21 + v44 + 2) = -1;
LABEL_43:
    *(_DWORD *)&String2.Length = 0;
    v10 = 0;
    String2.Buffer = 0LL;
    if ( v54 )
    {
      v27 = v54;
      v28 = 0x7FFFLL;
      do
      {
        if ( !*v27 )
          break;
        ++v27;
        --v28;
      }
      while ( v28 );
      v10 = v28 == 0 ? 0xC000000D : 0;
      v29 = v28 ? 0x7FFF - v28 : 0;
      if ( v28 )
      {
        String2.Buffer = v54;
        String2.Length = 2 * v29;
        String2.MaximumLength = 2 * v29 + 2;
      }
    }
    if ( v10 < 0 )
    {
      v11 = 66;
      goto LABEL_132;
    }
    if ( RtlEqualUnicodeString(&g_WildcardString, &String2, 0) != 1 )
    {
      v22 = RtlUnicodeStringToInteger(&String2, 0, &Value);
      v10 = v22;
      if ( v22 < 0 )
      {
        v11 = 67;
        goto LABEL_118;
      }
      v26 = Value;
      if ( Value < 0x100 )
      {
        *(_WORD *)(v21 + v44 + 4) = Value;
        goto LABEL_58;
      }
      v11 = 68;
LABEL_116:
      LODWORD(v41) = v26;
      goto LABEL_6;
    }
    *(_WORD *)(v21 + v44 + 2) = -1;
LABEL_58:
    *(_DWORD *)&String2.Length = 0;
    v10 = 0;
    String2.Buffer = 0LL;
    if ( v55 )
    {
      v30 = v55;
      v31 = 0x7FFFLL;
      do
      {
        if ( !*v30 )
          break;
        ++v30;
        --v31;
      }
      while ( v31 );
      v10 = v31 == 0 ? 0xC000000D : 0;
      v32 = v31 ? 0x7FFF - v31 : 0;
      if ( v31 )
      {
        String2.Buffer = v55;
        String2.Length = 2 * v32;
        String2.MaximumLength = 2 * v32 + 2;
      }
    }
    if ( v10 < 0 )
    {
      v11 = 69;
      goto LABEL_132;
    }
    if ( RtlEqualUnicodeString(&g_BulkIn, &String2, 1u) != 1 )
    {
      if ( RtlEqualUnicodeString(&g_BulkOut, &String2, 1u) == 1 )
      {
        *(_DWORD *)(v21 + v44 + 8) = 1;
        goto LABEL_72;
      }
      if ( RtlEqualUnicodeString(&g_InterruptIn, &String2, 1u) == 1
        || RtlEqualUnicodeString(&g_InterruptOut, &String2, 1u) == 1
        || RtlEqualUnicodeString(&g_IsochronousIn, &String2, 1u) == 1
        || (v40 = RtlEqualUnicodeString(&g_IsochronousOut, &String2, 1u), v39 = 70, v40 == 1) )
      {
        v39 = 71;
      }
      goto LABEL_107;
    }
    *(_DWORD *)(v21 + v44 + 8) = 0;
LABEL_72:
    *(_DWORD *)&String2.Length = 0;
    v10 = 0;
    String2.Buffer = 0LL;
    if ( v56 )
    {
      v33 = v56;
      v34 = 0x7FFFLL;
      do
      {
        if ( !*v33 )
          break;
        ++v33;
        --v34;
      }
      while ( v34 );
      v10 = v34 == 0 ? 0xC000000D : 0;
      v35 = v34 ? 0x7FFF - v34 : 0;
      if ( v34 )
      {
        String2.Buffer = v56;
        String2.Length = 2 * v35;
        String2.MaximumLength = 2 * v35 + 2;
      }
    }
    if ( v10 < 0 )
    {
      v11 = 72;
LABEL_132:
      LODWORD(v41) = v10;
      goto LABEL_6;
    }
    v22 = RtlUnicodeStringToInteger(&String2, 0, &Value);
    v10 = v22;
    if ( v22 < 0 )
    {
      v11 = 73;
LABEL_118:
      LODWORD(v41) = v22;
      goto LABEL_6;
    }
    v26 = Value;
    if ( Value >= 0x10 )
    {
      v11 = 74;
      goto LABEL_116;
    }
    v10 = 0;
    *(_WORD *)(v21 + v44 + 12) = Value;
    *(_DWORD *)&String2.Length = 0;
    String2.Buffer = 0LL;
    if ( v57 )
    {
      v36 = v57;
      v37 = 0x7FFFLL;
      do
      {
        if ( !*v36 )
          break;
        ++v36;
        --v37;
      }
      while ( v37 );
      v10 = v37 == 0 ? 0xC000000D : 0;
      if ( v37 )
        v38 = 0x7FFF - v37;
      else
        v38 = 0;
      if ( v37 )
      {
        String2.Buffer = v57;
        String2.Length = 2 * v38;
        String2.MaximumLength = 2 * v38 + 2;
      }
    }
    if ( v10 < 0 )
    {
      v11 = 75;
      goto LABEL_132;
    }
    if ( RtlEqualUnicodeString(&g_Video, &String2, 1u) == 1 )
    {
      result = v44;
      *(_DWORD *)(v21 + v44 + 16) = 1;
      goto LABEL_100;
    }
    if ( RtlEqualUnicodeString(&g_Voice, &String2, 1u) == 1 )
    {
      result = v44;
      *(_DWORD *)(v21 + v44 + 16) = 2;
      goto LABEL_100;
    }
    if ( RtlEqualUnicodeString(&g_Interactive, &String2, 1u) != 1 )
    {
      v39 = 76;
LABEL_107:
      result = WPP_RECORDER_SF_S(
                 *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                 2u,
                 5u,
                 v39,
                 (__int64)&WPP_78b0949afb12367861659e8bf410c603_Traceguids,
                 String2.Buffer);
      goto LABEL_108;
    }
    result = v44;
    *(_DWORD *)(v21 + v44 + 16) = 3;
LABEL_100:
    ++v3;
LABEL_108:
    v12 = v45 + 1;
    v45 = v12;
    if ( v12 < v46 )
      continue;
    break;
  }
  if ( !v3 )
  {
LABEL_110:
    result = WPP_RECORDER_SF_(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
               2u,
               5u,
               0x4Du,
               (__int64)&WPP_78b0949afb12367861659e8bf410c603_Traceguids);
    v10 = -1073741811;
  }
LABEL_111:
  if ( v10 >= 0 )
  {
    result = v44;
    *(_QWORD *)(a1 + 2680) = v44;
    *(_DWORD *)(a1 + 2688) = v3;
  }
  else
  {
LABEL_112:
    if ( v47 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  }
  return result;
}
