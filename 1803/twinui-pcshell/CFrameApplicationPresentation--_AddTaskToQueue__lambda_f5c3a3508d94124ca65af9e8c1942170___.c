/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_f5c3a3508d94124ca65af9e8c1942170___ @ 0x1801363C0
 * Callers:
 *     ?UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ @ 0x180137C00 (-UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180016678 (-InternalRelease@-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_903271a3a8fd35b15ad2f56780cfef6a___ @ 0x180135CF4 (Windows--Internal--ComTaskPool--QueueTask__lambda_903271a3a8fd35b15ad2f56780cfef6a___.c)
 *     _lambda_903271a3a8fd35b15ad2f56780cfef6a_::_lambda_903271a3a8fd35b15ad2f56780cfef6a_ @ 0x1801364E8 (_lambda_903271a3a8fd35b15ad2f56780cfef6a_--_lambda_903271a3a8fd35b15ad2f56780cfef6a_.c)
 *     ??1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x1801365DC (--1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_f5c3a3508d94124ca65af9e8c1942170___(
        unsigned int *a1,
        __int64 *a2)
{
  int v4; // esi
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9[4]; // [rsp+20h] [rbp-198h] BYREF
  __int64 v10[2]; // [rsp+40h] [rbp-178h] BYREF
  __int64 v11; // [rsp+50h] [rbp-168h] BYREF
  _BYTE v12[320]; // [rsp+60h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  v9[1] = -2LL;
  v9[2] = (__int64)a2;
  if ( a1[14] == 2 )
  {
    v4 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E4,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    v9[0] = (__int64)a1;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v9);
    v5 = (_QWORD *)lambda_903271a3a8fd35b15ad2f56780cfef6a_::_lambda_903271a3a8fd35b15ad2f56780cfef6a_(v10, v9, a1, a2);
    v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_903271a3a8fd35b15ad2f56780cfef6a___(v7, v6, a1[12], v5);
    CFramePresentationTelemetry::UnpresentWindow::~UnpresentWindow((CFramePresentationTelemetry::UnpresentWindow *)v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::InternalRelease(v10);
    if ( v4 >= 0 )
      ++a1[51];
    Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::InternalRelease(v9);
  }
  CFramePresentationTelemetry::UnpresentWindow::~UnpresentWindow((CFramePresentationTelemetry::UnpresentWindow *)(a2 + 2));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (unsigned int)v4;
}
