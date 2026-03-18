/*
 * XREFs of ?ReleaseOverlayId@ADAPTER_RENDER@@QEAAXI@Z @ 0x1C015B8AC
 * Callers:
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C01AC4AC (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::ReleaseOverlayId(ADAPTER_RENDER *this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax

  v3 = a2;
  if ( a2 >= *(_DWORD *)(*((_QWORD *)this + 2) + 1812LL) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 3160LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !*((_QWORD *)this + v3 + 75) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 3161LL;
    WdLogEvent5_WdAssertion(v5);
  }
  *((_QWORD *)this + v3 + 75) = 0LL;
}
