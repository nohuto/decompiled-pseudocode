/*
 * XREFs of ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0171E20
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C017286C (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01A7650 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000E814 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000E840 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x1C001D6D0 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ?DdiResetFromTimeout@ADAPTER_RENDER@@QEAAJXZ @ 0x1C017BC60 (-DdiResetFromTimeout@ADAPTER_RENDER@@QEAAJXZ.c)
 *     TdrBugcheckOnTimeout @ 0x1C01A8024 (TdrBugcheckOnTimeout.c)
 */

__int64 __fastcall DXGADAPTER::PrepareToReset(DXGADAPTER *this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  bool v8; // r15
  ULONG IsResourceAcquiredSharedLite; // eax
  bool v10; // r14
  unsigned int i; // esi
  char v13; // [rsp+50h] [rbp+8h] BYREF
  char v14; // [rsp+51h] [rbp+9h]
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 6895LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !*((_QWORD *)this + 289) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 6900LL;
    WdLogEvent5_WdAssertion(v5);
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 289) + 528LL) + 8LL) + 112LL))(*(_QWORD *)(*((_QWORD *)this + 289) + 536LL));
  if ( !KeResetEvent((PRKEVENT)((char *)this + 208)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 6924LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v14 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v13);
  v8 = ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 29)) != 0;
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(*((PERESOURCE *)this + 29));
  v10 = IsResourceAcquiredSharedLite != 0;
  if ( v8 )
  {
LABEL_15:
    if ( (int)ADAPTER_RENDER::DdiResetFromTimeout(*((ADAPTER_RENDER **)this + 289)) < 0 )
    {
      *((_QWORD *)a2 + 13) = *((_QWORD *)this + 54);
      TdrBugcheckOnTimeout((ULONG_PTR)a2);
    }
    *((_BYTE *)this + 2270) = 1;
    if ( !v8 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)this + 29));
      if ( v10 )
        ExAcquireResourceSharedLite(*((PERESOURCE *)this + 29), 1u);
    }
    KeSetEvent((PRKEVENT)((char *)this + 208), 0, 0);
    if ( v14 )
      DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v13);
    return 0LL;
  }
  else
  {
    if ( IsResourceAcquiredSharedLite )
      ExReleaseResourceLite(*((PERESOURCE *)this + 29));
    for ( i = 0; ; ++i )
    {
      if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)this + 29), 0) )
      {
        *((_DWORD *)a2 + 699) = i;
        goto LABEL_15;
      }
      if ( i >= dword_1C0060D70 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    KeSetEvent((PRKEVENT)((char *)this + 208), 0, 0);
    DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)&v13);
    return 3221225653LL;
  }
}
