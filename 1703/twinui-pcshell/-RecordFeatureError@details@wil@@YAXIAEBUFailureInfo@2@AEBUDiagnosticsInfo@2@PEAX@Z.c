/*
 * XREFs of ?RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x180082EF4
 * Callers:
 *     ?ReportFeatureCaughtException@details@wil@@YAXAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@PEAX@Z @ 0x1800830E0 (-ReportFeatureCaughtException@details@wil@@YAXAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@PE.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180097BC0 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 * Callees:
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x180003194 (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::RecordFeatureError(
        wil::details *this,
        __int64 a2,
        const struct wil::FailureInfo *a3,
        const struct DiagnosticsInfo *a4)
{
  unsigned int v6; // esi
  bool (*v7)(void *, unsigned int *, char *, unsigned __int64); // r10
  char v8; // al
  char v9; // cl
  _BYTE *v10; // rax
  char v11; // al
  char v12; // cl
  const char *v13; // r9
  _BYTE *v14; // rax
  const char *ModuleName; // rax
  char v16; // cl
  _BYTE *v17; // rax
  void (*v18)(unsigned int, const struct FEATURE_ERROR *); // rax
  _QWORD v19[13]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v20[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v21[64]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v22[64]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v23[104]; // [rsp+158h] [rbp+58h] BYREF

  v6 = (unsigned int)this;
  memset(v19, 0, sizeof(v19));
  v7 = wil::details::g_pfnGetModuleInformation;
  LODWORD(v19[0]) = *(_DWORD *)(a2 + 4);
  WORD2(v19[0]) = *(_WORD *)(a2 + 56);
  v19[1] = *(_QWORD *)(a2 + 48);
  v20[0] = 0;
  if ( wil::details::g_pfnGetModuleInformation )
  {
    v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _BYTE *, __int64))wil::details::g_pfnGetModuleInformation)(
           0LL,
           0LL,
           v20,
           64LL);
    v7 = wil::details::g_pfnGetModuleInformation;
    v9 = v8;
  }
  else
  {
    v9 = 0;
  }
  v21[0] = 0;
  v10 = v20;
  LODWORD(v19[4]) = 0;
  if ( !v9 )
    v10 = (_BYTE *)v19[2];
  v19[2] = v10;
  v19[3] = *(_QWORD *)(a2 + 120);
  if ( v7 )
  {
    v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD *, _BYTE *, __int64))v7)(*(_QWORD *)(a2 + 136), &v19[4], v21, 64LL);
    v7 = wil::details::g_pfnGetModuleInformation;
    v12 = v11;
  }
  else
  {
    v12 = 0;
  }
  v13 = *(const char **)(a2 + 16);
  v14 = v21;
  if ( !v12 )
    v14 = (_BYTE *)v19[5];
  v19[5] = v14;
  if ( v13 && *(_WORD *)v13 )
  {
    wil::details::StringCchPrintfA((wil::details *)v23, (char *)0x60, "%ws", v13);
    v7 = wil::details::g_pfnGetModuleInformation;
    v19[6] = v23;
  }
  LOWORD(v19[7]) = *((_WORD *)a3 + 12);
  v19[8] = *((_QWORD *)a3 + 1);
  if ( wil::details::g_pfnGetModuleName )
  {
    ModuleName = wil::details::g_pfnGetModuleName();
    v7 = wil::details::g_pfnGetModuleInformation;
    v19[9] = ModuleName;
  }
  v22[0] = 0;
  LODWORD(v19[10]) = 0;
  if ( v7 )
    v16 = ((__int64 (__fastcall *)(_QWORD, _QWORD *, _BYTE *, __int64))v7)(*(_QWORD *)a3, &v19[10], v22, 64LL);
  else
    v16 = 0;
  v17 = v22;
  if ( !v16 )
    v17 = (_BYTE *)v19[11];
  v19[11] = v17;
  v19[12] = *((_QWORD *)a3 + 2);
  v18 = g_wil_details_internalRecordFeatureError;
  if ( g_wil_details_internalRecordFeatureError || (v18 = g_wil_details_apiRecordFeatureError) != 0LL )
    ((void (__fastcall *)(_QWORD, _QWORD *))v18)(v6, v19);
}
