/*
 * XREFs of ??1?$DXGNODELIST@VADAPTER_RENDER@@VDXGDEVICE@@@@AEAA@XZ @ 0x1C00232B4
 * Callers:
 *     ??1ADAPTER_RENDER@@QEAA@XZ @ 0x1C0173318 (--1ADAPTER_RENDER@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGNODELIST<ADAPTER_RENDER,DXGDEVICE>::~DXGNODELIST<ADAPTER_RENDER,DXGDEVICE>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax

  if ( (_QWORD *)*a1 != a1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v4 + 24) = 644LL;
    WdLogEvent5_WdAssertion(v4);
  }
}
