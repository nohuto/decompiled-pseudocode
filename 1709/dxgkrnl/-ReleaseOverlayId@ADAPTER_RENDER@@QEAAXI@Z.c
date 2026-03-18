/*
 * XREFs of ?ReleaseOverlayId@ADAPTER_RENDER@@QEAAXI@Z @ 0x1C017791C
 * Callers:
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C01B080C (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::ReleaseOverlayId(ADAPTER_RENDER *this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax

  v3 = a2;
  if ( a2 >= *(_DWORD *)(*((_QWORD *)this + 2) + 1676LL) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 2870LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !*((_QWORD *)this + v3 + 73) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 2871LL;
    WdLogEvent5_WdAssertion(v5);
  }
  *((_QWORD *)this + v3 + 73) = 0LL;
}
