/*
 * XREFs of ?GetPhysicalDisplaySizeOverride@@YAJPEAUtagSIZE@@@Z @ 0x1C01BBC60
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00AC900 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 */

__int64 __fastcall GetPhysicalDisplaySizeOverride(struct tagSIZE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  LONG v7; // [rsp+30h] [rbp-79h] BYREF
  LONG v8; // [rsp+34h] [rbp-75h] BYREF
  __int64 v9; // [rsp+40h] [rbp-69h] BYREF
  int v10; // [rsp+48h] [rbp-61h]
  const wchar_t *v11; // [rsp+50h] [rbp-59h]
  LONG *v12; // [rsp+58h] [rbp-51h]
  int v13; // [rsp+60h] [rbp-49h]
  __int64 v14; // [rsp+68h] [rbp-41h]
  int v15; // [rsp+70h] [rbp-39h]
  __int64 v16; // [rsp+78h] [rbp-31h]
  int v17; // [rsp+80h] [rbp-29h]
  const wchar_t *v18; // [rsp+88h] [rbp-21h]
  LONG *v19; // [rsp+90h] [rbp-19h]
  int v20; // [rsp+98h] [rbp-11h]
  __int64 v21; // [rsp+A0h] [rbp-9h]
  int v22; // [rsp+A8h] [rbp-1h]
  __int64 v23; // [rsp+B0h] [rbp+7h]
  int v24; // [rsp+B8h] [rbp+Fh]
  _BYTE v25[40]; // [rsp+C0h] [rbp+17h] BYREF

  if ( !a1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 1410LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v16 = 0LL;
  v21 = 0LL;
  v22 = 0;
  v23 = 0LL;
  v24 = 0;
  v11 = L"Width";
  v12 = &v7;
  v10 = 292;
  v17 = 292;
  v18 = L"Height";
  v13 = 67108868;
  v20 = 67108868;
  v19 = &v8;
  memset(v25, 0, sizeof(v25));
  if ( (int)RtlQueryRegistryValuesEx(1LL, L"PhysicalDisplaySizeOverride", &v9, 0LL, 0LL) < 0 )
    return 3221226021LL;
  a1->cx = v7;
  a1->cy = v8;
  return 0LL;
}
