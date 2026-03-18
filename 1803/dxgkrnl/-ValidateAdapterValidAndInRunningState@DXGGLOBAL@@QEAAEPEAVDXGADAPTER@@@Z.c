/*
 * XREFs of ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C01A1864
 * Callers:
 *     ?RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6AX0KIE0@ZP6AX00KEIU_GUID@@I@Z@Z @ 0x1C003295C (-RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6.c)
 *     ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1C01A1098 (-SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z.c)
 *     ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1C01A1708 (-UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGGLOBAL::ValidateAdapterValidAndInRunningState(struct _KTHREAD **this, struct DXGADAPTER *a2)
{
  __int64 v4; // rax
  struct DXGADAPTER **v5; // rbx
  bool result; // al
  struct DXGADAPTER *i; // rcx
  struct DXGADAPTER *v8; // rdx

  if ( this[52] != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 5376LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = this + 56;
  result = 0;
  for ( i = *v5; ; i = *(struct DXGADAPTER **)i )
  {
    v8 = 0LL;
    if ( i != (struct DXGADAPTER *)v5 )
      v8 = i;
    if ( !v8 )
      break;
    if ( v8 == a2 )
      return *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 24) + 64LL) + 236LL) == 2;
  }
  return result;
}
