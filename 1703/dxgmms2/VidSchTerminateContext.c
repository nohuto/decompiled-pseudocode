/*
 * XREFs of VidSchTerminateContext @ 0x1C006BE20
 * Callers:
 *     VidSchiCreateContextInternal @ 0x1C000EE34 (VidSchiCreateContextInternal.c)
 *     VidSchTerminateAdapter @ 0x1C00ACAA0 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiDecrementContextReference @ 0x1C0010100 (VidSchiDecrementContextReference.c)
 *     ?VidSchiRemoveContextFromSyncPoints@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0010268 (-VidSchiRemoveContextFromSyncPoints@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C001E8C8 (-DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     Template_pqqqqqqqqppp @ 0x1C0028E20 (Template_pqqqqqqqqppp.c)
 *     VidSchFlushContext @ 0x1C004FDC0 (VidSchFlushContext.c)
 */

__int64 __fastcall VidSchTerminateContext(char *DeferredContext, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // r8d
  __int64 v8; // rax
  void *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r9
  __int128 v12; // xmm1
  bool v13; // cl
  __int64 v14; // rax
  int v15; // r8d
  __int128 v16; // xmm1
  bool v17; // cl
  int v18; // [rsp+60h] [rbp+Fh]
  char *v19; // [rsp+68h] [rbp+17h]
  __int128 v20; // [rsp+88h] [rbp+37h] BYREF
  __int128 v21; // [rsp+98h] [rbp+47h]

  if ( DeferredContext )
  {
    v3 = *(_QWORD *)(*((_QWORD *)DeferredContext + 12) + 24LL);
    ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 2688), 1u);
    _InterlockedCompareExchange((volatile signed __int32 *)DeferredContext + 226, 1, 0);
    ExReleaseResourceLite((PERESOURCE)(v3 + 2688));
    v20 = 0xDuLL;
    VidSchFlushContext(DeferredContext, (int *)&v20, v4, v5);
    v6 = *((_DWORD *)DeferredContext + 28);
    if ( (v6 & 1) != 0 && (v9 = (void *)*((_QWORD *)DeferredContext + 8)) != 0LL )
    {
      ADAPTER_RENDER::DdiDestroyContext(*(ADAPTER_RENDER **)(v3 + 8), v9);
      *((_QWORD *)DeferredContext + 8) = 0LL;
      if ( !bTracingEnabled )
        goto LABEL_4;
      v10 = *((_QWORD *)DeferredContext + 13);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 8);
        if ( !v11 )
          v11 = *((_QWORD *)DeferredContext + 13);
      }
      else
      {
        v11 = 0LL;
      }
      v12 = *(_OWORD *)(DeferredContext + 964);
      v13 = (*(_DWORD *)(v10 + 48) & 0x10) != 0;
      v20 = *(_OWORD *)(DeferredContext + 948);
      v21 = v12;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        goto LABEL_4;
      v19 = DeferredContext;
      LOBYTE(v18) = (2 * v13) | 1;
    }
    else
    {
      if ( (v6 & 4) == 0 || !bTracingEnabled )
        goto LABEL_4;
      v14 = *((_QWORD *)DeferredContext + 13);
      v15 = *((_DWORD *)DeferredContext + 28) & 0x40;
      if ( v14 )
      {
        v11 = *(_QWORD *)(v14 + 8);
        if ( !v11 )
          v11 = *((_QWORD *)DeferredContext + 13);
      }
      else
      {
        v11 = 0LL;
      }
      v16 = *(_OWORD *)(DeferredContext + 964);
      v17 = (*(_DWORD *)(v14 + 48) & 0x10) != 0;
      v20 = *(_OWORD *)(DeferredContext + 948);
      v21 = v16;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        goto LABEL_4;
      v19 = DeferredContext;
      v18 = (2 * (v17 | (v15 != 0 ? 2 : 0))) | 1;
    }
    Template_pqqqqqqqqppp(
      DWORD1(v20),
      &EventDestroyContext,
      v20,
      v11,
      *((_DWORD *)DeferredContext + 230),
      *((_DWORD *)DeferredContext + 231),
      v20,
      SBYTE4(v20),
      SBYTE8(v20),
      SBYTE12(v20),
      v21,
      v18,
      v19);
LABEL_4:
    VidSchiRemoveContextFromSyncPoints((struct _VIDSCH_CONTEXT *)DeferredContext);
    *((_QWORD *)DeferredContext + 7) = 0LL;
    VidSchiDecrementContextReference((struct _VIDSCH_CONTEXT *)DeferredContext, 0);
    return 0LL;
  }
  v8 = WdLogNewEntry5_WdAssertion(0LL, a2);
  *(_QWORD *)(v8 + 24) = -1073741811LL;
  WdLogEvent5_WdAssertion(v8);
  return 3221225485LL;
}
