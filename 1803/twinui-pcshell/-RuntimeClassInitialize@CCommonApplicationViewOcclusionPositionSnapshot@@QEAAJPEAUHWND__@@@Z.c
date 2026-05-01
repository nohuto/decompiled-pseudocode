/*
 * XREFs of ?RuntimeClassInitialize@CCommonApplicationViewOcclusionPositionSnapshot@@QEAAJPEAUHWND__@@@Z @ 0x1802C0090
 * Callers:
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPositionSnapshot@@UIOcclusionBasedApplicationViewPosition@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAPEAUHWND__@@@Z @ 0x1802BE468 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPositionSnapshot@@UIOcclusionBasedApplicati.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?s_GetStateFromShowCommand@CCommonApplicationViewOcclusionPositionImpl@@KA?AW4ARRANGEMENT_BASED_VIEW_STATE@@I@Z @ 0x1802C1B40 (-s_GetStateFromShowCommand@CCommonApplicationViewOcclusionPositionImpl@@KA-AW4ARRANGEMENT_BASED_.c)
 */

__int64 __fastcall CCommonApplicationViewOcclusionPositionSnapshot::RuntimeClassInitialize(
        CCommonApplicationViewOcclusionPositionSnapshot *this,
        HWND a2)
{
  const char *v4; // r9
  __int64 v5; // rdx
  __int64 result; // rax
  RECT rcNormalPosition; // xmm2
  __int64 v8; // rdx
  __int64 v9; // r8
  HRESULT WindowAttribute; // eax
  unsigned int v11; // edi
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // [rsp+30h] [rbp-9h]
  __int128 pvAttribute; // [rsp+48h] [rbp+Fh] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+58h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  if ( !GetWindowPlacement(a2, &wndpl) )
  {
    v5 = 81LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v5,
             (__int64)"internal\\onecoreuapshell\\private\\inc\\applicationviewpositionhwndhelpers.h",
             v4);
  }
  rcNormalPosition = wndpl.rcNormalPosition;
  v14 = *(_OWORD *)&wndpl.ptMaxPosition.x;
  *(_OWORD *)((char *)this + 60) = *(_OWORD *)&wndpl.flags;
  *(_OWORD *)((char *)this + 76) = v14;
  *(_QWORD *)((char *)this + 92) = *(_OWORD *)&_mm_unpackhi_pd((__m128d)rcNormalPosition, (__m128d)rcNormalPosition);
  if ( (unsigned int)IsWindowArranged(a2) )
  {
    *((_DWORD *)this + 12) = 4;
    pvAttribute = 0LL;
    WindowAttribute = DwmGetWindowAttribute(a2, 9u, &pvAttribute, 0x10u);
    v11 = WindowAttribute;
    if ( WindowAttribute < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5B,
        (__int64)"internal\\onecoreuapshell\\private\\inc\\applicationviewpositionhwndhelpers.h",
        (const char *)(unsigned int)WindowAttribute);
      return v11;
    }
    v12 = pvAttribute;
    *((_DWORD *)this + 13) = 3;
    *((_OWORD *)this + 1) = v12;
  }
  else
  {
    *((_DWORD *)this + 12) = CCommonApplicationViewOcclusionPositionImpl::s_GetStateFromShowCommand(
                               *((unsigned int *)this + 16),
                               v8,
                               v9);
    if ( !GetWindowRect(a2, (LPRECT)this + 1) )
    {
      v5 = 99LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v5,
               (__int64)"internal\\onecoreuapshell\\private\\inc\\applicationviewpositionhwndhelpers.h",
               v4);
    }
  }
  v13 = *(_OWORD *)((char *)this + 84);
  *((_DWORD *)this + 14) = (*((_DWORD *)this + 15) >> 1) & 1;
  result = 0LL;
  *((_OWORD *)this + 2) = v13;
  return result;
}
