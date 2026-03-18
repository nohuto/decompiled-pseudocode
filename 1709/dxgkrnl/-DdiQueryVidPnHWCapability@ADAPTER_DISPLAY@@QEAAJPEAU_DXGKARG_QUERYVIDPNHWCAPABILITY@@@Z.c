/*
 * XREFs of ?DdiQueryVidPnHWCapability@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYVIDPNHWCAPABILITY@@@Z @ 0x1C017AF04
 * Callers:
 *     ?GetVidPnPathHwCapabilityInClientVidPn@VIDPN_MGR@@QEAAJIPEAU_D3DKMDT_VIDPN_HW_CAPABILITY@@@Z @ 0x1C01EE780 (-GetVidPnPathHwCapabilityInClientVidPn@VIDPN_MGR@@QEAAJIPEAU_D3DKMDT_VIDPN_HW_CAPABILITY@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0001A40 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiQueryVidPnHWCapability(
        DXGADAPTER **this,
        struct _DXGKARG_QUERYVIDPNHWCAPABILITY *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v12; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned __int8 v21; // cl
  _QWORD *v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  _BYTE v29[8]; // [rsp+20h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-60h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5047);
  if ( (int)DXGADAPTER::GetDriverVersion(this[2]) < 1105 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 2635LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !*((_QWORD *)this[2] + 84) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v7 + 24) = 2636LL;
    WdLogEvent5_WdAssertion(v7);
  }
  DXGADAPTER::AcquireDdiSync((__int64)this[2], 1);
  _InterlockedIncrement((volatile signed __int32 *)this[2] + 981);
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_18;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v12 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v12 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v12);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v10 = 0LL;
LABEL_18:
      v15 = 0;
      goto LABEL_19;
    }
    v10 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
    goto LABEL_18;
  v15 = *(_DWORD *)(v10 + 136);
LABEL_19:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v29, this[2]);
  v17 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_QUERYVIDPNHWCAPABILITY *))this[2] + 84))(
          *((_QWORD *)this[2] + 30),
          a2);
  if ( v29[0] )
    KeUnstackDetachProcess(&ApcState);
  v19 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v19 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v16, v18);
    v20[3] = 275LL;
    v20[4] = 16LL;
    v20[5] = this;
    v20[6] = CurrentIrql;
    v21 = KeGetCurrentIrql();
    v20[7] = v21;
    WdLogEvent5_WdCriticalError(v20);
  }
  if ( v10 && *(_DWORD *)(v10 + 136) != v15 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v16, v18);
    v22[3] = 275LL;
    v22[4] = 25LL;
    v23 = *(int *)(v10 + 136);
    v22[7] = 0LL;
    v22[5] = v23;
    v22[6] = v15;
    WdLogEvent5_WdCriticalError(v22);
  }
  _InterlockedDecrement((volatile signed __int32 *)this[2] + 981);
  v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v16);
  v24[3] = v17;
  v24[4] = *((_QWORD *)this[2] + 30);
  v24[5] = a2->hFunctionalVidPn;
  v24[6] = a2->TargetId;
  v24[7] = &a2->VidPnHWCaps;
  if ( (_DWORD)v17 != -1073741801 && (_DWORD)v17 )
  {
    v25 = WdLogNewEntry5_WdError(&a2->VidPnHWCaps);
    *(_QWORD *)(v25 + 24) = v17;
    WdLogEvent5_WdError(v25);
  }
  DXGADAPTER::ReleaseDdiSync(this[2]);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, 5047);
  return (unsigned int)v17;
}
