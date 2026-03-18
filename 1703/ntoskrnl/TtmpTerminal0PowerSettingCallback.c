/*
 * XREFs of TtmpTerminal0PowerSettingCallback @ 0x1406D9D00
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x1406D8588 (TtmiTerminalSetDisplayTimeouts.c)
 */

__int64 __fastcall TtmpTerminal0PowerSettingCallback(
        LPCGUID SettingGuid,
        int *Value,
        ULONG ValueLength,
        _DWORD *Context)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax
  bool v10; // zf
  int v11; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  if ( ValueLength == 4 && (Context[1] & 4) == 0 )
  {
    v9 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1;
    if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 )
      v9 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_VIDEO_DIM_TIMEOUT.Data4;
    v10 = v9 == 0;
    v11 = *Value;
    if ( v10 )
      Context[46] = v11;
    else
      Context[47] = v11;
    TtmiTerminalSetDisplayTimeouts(Context, *((_QWORD *)Context + 4), Context[46], Context[47]);
  }
  ExReleaseResourceLite(&TtmpSessionLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return 0LL;
}
