/*
 * XREFs of DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C00F7E50
 * Callers:
 *     <none>
 * Callees:
 *     ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@1@@Z @ 0x1C008AB0C (-SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@1@@Z.c)
 */

__int64 __fastcall DxgkImmediateSignalSynchronizationObjectByReference(__int64 a1, unsigned __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v7; // rax

  v3 = DXGSYNCOBJECT::SignalFence(*(_DWORD **)a1, a2, *(_DWORD *)(a1 + 8));
  v5 = v3;
  if ( v3 < 0 )
  {
    v7 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v7 + 24) = a1;
    *(_QWORD *)(v7 + 32) = v5;
    WdLogEvent5_WdError(v7);
  }
  return (unsigned int)v5;
}
