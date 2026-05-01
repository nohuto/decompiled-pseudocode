/*
 * XREFs of ?_GetImmersiveShell@CortanaSharedExperienceManager@@AEAAJPEAPEAUIServiceProvider@@@Z @ 0x18015E464
 * Callers:
 *     ?_ImmersiveShellQueryService@CortanaSharedExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18015E5F0 (-_ImmersiveShellQueryService@CortanaSharedExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::_GetImmersiveShell(
        CortanaSharedExperienceManager *this,
        struct IServiceProvider **a2)
{
  __int64 *ppv; // rbx
  HRESULT Instance; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  ppv = (__int64 *)((char *)this + 384);
  if ( *((_QWORD *)this + 48)
    || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 48),
        Instance = CoCreateInstance(
                     &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
                     0LL,
                     0x404u,
                     &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
                     (LPVOID *)ppv),
        v5 = Instance,
        Instance >= 0) )
  {
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(ppv);
    *a2 = (struct IServiceProvider *)*ppv;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)Instance);
    return v5;
  }
}
