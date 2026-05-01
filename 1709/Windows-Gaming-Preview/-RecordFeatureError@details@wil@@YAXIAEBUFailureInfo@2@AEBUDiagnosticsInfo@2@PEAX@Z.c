/*
 * XREFs of ?RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x18000FD20
 * Callers:
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18000FF0C (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 * Callees:
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x18000203C (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 *     __security_check_cookie @ 0x180040F50 (__security_check_cookie.c)
 *     memset @ 0x18004207E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::RecordFeatureError(
        wil::details *this,
        __int64 a2,
        const struct wil::FailureInfo *a3,
        const struct DiagnosticsInfo *a4)
{
  bool (*v6)(void *, unsigned int *, char *, unsigned __int64); // r10
  char v7; // al
  char v8; // cl
  _BYTE *v9; // rax
  char v10; // al
  char v11; // cl
  const char *v12; // r9
  _BYTE *v13; // rax
  const char *ModuleName; // rax
  char v15; // cl
  _BYTE *v16; // rax
  void (*v17)(unsigned int, const struct FEATURE_ERROR *); // rax
  _QWORD v18[13]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v19[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v20[64]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v21[64]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v22[104]; // [rsp+158h] [rbp+58h] BYREF

  memset(v18, 0, sizeof(v18));
  v6 = wil::details::g_pfnGetModuleInformation;
  LODWORD(v18[0]) = *(_DWORD *)(a2 + 4);
  WORD2(v18[0]) = *(_WORD *)(a2 + 56);
  v18[1] = *(_QWORD *)(a2 + 48);
  v19[0] = 0;
  if ( wil::details::g_pfnGetModuleInformation )
  {
    v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _BYTE *, __int64))wil::details::g_pfnGetModuleInformation)(
           0LL,
           0LL,
           v19,
           64LL);
    v6 = wil::details::g_pfnGetModuleInformation;
    v8 = v7;
  }
  else
  {
    v8 = 0;
  }
  v20[0] = 0;
  v9 = v19;
  LODWORD(v18[4]) = 0;
  if ( !v8 )
    v9 = (_BYTE *)v18[2];
  v18[2] = v9;
  v18[3] = *(_QWORD *)(a2 + 120);
  if ( v6 )
  {
    v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD *, _BYTE *, __int64))v6)(*(_QWORD *)(a2 + 136), &v18[4], v20, 64LL);
    v6 = wil::details::g_pfnGetModuleInformation;
    v11 = v10;
  }
  else
  {
    v11 = 0;
  }
  v12 = *(const char **)(a2 + 16);
  v13 = v20;
  if ( !v11 )
    v13 = (_BYTE *)v18[5];
  v18[5] = v13;
  if ( v12 && *(_WORD *)v12 )
  {
    wil::details::StringCchPrintfA((wil::details *)v22, (char *)0x60, "%ws", v12);
    v6 = wil::details::g_pfnGetModuleInformation;
    v18[6] = v22;
  }
  LOWORD(v18[7]) = *((_WORD *)a3 + 12);
  v18[8] = *((_QWORD *)a3 + 1);
  if ( wil::details::g_pfnGetModuleName )
  {
    ModuleName = wil::details::g_pfnGetModuleName();
    v6 = wil::details::g_pfnGetModuleInformation;
    v18[9] = ModuleName;
  }
  v21[0] = 0;
  LODWORD(v18[10]) = 0;
  if ( v6 )
    v15 = ((__int64 (__fastcall *)(_QWORD, _QWORD *, _BYTE *, __int64))v6)(*(_QWORD *)a3, &v18[10], v21, 64LL);
  else
    v15 = 0;
  v16 = v21;
  if ( !v15 )
    v16 = (_BYTE *)v18[11];
  v18[11] = v16;
  v18[12] = *((_QWORD *)a3 + 2);
  v17 = g_wil_details_internalRecordFeatureError;
  if ( g_wil_details_internalRecordFeatureError || (v17 = g_wil_details_apiRecordFeatureError) != 0LL )
    ((void (__fastcall *)(__int64, _QWORD *))v17)(11973136LL, v18);
}
