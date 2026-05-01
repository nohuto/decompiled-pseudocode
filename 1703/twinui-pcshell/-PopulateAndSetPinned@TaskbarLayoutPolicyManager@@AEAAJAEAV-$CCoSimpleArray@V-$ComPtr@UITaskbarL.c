/*
 * XREFs of ?PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@AEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@W4TaskbarPinningSource@@@Z @ 0x18008800C
 * Callers:
 *     ?PopulateDefaultLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180087A90 (-PopulateDefaultLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITa.c)
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180087BE8 (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 *     ?PopulateOEMLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180087EB4 (-PopulateOEMLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITaskba.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001A030 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     ?TaskbarLayoutParser_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18008C158 (-TaskbarLayoutParser_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TaskbarLayoutPolicyManager::PopulateAndSetPinned(
        const struct _GUID *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned int a4)
{
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  _QWORD *v15; // rdx
  const struct _GUID *v16; // rcx
  const struct _GUID *v17; // rcx
  _QWORD *v18; // rcx
  unsigned __int64 i; // rbx
  __int64 v20; // rdx
  void *v21; // rcx
  void *v23; // [rsp+20h] [rbp-40h] BYREF
  __int64 v24; // [rsp+28h] [rbp-38h]
  __int64 v25; // [rsp+30h] [rbp-30h]
  LPVOID pv; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v27; // [rsp+40h] [rbp-20h]
  __int64 v28; // [rsp+48h] [rbp-18h]
  __int64 v29; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  const struct _GUID *v31; // [rsp+90h] [rbp+30h] BYREF

  v31 = a1;
  v25 = -2LL;
  v23 = 0LL;
  v7 = TaskbarLayoutParser_CreateInstance(a1, &v23);
  v8 = v7;
  if ( v7 >= 0 )
  {
    pv = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    v29 = 0LL;
    v9 = (*(__int64 (__fastcall **)(void *, __int64, LPVOID *))(*(_QWORD *)v23 + 24LL))(v23, a3, &pv);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v10 = 0LL;
      v11 = v27;
      if ( v27 )
      {
        while ( 1 )
        {
          if ( a4 == 2 && v10 >= 3 )
            goto LABEL_26;
          v12 = 0LL;
          v24 = 0LL;
          if ( v10 >= v11 )
            break;
          if ( *((_QWORD *)pv + v10) )
          {
            v12 = *((_QWORD *)pv + v10);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
            v24 = v12;
          }
          v31 = 0LL;
          v13 = (**(__int64 (__fastcall ***)(__int64, GUID *, const struct _GUID **))v12)(
                  v12,
                  &GUID_983d5c32_6534_4fa1_8383_a8430e19de76,
                  &v31);
          v8 = v13;
          if ( v13 < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x1E9,
              (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
              (const char *)(unsigned int)v13);
            v17 = v31;
            if ( v31 )
            {
              v31 = 0LL;
              (*(void (__fastcall **)(const struct _GUID *))(*(_QWORD *)&v17->Data1 + 16LL))(v17);
            }
            goto LABEL_23;
          }
          (*(void (__fastcall **)(const struct _GUID *, _QWORD))(*(_QWORD *)&v31->Data1 + 64LL))(v31, a4);
          v14 = a2[1];
          if ( v14 != a2[3]
            || CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
                 (__int64)a2,
                 v14 + 1) >= 0 )
          {
            v15 = (_QWORD *)(*a2 + 8 * a2[1]++);
            if ( v15 )
            {
              *v15 = v12;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
            }
          }
          v16 = v31;
          if ( v31 )
          {
            v31 = 0LL;
            (*(void (__fastcall **)(const struct _GUID *))(*(_QWORD *)&v16->Data1 + 16LL))(v16);
          }
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          ++v10;
          v11 = v27;
          if ( v10 >= v27 )
            goto LABEL_26;
        }
        v8 = -2147316575;
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x1E6,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)0x80028CA1LL);
LABEL_23:
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        goto LABEL_25;
      }
LABEL_26:
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1DC,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v9);
LABEL_25:
      v11 = v27;
    }
    v18 = pv;
    if ( pv )
    {
      for ( i = 0LL; i < v11; ++i )
      {
        v20 = v18[i];
        if ( v20 )
        {
          v18[i] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          v11 = v27;
          v18 = pv;
        }
      }
      CoTaskMemFree(v18);
      pv = 0LL;
    }
    v27 = 0LL;
    v29 = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1D9,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)v7);
  }
  v21 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return v8;
}
