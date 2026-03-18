/*
 * XREFs of ?DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ @ 0x1C003446C
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00D31DC (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     NtDxgkVailDisconnect @ 0x1C01E8F80 (NtDxgkVailDisconnect.c)
 * Callees:
 *     ?DisableVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C01E6908 (-DisableVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 */

void __fastcall DXGVAILOBJECT::DisableVmBusChannel(struct _KTHREAD **this)
{
  __int64 v2; // rax

  if ( this[5] != KeGetCurrentThread() )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 272LL;
    WdLogEvent5_WdAssertion(v2);
  }
  if ( *((_BYTE *)this + 104) )
  {
    DisableVmBusChannel(this[12]);
    *((_BYTE *)this + 104) = 0;
  }
}
