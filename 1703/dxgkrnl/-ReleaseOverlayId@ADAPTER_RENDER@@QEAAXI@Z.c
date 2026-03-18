/*
 * XREFs of ?ReleaseOverlayId@ADAPTER_RENDER@@QEAAXI@Z @ 0x1C0173E2C
 * Callers:
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C0199D9C (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::ReleaseOverlayId(ADAPTER_RENDER *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax

  v5 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *(_DWORD *)(*((_QWORD *)this + 2) + 1652LL) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 2738LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !*((_QWORD *)this + v5 + 61) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 2739LL;
    WdLogEvent5_WdAssertion(v7);
  }
  *((_QWORD *)this + v5 + 61) = 0LL;
}
