/*
 * XREFs of ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C014DAA0
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C014F2D4 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C019A2D0 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000AECC (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000AEF8 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x1C0023D14 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ?DdiResetFromTimeout@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01613B8 (-DdiResetFromTimeout@ADAPTER_RENDER@@QEAAJXZ.c)
 *     TdrBugcheckOnTimeout @ 0x1C019ACA4 (TdrBugcheckOnTimeout.c)
 */

__int64 __fastcall DXGADAPTER::PrepareToReset(DXGADAPTER *this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  bool v9; // r15
  ULONG IsResourceAcquiredSharedLite; // eax
  bool v11; // r14
  unsigned int i; // esi
  char v14; // [rsp+50h] [rbp+8h] BYREF
  char v15; // [rsp+51h] [rbp+9h]
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 7289LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = *((_QWORD *)this + 308);
  if ( !v5 )
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v6 + 24) = 7294LL;
    WdLogEvent5_WdAssertion(v6);
    v5 = *((_QWORD *)this + 308);
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v5 + 544) + 8LL) + 112LL))(*(_QWORD *)(v5 + 552));
  if ( !KeResetEvent((PRKEVENT)((char *)this + 208)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 7318LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v15 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v14);
  v9 = ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 29)) != 0;
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(*((PERESOURCE *)this + 29));
  v11 = IsResourceAcquiredSharedLite != 0;
  if ( v9 )
  {
LABEL_15:
    if ( (int)ADAPTER_RENDER::DdiResetFromTimeout(*((ADAPTER_RENDER **)this + 308)) < 0 )
    {
      *((_QWORD *)a2 + 13) = *((_QWORD *)this + 54);
      TdrBugcheckOnTimeout((ULONG_PTR)a2);
    }
    *((_BYTE *)this + 2415) = 1;
    if ( !v9 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)this + 29));
      if ( v11 )
        ExAcquireResourceSharedLite(*((PERESOURCE *)this + 29), 1u);
    }
    KeSetEvent((PRKEVENT)((char *)this + 208), 0, 0);
    if ( v15 )
      DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v14);
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
      if ( i >= dword_1C007BD38 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    KeSetEvent((PRKEVENT)((char *)this + 208), 0, 0);
    DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)&v14);
    return 3221225653LL;
  }
}
