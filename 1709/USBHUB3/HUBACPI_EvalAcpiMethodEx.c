/*
 * XREFs of HUBACPI_EvalAcpiMethodEx @ 0x1C0073580
 * Callers:
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C0073CD8 (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     RtlStringCbCatNA @ 0x1C00348A4 (RtlStringCbCatNA.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00391C0 (memset.c)
 */

__int64 __fastcall HUBACPI_EvalAcpiMethodEx(__int64 a1, unsigned __int16 *a2, int a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 (__fastcall *v8)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, void **); // rax
  int v9; // eax
  unsigned int v10; // edi
  unsigned __int16 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rdx
  char *v15; // rcx
  size_t v16; // rdx
  char v17; // al
  char *v18; // rax
  size_t v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rbx
  _DWORD *v22; // rax
  __int64 v24; // [rsp+28h] [rbp-61h]
  void *v25; // [rsp+50h] [rbp-39h] BYREF
  __int64 v26; // [rsp+58h] [rbp-31h] BYREF
  __int64 v27; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v28[7]; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v29[2]; // [rsp+A0h] [rbp+17h] BYREF
  int pszSrc; // [rsp+100h] [rbp+77h] BYREF

  pszSrc = a3;
  v26 = 0LL;
  memset(v28, 0, sizeof(v28));
  v7 = *(_QWORD *)(a1 + 16);
  v25 = 0LL;
  v28[4] = v7;
  LODWORD(v28[0]) = 56;
  v8 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, void **))(WdfFunctions_01015 + 1536);
  v28[3] = 0x100000001LL;
  v9 = v8(WdfDriverGlobals, v28, (unsigned int)ExDefaultNonPagedPoolType, 1748191317LL, 276LL, &v27, &v25);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 17;
LABEL_3:
    LODWORD(v24) = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2512),
      2u,
      3u,
      v11,
      (__int64)&WPP_1f8d4bc1bafd3b07a71bc23db7e99769_Traceguids,
      v24);
    goto LABEL_23;
  }
  v12 = *a2;
  v13 = 256LL;
  if ( (unsigned __int64)(unsigned int)(v12 + 1) + 5 <= 0x100 )
  {
    memset(v25, 0, 0x114uLL);
    v14 = *((_QWORD *)a2 + 1);
    *(_DWORD *)v25 = 1181312321;
    *((_DWORD *)v25 + 65) = 276;
    v15 = (char *)v25 + 4;
    v16 = v14 - ((_QWORD)v25 + 4);
    do
    {
      if ( !(v13 + v12 - 256) )
        break;
      v17 = v15[v16];
      if ( !v17 )
        break;
      *v15++ = v17;
      --v13;
    }
    while ( v13 );
    v18 = v15 - 1;
    if ( v13 )
      v18 = v15;
    *v18 = 0;
    RtlStringCbCatNA((NTSTRSAFE_PSTR)v25 + 4, v16, ".", 1uLL);
    RtlStringCbCatNA((NTSTRSAFE_PSTR)v25 + 4, v19, (STRSAFE_PCNZCH)&pszSrc, 4uLL);
    v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
            WdfDriverGlobals,
            *(_QWORD *)(a1 + 16));
    v26 = 0LL;
    v21 = v20;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
           WdfDriverGlobals,
           0LL,
           v20,
           &v26);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 19;
      goto LABEL_3;
    }
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, __int64, _QWORD, __int64, _QWORD))(WdfFunctions_01015 + 1512))(
           WdfDriverGlobals,
           v21,
           v26,
           3325976LL,
           v27,
           0LL,
           a4,
           0LL);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 20;
      goto LABEL_3;
    }
    v29[1] = 0LL;
    v29[0] = 0x200000010LL;
    if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD *))(WdfFunctions_01015 + 2024))(
            WdfDriverGlobals,
            v26,
            v21,
            v29) )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2512), 2u, 3u, 0x15u, (__int64)&WPP_1f8d4bc1bafd3b07a71bc23db7e99769_Traceguids);
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v26);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 22;
      goto LABEL_3;
    }
    v22 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                      WdfDriverGlobals,
                      a4,
                      0LL);
    if ( *v22 != 1114596673 || !v22[2] )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2512), 2u, 3u, 0x17u, (__int64)&WPP_1f8d4bc1bafd3b07a71bc23db7e99769_Traceguids);
      v10 = -1072431089;
    }
  }
  else
  {
    v10 = -1073741811;
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2512), 2u, 3u, 0x12u, (__int64)&WPP_1f8d4bc1bafd3b07a71bc23db7e99769_Traceguids);
  }
LABEL_23:
  if ( v26 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v27 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return v10;
}
