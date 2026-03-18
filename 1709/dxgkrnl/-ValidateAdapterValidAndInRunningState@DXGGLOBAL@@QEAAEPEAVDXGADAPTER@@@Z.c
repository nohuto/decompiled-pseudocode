/*
 * XREFs of ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C01AC45C
 * Callers:
 *     ?RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6AX0KIE0@Z@Z @ 0x1C0028248 (-RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6.c)
 *     ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1C01ABE80 (-SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z.c)
 *     ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1C01AC344 (-UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGGLOBAL::ValidateAdapterValidAndInRunningState(struct _KTHREAD **this, struct DXGADAPTER *a2)
{
  __int64 v4; // rax
  struct DXGADAPTER **v5; // rbx
  char v6; // cl
  struct DXGADAPTER *i; // rax

  if ( this[51] != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 4942LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = this + 55;
  v6 = 0;
  for ( i = *v5; i != (struct DXGADAPTER *)v5 && i; i = *(struct DXGADAPTER **)i )
  {
    if ( i == a2 )
      return *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 24) + 64LL) + 236LL) == 2;
  }
  return v6;
}
