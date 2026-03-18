/*
 * XREFs of ?DdiQueryVidPnHWCapability@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYVIDPNHWCAPABILITY@@@Z @ 0x1C0177600
 * Callers:
 *     ?GetVidPnPathHwCapabilityInClientVidPn@VIDPN_MGR@@QEAAJIPEAU_D3DKMDT_VIDPN_HW_CAPABILITY@@@Z @ 0x1C01D2C58 (-GetVidPnPathHwCapabilityInClientVidPn@VIDPN_MGR@@QEAAJIPEAU_D3DKMDT_VIDPN_HW_CAPABILITY@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiQueryVidPnHWCapability(
        DXGADAPTER **this,
        struct _DXGKARG_QUERYVIDPNHWCAPABILITY *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v16; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v18; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v21; // ebp
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  _QWORD *v27; // rax
  unsigned __int8 v28; // cl
  _QWORD *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  _BYTE v37[8]; // [rsp+20h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-60h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5047);
  if ( (int)DXGADAPTER::GetDriverVersion(this[2]) < 1105 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v9 + 24) = 2577LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !*((_QWORD *)this[2] + 84) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v10 + 24) = 2578LL;
    WdLogEvent5_WdAssertion(v10);
  }
  DXGADAPTER::AcquireDdiSync((__int64)this[2], 1);
  _InterlockedIncrement((volatile signed __int32 *)this[2] + 973);
  CurrentIrql = KeGetCurrentIrql();
  v16 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_17;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v18 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v18 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v18);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12, v11, v13, v14);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v16 = 0LL;
LABEL_17:
      v21 = 0;
      goto LABEL_18;
    }
    v16 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v16 )
    goto LABEL_17;
  v21 = *(_DWORD *)(v16 + 136);
LABEL_18:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v37, this[2]);
  v23 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_QUERYVIDPNHWCAPABILITY *))this[2] + 84))(
          *((_QWORD *)this[2] + 30),
          a2);
  if ( v37[0] )
    KeUnstackDetachProcess(&ApcState);
  v26 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v26 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v22, v24);
    v27[3] = 275LL;
    v27[4] = 16LL;
    v27[5] = this;
    v27[6] = CurrentIrql;
    v28 = KeGetCurrentIrql();
    v27[7] = v28;
    WdLogEvent5_WdCriticalError(v27);
  }
  if ( v16 && *(_DWORD *)(v16 + 136) != v21 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v22, v24);
    v29[3] = 275LL;
    v29[4] = 25LL;
    v30 = *(int *)(v16 + 136);
    v29[7] = 0LL;
    v29[5] = v30;
    v29[6] = v21;
    WdLogEvent5_WdCriticalError(v29);
  }
  _InterlockedDecrement((volatile signed __int32 *)this[2] + 973);
  v31 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v22, v24, v25);
  v31[3] = v23;
  v32 = *((_QWORD *)this[2] + 30);
  v31[4] = v32;
  v31[5] = a2->hFunctionalVidPn;
  v31[6] = a2->TargetId;
  v31[7] = &a2->VidPnHWCaps;
  if ( (_DWORD)v23 != -1073741801 && (_DWORD)v23 )
  {
    v33 = WdLogNewEntry5_WdError(&a2->VidPnHWCaps, v32);
    *(_QWORD *)(v33 + 24) = v23;
    WdLogEvent5_WdError(v33);
  }
  DXGADAPTER::ReleaseDdiSync(this[2]);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v34, &EventProfilerExit, v35, 5047);
  return (unsigned int)v23;
}
