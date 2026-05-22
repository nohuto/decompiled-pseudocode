/*
 * XREFs of ?OnSpatialManipulationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationStartedEventArgs@3456@@Z @ 0x1800652C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z @ 0x180063910 (-GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z.c)
 *     ?GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUHitTestResult3D@@Ufloat3@Numerics@Foundation@Windows@@@Z @ 0x180065ADC (-GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUHitTestResult3D@@Ufl.c)
 *     ?UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z @ 0x180065C44 (-UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialManipulationStarted(
        MPCSpatialGestureRecognizerHandler *this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs *a3)
{
  _OWORD *v4; // rax
  __int64 v5; // rdx
  char *v6; // rcx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  int v21; // eax
  const char *v22; // r9
  __int64 v23; // rcx
  int v24; // xmm0_4
  int v25; // xmm1_4
  int v26; // eax
  _DWORD *v27; // rcx
  ISMTracing *v28; // rcx
  __int64 v30; // [rsp+20h] [rbp-E0h] BYREF
  int v31; // [rsp+28h] [rbp-D8h]
  char v32; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+C8h] [rbp-38h]
  int v34; // [rsp+D0h] [rbp-30h]
  __int64 v35; // [rsp+D4h] [rbp-2Ch]
  int v36; // [rsp+DCh] [rbp-24h]
  char v37; // [rsp+400h] [rbp+300h]
  int v38; // [rsp+404h] [rbp+304h]
  int v39; // [rsp+408h] [rbp+308h]
  _BYTE v40[4]; // [rsp+C20h] [rbp+B20h] BYREF
  float v41; // [rsp+C24h] [rbp+B24h]
  float v42; // [rsp+C28h] [rbp+B28h]
  wil::details::in1diag3 *retaddr; // [rsp+D78h] [rbp+C78h]

  MPCHolographicInputManager::GetInstance();
  v5 = 23LL;
  v6 = &v32;
  do
  {
    v7 = v4[1];
    *(_OWORD *)v6 = *v4;
    v8 = v4[2];
    *((_OWORD *)v6 + 1) = v7;
    v9 = v4[3];
    *((_OWORD *)v6 + 2) = v8;
    v10 = v4[4];
    *((_OWORD *)v6 + 3) = v9;
    v11 = v4[5];
    *((_OWORD *)v6 + 4) = v10;
    v12 = v4[6];
    *((_OWORD *)v6 + 5) = v11;
    v13 = v4[7];
    v4 += 8;
    *((_OWORD *)v6 + 6) = v12;
    v6 += 128;
    *((_OWORD *)v6 - 1) = v13;
    --v5;
  }
  while ( v5 );
  v14 = *v4;
  v30 = 0LL;
  v15 = v4[1];
  v31 = 0;
  *(_OWORD *)v6 = v14;
  v16 = v4[2];
  *((_OWORD *)v6 + 1) = v15;
  v17 = v4[3];
  *((_OWORD *)v6 + 2) = v16;
  v18 = v4[4];
  *((_OWORD *)v6 + 3) = v17;
  v19 = v4[5];
  *((_OWORD *)v6 + 4) = v18;
  v20 = v4[6];
  *((_OWORD *)v6 + 5) = v19;
  *((_OWORD *)v6 + 6) = v20;
  v21 = v34;
  *((_QWORD *)this + 17) = v33;
  *(_QWORD *)((char *)this + 148) = v35;
  *(_QWORD *)&v20 = v30;
  *((_DWORD *)this + 36) = v21;
  v30 = v20;
  *((_DWORD *)this + 39) = v36;
  MPCSpatialGestureRecognizerHandler::GetHitTestResultForPathingDelta(this, v40, &v30);
  if ( !v37 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x18E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      v22);
    JUMPOUT(0x1800654CCLL);
  }
  v23 = *((_QWORD *)this + 14);
  if ( v23 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  if ( (int)MPCSpatialGestureRecognizerHandler::UpdateCoordinateSystemForTick(this, *((_QWORD *)this + 20)) >= 0 )
  {
    v24 = v38;
    v25 = v39;
    *(_DWORD *)(*((_QWORD *)this + 13) + 1272LL) = 7;
    *(_DWORD *)(*((_QWORD *)this + 13) + 1288LL) = v24;
    *(_DWORD *)(*((_QWORD *)this + 13) + 1292LL) = v25;
    v26 = (int)v41;
    *((_BYTE *)this + 188) = 1;
    *((_DWORD *)this + 48) = v26;
    *((_DWORD *)this + 49) = (int)v42;
    v27 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v27 && *v27 )
    {
      ISMTracing::Instance();
      ISMTracing::GestureRecognizer_GestureDetected_(v28, L"PathStarted");
    }
  }
  else
  {
    *((_BYTE *)this + 200) = 1;
  }
  return 0LL;
}
