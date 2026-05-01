/*
 * XREFs of ?ChangeLayoutEnvironment@TabletModePositionerOperation@@UEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1802D7DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180090000 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1800F7A6C (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18031117C (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_HandleNormalLayoutEnvChange@CAppLayoutOperation@@IEAAJPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180311564 (-_HandleNormalLayoutEnvChange@CAppLayoutOperation@@IEAAJPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x180311AD0 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall TabletModePositionerOperation::ChangeLayoutEnvironment(
        TabletModePositionerOperation *this,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a2)
{
  CAppLayoutOperation *v4; // rbp
  int v5; // eax
  unsigned int v6; // edi
  int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  unsigned int v10; // r15d
  int v12[2]; // [rsp+20h] [rbp-68h] BYREF
  int v13; // [rsp+28h] [rbp-60h]
  _DWORD v14[10]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  *(_QWORD *)v12 = ((unsigned __int64)this + 16) & -(__int64)(this != (TabletModePositionerOperation *)176);
  v4 = (TabletModePositionerOperation *)((char *)this - 152);
  v13 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(*(__int64 *)v12, 1);
  v5 = CAppLayoutOperation::_VerifyAndPrepareLayout(v4, 0LL, 0);
  v6 = 0;
  v7 = v5;
  if ( v5 < 0 )
  {
    v8 = (unsigned int)v5;
    v9 = 246LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
      (const char *)v8);
    v6 = v7;
    goto LABEL_12;
  }
  (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this - 15) + 24LL))(*((_QWORD *)this - 15), v14);
  v10 = 0;
  if ( *((_DWORD *)a2 + 2) - *(_DWORD *)a2 == v14[2] - v14[0]
    && *((_DWORD *)a2 + 3) - *((_DWORD *)a2 + 1) == v14[3] - v14[1]
    && *((_DWORD *)a2 + 4) == v14[4] )
  {
    (*(void (__fastcall **)(_QWORD *, const struct LAYOUT_ENVIRONMENT_DETAILS *))(**((_QWORD **)v4 + 5) + 216LL))(
      *((_QWORD **)v4 + 5),
      a2);
  }
  else
  {
    v10 = 2;
    v7 = CAppLayoutOperation::_HandleNormalLayoutEnvChange((TabletModePositionerOperation *)((char *)this - 152), a2);
    if ( v7 < 0 )
    {
LABEL_10:
      v8 = (unsigned int)v7;
      v9 = 251LL;
      goto LABEL_11;
    }
  }
  v7 = CAppLayoutOperation::_FinalizeLayout((char *)this - 152, v10);
  if ( v7 < 0 )
    goto LABEL_10;
  *((_DWORD *)this - 18) = 33;
LABEL_12:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)v12);
  return v6;
}
