/*
 * XREFs of ?GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUHitTestResult3D@@Ufloat3@Numerics@Foundation@Windows@@@Z @ 0x18005CE60
 * Callers:
 *     ?OnSpatialManipulationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationStartedEventArgs@3456@@Z @ 0x18005C5C0 (-OnSpatialManipulationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogn.c)
 *     ?OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationUpdatedEventArgs@3456@@Z @ 0x18005C7E0 (-OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogn.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z @ 0x18004F9B0 (-TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void *__fastcall MPCSpatialGestureRecognizerHandler::GetHitTestResultForPathingDelta(__int64 a1, void *a2, float *a3)
{
  MPCHolographicInputManager *v6; // rax
  __int64 v7; // r8
  const char *v8; // r9
  __int64 v9; // rax
  const char *v10; // r9
  __int64 v11; // rbx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  int v15; // [rsp+30h] [rbp-50h] BYREF
  __int128 v16; // [rsp+34h] [rbp-4Ch] BYREF
  int v17; // [rsp+44h] [rbp-3Ch]
  int v18; // [rsp+48h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  memset_0(&v15, 0, 0x3CuLL);
  memset_0(a2, 0, 0x140uLL);
  v15 = *(_DWORD *)(a1 + 8);
  v16 = *(_OWORD *)(a1 + 136);
  v17 = *(_DWORD *)(a1 + 152);
  v18 = *(_DWORD *)(a1 + 156);
  MPCHolographicInputManager::GetInstance();
  MPCHolographicInputManager::TransformRayToHeadFromWorld(v6, (struct TargetingRay *)&v16, v7, v8);
  *(float *)&v16 = *(float *)&v16 + *a3;
  *((float *)&v16 + 1) = *((float *)&v16 + 1) + a3[1];
  *((float *)&v16 + 2) = *((float *)&v16 + 2) + a3[2];
  MPCHolographicInputManager::GetInstance();
  if ( !*(_BYTE *)(v9 + 2008) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x59,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\inc\\MPCHolographicInputManager.h",
      v10);
    goto LABEL_7;
  }
  v11 = *(_QWORD *)(v9 + 2024);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = (*(__int64 (__fastcall **)(__int64, int *, void *))(*(_QWORD *)v11 + 40LL))(v11, &v15, a2);
  v13 = retaddr;
  if ( v12 < 0 )
  {
LABEL_7:
    wil::details::in1diag3::FailFast_Hr(
      v13,
      (void *)0x27B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v12);
    JUMPOUT(0x18005CFC4LL);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return a2;
}
