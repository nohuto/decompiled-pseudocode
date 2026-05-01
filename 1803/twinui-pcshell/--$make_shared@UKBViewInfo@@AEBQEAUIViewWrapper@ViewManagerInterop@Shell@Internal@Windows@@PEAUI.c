/*
 * XREFs of ??$make_shared@UKBViewInfo@@AEBQEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationFrameWrapper@@PEAUIApplicationFrameTitleBar@@@std@@YA?AV?$shared_ptr@UKBViewInfo@@@0@AEBQEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIApplicationFrameWrapper@@$$QEAPEAUIApplicationFrameTitleBar@@@Z @ 0x1800A1024
 * Callers:
 *     _lambda_271dd6204b0ad146775bb9f0699c6aeb_::operator() @ 0x1800A16CC (_lambda_271dd6204b0ad146775bb9f0699c6aeb_--operator().c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180098DA4 (--2@YAPEAX_K@Z.c)
 *     ??0KBViewInfo@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationFrameWrapper@@PEAUIApplicationFrameTitleBar@@@Z @ 0x18023BAB0 (--0KBViewInfo@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplication.c)
 */

_QWORD *__fastcall std::make_shared<KBViewInfo,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper * const &,IApplicationFrameWrapper *,IApplicationFrameTitleBar *>(
        _QWORD *a1,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **a2,
        struct IApplicationFrameWrapper **a3,
        struct IApplicationFrameTitleBar **a4)
{
  _DWORD *v8; // rdi
  _QWORD *result; // rax

  v8 = operator new(0x48uLL);
  v8[2] = 1;
  v8[3] = 1;
  *(_QWORD *)v8 = &std::_Ref_count_obj<KBViewInfo>::`vftable';
  KBViewInfo::KBViewInfo((KBViewInfo *)(v8 + 4), *a2, *a3, *a4);
  result = a1;
  *a1 = v8 + 4;
  a1[1] = v8;
  return result;
}
