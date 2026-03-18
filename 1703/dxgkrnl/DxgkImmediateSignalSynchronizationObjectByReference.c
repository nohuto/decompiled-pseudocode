/*
 * XREFs of DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C008B4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KI@Z @ 0x1C008B518 (-SignalFence@DXGSYNCOBJECT@@QEAAJ_KI@Z.c)
 */

__int64 __fastcall DxgkImmediateSignalSynchronizationObjectByReference(__int64 a1, unsigned __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v8; // rax

  v3 = DXGSYNCOBJECT::SignalFence(*(DXGSYNCOBJECT **)a1, a2, *(_DWORD *)(a1 + 8));
  v6 = v3;
  if ( v3 < 0 )
  {
    v8 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v8 + 24) = a1;
    *(_QWORD *)(v8 + 32) = v6;
    WdLogEvent5_WdError(v8);
  }
  return (unsigned int)v6;
}
