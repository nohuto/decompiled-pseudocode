/*
 * XREFs of ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C019737C
 * Callers:
 *     ?RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@Z@Z @ 0x1C0196520 (-RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@Z@Z.c)
 *     ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1C0196D24 (-SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z.c)
 *     ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1C0197270 (-UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGGLOBAL::ValidateAdapterValidAndInRunningState(
        struct _KTHREAD **this,
        struct DXGADAPTER *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  struct DXGADAPTER **v7; // rbx
  char v8; // cl
  struct DXGADAPTER *i; // rax

  if ( this[51] != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 4126LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = this + 55;
  v8 = 0;
  for ( i = *v7; i != (struct DXGADAPTER *)v7 && i; i = *(struct DXGADAPTER **)i )
  {
    if ( i == a2 )
      return *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 24) + 64LL) + 236LL) == 2;
  }
  return v8;
}
