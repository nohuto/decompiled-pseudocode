/*
 * XREFs of ?DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z @ 0x1C01794F8
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_SETTIMINGSFROMVIDPN *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r13
  unsigned __int8 CurrentIrql; // r15
  __int64 v12; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v14; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v17; // r14d
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // rcx
  _QWORD *v22; // rax
  unsigned __int8 v23; // cl
  _QWORD *v24; // rax
  ULONG TimeIncrement; // eax
  __int64 v26; // r9
  unsigned __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v38; // [rsp+20h] [rbp-79h]
  __int64 v39; // [rsp+28h] [rbp-71h]
  _QWORD v40[10]; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v41[8]; // [rsp+80h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-11h] BYREF

  memset(v40, 0, 0x48uLL);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v4, &EventProfilerEnter, v5, 5076);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  v38 = MEMORY[0xFFFFF78000000320];
  v10 = v38 * KeQueryTimeIncrement();
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  CurrentIrql = KeGetCurrentIrql();
  v12 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_13;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v14 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v14 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v14);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7, v6, v8, v9);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v12 = 0LL;
LABEL_13:
      v17 = 0;
      goto LABEL_14;
    }
    v12 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
    goto LABEL_13;
  v17 = *(_DWORD *)(v12 + 136);
LABEL_14:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v41,
    *((struct DXGADAPTER **)this + 2));
  v19 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_SETTIMINGSFROMVIDPN *))(*((_QWORD *)this + 2) + 1040LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  if ( v41[0] )
    KeUnstackDetachProcess(&ApcState);
  v21 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v21 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v18, v20);
    v22[3] = 275LL;
    v22[4] = 16LL;
    v22[5] = this;
    v22[6] = CurrentIrql;
    v23 = KeGetCurrentIrql();
    v22[7] = v23;
    WdLogEvent5_WdCriticalError(v22);
  }
  if ( v12 && *(_DWORD *)(v12 + 136) != v17 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v18, v20);
    v24[3] = 275LL;
    v24[4] = 25LL;
    v24[5] = *(int *)(v12 + 136);
    v24[6] = v17;
    v24[7] = 0LL;
    WdLogEvent5_WdCriticalError(v24);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  v39 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  if ( (int)v19 < 0 )
    v27 = (unsigned int)v19;
  else
    v27 = (v39 * (unsigned __int64)TimeIncrement - v10) / 0x2710;
  v28 = (__int64)a2->pResultsFlags->0;
  v29 = *(_QWORD *)(*((_QWORD *)this + 2) + 268LL);
  memset(&v40[1], 0, 36);
  HIDWORD(v40[6]) = a2->PathCount;
  v40[0] = 0x480000001ELL;
  LODWORD(v40[6]) = 87;
  v40[7] = __PAIR64__(v27, v28);
  v40[8] = v29;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v40, v28, v27, v26);
  v31 = (_QWORD *)WdLogNewEntry5_WdEvent(v30);
  v31[3] = v19;
  v31[4] = a2->hFunctionalVidPn;
  v31[5] = a2->pResultsFlags->0;
  v31[6] = a2->PathCount;
  WdLogEvent5_WdEvent(v31);
  if ( (_DWORD)v19 != -1073741801 && (_DWORD)v19 )
  {
    v34 = WdLogNewEntry5_WdError(v33, v32);
    *(_QWORD *)(v34 + 24) = v19;
    WdLogEvent5_WdError(v34);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v35, &EventProfilerExit, v36, 5076);
  return (unsigned int)v19;
}
