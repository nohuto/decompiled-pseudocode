/*
 * XREFs of ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C016E650
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C016F098 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0192B40 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0012C04 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0012C30 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x1C00203F0 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ?DdiResetFromTimeout@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0178334 (-DdiResetFromTimeout@ADAPTER_RENDER@@QEAAJXZ.c)
 *     TdrBugcheckOnTimeout @ 0x1C019350C (TdrBugcheckOnTimeout.c)
 */

__int64 __fastcall DXGADAPTER::PrepareToReset(
        DXGADAPTER *this,
        struct _TDR_RECOVERY_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  bool v13; // r15
  ULONG IsResourceAcquiredSharedLite; // eax
  bool v15; // r14
  unsigned int i; // esi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // [rsp+50h] [rbp+8h] BYREF
  char v25; // [rsp+51h] [rbp+9h]
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v6 + 24) = 6789LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !*((_QWORD *)this + 286) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 6794LL;
    WdLogEvent5_WdAssertion(v7);
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 286) + 432LL) + 8LL) + 112LL))(*(_QWORD *)(*((_QWORD *)this + 286) + 440LL));
  if ( !KeResetEvent((PRKEVENT)((char *)this + 208)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v12 + 24) = 6818LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v25 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v24, v8, v10, v11);
  v13 = ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 29)) != 0;
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(*((PERESOURCE *)this + 29));
  v15 = IsResourceAcquiredSharedLite != 0;
  if ( v13 )
  {
LABEL_15:
    if ( (int)ADAPTER_RENDER::DdiResetFromTimeout(*((ADAPTER_RENDER **)this + 286)) < 0 )
    {
      *((_QWORD *)a2 + 13) = *((_QWORD *)this + 54);
      TdrBugcheckOnTimeout((ULONG_PTR)a2);
    }
    *((_BYTE *)this + 2245) = 1;
    if ( !v13 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)this + 29));
      if ( v15 )
        ExAcquireResourceSharedLite(*((PERESOURCE *)this + 29), 1u);
    }
    KeSetEvent((PRKEVENT)((char *)this + 208), 0, 0);
    if ( v25 )
      DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v24, v21, v22, v23);
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
      if ( i >= dword_1C006FEF0 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    KeSetEvent((PRKEVENT)((char *)this + 208), 0, 0);
    DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)&v24, v17, v18, v19);
    return 3221225653LL;
  }
}
