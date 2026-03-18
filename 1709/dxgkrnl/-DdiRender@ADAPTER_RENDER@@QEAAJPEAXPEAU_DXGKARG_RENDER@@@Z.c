/*
 * XREFs of ?DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1C017B6DC
 * Callers:
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00C1D40 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001224 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0001A40 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0008C80 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiRender(ADAPTER_RENDER *this, __int64 a2, struct _DXGKARG_RENDER *a3)
{
  struct DXGPROCESS *Current; // rax
  struct DXGADAPTER *v7; // rbx
  __int64 v8; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v13; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v15; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v18; // ebp
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  _QWORD *v22; // rax
  unsigned __int8 v23; // cl
  _QWORD *v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 pAllocationList; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  _BYTE v32[24]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v33[8]; // [rsp+38h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-78h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 5030);
  Current = DXGPROCESS::GetCurrent((__int64)this, a2);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v32, Current);
  v7 = (struct DXGADAPTER *)*((_QWORD *)this + 2);
  Global = DXGGLOBAL::GetGlobal(v8);
  if ( *((_BYTE *)Global + 1113)
    && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1108), v7) )
  {
    LODWORD(v10) = -1073741637;
    goto LABEL_34;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3924LL));
  CurrentIrql = KeGetCurrentIrql();
  v13 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_17;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v15 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v15 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v15);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v13 = 0LL;
      goto LABEL_17;
    }
    v13 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 )
  {
    v18 = *(_DWORD *)(v13 + 136);
    goto LABEL_18;
  }
LABEL_17:
  v18 = 0;
LABEL_18:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v33,
    *((struct DXGADAPTER **)this + 2));
  v10 = (*(int (__fastcall **)(__int64, struct _DXGKARG_RENDER *))(*((_QWORD *)this + 2) + 600LL))(a2, a3);
  if ( v33[0] )
    KeUnstackDetachProcess(&ApcState);
  v21 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v21 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v19, v20);
    v22[3] = 275LL;
    v22[4] = 16LL;
    v22[5] = this;
    v22[6] = CurrentIrql;
    v23 = KeGetCurrentIrql();
    v22[7] = v23;
    WdLogEvent5_WdCriticalError(v22);
  }
  if ( v13 && *(_DWORD *)(v13 + 136) != v18 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v19, v20);
    v24[3] = 275LL;
    v24[4] = 25LL;
    v25 = *(int *)(v13 + 136);
    v24[7] = 0LL;
    v24[5] = v25;
    v24[6] = v18;
    WdLogEvent5_WdCriticalError(v24);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3924LL));
  v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v19);
  v26[3] = v10;
  v26[4] = a2;
  v26[5] = a3->pDmaBuffer;
  v26[6] = a3->DmaSize;
  pAllocationList = (__int64)a3->pAllocationList;
  v26[7] = pAllocationList;
  if ( (unsigned int)(v10 + 1073741816) > 0x15
    || (pAllocationList = 2129953LL, !_bittest((const int *)&pAllocationList, v10 + 1073741816)) )
  {
    if ( (_DWORD)v10 != -1073741674
      && (_DWORD)v10 != -1073741592
      && (_DWORD)v10 != -1071775743
      && (_DWORD)v10 != -1071775232
      && (_DWORD)v10 )
    {
      v28 = WdLogNewEntry5_WdError(pAllocationList);
      *(_QWORD *)(v28 + 24) = v10;
      WdLogEvent5_WdError(v28);
    }
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
LABEL_34:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v29, &EventProfilerExit, v30, 5030);
  return (unsigned int)v10;
}
