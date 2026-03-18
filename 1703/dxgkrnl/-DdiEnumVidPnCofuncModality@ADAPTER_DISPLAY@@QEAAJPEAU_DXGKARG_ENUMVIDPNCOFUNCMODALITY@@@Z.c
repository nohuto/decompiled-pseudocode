/*
 * XREFs of ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C00E54AC
 * Callers:
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E4888 (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 *     ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1C01D8F40 (-RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY *a2,
        __int64 a3,
        __int64 a4)
{
  volatile signed __int32 *v4; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGPROCESS *v12; // rdi
  char *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v21; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v25; // ebp
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  D3DKMDT_HVIDPN hConstrainingVidPn; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // r9d
  __int64 v40; // rax
  _QWORD *v41; // rax
  unsigned __int8 v42; // cl
  _QWORD *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  char v46[8]; // [rsp+20h] [rbp-88h] BYREF
  char *v47; // [rsp+28h] [rbp-80h]
  int v48; // [rsp+30h] [rbp-78h]
  char v49[8]; // [rsp+38h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v4 = (volatile signed __int32 *)DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v37 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v37 + 24) = 1815LL;
    WdLogEvent5_WdAssertion(v37);
    v4 = (volatile signed __int32 *)DXGGLOBAL::m_pGlobal;
  }
  _InterlockedIncrement(v4 + 9);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5026);
  Current = DXGPROCESS::GetCurrent((__int64)this);
  v12 = Current;
  if ( Current )
    v13 = (char *)Current + 88;
  else
    v13 = 0LL;
  v48 = 0;
  v47 = v13;
  if ( v13 && *((struct _KTHREAD **)v13 + 1) == KeGetCurrentThread() )
  {
    v38 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v38 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v38);
  }
  if ( v12 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v13, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v39 = *((_DWORD *)v13 + 4);
        if ( v39 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v14, &EventBlockThread, v15, v39);
      }
      ExAcquirePushLockExclusiveEx(v13, 0LL);
    }
    *((_QWORD *)v13 + 1) = KeGetCurrentThread();
    v48 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  CurrentIrql = KeGetCurrentIrql();
  v21 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_34;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v40 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
    *(_QWORD *)(v40 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v40);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v17, v16, v18, v19);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v21 = 0LL;
      goto LABEL_34;
    }
    v21 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v21 = 0LL;
  }
  if ( v21 )
  {
    v25 = *(_DWORD *)(v21 + 136);
    goto LABEL_22;
  }
LABEL_34:
  v25 = 0;
LABEL_22:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v49,
    *((struct DXGADAPTER **)this + 2));
  v27 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY *))(*((_QWORD *)this + 2) + 488LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  if ( v49[0] )
    KeUnstackDetachProcess(&ApcState);
  v30 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v30 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v26, v28);
    v41[3] = 275LL;
    v41[4] = 16LL;
    v41[5] = this;
    v41[6] = CurrentIrql;
    v42 = KeGetCurrentIrql();
    v41[7] = v42;
    WdLogEvent5_WdCriticalError(v41);
  }
  if ( v21 && *(_DWORD *)(v21 + 136) != v25 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v26, v28);
    v43[3] = 275LL;
    v43[4] = 25LL;
    v44 = *(int *)(v21 + 136);
    v43[7] = 0LL;
    v43[5] = v44;
    v43[6] = v25;
    WdLogEvent5_WdCriticalError(v43);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  v31 = (_QWORD *)WdLogNewEntry5_WdTrace(v30, v26, v28, v29);
  v31[3] = v27;
  v32 = *(_QWORD *)(*((_QWORD *)this + 2) + 240LL);
  v31[4] = v32;
  hConstrainingVidPn = a2->hConstrainingVidPn;
  v31[5] = a2->hConstrainingVidPn;
  if ( (_DWORD)v27 != -1073741801 && (_DWORD)v27 )
  {
    v45 = WdLogNewEntry5_WdError(hConstrainingVidPn, v32);
    *(_QWORD *)(v45 + 24) = v27;
    WdLogEvent5_WdError(v45);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v46);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v34, &EventProfilerExit, v35, 5026);
  return (unsigned int)v27;
}
