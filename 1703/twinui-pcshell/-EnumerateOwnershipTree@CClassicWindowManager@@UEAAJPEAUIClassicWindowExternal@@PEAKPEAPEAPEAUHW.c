/*
 * XREFs of ?EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHWND__@@@Z @ 0x180036F10
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001A030 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsWindowOwnedBy@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@0@Z @ 0x180034844 (-IsWindowOwnedBy@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@0@Z.c)
 *     ?GetRootOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindow@@@Z @ 0x180034928 (-GetRootOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClass.c)
 *     ?s_ClassicWindowFromClassicWindowExternal@CClassicWindowManager@@CA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindowExternal@@@Z @ 0x180035DBC (-s_ClassicWindowFromClassicWindowExternal@CClassicWindowManager@@CA-AV-$ComPtr@UIClassicWindow@@.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CClassicWindowManager::EnumerateOwnershipTree(
        CClassicWindowManager *this,
        struct IClassicWindowExternal *a2,
        unsigned int *a3,
        HWND **a4)
{
  HWND **v4; // r15
  __int64 v6; // rdi
  __int64 v7; // rcx
  CClassicWindowManager *v8; // rcx
  struct IClassicWindow *v9; // rsi
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 *v13; // r8
  char *v14; // r13
  unsigned __int64 v15; // r12
  __int64 v16; // r14
  struct IClassicWindow *v17; // rbx
  __int64 v18; // r9
  LPVOID *v19; // r15
  int v20; // eax
  LPVOID v21; // rdx
  __int64 *v22; // r8
  struct IClassicWindow *v23; // rcx
  unsigned int v24; // edx
  void *v25; // rcx
  unsigned int v26; // ebx
  LPVOID pv; // [rsp+28h] [rbp-49h] BYREF
  __int64 v29; // [rsp+30h] [rbp-41h]
  __int64 v30; // [rsp+38h] [rbp-39h]
  __int64 v31; // [rsp+40h] [rbp-31h]
  __int64 v32; // [rsp+48h] [rbp-29h]
  char *v33; // [rsp+50h] [rbp-21h] BYREF
  struct IClassicWindow *v34; // [rsp+58h] [rbp-19h]
  LPVOID *p_pv; // [rsp+60h] [rbp-11h]
  struct IClassicWindow *v36; // [rsp+68h] [rbp-9h] BYREF
  struct IClassicWindow *v37; // [rsp+70h] [rbp-1h]
  __int64 v38; // [rsp+78h] [rbp+7h]
  char **v39; // [rsp+80h] [rbp+Fh]
  struct IClassicWindow *v40; // [rsp+88h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  __int64 v42; // [rsp+D8h] [rbp+67h] BYREF
  unsigned int *v43; // [rsp+E8h] [rbp+77h]
  HWND **v44; // [rsp+F0h] [rbp+7Fh]

  v44 = a4;
  v43 = a3;
  v38 = -2LL;
  v4 = a4;
  *a3 = 0;
  *a4 = 0LL;
  CClassicWindowManager::s_ClassicWindowFromClassicWindowExternal(
    &v42,
    (void (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  pv = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v6 = v42;
  CClassicWindowManager::GetRootOwner(v7, &v36, v42);
  v9 = v36;
  if ( v36 != (struct IClassicWindow *)v6 )
  {
    v10 = (*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v36 + 24LL))(v36);
    v11 = CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
            (__int64)&pv,
            v29 + 1);
    if ( v11 >= 0 )
    {
      v12 = v29++;
      v13 = (__int64 *)((char *)pv + 8 * v12);
      if ( v13 )
        *v13 = v10;
    }
    v8 = retaddr;
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x889,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\classicwndmgr.cpp",
        (const char *)(unsigned int)v11);
  }
  v14 = (char *)this - 104;
  v33 = v14;
  v34 = (struct IClassicWindow *)v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  p_pv = &pv;
  v39 = &v33;
  v37 = v9;
  v15 = *((_QWORD *)v14 + 23);
  v16 = 0LL;
  if ( v15 )
  {
    while ( 1 )
    {
      v17 = *(struct IClassicWindow **)(*((_QWORD *)v14 + 22) + 8 * v16);
      v40 = v17;
      if ( v17 )
        (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v17 + 8LL))(v17);
      if ( !CClassicWindowManager::IsWindowOwnedBy(v8, v17, v37)
        || !(*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v17 + 128LL))(v17)
        || v17 == v34 )
      {
        goto LABEL_24;
      }
      v18 = (*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v17 + 24LL))(v17);
      v32 = v18;
      v19 = p_pv;
      v20 = 0;
      v21 = p_pv[1];
      if ( v21 != p_pv[3] )
        goto LABEL_20;
      v20 = CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
              (__int64)p_pv,
              (unsigned __int64)v21 + 1);
      if ( v20 >= 0 )
        break;
LABEL_22:
      v8 = retaddr;
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x893,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\classicwndmgr.cpp",
          (const char *)(unsigned int)v20);
LABEL_24:
      if ( v17 )
        (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v17 + 16LL))(v17);
      if ( ++v16 >= v15 )
      {
        v4 = v44;
        goto LABEL_28;
      }
    }
    v18 = v32;
LABEL_20:
    v19[1] = (char *)v19[1] + 1;
    v22 = (__int64 *)((char *)*v19 + 8 * ((__int64)v19[1] - 1));
    if ( v22 )
      *v22 = v18;
    goto LABEL_22;
  }
LABEL_28:
  v23 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v23 + 16LL))(v23);
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v24 = v29;
  if ( v29 )
  {
    *v4 = (HWND *)pv;
    v25 = 0LL;
    pv = 0LL;
    v29 = 0LL;
    v31 = 0LL;
    *v43 = v24;
  }
  else
  {
    v25 = pv;
  }
  v26 = *v4 == 0LL ? 0x80070490 : 0;
  if ( v9 )
  {
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v9 + 16LL))(v9);
    v25 = pv;
  }
  if ( v25 )
  {
    CoTaskMemFree(v25);
    pv = 0LL;
  }
  v29 = 0LL;
  v31 = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v26;
}
