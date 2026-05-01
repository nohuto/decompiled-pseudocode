/*
 * XREFs of ?GetPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x1800CC150
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopulateDefaultLayoutItems@PWSLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1800CC610 (-PopulateDefaultLayoutItems@PWSLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UIPenWor.c)
 *     ?PopulateOEMLayoutItems@PWSLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1800CC760 (-PopulateOEMLayoutItems@PWSLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UIPenWorkspa.c)
 *     ?ConvertItemsToObjectArray@PWSLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@@Z @ 0x1800CD034 (-ConvertItemsToObjectArray@PWSLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UIPenWork.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PWSLayoutPolicyManager::GetPenWorkspaceLayout(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v4; // ebx
  int v6; // eax
  unsigned int v7; // edi
  unsigned int v9; // ebx
  _QWORD *v10; // rdi
  unsigned __int64 v11; // r14
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  unsigned __int64 i; // rsi
  __int64 v17; // rcx
  _QWORD *v18; // [rsp+28h] [rbp-28h] BYREF
  unsigned __int64 v19; // [rsp+30h] [rbp-20h]
  __int64 v20; // [rsp+38h] [rbp-18h]
  __int64 v21; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v23; // [rsp+70h] [rbp+20h] BYREF

  v4 = a2;
  *a3 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)a1 + 24LL))(a1, a2, &v23);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x86,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  if ( v23 )
  {
    v10 = 0LL;
    v18 = 0LL;
    v11 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    if ( v4 )
    {
      if ( v4 != 1 )
      {
        v9 = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x94,
          (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
          (const char *)0x80070057LL);
        goto LABEL_16;
      }
      v12 = PWSLayoutPolicyManager::PopulateOEMLayoutItems(a1, &v18);
      v9 = v12;
      if ( v12 < 0 )
      {
        v14 = 144LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v14,
          (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
          (const char *)(unsigned int)v12);
LABEL_15:
        v10 = v18;
        v11 = v19;
LABEL_16:
        if ( v10 )
        {
          for ( i = 0LL; i < v11; ++i )
          {
            v17 = v10[i];
            if ( v17 )
            {
              v10[i] = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
            }
          }
          CoTaskMemFree(v10);
        }
        return v9;
      }
    }
    else
    {
      v12 = PWSLayoutPolicyManager::PopulateDefaultLayoutItems(a1, &v18);
      v9 = v12;
      if ( v12 < 0 )
      {
        v14 = 141LL;
        goto LABEL_12;
      }
    }
    v15 = PWSLayoutPolicyManager::ConvertItemsToObjectArray(v13, &v18, a3);
    v9 = v15;
    if ( v15 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x97,
        (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
        (const char *)(unsigned int)v15);
    goto LABEL_15;
  }
  v9 = -2147467259;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x87,
    (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
    (const char *)0x80004005LL);
  return v9;
}
