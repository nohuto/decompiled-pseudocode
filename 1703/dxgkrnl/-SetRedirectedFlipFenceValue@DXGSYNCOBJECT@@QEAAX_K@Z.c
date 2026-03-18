/*
 * XREFs of ?SetRedirectedFlipFenceValue@DXGSYNCOBJECT@@QEAAX_K@Z @ 0x1C0020910
 * Callers:
 *     ?VmBusSetRedirectedFlipFenceValue@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0032E30 (-VmBusSetRedirectedFlipFenceValue@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGSYNCOBJECT::SetRedirectedFlipFenceValue(
        DXGSYNCOBJECT *this,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // rax

  v4 = a2;
  if ( *((_DWORD *)this + 36) != 3 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 253LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_QWORD *)this + 11) > v4 )
    v4 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = v4;
}
