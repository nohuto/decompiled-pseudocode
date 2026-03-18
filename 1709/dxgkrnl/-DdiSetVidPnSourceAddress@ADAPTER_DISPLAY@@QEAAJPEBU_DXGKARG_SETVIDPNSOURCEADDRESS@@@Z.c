/*
 * XREFs of ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0007110
 * Callers:
 *     ?ADAPTER_DISPLAY_DdiSetVidPnSourceAddress@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0006D30 (-ADAPTER_DISPLAY_DdiSetVidPnSourceAddress@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_SETVIDPNSOURCEAD.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0008C80 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C016F9B4 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(
        ADAPTER_DISPLAY *this,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESS *a2)
{
  char v4; // r12
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  unsigned __int8 CurrentIrql; // r15
  __int64 v9; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v11; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v14; // ebp
  struct DXGADAPTER *v15; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v17; // rcx
  DXGGLOBAL *v18; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v20; // rcx
  _QWORD *v21; // rax
  unsigned __int8 v22; // cl
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  HANDLE hAllocation; // rcx
  __int64 v26; // rax
  char v28; // [rsp+20h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-60h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(this, &EventProfilerEnter);
  v4 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
    v4 = 1;
  }
  v5 = *((_QWORD *)this + 2);
  v6 = *(_DWORD *)(v5 + 1968);
  if ( v6 != 8960
    && v6 != 8704
    && v6 != 8448
    && v6 != 0x2000
    && v6 != 4864
    && !*(_QWORD *)(v5 + 704)
    && v6 != 4608
    && (!*(_QWORD *)(v5 + 672) || !*(_QWORD *)(v5 + 664) || (*(_DWORD *)(v5 + 1684) & 4) == 0) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))(v5 + 496))(
           *(_QWORD *)(v5 + 240),
           a2);
    goto LABEL_42;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 3924));
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0LL;
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v11 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v11 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v11);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !(unsigned int)IsThreadCrossSessionAttached()
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v9 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
      if ( v9 )
      {
        v14 = *(_DWORD *)(v9 + 136);
        goto LABEL_29;
      }
    }
    else
    {
      v9 = 0LL;
    }
  }
  v14 = 0;
LABEL_29:
  v15 = (struct DXGADAPTER *)*((_QWORD *)this + 2);
  v28 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    Global = DXGGLOBAL::GetGlobal(v5);
    if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1108), v15) )
    {
      v18 = DXGGLOBAL::GetGlobal(v17);
      SessionData = DXGGLOBAL::GetSessionData(v18);
      if ( SessionData )
      {
        v20 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2326);
        if ( v20 )
        {
          KeStackAttachProcess(v20, &ApcState);
          v28 = 1;
        }
      }
    }
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))(*((_QWORD *)this + 2) + 496LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
         a2);
  if ( v28 )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v21[3] = 275LL;
    v21[4] = 16LL;
    v21[5] = this;
    v21[6] = CurrentIrql;
    v22 = KeGetCurrentIrql();
    v21[7] = v22;
    WdLogEvent5_WdCriticalError(v21);
  }
  if ( v9 && *(_DWORD *)(v9 + 136) != v14 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v23[3] = 275LL;
    v23[4] = 25LL;
    v23[5] = *(int *)(v9 + 136);
    v23[6] = v14;
    v23[7] = 0LL;
    WdLogEvent5_WdCriticalError(v23);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3924LL));
LABEL_42:
  v24 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v24[3] = (int)v7;
  v24[4] = a2->VidPnSourceId;
  v24[5] = a2->PrimarySegment;
  v24[6] = a2->PrimaryAddress.QuadPart;
  hAllocation = a2->hAllocation;
  v24[7] = hAllocation;
  if ( v7 && v7 != -1073741811 && v7 != -1073741801 )
  {
    v26 = WdLogNewEntry5_WdError(hAllocation);
    *(_QWORD *)(v26 + 24) = (int)v7;
    WdLogEvent5_WdError(v26);
  }
  if ( v4 )
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(hAllocation, &EventProfilerExit);
  return v7;
}
