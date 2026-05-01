/*
 * XREFs of ?EvictApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1802D5090
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180090000 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1800F7A6C (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801AD200 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?QueryEvictApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1802D55D8 (-QueryEvictApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18031117C (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x180311AD0 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall AppSwitchOperation::EvictApp(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  CAppLayoutOperation *v7; // r12
  int EvictApp; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v15; // [rsp+30h] [rbp-10h] BYREF
  int v16; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  CWinRTApplicationView *v18; // [rsp+80h] [rbp+40h] BYREF
  __int64 v19; // [rsp+98h] [rbp+58h] BYREF

  v3 = a1 - 176;
  v15 = (a1 + 16) & -(__int64)(a1 != 176);
  v7 = (CAppLayoutOperation *)(a1 - 152);
  v16 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v15, 1);
  EvictApp = CAppLayoutOperation::_VerifyAndPrepareLayout(v7, 0LL, 0);
  v9 = EvictApp;
  if ( EvictApp >= 0 )
  {
    EvictApp = AppSwitchOperation::QueryEvictApp(v3, a2, a3);
    v9 = EvictApp;
    if ( EvictApp >= 0 )
    {
      *(_DWORD *)(a1 - 72) = 1;
      v11 = 1;
      if ( (a3 & 1) != 0 )
      {
        v11 = 524353;
        *(_DWORD *)(a1 - 72) = 524353;
      }
      if ( (a3 & 4) != 0 )
      {
        v11 |= 0x20u;
        *(_DWORD *)(a1 - 72) = v11;
      }
      if ( (a3 & 8) == 0 )
        *(_DWORD *)(a1 - 72) = v11 | 0x10000;
      if ( (a3 & 2) == 0
        && (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 - 112) + 80LL))(
             *(_QWORD *)(a1 - 112),
             1LL)
        && (!(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 - 112) + 80LL))(
               *(_QWORD *)(a1 - 112),
               4LL)
         || (a3 & 4) != 0) )
      {
        v19 = 0LL;
        v12 = *(_QWORD *)(a1 - 112);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
        if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v12 + 104LL))(
               v12,
               0LL,
               1LL,
               &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
               &v19) >= 0 )
        {
          v18 = 0LL;
          v13 = v19;
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v18);
          if ( (*(int (__fastcall **)(__int64, GUID *, CWinRTApplicationView **))(*(_QWORD *)v13 + 48LL))(
                 v13,
                 &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
                 &v18) >= 0 )
          {
            Microsoft::WRL::ComPtr<IApplicationView>::operator=((CWinRTApplicationView **)(a1 - 88), &v18);
            *(_DWORD *)(a1 - 72) |= 2u;
          }
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v18);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      }
      EvictApp = CAppLayoutOperation::_FinalizeLayout(a1 - 152, 0LL);
      v9 = EvictApp;
      if ( EvictApp >= 0 )
      {
        v9 = 0;
        goto LABEL_24;
      }
      v10 = 189LL;
    }
    else
    {
      v10 = 143LL;
    }
  }
  else
  {
    v10 = 140LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
    (const char *)(unsigned int)EvictApp);
LABEL_24:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v15);
  return v9;
}
