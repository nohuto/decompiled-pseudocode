/*
 * XREFs of ?GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x180086AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180085AB4 (--1-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@.c)
 *     ?PopulateDefaultLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180087A90 (-PopulateDefaultLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITa.c)
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180087BE8 (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 *     ?PopulateOEMLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180087EB4 (-PopulateOEMLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITaskba.c)
 *     ?ConvertItemsToObjectArray@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@@Z @ 0x180088BAC (-ConvertItemsToObjectArray@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITas.c)
 *     ?Destroy@?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180088F80 (-Destroy@-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800896A0 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QE.c)
 *     ??$Start@$$V@GetTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@SA?AV01@XZ @ 0x180089EEC (--$Start@$$V@GetTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@SA-AV01@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskbarLayoutPolicyManager::GetTaskbarLayout(
        TaskbarLayoutPolicyManager *a1,
        unsigned int a2,
        _QWORD *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  _QWORD *v8; // rdi
  unsigned int v9; // esi
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 i; // rsi
  __int64 v14; // rcx
  __int64 v16; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD *v17; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-C0h]
  __int64 v19; // [rsp+50h] [rbp-B8h]
  __int64 v20; // [rsp+58h] [rbp-B0h]
  _QWORD v21[2]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v22[40]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v21[1] = -2LL;
  TaskbarFlexibleLayoutTelemetry::GetTaskbarLayout::Start<>((TaskbarFlexibleLayoutTelemetry::GetTaskbarLayout *)v22);
  *a3 = 0LL;
  v6 = (*(__int64 (__fastcall **)(TaskbarLayoutPolicyManager *, _QWORD, __int64 *, _QWORD *))(*(_QWORD *)a1 + 24LL))(
         a1,
         a2,
         &v16,
         v21);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xBF,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_26;
  }
  if ( !(_DWORD)v16 )
  {
    v7 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC0,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)0x80004005LL);
    goto LABEL_26;
  }
  v8 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  if ( a2 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        v7 = -2147024809;
        goto LABEL_20;
      }
      v10 = TaskbarLayoutPolicyManager::PopulateEnterpriseLayoutItems(a1);
      v7 = v10;
      if ( v10 < 0 )
      {
        v12 = 204LL;
        goto LABEL_15;
      }
    }
    else
    {
      v10 = TaskbarLayoutPolicyManager::PopulateOEMLayoutItems(a1, &v17);
      v7 = v10;
      if ( v10 < 0 )
      {
        v12 = 201LL;
        goto LABEL_15;
      }
    }
  }
  else
  {
    v10 = TaskbarLayoutPolicyManager::PopulateDefaultLayoutItems(a1, &v17);
    v7 = v10;
    if ( v10 < 0 )
    {
      v12 = 198LL;
      goto LABEL_15;
    }
  }
  v10 = TaskbarLayoutPolicyManager::ConvertItemsToObjectArray(v11, &v17, a3);
  v7 = v10;
  if ( v10 >= 0 )
  {
    wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v22);
    v7 = 0;
    goto LABEL_19;
  }
  v12 = 212LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
    (const char *)(unsigned int)v10);
LABEL_19:
  v8 = v17;
LABEL_20:
  if ( v8 )
  {
    for ( i = 0LL; i < v18; ++i )
    {
      v14 = v8[i];
      if ( v14 )
      {
        v8[i] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
    CoTaskMemFree(v8);
  }
LABEL_26:
  v22[0] = &TaskbarFlexibleLayoutTelemetry::GetTaskbarLayout::`vftable';
  wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v22);
  wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v22);
  return v7;
}
