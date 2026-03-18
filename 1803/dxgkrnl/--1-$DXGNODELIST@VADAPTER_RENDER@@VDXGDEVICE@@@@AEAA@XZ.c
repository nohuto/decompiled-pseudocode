/*
 * XREFs of ??1?$DXGNODELIST@VADAPTER_RENDER@@VDXGDEVICE@@@@AEAA@XZ @ 0x1C0028B9C
 * Callers:
 *     ??1ADAPTER_RENDER@@QEAA@XZ @ 0x1C0158A24 (--1ADAPTER_RENDER@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGNODELIST<ADAPTER_RENDER,DXGDEVICE>::~DXGNODELIST<ADAPTER_RENDER,DXGDEVICE>(_QWORD *a1)
{
  __int64 v1; // rax

  if ( (_QWORD *)*a1 != a1 )
  {
    v1 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v1 + 24) = 699LL;
    WdLogEvent5_WdAssertion(v1);
  }
}
