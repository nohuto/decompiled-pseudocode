/*
 * XREFs of ?_GetDeviceObject@DXGMONITOR@@QEBAJPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C000D1E4
 * Callers:
 *     MonitorGetDeviceObject @ 0x1C00AC2E0 (MonitorGetDeviceObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_GetDeviceObject(
        DXGMONITOR *this,
        struct _FILE_OBJECT **a2,
        struct _DEVICE_OBJECT **a3,
        __int64 a4)
{
  void *v7; // rcx
  __int64 v9; // rax

  if ( !a2 || !a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v9);
  }
  v7 = (void *)*((_QWORD *)this + 8);
  if ( !v7 )
    return 3221226021LL;
  ObfReferenceObject(v7);
  *a2 = (struct _FILE_OBJECT *)*((_QWORD *)this + 8);
  *a3 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 5);
  return 0LL;
}
