/*
 * XREFs of ?DxgkAllocateMdlMemoryTracker@@YAJQEAXPEAU_MDL@@W4DXG_DRIVER_MEMORY_TRACKER_TYPE@@PEAPEAUDXG_DRIVER_MEMORY_TRACKER@@@Z @ 0x1C002E5DC
 * Callers:
 *     DxgkAllocatePagesForMdlCB @ 0x1C002EB30 (DxgkAllocatePagesForMdlCB.c)
 *     DxgkMapMdlToIoMmuCB @ 0x1C002EF40 (DxgkMapMdlToIoMmuCB.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DpiAddMemoryTracker @ 0x1C0040490 (DpiAddMemoryTracker.c)
 */

__int64 __fastcall DxgkAllocateMdlMemoryTracker(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  _QWORD *v8; // rax
  void *v9; // rbx
  __int64 v10; // rax
  int v12; // edi

  v8 = operator new[](0x28uLL, 0x4B677844u, (POOL_TYPE)512);
  v9 = v8;
  if ( v8 )
  {
    *v8 = 0LL;
    v8[1] = 0LL;
    v8[3] = a2;
    *((_DWORD *)v8 + 4) = a3;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    v12 = DpiAddMemoryTracker(a1, v9);
    if ( v12 < 0 )
    {
      ExFreePoolWithTag(v9, 0);
      v9 = 0LL;
    }
    *a4 = v9;
    return (unsigned int)v12;
  }
  else
  {
    v10 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v10 + 24) = 961LL;
    WdLogEvent5_WdLowResource(v10);
    return 3221225495LL;
  }
}
