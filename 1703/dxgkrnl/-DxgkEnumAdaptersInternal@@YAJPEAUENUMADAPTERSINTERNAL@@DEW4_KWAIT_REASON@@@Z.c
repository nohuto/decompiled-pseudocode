/*
 * XREFs of ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C009800C
 * Callers:
 *     ?DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C0097CB0 (-DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C017A760 (-DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0001C04 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C009FA34 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00D7FFC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DPEAT_LARGE_INTEGER@@@Z @ 0x1C00DD958 (-WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall DxgkEnumAdaptersInternal(struct ENUMADAPTERSINTERNAL *a1, __int64 a2, __int64 a3, __int64 a4)
{
  enum _KWAIT_REASON v4; // esi
  char v5; // di
  char v6; // bp
  struct DXGGLOBAL *Global; // rax
  union _LARGE_INTEGER *v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct DXGGLOBAL *v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  int v23; // edi
  __int64 v24; // rcx
  struct DXGGLOBAL *v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // ebx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  struct DXGPROCESS *v38; // rsi
  _BYTE v39[8]; // [rsp+20h] [rbp-28h] BYREF
  struct DXGPROCESS *v40; // [rsp+28h] [rbp-20h]
  char v41; // [rsp+30h] [rbp-18h]

  v4 = (int)a4;
  v5 = a3;
  v6 = a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2078);
  if ( !a1 )
  {
    v30 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v30 + 24) = 959LL;
    WdLogEvent5_WdAssertion(v30);
  }
  if ( v5 )
  {
    Global = DXGGLOBAL::GetGlobal();
    v10 = DXGSESSIONMGR::WaitForPnPTransitionDone(*((DXGSESSIONMGR **)Global + 73), v4, v6, v9);
    v13 = v10;
    if ( v10 < 0 )
    {
      v31 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v31 + 24) = v13;
      WdLogEvent5_WdError(v31);
    }
  }
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v40 = Current;
    v41 = 0;
    DXGUSERCRIT::Acquire((DXGUSERCRIT *)v39, 0);
    *(_DWORD *)a1 = 0;
    *((_DWORD *)a1 + 2) = 0;
    v17 = DXGGLOBAL::GetGlobal();
    v18 = DXGGLOBAL::IterateAdaptersWithCallback(v17, EnumAdaptersCallback, a1, 1LL);
    v22 = *((unsigned int *)a1 + 1);
    v23 = v18;
    if ( *(_DWORD *)a1 > (unsigned int)v22 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v22, v19, v20, v21);
      *(_QWORD *)(v33 + 24) = 1017LL;
      WdLogEvent5_WdAssertion(v33);
    }
    v24 = *((unsigned int *)a1 + 2);
    if ( *(_DWORD *)a1 > (unsigned int)v24 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v24, v19, v20, v21);
      *(_QWORD *)(v34 + 24) = 1018LL;
      WdLogEvent5_WdAssertion(v34);
    }
    if ( v23 < 0 )
      goto LABEL_25;
    v25 = DXGGLOBAL::GetGlobal();
    v23 = DXGGLOBAL::IterateAdaptersWithCallback(v25, EnumAdaptersCallback, a1, 3LL);
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      v35 = WdLogNewEntry5_WdAssertion(v24, v19, v26, v27);
      *(_QWORD *)(v35 + 24) = 1030LL;
      WdLogEvent5_WdAssertion(v35);
    }
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 2) )
    {
      v36 = WdLogNewEntry5_WdAssertion(v24, v19, v26, v27);
      *(_QWORD *)(v36 + 24) = 1031LL;
      WdLogEvent5_WdAssertion(v36);
    }
    if ( v23 < 0 )
    {
LABEL_25:
      v37 = WdLogNewEntry5_WdError(v24, v19);
      *(_QWORD *)(v37 + 24) = v23;
      WdLogEvent5_WdError(v37);
      v38 = DXGPROCESS::GetCurrent();
      while ( *(_DWORD *)a1 )
        DXGADAPTER::DestroyHandle(v38, *(_DWORD *)(*((_QWORD *)a1 + 2) + 20LL * (unsigned int)--*(_DWORD *)a1));
    }
    v28 = v23;
    if ( v41 )
    {
      v41 = 0;
      (*(void (**)(void))(*((_QWORD *)v40 + 9) + 40LL))();
    }
  }
  else
  {
    v32 = WdLogNewEntry5_WdError(v16, v15);
    v28 = -1073741811;
    *(_QWORD *)(v32 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v32);
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v24, &EventProfilerExit, v26, 2078);
  return v28;
}
