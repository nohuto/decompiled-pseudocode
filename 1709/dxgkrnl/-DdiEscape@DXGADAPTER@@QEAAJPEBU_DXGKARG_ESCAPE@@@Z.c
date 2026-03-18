/*
 * XREFs of ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C0083F38
 * Callers:
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1C007E7E8 (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 *     DxgkEscape @ 0x1C009EC60 (DxgkEscape.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0001A40 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0008C80 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::DdiEscape(DXGADAPTER *this, const struct _DXGKARG_ESCAPE *a2, __int64 a3)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v13; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v16; // ebp
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned __int8 v21; // cl
  _QWORD *v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  _BYTE v30[8]; // [rsp+20h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-60h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5022);
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  if ( *((_BYTE *)Global + 1112)
    && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1108), this) )
  {
    LODWORD(v8) = -1073741637;
    goto LABEL_40;
  }
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  _InterlockedIncrement((volatile signed __int32 *)this + 981);
  CurrentIrql = KeGetCurrentIrql();
  v11 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_17;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v13 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v13);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v11 = 0LL;
      goto LABEL_17;
    }
    v11 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    v16 = *(_DWORD *)(v11 + 136);
    goto LABEL_18;
  }
LABEL_17:
  v16 = 0;
LABEL_18:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v30, this);
  v8 = (*((int (__fastcall **)(_QWORD, const struct _DXGKARG_ESCAPE *))this + 56))(*((_QWORD *)this + 30), a2);
  if ( v30[0] )
    KeUnstackDetachProcess(&ApcState);
  v19 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v19 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v17, v18);
    v20[3] = 275LL;
    v20[4] = 16LL;
    v20[5] = this;
    v20[6] = CurrentIrql;
    v21 = KeGetCurrentIrql();
    v20[7] = v21;
    WdLogEvent5_WdCriticalError(v20);
  }
  if ( v11 && *(_DWORD *)(v11 + 136) != v16 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v17, v18);
    v22[3] = 275LL;
    v22[4] = 25LL;
    v23 = *(int *)(v11 + 136);
    v22[7] = 0LL;
    v22[5] = v23;
    v22[6] = v16;
    WdLogEvent5_WdCriticalError(v22);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 981);
  v24 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v24[3] = v8;
  v24[4] = *((_QWORD *)this + 30);
  v24[5] = a2->hDevice;
  v24[6] = a2->PrivateDriverDataSize;
  if ( a2->PrivateDriverDataSize <= 4 )
    v25 = 0LL;
  else
    v25 = *(unsigned int *)a2->pPrivateDriverData;
  v24[7] = v25;
  WdLogEvent5_WdEvent(v24);
  if ( (_DWORD)v8 == -1073741823 )
  {
    v28 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v28 + 24) = -1073741823LL;
    WdLogEvent5_WdEvent(v28);
  }
  else if ( (_DWORD)v8 != -1073741811
         && (_DWORD)v8 != -1073741801
         && (_DWORD)v8 != -1073741795
         && (_DWORD)v8 != -1073741674
         && (_DWORD)v8 )
  {
    v27 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v27 + 24) = v8;
    WdLogEvent5_WdError(v27);
  }
  DXGADAPTER::ReleaseDdiSync(this);
LABEL_40:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v6, &EventProfilerExit, v7, 5022);
  return (unsigned int)v8;
}
