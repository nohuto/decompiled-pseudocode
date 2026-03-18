/*
 * XREFs of ?OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z @ 0x1C010CD14
 * Callers:
 *     ?OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C010CD90 (-OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 *     ?OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C0155E98 (-OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall ADAPTER_DISPLAY::OpmValidateAdapterHandle(DXGADAPTER **this, DXGADAPTER **a2)
{
  __int64 v4; // rcx
  DXGADAPTER **i; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v8 + 24) = 6141LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( this[26] != KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v7 + 24) = 6142LL;
    WdLogEvent5_WdAssertion(v7);
  }
  for ( i = (DXGADAPTER **)this[23]; i != this + 23; i = (DXGADAPTER **)*i )
  {
    if ( i == a2 )
      return 1;
  }
  return 0;
}
