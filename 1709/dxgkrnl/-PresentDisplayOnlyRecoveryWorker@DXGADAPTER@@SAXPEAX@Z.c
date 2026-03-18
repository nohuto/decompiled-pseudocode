/*
 * XREFs of ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C0172000
 * Callers:
 *     <none>
 * Callees:
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000E814 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000E840 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     McTemplateK0p @ 0x1C00204D4 (McTemplateK0p.c)
 *     McTemplateK0pt @ 0x1C0020B24 (McTemplateK0pt.c)
 *     DxgkInvalidateDeviceState @ 0x1C002E788 (DxgkInvalidateDeviceState.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01A6F60 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C01A7180 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 */

void __fastcall DXGADAPTER::PresentDisplayOnlyRecoveryWorker(struct _TDR_RECOVERY_CONTEXT *StartContext)
{
  __int64 v1; // rbx
  __int64 v3; // r8
  void *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // [rsp+20h] [rbp-28h]
  char v7; // [rsp+50h] [rbp+8h] BYREF
  char v8; // [rsp+51h] [rbp+9h]
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp+10h] BYREF

  v1 = *((_QWORD *)StartContext + 4);
  v8 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v7);
  if ( bTracingEnabled
    && (qword_1C005F010 & 0x1000000) != 0
    && (qword_1C005F010 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
  {
    McTemplateK0pt(&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v3, v1, 1);
  }
  while ( *(_QWORD *)(v1 + 144) && !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v1 + 144), 0) )
  {
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  if ( bTracingEnabled
    && (qword_1C005F010 & 0x1000000) != 0
    && (qword_1C005F010 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
  {
    LODWORD(v6) = *(_QWORD *)(v1 + 144) != 0LL;
    McTemplateK0pt(&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v3, v1, v6);
  }
  if ( *(_QWORD *)(v1 + 144) )
  {
    v4 = *(void **)(v1 + 192);
    if ( v4 )
      ObfReferenceObject(*(PVOID *)(v1 + 192));
    TdrCollectDbgInfoStage2(StartContext);
    if ( bTracingEnabled
      && (qword_1C005F010 & 0x1000000) != 0
      && (qword_1C005F010 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
    {
      McTemplateK0p(&DxgkControlGuid_Context, &EventReleaseAdapterLock, v5, v1);
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v1 + 144));
    if ( v4 )
    {
      if ( (*(_DWORD *)(v1 + 300) & 4) == 0 )
        DxgkInvalidateDeviceState((__int64)v4);
      ObfDereferenceObject(v4);
    }
  }
  TdrCompleteRecoveryContext(StartContext, 1, 0);
  if ( v8 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v7);
}
