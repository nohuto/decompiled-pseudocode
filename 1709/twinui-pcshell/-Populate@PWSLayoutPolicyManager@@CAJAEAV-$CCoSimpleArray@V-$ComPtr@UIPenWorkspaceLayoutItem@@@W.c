/*
 * XREFs of ?Populate@PWSLayoutPolicyManager@@CAJAEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@AEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@@Z @ 0x1800EF710
 * Callers:
 *     ?PopulateDefaultLayoutItems@PWSLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1800EF470 (-PopulateDefaultLayoutItems@PWSLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UIPenWor.c)
 *     ?PopulateOEMLayoutItems@PWSLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1800EF5C0 (-PopulateOEMLayoutItems@PWSLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UIPenWorkspa.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001ADC0 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     ?PWSLayoutParser_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F1734 (-PWSLayoutParser_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PWSLayoutPolicyManager::Populate(const struct _GUID *a1, __int64 a2)
{
  int v4; // eax
  int v5; // edi
  int v6; // eax
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdx
  _QWORD *v10; // rdx
  __int64 v11; // rdx
  unsigned __int64 i; // rbx
  __int64 v13; // rcx
  void *v14; // rcx
  LPVOID pv; // [rsp+28h] [rbp-28h] BYREF
  unsigned __int64 v17; // [rsp+30h] [rbp-20h]
  __int64 v18; // [rsp+38h] [rbp-18h]
  __int64 v19; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  void *v21; // [rsp+90h] [rbp+40h] BYREF
  __int64 v22; // [rsp+98h] [rbp+48h]

  v21 = 0LL;
  v4 = PWSLayoutParser_CreateInstance(a1, &v21);
  v5 = v4;
  if ( v4 >= 0 )
  {
    pv = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v6 = (*(__int64 (__fastcall **)(void *, __int64, LPVOID *))(*(_QWORD *)v21 + 24LL))(v21, a2, &pv);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v7 = 0LL;
      if ( v17 )
      {
        while ( 1 )
        {
          v8 = 0LL;
          v22 = 0LL;
          if ( v7 >= v17 )
            break;
          if ( *((_QWORD *)pv + v7) )
          {
            v8 = *((_QWORD *)pv + v7);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
            v22 = v8;
          }
          v9 = *(_QWORD *)a1->Data4;
          if ( v9 == *(_QWORD *)a1[1].Data4 )
          {
            v5 = CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
                   (__int64)a1,
                   v9 + 1);
            if ( v5 < 0 )
            {
              v11 = 236LL;
              goto LABEL_20;
            }
          }
          v10 = (_QWORD *)(*(_QWORD *)&a1->Data1 + 8 * (*(_QWORD *)a1->Data4)++);
          if ( v10 )
          {
            *v10 = v8;
            if ( v8 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
          }
          if ( v8 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
          if ( ++v7 >= v17 )
            goto LABEL_22;
        }
        v5 = -2147316575;
        v11 = 235LL;
LABEL_20:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v11,
          (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
          (const char *)(unsigned int)v5);
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      else
      {
LABEL_22:
        v5 = 0;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xE6,
        (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
        (const char *)(unsigned int)v6);
    }
    if ( pv )
    {
      for ( i = 0LL; i < v17; ++i )
      {
        v13 = *((_QWORD *)pv + i);
        if ( v13 )
        {
          *((_QWORD *)pv + i) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v17 = 0LL;
    v19 = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xE3,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)v4);
  }
  v14 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (unsigned int)v5;
}
