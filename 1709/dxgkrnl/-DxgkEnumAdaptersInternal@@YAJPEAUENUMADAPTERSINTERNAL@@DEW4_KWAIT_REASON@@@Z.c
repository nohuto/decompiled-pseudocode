/*
 * XREFs of ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C00E761C
 * Callers:
 *     ?DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C00E72C0 (-DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C017E140 (-DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C000D614 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008B884 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DPEAT_LARGE_INTEGER@@@Z @ 0x1C008FFE0 (-WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DPEAT_LARGE_INTEGER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00F3984 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 */

__int64 __fastcall DxgkEnumAdaptersInternal(struct ENUMADAPTERSINTERNAL *a1, __int64 a2, __int64 a3, KWAIT_REASON a4)
{
  char v5; // di
  KPROCESSOR_MODE v6; // bp
  struct DXGGLOBAL *Global; // rax
  union _LARGE_INTEGER *v9; // r9
  int v10; // eax
  __int64 v11; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct DXGGLOBAL *v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // rcx
  struct DXGGLOBAL *v20; // rax
  __int64 v21; // r8
  unsigned int v22; // ebx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct DXGPROCESS *v34; // rsi
  _BYTE v35[8]; // [rsp+20h] [rbp-28h] BYREF
  struct DXGPROCESS *v36; // [rsp+28h] [rbp-20h]
  char v37; // [rsp+30h] [rbp-18h]

  v5 = a3;
  v6 = a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2078);
  if ( !a1 )
  {
    v24 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v24 + 24) = 959LL;
    WdLogEvent5_WdAssertion(v24);
  }
  if ( v5 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)a1);
    v10 = DXGSESSIONMGR::WaitForPnPTransitionDone(*((DXGSESSIONMGR **)Global + 73), a4, v6, v9);
    v11 = v10;
    if ( v10 < 0 )
    {
      v25 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v25 + 24) = v11;
      WdLogEvent5_WdError(v25);
    }
  }
  Current = DXGPROCESS::GetCurrent((__int64)a1, a2);
  if ( Current )
  {
    v36 = Current;
    v37 = 0;
    DXGUSERCRIT::Acquire((DXGUSERCRIT *)v35, 0);
    *(_DWORD *)a1 = 0;
    *((_DWORD *)a1 + 2) = 0;
    v15 = DXGGLOBAL::GetGlobal(v14);
    v16 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)v15,
            (__int64 (__fastcall *)(_QWORD *, __int64))EnumAdaptersCallback,
            (__int64)a1,
            1);
    v17 = *((unsigned int *)a1 + 1);
    v18 = v16;
    if ( *(_DWORD *)a1 > (unsigned int)v17 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v17);
      *(_QWORD *)(v27 + 24) = 1017LL;
      WdLogEvent5_WdAssertion(v27);
    }
    v19 = *((unsigned int *)a1 + 2);
    if ( *(_DWORD *)a1 > (unsigned int)v19 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v19);
      *(_QWORD *)(v28 + 24) = 1018LL;
      WdLogEvent5_WdAssertion(v28);
    }
    if ( v18 < 0 )
      goto LABEL_25;
    v20 = DXGGLOBAL::GetGlobal(v19);
    v18 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)v20,
            (__int64 (__fastcall *)(_QWORD *, __int64))EnumAdaptersCallback,
            (__int64)a1,
            3);
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v19);
      *(_QWORD *)(v29 + 24) = 1030LL;
      WdLogEvent5_WdAssertion(v29);
    }
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 2) )
    {
      v30 = WdLogNewEntry5_WdAssertion(v19);
      *(_QWORD *)(v30 + 24) = 1031LL;
      WdLogEvent5_WdAssertion(v30);
    }
    if ( v18 < 0 )
    {
LABEL_25:
      v31 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v31 + 24) = v18;
      WdLogEvent5_WdError(v31);
      v34 = DXGPROCESS::GetCurrent(v33, v32);
      while ( *(_DWORD *)a1 )
        DXGADAPTER::DestroyHandle(v34, *(_DWORD *)(*((_QWORD *)a1 + 2) + 20LL * (unsigned int)--*(_DWORD *)a1));
    }
    v22 = v18;
    if ( v37 )
    {
      v37 = 0;
      (*(void (**)(void))(*((_QWORD *)v36 + 12) + 40LL))();
    }
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v13);
    v22 = -1073741811;
    *(_QWORD *)(v26 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v26);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v19, &EventProfilerExit, v21, 2078);
  return v22;
}
