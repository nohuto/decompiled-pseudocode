/*
 * XREFs of ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C000B190
 * Callers:
 *     ?ADAPTER_DISPLAY_DdiSetVidPnSourceAddress@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C000AC80 (-ADAPTER_DISPLAY_DdiSetVidPnSourceAddress@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_SETVIDPNSOURCEAD.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000D924 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C016BBD4 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(
        ADAPTER_DISPLAY *this,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESS *a2,
        __int64 a3,
        __int64 a4)
{
  char v6; // r14
  __int64 v7; // rcx
  int v8; // eax
  unsigned __int8 CurrentIrql; // bp
  __int64 v10; // r15
  int v11; // r12d
  struct DXGADAPTER *v12; // rsi
  unsigned int v13; // esi
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  HANDLE hAllocation; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  int CurrentProcessSessionId; // r15d
  __int64 ThreadWin32Thread; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v23; // rax
  DXGGLOBAL *v24; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v26; // rcx
  _QWORD *v27; // rax
  unsigned __int8 v28; // cl
  _QWORD *v29; // rax
  __int64 v30; // rax
  char v31; // [rsp+20h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-60h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(this, &EventProfilerEnter, a3, 5010LL);
  v6 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
    v6 = 1;
  }
  v7 = *((_QWORD *)this + 2);
  v8 = *(_DWORD *)(v7 + 1944);
  if ( v8 != 0x2000
    && v8 != 8448
    && v8 != 4864
    && v8 != 8704
    && !*(_QWORD *)(v7 + 704)
    && v8 != 4608
    && (!*(_QWORD *)(v7 + 672) || !*(_QWORD *)(v7 + 664) || (*(_DWORD *)(v7 + 1660) & 4) == 0) )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))(v7 + 496))(
            *(_QWORD *)(v7 + 240),
            a2);
    goto LABEL_14;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 3892));
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_6;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v23 = WdLogNewEntry5_WdAssertion(v7, a2, a3, a4);
    *(_QWORD *)(v23 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v23);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( !CurrentProcessSessionId
    || (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId
    || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
    || !*(_QWORD *)ThreadWin32Thread )
  {
    v10 = 0LL;
    goto LABEL_6;
  }
  v10 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  if ( !v10 )
  {
LABEL_6:
    v11 = 0;
    goto LABEL_7;
  }
  v11 = *(_DWORD *)(v10 + 136);
LABEL_7:
  v12 = (struct DXGADAPTER *)*((_QWORD *)this + 2);
  v31 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1108), v12) )
    {
      v24 = DXGGLOBAL::GetGlobal();
      SessionData = DXGGLOBAL::GetSessionData(v24);
      if ( SessionData )
      {
        v26 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2325);
        if ( v26 )
        {
          KeStackAttachProcess(v26, &ApcState);
          v31 = 1;
        }
      }
    }
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))(*((_QWORD *)this + 2) + 496LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  if ( v31 )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v27[3] = 275LL;
    v27[4] = 16LL;
    v27[5] = this;
    v27[6] = CurrentIrql;
    v28 = KeGetCurrentIrql();
    v27[7] = v28;
    WdLogEvent5_WdCriticalError(v27);
  }
  if ( v10 && *(_DWORD *)(v10 + 136) != v11 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v29[3] = 275LL;
    v29[4] = 25LL;
    v29[5] = *(int *)(v10 + 136);
    v29[6] = v11;
    v29[7] = 0LL;
    WdLogEvent5_WdCriticalError(v29);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
LABEL_14:
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v14[3] = (int)v13;
  v14[4] = a2->VidPnSourceId;
  v14[5] = a2->PrimarySegment;
  v14[6] = a2->PrimaryAddress.QuadPart;
  hAllocation = a2->hAllocation;
  v14[7] = hAllocation;
  if ( v13 && v13 != -1073741811 && v13 != -1073741801 )
  {
    v30 = WdLogNewEntry5_WdError(hAllocation, v15);
    *(_QWORD *)(v30 + 24) = (int)v13;
    WdLogEvent5_WdError(v30);
  }
  if ( v6 )
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(hAllocation, &EventProfilerExit, v16, 5010LL);
  return v13;
}
