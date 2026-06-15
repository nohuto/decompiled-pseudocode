/*
 * XREFs of ?ProcessTerminationWatcherCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180015FF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcess::ProcessTerminationWatcherCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        volatile signed __int32 *a2,
        struct _TP_WAIT *a3)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v5; // rbx
  int v6; // edi

  _InterlockedIncrement(a2 + 2);
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
  if ( v5 )
  {
    v5[1] = a2;
    *v5 = &CProcessTerminatedWorkItem::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  v6 = v5 == 0LL ? 0x8007000E : 0;
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
    if ( v6 >= 0 )
      v5 = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v5 + 8LL))(v5, 1LL);
  }
  else
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids, v6);
    }
    AudPolicyLogError("CProcessTerminatedWorkItem::CreateInstance", 670, v6);
  }
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x36u, &WPP_16513b4b06ea364292c42252679a25cf_Traceguids, v6);
    }
    AudPolicyLogError("CProcess::ProcessTerminationWatcherCallback", 3866, v6);
  }
}
