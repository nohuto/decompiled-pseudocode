/*
 * XREFs of ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C00D4274
 * Callers:
 *     ?DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C00D3F50 (-DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C0164C30 (-DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0009A64 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00D2540 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DPEAT_LARGE_INTEGER@@@Z @ 0x1C00E2BD4 (-WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DPEAT_LARGE_INTEGER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00F9E10 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall DxgkEnumAdaptersInternal(
        struct ENUMADAPTERSINTERNAL *a1,
        char a2,
        __int64 a3,
        enum _KWAIT_REASON a4)
{
  char v5; // di
  __int64 v8; // rcx
  struct DXGGLOBAL *Global; // rax
  union _LARGE_INTEGER *v10; // r9
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  struct DXGGLOBAL *v17; // rax
  __int64 v18; // rcx
  int v19; // edi
  unsigned int v20; // eax
  struct DXGGLOBAL *v21; // rax
  __int64 v22; // rdx
  unsigned int v23; // eax
  unsigned int v24; // ebx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  struct _KTHREAD **v36; // rsi
  int v37; // [rsp+20h] [rbp-38h] BYREF
  __int64 v38; // [rsp+28h] [rbp-30h]
  _BYTE v39[8]; // [rsp+30h] [rbp-28h] BYREF
  struct DXGPROCESS *v40; // [rsp+38h] [rbp-20h]
  char v41; // [rsp+40h] [rbp-18h]

  v38 = 0LL;
  v5 = a3;
  v37 = 2078;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2078);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v37, 2078);
  if ( !a1 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v28 + 24) = 991LL;
    WdLogEvent5_WdAssertion(v28);
  }
  if ( v5 )
  {
    Global = DXGGLOBAL::GetGlobal(v8);
    v11 = DXGSESSIONMGR::WaitForPnPTransitionDone(*((DXGSESSIONMGR **)Global + 74), a4, a2, v10);
    v13 = v11;
    if ( v11 < 0 )
    {
      v29 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v29 + 24) = v13;
      WdLogEvent5_WdError(v29);
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
    v17 = DXGGLOBAL::GetGlobal(v16);
    v19 = DXGGLOBAL::IterateAdaptersWithCallback(v17, EnumAdaptersCallback, a1, 1LL);
    v20 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      v31 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v31 + 24) = 1049LL;
      WdLogEvent5_WdAssertion(v31);
      v20 = *(_DWORD *)a1;
    }
    if ( v20 > *((_DWORD *)a1 + 2) )
    {
      v32 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v32 + 24) = 1050LL;
      WdLogEvent5_WdAssertion(v32);
    }
    if ( v19 < 0 )
      goto LABEL_25;
    v21 = DXGGLOBAL::GetGlobal(v18);
    v19 = DXGGLOBAL::IterateAdaptersWithCallback(v21, EnumAdaptersCallback, a1, 3LL);
    v23 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v33 + 24) = 1062LL;
      WdLogEvent5_WdAssertion(v33);
      v23 = *(_DWORD *)a1;
    }
    if ( v23 > *((_DWORD *)a1 + 2) )
    {
      v34 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v34 + 24) = 1063LL;
      WdLogEvent5_WdAssertion(v34);
    }
    if ( v19 < 0 )
    {
LABEL_25:
      v35 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v35 + 24) = v19;
      WdLogEvent5_WdError(v35);
      v36 = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
      while ( *(_DWORD *)a1 )
        DXGADAPTER::DestroyHandle(v36, *(_DWORD *)(*((_QWORD *)a1 + 2) + 20LL * (unsigned int)--*(_DWORD *)a1));
    }
    v24 = v19;
    if ( v41 )
    {
      v41 = 0;
      (*(void (__fastcall **)(_QWORD, __int64))(*((_QWORD *)v40 + 13) + 40LL))(*((_QWORD *)v40 + 13), v22);
    }
  }
  else
  {
    v30 = WdLogNewEntry5_WdError(v15);
    v24 = -1073741811;
    *(_QWORD *)(v30 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v30);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v37);
  return v24;
}
