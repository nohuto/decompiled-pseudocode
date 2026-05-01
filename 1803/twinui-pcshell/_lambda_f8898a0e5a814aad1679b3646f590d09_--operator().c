/*
 * XREFs of _lambda_f8898a0e5a814aad1679b3646f590d09_::operator() @ 0x1800A23E8
 * Callers:
 *     CSimpleHashTable_HWND_______ptr64_MultitaskingViewAnimationCoordinatorBase::ThumbnailData_CDefaultHashPolicy_HWND_______ptr64__CDefaultKeyCompare_HWND_______ptr64__CDefaultResizePolicy_CDefaultRehashPolicy_::s_EnumAdaptor__lambda_f8898a0e5a814aad1679b3646f590d09___ @ 0x1802977D8 (CSimpleHashTable_HWND_______ptr64_MultitaskingViewAnimationCoordinatorBase--ThumbnailData_CDefau.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802766CC (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18027674C (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_f8898a0e5a814aad1679b3646f590d09_::operator()(_QWORD **a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v6; // rcx
  int WindowThumbnailSourceSize; // eax
  __int64 v8; // rdx
  __int64 v10; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v11[2]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v12[16]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v13[2]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a3 + 8) + 200LL))(*(_QWORD *)(a3 + 8), **a1) )
  {
    v10 = a1[1][4];
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v10);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v12, &v10, &GUID_NULL, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    v6 = a1[1];
    v13[0] = 0LL;
    v13[1] = 0LL;
    v11[0] = 0;
    v11[1] = 0;
    WindowThumbnailSourceSize = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD *))(*v6 + 152LL))(
                                  v6,
                                  *(_QWORD *)a3,
                                  v13);
    if ( WindowThumbnailSourceSize >= 0 )
    {
      WindowThumbnailSourceSize = DwmpQueryWindowThumbnailSourceSize(*a2, 0LL, v11);
      if ( WindowThumbnailSourceSize >= 0 )
      {
        WindowThumbnailSourceSize = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *, _QWORD *, _DWORD, _QWORD))(**(_QWORD **)(a3 + 8) + 112LL))(
                                      *(_QWORD *)(a3 + 8),
                                      **a1,
                                      v11,
                                      v13,
                                      *((_DWORD *)a1[1] + 37),
                                      0LL);
        if ( WindowThumbnailSourceSize >= 0 )
        {
LABEL_9:
          DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v12);
          return 0LL;
        }
        v8 = 289LL;
      }
      else
      {
        v8 = 287LL;
      }
    }
    else
    {
      v8 = 286LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      v8,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
      (const char *)(unsigned int)WindowThumbnailSourceSize);
    goto LABEL_9;
  }
  return 1LL;
}
