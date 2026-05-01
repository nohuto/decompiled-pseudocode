/*
 * XREFs of ?GetSizeConstraintOverrides@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUtagSIZE@@111@Z @ 0x180009AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800192E4 (--$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImme.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::GetSizeConstraintOverrides(
        CApplicationManager *this,
        struct tagSIZE *a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4,
        struct tagSIZE *a5,
        struct tagSIZE *a6)
{
  struct tagSIZE *v10; // rbp
  struct tagSIZE *v11; // r12
  RTL_SRWLOCK *v12; // rbx
  struct tagSIZE *v13; // rcx
  int First; // edi
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // eax
  struct tagSIZE *v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a3 = 0LL;
  *a4 = 0LL;
  v10 = a5;
  *a5 = 0LL;
  v11 = a6;
  *a6 = 0LL;
  v12 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v13 = 0LL;
  a5 = 0LL;
  a6 = a2;
  if ( a2 )
  {
    (*(void (__fastcall **)(struct tagSIZE *))(*(_QWORD *)a2 + 8LL))(a2);
    v13 = a5;
  }
  if ( v13 )
  {
    a5 = 0LL;
    (*(void (__fastcall **)(struct tagSIZE *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>(
            (char *)this - 216,
            &a6,
            &a5,
            0LL);
  if ( a2 )
    (*(void (__fastcall **)(struct tagSIZE *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( First < 0 )
  {
    v15 = (unsigned int)First;
    v16 = 1978LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)v15);
    goto LABEL_16;
  }
  v17 = (*(__int64 (__fastcall **)(struct tagSIZE *, struct tagSIZE *, struct tagSIZE *))(*(_QWORD *)a5 + 576LL))(
          a5,
          a3,
          v10);
  First = v17;
  if ( v17 < 0 )
  {
    v16 = 1979LL;
LABEL_13:
    v15 = (unsigned int)v17;
    goto LABEL_14;
  }
  v17 = (*(__int64 (__fastcall **)(struct tagSIZE *, struct tagSIZE *, struct tagSIZE *))(*(_QWORD *)a5 + 584LL))(
          a5,
          a4,
          v11);
  First = v17;
  if ( v17 < 0 )
  {
    v16 = 1980LL;
    goto LABEL_13;
  }
  First = 0;
LABEL_16:
  v18 = a5;
  if ( a5 )
  {
    a5 = 0LL;
    (*(void (__fastcall **)(struct tagSIZE *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  if ( v12 )
    ReleaseSRWLockShared(v12);
  return (unsigned int)First;
}
