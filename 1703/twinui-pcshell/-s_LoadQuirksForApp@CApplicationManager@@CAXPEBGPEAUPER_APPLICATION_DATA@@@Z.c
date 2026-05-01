/*
 * XREFs of ?s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x180015CCC
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBGKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180010B58 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBGKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??$Start@AEAPEBG@LoadQuirksForPackage@CAppManagerTelemetry@@SA?AV01@AEAPEBG@Z @ 0x1800195CC (--$Start@AEAPEBG@LoadQuirksForPackage@CAppManagerTelemetry@@SA-AV01@AEAPEBG@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800258B8 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

void __fastcall CApplicationManager::s_LoadQuirksForApp(const unsigned __int16 *a1, struct PER_APPLICATION_DATA *a2)
{
  bool *v4; // rsi
  int IsEnabledForPackage4; // eax
  unsigned int v6; // ebx
  LSTATUS ValueW; // eax
  signed int v8; // ecx
  int pvData; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pcbData[2]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v11[40]; // [rsp+50h] [rbp-B0h] BYREF
  int v12; // [rsp+190h] [rbp+90h] BYREF
  char *v13; // [rsp+198h] [rbp+98h]
  int v14; // [rsp+1A0h] [rbp+A0h]
  char *v15; // [rsp+1A8h] [rbp+A8h]
  int v16; // [rsp+1B0h] [rbp+B0h]
  char *v17; // [rsp+1B8h] [rbp+B8h]
  int v18; // [rsp+1C0h] [rbp+C0h]
  char *v19; // [rsp+1C8h] [rbp+C8h]
  int v20; // [rsp+1D0h] [rbp+D0h]
  char *v21; // [rsp+1D8h] [rbp+D8h]
  int v22; // [rsp+1E0h] [rbp+E0h]
  char *v23; // [rsp+1E8h] [rbp+E8h]
  int v24; // [rsp+1F0h] [rbp+F0h]
  char *v25; // [rsp+1F8h] [rbp+F8h]
  int v26; // [rsp+200h] [rbp+100h]
  char *v27; // [rsp+208h] [rbp+108h]
  int v28; // [rsp+210h] [rbp+110h]
  char *v29; // [rsp+218h] [rbp+118h]
  int v30; // [rsp+220h] [rbp+120h]
  char *v31; // [rsp+228h] [rbp+128h]
  int v32; // [rsp+230h] [rbp+130h]
  char *v33; // [rsp+238h] [rbp+138h]
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+168h]

  *(_QWORD *)pcbData = a1;
  CAppManagerTelemetry::LoadQuirksForPackage::Start<unsigned short const * &>((CAppManagerTelemetry::LoadQuirksForPackage *)v11);
  v12 = 589824;
  v15 = (char *)a2 + 18;
  v4 = (bool *)a2 + 19;
  v13 = (char *)a2 + 19;
  v17 = (char *)a2 + 20;
  v14 = 589825;
  v19 = (char *)a2 + 21;
  v16 = 589826;
  v21 = (char *)a2 + 22;
  v18 = 327684;
  v23 = (char *)a2 + 23;
  v20 = 589830;
  v25 = (char *)a2 + 24;
  v27 = (char *)a2 + 25;
  v29 = (char *)a2 + 26;
  v31 = (char *)a2 + 27;
  v33 = (char *)a2 + 28;
  v22 = 589829;
  v24 = 589827;
  v26 = 589828;
  v28 = 589832;
  v30 = 589840;
  v32 = 589841;
  IsEnabledForPackage4 = QuirkIsEnabledForPackage4(0LL, a1, 0LL, &v12);
  v6 = IsEnabledForPackage4;
  if ( IsEnabledForPackage4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1D46,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)IsEnabledForPackage4,
      11);
  if ( byte_180243978 )
  {
    pvData = 0;
    pcbData[0] = 4;
    ValueW = RegGetValueW(
               HKEY_CURRENT_USER,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\ApplicationView",
               L"DisableWin8AppCompatBehavior",
               0x10u,
               0LL,
               &pvData,
               pcbData);
    v8 = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      v8 = ValueW;
    if ( v8 < 0 )
      byte_180243978 = 0;
    else
      *v4 = pvData != 0;
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v11, v6);
  v11[0] = &CAppManagerTelemetry::LoadQuirksForPackage::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v11);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(v11);
}
