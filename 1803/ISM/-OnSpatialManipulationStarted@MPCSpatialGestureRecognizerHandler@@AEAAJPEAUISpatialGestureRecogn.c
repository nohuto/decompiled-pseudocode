/*
 * XREFs of ?OnSpatialManipulationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationStartedEventArgs@3456@@Z @ 0x18005C5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUHitTestResult3D@@Ufloat3@Numerics@Foundation@Windows@@@Z @ 0x18005CE60 (-GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUHitTestResult3D@@Ufl.c)
 *     ?UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z @ 0x18005CFC8 (-UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z.c)
 *     ?GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z @ 0x18005D770 (-GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
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
  __int64 v15; // rax
  __int64 v16; // rdi
  int v17; // r14d
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rdi
  __int64 v20; // rcx
  int v21; // eax
  _DWORD *v22; // rcx
  ISMTracing *v23; // rcx
  unsigned __int64 v25; // [rsp+20h] [rbp-E0h] BYREF
  int v26; // [rsp+28h] [rbp-D8h]
  char v27; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+C8h] [rbp-38h]
  int v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D4h] [rbp-2Ch]
  int v31; // [rsp+DCh] [rbp-24h]
  char v32; // [rsp+350h] [rbp+250h]
  float v33; // [rsp+354h] [rbp+254h]
  float v34; // [rsp+358h] [rbp+258h]
  _BYTE v35[4]; // [rsp+7D0h] [rbp+6D0h] BYREF
  float v36; // [rsp+7D4h] [rbp+6D4h]
  float v37; // [rsp+7D8h] [rbp+6D8h]

  MPCHolographicInputManager::GetInstance();
  v5 = 15LL;
  v6 = &v27;
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
  v15 = *((_QWORD *)v4 + 2);
  v25 = 0LL;
  *(_OWORD *)v6 = v14;
  *((_QWORD *)v6 + 2) = v15;
  LODWORD(v15) = v29;
  *((_QWORD *)this + 17) = v28;
  *(_QWORD *)((char *)this + 148) = v30;
  *(_QWORD *)&v14 = v25;
  *((_DWORD *)this + 36) = v15;
  v26 = 0;
  v25 = v14;
  *((_DWORD *)this + 39) = v31;
  MPCSpatialGestureRecognizerHandler::GetHitTestResultForPathingDelta(this, v35, &v25);
  v16 = *((_QWORD *)this + 26);
  if ( (*(_DWORD *)(v16 + 88) & 0xFFFFFF7F) != 0 )
  {
    v25 = *(_QWORD *)(v16 + 144);
    v17 = v25;
    v18 = HIDWORD(v25);
    v19 = HIDWORD(v25);
  }
  else
  {
    if ( !v32 )
    {
LABEL_13:
      *((_BYTE *)this + 200) = 1;
      return 0LL;
    }
    v17 = (int)v33;
    LODWORD(v18) = (int)v34;
    LODWORD(v19) = (int)v34;
  }
  v20 = *((_QWORD *)this + 14);
  if ( v20 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    LODWORD(v18) = v19;
  }
  if ( (int)MPCSpatialGestureRecognizerHandler::UpdateCoordinateSystemForTick(this, *((_QWORD *)this + 20)) < 0 )
    goto LABEL_13;
  *(_DWORD *)(*((_QWORD *)this + 13) + 1096LL) = 7;
  *(float *)(*((_QWORD *)this + 13) + 1112LL) = (float)v17;
  *(float *)(*((_QWORD *)this + 13) + 1116LL) = (float)(int)v18;
  v21 = (int)v36;
  *((_BYTE *)this + 188) = 1;
  *((_DWORD *)this + 48) = v21;
  *((_DWORD *)this + 49) = (int)v37;
  v22 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v22 && *v22 )
  {
    ISMTracing::Instance();
    ISMTracing::GestureRecognizer_GestureDetected_(v23, L"PathStarted");
  }
  return 0LL;
}
