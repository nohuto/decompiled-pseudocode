/*
 * XREFs of ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C01228A4
 * Callers:
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0122260 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     ?DoEditionCoreMsgKSend@CBaseInput@@QEAAXXZ @ 0x1C0122700 (-DoEditionCoreMsgKSend@CBaseInput@@QEAAXXZ.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C01241A0 (-Read@CBaseInput@@QEAAJXZ.c)
 *     ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x1C0126DB8 (-HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z @ 0x1C0126E30 (-HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C0126E88 (-HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x1C0131880 (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CRIMBase::GetDispatcherHandleByName(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax

  v3 = (unsigned int)a2;
  if ( (unsigned int)a2 >= 0xE )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v6 = v3 << 6;
  if ( a3 )
    return *(_QWORD *)(v6 + a1 + 184);
  else
    return *(_QWORD *)(v6 + a1 + 168);
}
