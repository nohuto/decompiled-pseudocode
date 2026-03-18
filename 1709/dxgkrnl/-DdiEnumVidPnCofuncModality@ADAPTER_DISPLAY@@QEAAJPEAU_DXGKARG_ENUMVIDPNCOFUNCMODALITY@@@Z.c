/*
 * XREFs of ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C00AA3FC
 * Callers:
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00A865C (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 *     ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1C01F2100 (-RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0001A40 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // ebp
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rdi
  char *v10; // rbx
  int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  __int64 v16; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v18; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v20; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // r8
  __int64 v26; // rcx
  _QWORD *v27; // rax
  unsigned __int8 v28; // cl
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  D3DKMDT_HVIDPN hConstrainingVidPn; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  _BYTE v36[8]; // [rsp+20h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-70h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 9);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v5, &EventProfilerEnter, v6, 5026);
  v7 = 0;
  Current = DXGPROCESS::GetCurrent(v5, v4);
  v10 = (char *)Current + 112;
  if ( !Current )
    v10 = 0LL;
  v11 = 0;
  if ( v10 && *((struct _KTHREAD **)v10 + 1) == KeGetCurrentThread() )
  {
    v12 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v12 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( Current )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v10, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v15 = *((_DWORD *)v10 + 4);
        if ( v15 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v13, &EventBlockThread, v14, v15);
      }
      ExAcquirePushLockExclusiveEx(v10, 0LL);
    }
    v11 = 2;
    *((_QWORD *)v10 + 1) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3924LL));
  CurrentIrql = KeGetCurrentIrql();
  v18 = 0LL;
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v20 = WdLogNewEntry5_WdAssertion(v16);
      *(_QWORD *)(v20 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v20);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
    {
      if ( IsThreadCrossSessionAttached()
        || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
        || !*(_QWORD *)ThreadWin32Thread )
      {
        v18 = 0LL;
        goto LABEL_30;
      }
      v18 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
    }
    else
    {
      v18 = 0LL;
    }
    if ( v18 )
      v7 = *(_DWORD *)(v18 + 136);
  }
LABEL_30:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v36,
    *((struct DXGADAPTER **)this + 2));
  v24 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY *))(*((_QWORD *)this + 2) + 488LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  if ( v36[0] )
    KeUnstackDetachProcess(&ApcState);
  v26 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v26 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v23, v25);
    v27[3] = 275LL;
    v27[4] = 16LL;
    v27[5] = this;
    v27[6] = CurrentIrql;
    v28 = KeGetCurrentIrql();
    v27[7] = v28;
    WdLogEvent5_WdCriticalError(v27);
  }
  if ( v18 && *(_DWORD *)(v18 + 136) != v7 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v23, v25);
    v29[3] = 275LL;
    v29[4] = 25LL;
    v29[5] = *(int *)(v18 + 136);
    v29[6] = v7;
    v29[7] = 0LL;
    WdLogEvent5_WdCriticalError(v29);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3924LL));
  v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v23);
  v30[3] = v24;
  v30[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 240LL);
  hConstrainingVidPn = a2->hConstrainingVidPn;
  v30[5] = a2->hConstrainingVidPn;
  if ( (_DWORD)v24 != -1073741801 && (_DWORD)v24 )
  {
    v32 = WdLogNewEntry5_WdError(hConstrainingVidPn);
    *(_QWORD *)(v32 + 24) = v24;
    WdLogEvent5_WdError(v32);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( v11 == 2 )
  {
    *((_QWORD *)v10 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v33, &EventProfilerExit, v34, 5026);
  return (unsigned int)v24;
}
