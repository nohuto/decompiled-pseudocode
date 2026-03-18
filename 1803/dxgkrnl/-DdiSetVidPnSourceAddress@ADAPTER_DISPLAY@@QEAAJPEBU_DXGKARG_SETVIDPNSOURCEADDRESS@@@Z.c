/*
 * XREFs of ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0014590
 * Callers:
 *     ?ADAPTER_DISPLAY_DdiSetVidPnSourceAddress@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0014380 (-ADAPTER_DISPLAY_DdiSetVidPnSourceAddress@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_SETVIDPNSOURCEAD.c)
 * Callees:
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0007014 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00161C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0016230 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001B400 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00FA0F4 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(
        struct DXGADAPTER **this,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESS *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // rax
  int CurrentProcessSessionId; // edi
  __int64 v9; // rcx
  __int64 ThreadWin32Thread; // rax
  int v11; // eax
  char v12; // r12
  struct DXGADAPTER *v13; // rcx
  int v14; // eax
  unsigned int v15; // edi
  unsigned __int8 CurrentIrql; // r15
  __int64 v17; // rsi
  struct _KTHREAD *v18; // rdi
  __int64 v19; // rax
  int v20; // esi
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // ebp
  struct DXGADAPTER *v24; // rdi
  struct DXGGLOBAL *Global; // rax
  DXGGLOBAL *v26; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v28; // rcx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  unsigned __int8 v31; // cl
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // r8
  HANDLE hAllocation; // rcx
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rax
  int v39; // eax
  char v41; // [rsp+20h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-70h] BYREF

  v3 = 0LL;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(this, &EventProfilerEnter, a3, 5010LL);
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v7 = WdLogNewEntry5_WdAssertion(this);
      *(_QWORD *)(v7 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v7);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(this);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !(unsigned int)IsThreadCrossSessionAttached(v9)
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v3 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
    }
    else
    {
      v3 = 0LL;
    }
    if ( v3 )
    {
      v11 = *(_DWORD *)(v3 + 140);
      if ( !v11 )
        *(_DWORD *)(v3 + 144) = 5010;
      *(_DWORD *)(v3 + 140) = v11 + 1;
    }
  }
  v12 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    DXGADAPTER::AcquireDdiSync(this[2], 1LL);
    v12 = 1;
  }
  v13 = this[2];
  v14 = *((_DWORD *)v13 + 526);
  if ( v14 != 9216
    && v14 != 8960
    && v14 != 8704
    && v14 != 8448
    && v14 != 0x2000
    && v14 != 4864
    && !*((_QWORD *)v13 + 88)
    && v14 != 4608
    && (!*((_QWORD *)v13 + 84) || !*((_QWORD *)v13 + 83) || (*((_DWORD *)v13 + 455) & 4) == 0) )
  {
    v15 = (*((__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))v13 + 62))(
            *((_QWORD *)v13 + 30),
            a2);
    goto LABEL_57;
  }
  _InterlockedIncrement((volatile signed __int32 *)v13 + 1042);
  CurrentIrql = KeGetCurrentIrql();
  v17 = 0LL;
  if ( CurrentIrql < 2u )
  {
    v18 = KeGetCurrentThread();
    if ( !v18 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v19 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v19);
    }
    v20 = PsGetCurrentProcessSessionId(v13);
    if ( v20
      && (unsigned int)PsGetThreadSessionId(v18) == v20
      && !(unsigned int)IsThreadCrossSessionAttached(v21)
      && (v22 = PsGetThreadWin32Thread(v18)) != 0
      && *(_QWORD *)v22 )
    {
      v17 = *(_QWORD *)(*(_QWORD *)v22 + 80LL);
      if ( v17 )
      {
        v23 = *(_DWORD *)(v17 + 136);
        goto LABEL_44;
      }
    }
    else
    {
      v17 = 0LL;
    }
  }
  v23 = 0;
LABEL_44:
  v24 = this[2];
  v41 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1188), v24) )
    {
      v26 = DXGGLOBAL::GetGlobal();
      SessionData = DXGGLOBAL::GetSessionData(v26);
      if ( SessionData )
      {
        v28 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2332);
        if ( v28 )
        {
          KeStackAttachProcess(v28, &ApcState);
          v41 = 1;
        }
      }
    }
  }
  v15 = (*((__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))this[2] + 62))(
          *((_QWORD *)this[2] + 30),
          a2);
  if ( v41 )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29);
    v30[3] = 275LL;
    v30[4] = 16LL;
    v30[5] = this;
    v30[6] = CurrentIrql;
    v31 = KeGetCurrentIrql();
    v30[7] = v31;
    WdLogEvent5_WdCriticalError(v30);
  }
  if ( v17 && *(_DWORD *)(v17 + 136) != v23 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29);
    v32[3] = 275LL;
    v32[4] = 38LL;
    v32[5] = *(int *)(v17 + 136);
    v32[6] = v23;
    v32[7] = 0LL;
    WdLogEvent5_WdCriticalError(v32);
  }
  _InterlockedDecrement((volatile signed __int32 *)this[2] + 1042);
LABEL_57:
  v33 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v33[3] = (int)v15;
  v33[4] = a2->VidPnSourceId;
  v33[5] = a2->PrimarySegment;
  v33[6] = a2->PrimaryAddress.QuadPart;
  hAllocation = a2->hAllocation;
  v33[7] = hAllocation;
  if ( v15 && v15 != -1073741811 && v15 != -1073741801 )
  {
    v36 = WdLogNewEntry5_WdError(hAllocation);
    *(_QWORD *)(v36 + 24) = (int)v15;
    WdLogEvent5_WdError(v36);
  }
  if ( v12 )
    DXGADAPTER::ReleaseDdiSync(this[2]);
  if ( v3 )
  {
    v37 = *(_DWORD *)(v3 + 140);
    if ( !v37 )
    {
      v38 = WdLogNewEntry5_WdAssertion(hAllocation);
      *(_QWORD *)(v38 + 24) = 229LL;
      WdLogEvent5_WdAssertion(v38);
      v37 = *(_DWORD *)(v3 + 140);
    }
    v39 = v37 - 1;
    *(_DWORD *)(v3 + 140) = v39;
    if ( !v39 )
      *(_DWORD *)(v3 + 144) = -1;
  }
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(hAllocation, &EventProfilerExit, v34, 5010LL);
  return v15;
}
