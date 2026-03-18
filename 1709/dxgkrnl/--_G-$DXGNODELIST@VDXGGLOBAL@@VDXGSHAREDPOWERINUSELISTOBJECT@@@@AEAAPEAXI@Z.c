/*
 * XREFs of ??_G?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z @ 0x1C0027EA8
 * Callers:
 *     ?NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z @ 0x1C0028090 (-NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z.c)
 *     ?RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6AX0KIE0@Z@Z @ 0x1C0028248 (-RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

void **__fastcall DXGNODELIST<DXGGLOBAL,DXGSHAREDPOWERINUSELISTOBJECT>::`scalar deleting destructor'(void **a1)
{
  __int64 v2; // rax

  if ( *a1 != a1 )
  {
    v2 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v2 + 24) = 655LL;
    WdLogEvent5_WdAssertion(v2);
  }
  operator delete(a1);
  return a1;
}
