/*
 * XREFs of ?s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x180016AA8
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBGKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18001114C (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBGKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?StartActivity@LoadQuirksForPackage@CAppManagerTelemetry@@QEAAXPEBG@Z @ 0x18001D604 (-StartActivity@LoadQuirksForPackage@CAppManagerTelemetry@@QEAAXPEBG@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026020 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268D0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

void __fastcall CApplicationManager::s_LoadQuirksForApp(const unsigned __int16 *a1, struct PER_APPLICATION_DATA *a2)
{
  bool *v4; // rsi
  int IsEnabledForPackage4; // eax
  unsigned int v6; // ebx
  LSTATUS ValueW; // eax
  signed int v8; // ecx
  int pvData; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pcbData[3]; // [rsp+44h] [rbp-BCh] BYREF
  _QWORD v11[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v12; // [rsp+70h] [rbp-90h]
  int *v13; // [rsp+78h] [rbp-88h]
  int *v14; // [rsp+80h] [rbp-80h]
  int v15; // [rsp+88h] [rbp-78h] BYREF
  char v16; // [rsp+8Ch] [rbp-74h]
  int v17; // [rsp+B0h] [rbp-50h] BYREF
  const char *v18; // [rsp+B8h] [rbp-48h]
  __int64 v19; // [rsp+C0h] [rbp-40h]
  char v20; // [rsp+C8h] [rbp-38h]
  __int64 v21; // [rsp+D0h] [rbp-30h]
  _BYTE v22[144]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v23; // [rsp+168h] [rbp+68h]
  __int64 v24; // [rsp+170h] [rbp+70h]
  __int64 v25; // [rsp+178h] [rbp+78h]
  __int64 v26; // [rsp+180h] [rbp+80h]
  int v27; // [rsp+190h] [rbp+90h] BYREF
  char *v28; // [rsp+198h] [rbp+98h]
  int v29; // [rsp+1A0h] [rbp+A0h]
  char *v30; // [rsp+1A8h] [rbp+A8h]
  int v31; // [rsp+1B0h] [rbp+B0h]
  char *v32; // [rsp+1B8h] [rbp+B8h]
  int v33; // [rsp+1C0h] [rbp+C0h]
  char *v34; // [rsp+1C8h] [rbp+C8h]
  int v35; // [rsp+1D0h] [rbp+D0h]
  char *v36; // [rsp+1D8h] [rbp+D8h]
  int v37; // [rsp+1E0h] [rbp+E0h]
  char *v38; // [rsp+1E8h] [rbp+E8h]
  int v39; // [rsp+1F0h] [rbp+F0h]
  char *v40; // [rsp+1F8h] [rbp+F8h]
  int v41; // [rsp+200h] [rbp+100h]
  char *v42; // [rsp+208h] [rbp+108h]
  int v43; // [rsp+210h] [rbp+110h]
  char *v44; // [rsp+218h] [rbp+118h]
  int v45; // [rsp+220h] [rbp+120h]
  char *v46; // [rsp+228h] [rbp+128h]
  int v47; // [rsp+230h] [rbp+130h]
  char *v48; // [rsp+238h] [rbp+138h]
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  v21 = 1LL;
  v11[1] = 0LL;
  v11[2] = v11;
  v11[3] = 0LL;
  v13 = &v17;
  v12 = 0;
  v14 = &v15;
  v15 = 0;
  v18 = "LoadQuirksForPackage";
  v16 = 0;
  v20 = 0;
  v17 = 0;
  v19 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  memset(v22, 0, sizeof(v22));
  v25 = 0LL;
  v11[0] = &CAppManagerTelemetry::LoadQuirksForPackage::`vftable';
  v26 = 0LL;
  CAppManagerTelemetry::LoadQuirksForPackage::StartActivity((CAppManagerTelemetry::LoadQuirksForPackage *)v11, a1);
  v27 = 589824;
  v30 = (char *)a2 + 27;
  v4 = (bool *)a2 + 28;
  v28 = (char *)a2 + 28;
  v32 = (char *)a2 + 29;
  v29 = 589825;
  v34 = (char *)a2 + 30;
  v31 = 589826;
  v36 = (char *)a2 + 31;
  v33 = 327684;
  v38 = (char *)a2 + 32;
  v35 = 589830;
  v40 = (char *)a2 + 33;
  v42 = (char *)a2 + 34;
  v44 = (char *)a2 + 35;
  v46 = (char *)a2 + 36;
  v48 = (char *)a2 + 37;
  v37 = 589829;
  v39 = 589827;
  v41 = 589828;
  v43 = 589832;
  v45 = 589840;
  v47 = 589841;
  IsEnabledForPackage4 = QuirkIsEnabledForPackage4(0LL, a1, 0LL, &v27);
  v6 = IsEnabledForPackage4;
  if ( IsEnabledForPackage4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1DAE,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)IsEnabledForPackage4,
      11);
  if ( byte_1802B8F78 )
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
      byte_1802B8F78 = 0;
    else
      *v4 = pvData != 0;
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v11, v6);
  v11[0] = &CAppManagerTelemetry::LoadQuirksForPackage::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v11);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(v11);
}
