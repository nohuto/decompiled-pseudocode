/*
 * XREFs of ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C016BC04
 * Callers:
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1C01B473C (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000D924 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiEscape(DXGADAPTER *this, const struct _DXGKARG_ESCAPE *a2, __int64 a3, __int64 a4)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 CurrentIrql; // r15
  __int64 v15; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v17; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v20; // ebp
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  _QWORD *v24; // rax
  unsigned __int8 v25; // cl
  _QWORD *v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  _BYTE v35[8]; // [rsp+20h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-60h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5022);
  Global = DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2, a3, a4);
  if ( *((_BYTE *)Global + 1112)
    && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1108), this) )
  {
    LODWORD(v9) = -1073741637;
    goto LABEL_39;
  }
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  _InterlockedIncrement((volatile signed __int32 *)this + 973);
  CurrentIrql = KeGetCurrentIrql();
  v15 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_16;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v17 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v17 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v17);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11, v10, v12, v13);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v15 = 0LL;
      goto LABEL_16;
    }
    v15 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v15 = 0LL;
  }
  if ( v15 )
  {
    v20 = *(_DWORD *)(v15 + 136);
    goto LABEL_17;
  }
LABEL_16:
  v20 = 0;
LABEL_17:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v35, this);
  v9 = (*((int (__fastcall **)(_QWORD, const struct _DXGKARG_ESCAPE *))this + 56))(*((_QWORD *)this + 30), a2);
  if ( v35[0] )
    KeUnstackDetachProcess(&ApcState);
  v23 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v23 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v21, v22);
    v24[3] = 275LL;
    v24[4] = 16LL;
    v24[5] = this;
    v24[6] = CurrentIrql;
    v25 = KeGetCurrentIrql();
    v24[7] = v25;
    WdLogEvent5_WdCriticalError(v24);
  }
  if ( v15 && *(_DWORD *)(v15 + 136) != v20 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v21, v22);
    v26[3] = 275LL;
    v26[4] = 25LL;
    v27 = *(int *)(v15 + 136);
    v26[7] = 0LL;
    v26[5] = v27;
    v26[6] = v20;
    WdLogEvent5_WdCriticalError(v26);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 973);
  v28 = (_QWORD *)WdLogNewEntry5_WdEvent(v23);
  v28[3] = v9;
  v28[4] = *((_QWORD *)this + 30);
  v28[5] = a2->hDevice;
  v28[6] = a2->PrivateDriverDataSize;
  if ( a2->PrivateDriverDataSize <= 4 )
    v29 = 0LL;
  else
    v29 = *(unsigned int *)a2->pPrivateDriverData;
  v28[7] = v29;
  WdLogEvent5_WdEvent(v28);
  if ( (_DWORD)v9 == -1073741823 )
  {
    v33 = WdLogNewEntry5_WdEvent(v31);
    *(_QWORD *)(v33 + 24) = -1073741823LL;
    WdLogEvent5_WdEvent(v33);
  }
  else if ( (_DWORD)v9 != -1073741811
         && (_DWORD)v9 != -1073741801
         && (_DWORD)v9 != -1073741795
         && (_DWORD)v9 != -1073741674
         && (_DWORD)v9 )
  {
    v32 = WdLogNewEntry5_WdError(v31, v30);
    *(_QWORD *)(v32 + 24) = v9;
    WdLogEvent5_WdError(v32);
  }
  DXGADAPTER::ReleaseDdiSync(this);
LABEL_39:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v7, &EventProfilerExit, v8, 5022);
  return (unsigned int)v9;
}
