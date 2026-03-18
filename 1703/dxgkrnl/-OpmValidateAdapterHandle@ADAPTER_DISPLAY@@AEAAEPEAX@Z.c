/*
 * XREFs of ?OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z @ 0x1C017210C
 * Callers:
 *     ?OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C0171F70 (-OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 *     ?OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C017204C (-OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall ADAPTER_DISPLAY::OpmValidateAdapterHandle(DXGADAPTER **this, ADAPTER_DISPLAY *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  ADAPTER_DISPLAY *i; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v8 + 24) = 5527LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( this[26] != KeGetCurrentThread() )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v9 + 24) = 5528LL;
    WdLogEvent5_WdAssertion(v9);
  }
  for ( i = this[23]; ; i = *(ADAPTER_DISPLAY **)i )
  {
    if ( i == (ADAPTER_DISPLAY *)(this + 23) )
      return 0;
    if ( i == a2 )
      break;
  }
  return 1;
}
