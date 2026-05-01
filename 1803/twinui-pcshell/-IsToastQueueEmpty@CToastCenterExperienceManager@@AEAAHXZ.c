/*
 * XREFs of ?IsToastQueueEmpty@CToastCenterExperienceManager@@AEAAHXZ @ 0x180163274
 * Callers:
 *     ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x180164868 (-OnShellReady@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnViewDestroyed@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180164DA0 (-OnViewDestroyed@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::IsToastQueueEmpty(CToastCenterExperienceManager *this)
{
  HRESULT v1; // eax
  wil::details::in1diag3 *v2; // rcx
  __int64 v3; // rdx
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+54h] [rbp+Ch]
  LPVOID ppv; // [rsp+58h] [rbp+10h] BYREF

  v8 = HIDWORD(this);
  ppv = 0LL;
  v7 = 1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v1 = CoCreateInstance(
         &GUID_31143611_ac65_4568_ae76_8a9dad50ea88,
         0LL,
         0x17u,
         &GUID_2537d644_8c2f_4449_b8b6_10928822630c,
         &ppv);
  v2 = retaddr;
  if ( v1 < 0 )
  {
    v3 = 783LL;
LABEL_5:
    wil::details::in1diag3::_Log_Hr(
      v2,
      v3,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v1);
    goto LABEL_6;
  }
  v1 = (*(__int64 (__fastcall **)(LPVOID, const wchar_t *, int *))(*(_QWORD *)ppv + 120LL))(ppv, L"ActionCenter", &v7);
  v2 = retaddr;
  if ( v1 < 0 )
  {
    v3 = 785LL;
    goto LABEL_5;
  }
LABEL_6:
  v4 = v7;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return v4;
}
