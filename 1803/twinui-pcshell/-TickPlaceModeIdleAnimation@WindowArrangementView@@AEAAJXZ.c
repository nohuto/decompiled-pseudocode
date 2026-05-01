/*
 * XREFs of ?TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ @ 0x1802DDB40
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a08449ab0a2814bb2af7204eecc9930___::Run @ 0x1802DC8E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1a08449ab0a2814bb2af7204eecc9930___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_af32df4a401f889ca6e3593a0d1a6fcf___::Run @ 0x1802DC900 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_af32df4a401f889ca6e3593a0d1a6fcf___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18007DE0C (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802766CC (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18027674C (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     CDCompBatchAnimationCallback_CreateInstance__lambda_d996df4ae651642ba189a9f5cbef4ddb___ @ 0x1802D97B0 (CDCompBatchAnimationCallback_CreateInstance__lambda_d996df4ae651642ba189a9f5cbef4ddb___.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802DA4B0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCom_ea_1802DA4B0.c)
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802DAB80 (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802DBD08 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802DBD08.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x1802DBD14 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z @ 0x1802DC920 (-SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z.c)
 */

__int64 __fastcall WindowArrangementView::TickPlaceModeIdleAnimation(WindowArrangementView *this)
{
  int v2; // eax
  int v3; // ecx
  bool v4; // cf
  __int64 v5; // rbx
  volatile int *v6; // rdx
  unsigned int v7; // esi
  int v8; // eax
  unsigned int v9; // ebx
  LANGID ThreadUILanguage; // ax
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // ebx
  HRESULT v14; // eax
  void *v15; // rbx
  int v16; // ecx
  void *v18; // [rsp+30h] [rbp-28h] BYREF
  WindowArrangementView *v19; // [rsp+38h] [rbp-20h] BYREF
  __int64 v20[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+30h]
  __int64 v22; // [rsp+90h] [rbp+38h] BYREF
  void *ppvOut; // [rsp+98h] [rbp+40h] BYREF
  WindowArrangementView *v24; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+50h] BYREF

  if ( *((_DWORD *)this + 72) && *((_DWORD *)this + 75) < 3u )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 80LL))(*((_QWORD *)this + 15), 1LL);
    v3 = *((_DWORD *)this + 72);
    if ( v3 == 1 )
    {
      v4 = *((_BYTE *)this + 305) != 0;
      *((_DWORD *)this + 72) = 2;
      *((_DWORD *)this + 73) = v4 ? v2 - 1 : 0;
    }
    else
    {
      if ( v3 != 2 )
        goto LABEL_10;
      if ( *((_BYTE *)this + 296) )
      {
        *((_BYTE *)this + 296) = 0;
        goto LABEL_10;
      }
      *((_DWORD *)this + 73) += *((_BYTE *)this + 305) != 0 ? -1 : 1;
    }
    *((_BYTE *)this + 296) = 1;
LABEL_10:
    v25 = 0LL;
    v5 = *((_QWORD *)this + 15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v5 + 104LL))(
           v5,
           *((unsigned int *)this + 73),
           1LL,
           &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
           &v25) < 0 )
    {
      ++*((_DWORD *)this + 75);
      LOBYTE(v6) = 1;
      WindowArrangementView::SetPlaceModeIdleAnimationEnabled((CWinRTApplicationView **)this, v6);
    }
    else
    {
      v7 = 0;
      if ( *((_BYTE *)this + 296) )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 80LL))(*((_QWORD *)this + 15), 2LL);
        v9 = (unsigned int)(v8 - 1) >> 1;
        if ( (v8 & 1) == 0 )
        {
          ThreadUILanguage = GetThreadUILanguage();
          if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
            ++v9;
        }
        v11 = *((_DWORD *)this + 73);
        if ( v11 == v9 )
        {
          v7 = 1;
        }
        else if ( v11 == v9 + 1 )
        {
          v7 = 2;
        }
      }
      v22 = 0LL;
      v19 = this;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef(
        (__int64)this,
        v6);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      v24 = this;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::AddRef((__int64)this);
      v12 = CDCompBatchAnimationCallback_CreateInstance__lambda_d996df4ae651642ba189a9f5cbef4ddb_((__int64)&v24, &v22);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2BB,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v12);
LABEL_23:
        Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v19);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
LABEL_31:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
        return v13;
      }
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      v14 = IUnknown_QueryService(
              *((IUnknown **)this + 2),
              &stru_1803B45B0,
              &GUID_10d320fe_985c_476a_a6b7_81f8e2d1881e,
              &ppvOut);
      v13 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2BE,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v14);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
        goto LABEL_23;
      }
      v24 = (WindowArrangementView *)ppvOut;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v24);
      DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v20, (__int64 *)&v24, (__int64)&GUID_NULL, v22);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
      v15 = ppvOut;
      v18 = ppvOut;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v18);
      if ( v15 )
        (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v15 + 144LL))(v15, 1LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 10) + 168LL))(
        *((_QWORD *)this + 10),
        v7,
        1LL,
        v22);
      v24 = 0LL;
      v4 = *((_DWORD *)this + 73) != 0;
      LODWORD(v24) = 3;
      v16 = v4 + 2;
      v4 = *((_BYTE *)this + 296) != 0;
      HIDWORD(v24) = v16;
      WindowArrangementView::EnablePlaceModeDropFeedback(
        (__int64)this,
        0,
        (_DWORD *)((unsigned __int64)&v24 & -(__int64)v4),
        v22);
      if ( v15 )
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v15 + 144LL))(v15, 0LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v20);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v19);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    }
    v13 = 0;
    goto LABEL_31;
  }
  return 2147947423LL;
}
