/*
 * XREFs of VidSchTerminateContext @ 0x1C0078DA0
 * Callers:
 *     VidSchiCreateContextInternal @ 0x1C00117A8 (VidSchiCreateContextInternal.c)
 *     VidSchTerminateAdapter @ 0x1C00BE350 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiDecrementContextReference @ 0x1C0012890 (VidSchiDecrementContextReference.c)
 *     ?VidSchiRemoveContextFromSyncPoints@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0012A00 (-VidSchiRemoveContextFromSyncPoints@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C0022B6C (-DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C002DD70 (McTemplateK0pqqqqqqqqppp.c)
 *     VidSchFlushContext @ 0x1C0079050 (VidSchFlushContext.c)
 */

__int64 __fastcall VidSchTerminateContext(struct _VIDSCH_CONTEXT *a1, __int64 a2)
{
  __int64 v3; // rsi
  int v4; // r8d
  __int64 v6; // rax
  void *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // [rsp+60h] [rbp+Fh]
  struct _VIDSCH_CONTEXT *v12; // [rsp+68h] [rbp+17h]
  __int128 v13; // [rsp+88h] [rbp+37h]
  __int128 v14; // [rsp+98h] [rbp+47h]

  if ( a1 )
  {
    v3 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL);
    ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 2728), 1u);
    _InterlockedCompareExchange((volatile signed __int32 *)a1 + 222, 1, 0);
    ExReleaseResourceLite((PERESOURCE)(v3 + 2728));
    VidSchFlushContext(a1);
    v4 = *((_DWORD *)a1 + 28);
    if ( (v4 & 1) != 0 && (v7 = (void *)*((_QWORD *)a1 + 8)) != 0LL )
    {
      ADAPTER_RENDER::DdiDestroyContext(*(ADAPTER_RENDER **)(v3 + 8), v7);
      *((_QWORD *)a1 + 8) = 0LL;
      if ( !bTracingEnabled )
        goto LABEL_4;
      v8 = *((_QWORD *)a1 + 13);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 8);
        if ( !v9 )
          v9 = *((_QWORD *)a1 + 13);
      }
      else
      {
        v9 = 0LL;
      }
      v13 = *(_OWORD *)((char *)a1 + 932);
      v14 = *(_OWORD *)((char *)a1 + 948);
      if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        goto LABEL_4;
      v12 = a1;
      LOBYTE(v11) = (2 * ((*(_DWORD *)(v8 + 48) & 0x10) != 0)) | 1;
    }
    else
    {
      if ( (v4 & 4) == 0 || !bTracingEnabled )
        goto LABEL_4;
      v10 = *((_QWORD *)a1 + 13);
      if ( v10 )
      {
        v9 = *(_QWORD *)(v10 + 8);
        if ( !v9 )
          v9 = *((_QWORD *)a1 + 13);
      }
      else
      {
        v9 = 0LL;
      }
      v13 = *(_OWORD *)((char *)a1 + 932);
      v14 = *(_OWORD *)((char *)a1 + 948);
      if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        goto LABEL_4;
      v12 = a1;
      v11 = (2 * (((*(_DWORD *)(v10 + 48) & 0x10) != 0) | ((*((_DWORD *)a1 + 28) & 0x40) != 0 ? 2 : 0))) | 1;
    }
    McTemplateK0pqqqqqqqqppp(
      DWORD1(v13),
      &EventDestroyContext,
      v13,
      v9,
      *((_DWORD *)a1 + 226),
      *((_DWORD *)a1 + 227),
      v13,
      SBYTE4(v13),
      SBYTE8(v13),
      SBYTE12(v13),
      v14,
      v11,
      v12);
LABEL_4:
    VidSchiRemoveContextFromSyncPoints(a1);
    *((_QWORD *)a1 + 7) = 0LL;
    VidSchiDecrementContextReference(a1, 0);
    return 0LL;
  }
  v6 = WdLogNewEntry5_WdAssertion(0LL, a2);
  *(_QWORD *)(v6 + 24) = -1073741811LL;
  WdLogEvent5_WdAssertion(v6);
  return 3221225485LL;
}
