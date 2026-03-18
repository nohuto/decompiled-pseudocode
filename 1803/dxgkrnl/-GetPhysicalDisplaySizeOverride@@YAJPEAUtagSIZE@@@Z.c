/*
 * XREFs of ?GetPhysicalDisplaySizeOverride@@YAJPEAUtagSIZE@@@Z @ 0x1C01DCDAC
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00C5A7C (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall GetPhysicalDisplaySizeOverride(struct tagSIZE *a1)
{
  __int64 v2; // rax
  LONG v4; // [rsp+30h] [rbp-79h] BYREF
  LONG v5; // [rsp+34h] [rbp-75h] BYREF
  __int64 v6; // [rsp+40h] [rbp-69h] BYREF
  int v7; // [rsp+48h] [rbp-61h]
  const wchar_t *v8; // [rsp+50h] [rbp-59h]
  LONG *v9; // [rsp+58h] [rbp-51h]
  int v10; // [rsp+60h] [rbp-49h]
  __int64 v11; // [rsp+68h] [rbp-41h]
  int v12; // [rsp+70h] [rbp-39h]
  __int64 v13; // [rsp+78h] [rbp-31h]
  int v14; // [rsp+80h] [rbp-29h]
  const wchar_t *v15; // [rsp+88h] [rbp-21h]
  LONG *v16; // [rsp+90h] [rbp-19h]
  int v17; // [rsp+98h] [rbp-11h]
  __int64 v18; // [rsp+A0h] [rbp-9h]
  int v19; // [rsp+A8h] [rbp-1h]
  __int64 v20; // [rsp+B0h] [rbp+7h]
  int v21; // [rsp+B8h] [rbp+Fh]
  _BYTE v22[40]; // [rsp+C0h] [rbp+17h] BYREF

  if ( !a1 )
  {
    v2 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v2 + 24) = 1210LL;
    WdLogEvent5_WdAssertion(v2);
  }
  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  v11 = 0LL;
  v12 = 0;
  v13 = 0LL;
  v18 = 0LL;
  v19 = 0;
  v20 = 0LL;
  v21 = 0;
  v8 = L"Width";
  v9 = &v4;
  v7 = 292;
  v14 = 292;
  v15 = L"Height";
  v10 = 67108868;
  v17 = 67108868;
  v16 = &v5;
  memset(v22, 0, sizeof(v22));
  if ( (int)RtlQueryRegistryValuesEx(1LL, L"PhysicalDisplaySizeOverride", &v6, 0LL, 0LL) < 0 )
    return 3221226021LL;
  a1->cx = v4;
  a1->cy = v5;
  return 0LL;
}
