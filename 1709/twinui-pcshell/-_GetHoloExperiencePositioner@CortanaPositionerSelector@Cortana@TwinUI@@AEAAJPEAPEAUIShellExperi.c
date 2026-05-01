/*
 * XREFs of ?_GetHoloExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@Z @ 0x1800CEA78
 * Callers:
 *     ?GetPositionerByType@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAPEAUIShellExperiencePositioner@5678@@Z @ 0x1800CE480 (-GetPositionerByType@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerT.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TwinUI::Cortana::CortanaPositionerSelector::_GetHoloExperiencePositioner(
        TwinUI::Cortana::CortanaPositionerSelector *this,
        struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **a2)
{
  _QWORD *v3; // rbx
  __int64 *ppv; // rax
  HRESULT Instance; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v3 = (_QWORD *)((char *)this + 8);
  if ( !*((_QWORD *)this + 1) )
  {
    v14 = 0LL;
    ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v14);
    Instance = CoCreateInstance(
                 &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
                 0LL,
                 0x404u,
                 &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
                 (LPVOID *)ppv);
    v6 = Instance;
    if ( Instance < 0 )
    {
      v7 = 158LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
        (const char *)(unsigned int)Instance);
      v10 = v14;
      if ( v14 )
      {
        v14 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      return v6;
    }
    v8 = v14;
    v9 = *v3;
    if ( *v3 )
    {
      *v3 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    Instance = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, _QWORD *))(*(_QWORD *)v8 + 24LL))(
                 v8,
                 &GUID_c6ff146a_7f1d_492e_8981_e95cda605ef7,
                 &GUID_c6ff146a_7f1d_492e_8981_e95cda605ef7,
                 v3);
    v6 = Instance;
    if ( Instance < 0 )
    {
      v7 = 159LL;
      goto LABEL_8;
    }
    v12 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  if ( *v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 8LL))(*v3);
  *a2 = (struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *)*v3;
  return 0LL;
}
