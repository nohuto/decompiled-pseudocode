/*
 * XREFs of _lambda_7ff06451c04686f908764c61c63c3ce9_::operator() @ 0x18009E358
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7ff06451c04686f908764c61c63c3ce9___::Run @ 0x18009E5F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7ff06451c04686f908764c61c63c3ce9___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800932D0 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Win.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_7ff06451c04686f908764c61c63c3ce9_::operator()(_BYTE *a1)
{
  __int64 *ppv; // rax
  HRESULT Instance; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = 0LL;
  ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant>>(&v8);
  Instance = CoCreateInstance(
               &GUID_31143611_ac65_4568_ae76_8a9dad50ea88,
               0LL,
               0x17u,
               &GUID_2537d644_8c2f_4449_b8b6_10928822630c,
               (LPVOID *)ppv);
  v4 = Instance;
  if ( Instance < 0 )
  {
    v5 = 797LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_6;
  }
  Instance = (*(__int64 (__fastcall **)(__int64, bool))(*(_QWORD *)v8 + 72LL))(v8, *a1 != 0);
  v4 = Instance;
  if ( Instance < 0 )
  {
    v5 = 800LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return v4;
}
