/*
 * XREFs of ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C016E830
 * Callers:
 *     <none>
 * Callees:
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0012C04 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0012C30 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     Template_p @ 0x1C0013458 (Template_p.c)
 *     DxgkInvalidateDeviceState @ 0x1C003DC00 (DxgkInvalidateDeviceState.c)
 *     Template_xq @ 0x1C00414C4 (Template_xq.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0192440 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C0192660 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 */

void __fastcall DXGADAPTER::PresentDisplayOnlyRecoveryWorker(
        struct _TDR_RECOVERY_CONTEXT *StartContext,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // edx
  struct _ERESOURCE *v9; // rax
  __int64 v10; // rcx
  void *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // [rsp+20h] [rbp-28h]
  char v18; // [rsp+50h] [rbp+8h] BYREF
  char v19; // [rsp+51h] [rbp+9h]
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp+10h] BYREF

  v4 = *((_QWORD *)StartContext + 4);
  v19 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v18, a2, a3, a4);
  v8 = qword_1C006E790;
  if ( bTracingEnabled
    && (qword_1C006E790 & 0x1000000) != 0
    && (qword_1C006E790 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
  {
    Template_xq(v6, &EventPreAcquireAdapterLock, v7, v4, 1);
    v8 = qword_1C006E790;
  }
  v9 = *(struct _ERESOURCE **)(v4 + 144);
  if ( v9 )
  {
    do
    {
      if ( ExAcquireResourceExclusiveLite(v9, 0) )
        break;
      Interval.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      v9 = *(struct _ERESOURCE **)(v4 + 144);
    }
    while ( v9 );
    v8 = qword_1C006E790;
  }
  v10 = *(_QWORD *)(v4 + 144);
  if ( bTracingEnabled
    && (v8 & 0x1000000) != 0
    && (v8 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
  {
    LODWORD(v17) = v10 != 0;
    Template_xq(v10, &EventPostAcquireAdapterLock, v7, v4, v17);
  }
  if ( *(_QWORD *)(v4 + 144) )
  {
    v11 = *(void **)(v4 + 192);
    if ( v11 )
      ObfReferenceObject(*(PVOID *)(v4 + 192));
    TdrCollectDbgInfoStage2(StartContext);
    if ( bTracingEnabled
      && (qword_1C006E790 & 0x1000000) != 0
      && (qword_1C006E790 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    {
      Template_p(v12, &EventReleaseAdapterLock, v13, v4);
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v4 + 144));
    if ( v11 )
    {
      if ( (*(_DWORD *)(v4 + 300) & 4) == 0 )
        DxgkInvalidateDeviceState((__int64)v11);
      ObfDereferenceObject(v11);
    }
  }
  TdrCompleteRecoveryContext(StartContext, 1, 0);
  if ( v19 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v18, v14, v15, v16);
}
