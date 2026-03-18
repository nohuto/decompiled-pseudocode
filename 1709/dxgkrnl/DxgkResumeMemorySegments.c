/*
 * XREFs of DxgkResumeMemorySegments @ 0x1C01787C8
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C0121B80 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0177D20 (-ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkResumeMemorySegments(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  ADAPTER_RENDER *v6; // rcx

  if ( !a1 )
  {
    v3 = WdLogNewEntry5_WdError(0LL);
    v4 = -1073741811;
    *(_QWORD *)(v3 + 24) = -1073741811LL;
LABEL_3:
    WdLogEvent5_WdError(v3);
    return v4;
  }
  v6 = *(ADAPTER_RENDER **)(a1 + 2312);
  if ( !v6 )
  {
    v3 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v3 + 24) = a1;
    v4 = -1073741637;
    *(_QWORD *)(v3 + 32) = -1073741637LL;
    goto LABEL_3;
  }
  return ADAPTER_RENDER::ResumeMemorySegments(v6, a2);
}
