/*
 * XREFs of ?_ComputeDesiredApplicationRect@CFrameApplicationPresentation@@AEAAJPEAUtagRECT@@@Z @ 0x180014734
 * Callers:
 *     ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x180013FD0 (-ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPD.c)
 * Callees:
 *     ?GetChromeOffsets@CApplicationFrameWrapper@@UEAAJPEAUtagRECT@@@Z @ 0x180016E10 (-GetChromeOffsets@CApplicationFrameWrapper@@UEAAJPEAUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_ComputePillarBoxedApplicationRect@CFrameApplicationPresentation@@AEAA?AUtagRECT@@U2@@Z @ 0x180137D2C (-_ComputePillarBoxedApplicationRect@CFrameApplicationPresentation@@AEAA-AUtagRECT@@U2@@Z.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_ComputeDesiredApplicationRect(HWND *this, LPRECT lprc)
{
  int Error; // edi
  CApplicationFrameWrapper *v5; // rcx
  __int64 (__fastcall *v6)(CApplicationFrameWrapper *__hidden, struct tagRECT *); // rax
  struct tagRECT v8; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT v9; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT Rect; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v11; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  SetRectEmpty(lprc);
  if ( *((_DWORD *)this + 14) != 2 )
  {
    if ( GetClientRect(this[16], &Rect) )
    {
      Error = 0;
    }
    else
    {
      Error = ResultFromKnownLastError();
      if ( Error < 0 )
        return (unsigned int)Error;
    }
    if ( *((_BYTE *)this + 53) )
    {
      v8 = Rect;
      Rect = *CFrameApplicationPresentation::_ComputePillarBoxedApplicationRect(
                (CFrameApplicationPresentation *)this,
                &v9,
                &v8);
    }
    v5 = (CApplicationFrameWrapper *)this[15];
    v6 = *(__int64 (__fastcall **)(CApplicationFrameWrapper *__hidden, struct tagRECT *))(*(_QWORD *)v5 + 120LL);
    if ( v6 == CApplicationFrameWrapper::GetChromeOffsets )
      CApplicationFrameWrapper::GetChromeOffsets(v5, &v11);
    else
      v6(v5, &v11);
    Rect.left += v11.left;
    Rect.top += v11.top;
    Rect.right -= v11.right;
    Rect.bottom -= v11.bottom;
    *lprc = Rect;
    return (unsigned int)Error;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3F0,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
    (const char *)0x8007139FLL,
    v8.left);
  return 2147947423LL;
}
