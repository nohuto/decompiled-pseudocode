/*
 * XREFs of ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180033644
 * Callers:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x1800332A4 (-UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18000515C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?AdjustPointToBounds@ControllerProcessor@@CA?AUtagPOINT@@U2@PEAUtagRECT@@@Z @ 0x180035168 (-AdjustPointToBounds@ControllerProcessor@@CA-AUtagPOINT@@U2@PEAUtagRECT@@@Z.c)
 *     ?UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ @ 0x1800365B8 (-UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ.c)
 *     ?Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z @ 0x1800AC2A0 (-Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z.c)
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800ACB7C (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::TransitionToEnabled(
        ControllerProcessor *this,
        struct tagRECT *a2,
        struct tagPOINT *a3)
{
  POINT v5; // rdx
  HMONITOR v6; // rdx
  int v7; // ebx
  bool v8; // zf
  float v9; // xmm0_4
  __m128i v10; // xmm1
  LONG v11; // eax
  __m128i v12; // xmm0
  unsigned int v14; // eax
  LONG v15; // [rsp+20h] [rbp-20h] BYREF
  LONG v16; // [rsp+24h] [rbp-1Ch] BYREF
  struct tagRECT v17; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  if ( !a2 || a2->top >= a2->bottom || a2->left >= a2->right )
    return (unsigned int)-2147024809;
  if ( a3 )
  {
    v5 = *a3;
    *(struct tagPOINT *)((char *)this + 1956) = *a3;
    if ( !PtInRect(a2, v5) )
      *(struct tagPOINT *)((char *)this + 1956) = ControllerProcessor::AdjustPointToBounds(
                                                    *(struct tagPOINT *)((char *)this + 1956),
                                                    a2);
  }
  if ( !*((_BYTE *)this + 2872) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, LONG *, LONG *))(**((_QWORD **)this + 241) + 32LL))(
           *((_QWORD *)this + 241),
           &v15,
           &v16);
    if ( v7 < 0 )
      return (unsigned int)v7;
    v17.left = 0;
    v17.top = 0;
    v8 = *((_DWORD *)this + 512) == 5;
    v17.right = v15;
    v17.bottom = v16;
    if ( !v8 )
    {
      ManipulationInjector::EndManipulation((ControllerProcessor *)((char *)this + 2048), 0);
      *((_DWORD *)this + 696) = 0;
      *((_DWORD *)this + 695) = 0;
      *((_DWORD *)this + 512) = 5;
    }
    if ( *((_DWORD *)this + 534) )
    {
      v14 = wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x5A9,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        (const char *)v14);
      JUMPOUT(0x18003387ELL);
    }
    *((_DWORD *)this + 513) = 2;
    ManipulationInjector::Initialize((ControllerProcessor *)((char *)this + 2048), v6, &v17);
    *((_BYTE *)this + 2872) = 1;
    *((_QWORD *)this + 355) = ((unsigned __int64)this + 48) & -(__int64)(this != 0LL);
  }
  *((struct tagRECT *)this + 121) = *a2;
  v9 = (float)*((int *)this + 485);
  v10 = _mm_cvtsi32_si128(*((_DWORD *)this + 486));
  v17.left = (int)(float)((float)*((int *)this + 484) + 8.0);
  v11 = (int)(float)(v9 + 8.0);
  v12 = _mm_cvtsi32_si128(*((_DWORD *)this + 487));
  v17.top = v11;
  v17.right = (int)(float)(_mm_cvtepi32_ps(v10).m128_f32[0] - 8.0);
  v17.bottom = (int)(float)(_mm_cvtepi32_ps(v12).m128_f32[0] - 8.0);
  *(struct tagRECT *)((char *)this + 2004) = v17;
  if ( *((_BYTE *)this + 6880) )
  {
    v7 = 0;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD))(**((_QWORD **)this + 736) + 40LL))(
           *((_QWORD *)this + 736),
           (char *)this + 5896,
           0LL);
    *((_BYTE *)this + 6880) = v7 >= 0;
  }
  if ( v7 >= 0 )
  {
    ControllerProcessor::UpdateManipulationInjectionRect(this);
  }
  else
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
  }
  return (unsigned int)v7;
}
