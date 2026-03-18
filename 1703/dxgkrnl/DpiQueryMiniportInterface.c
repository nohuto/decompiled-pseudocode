/*
 * XREFs of DpiQueryMiniportInterface @ 0x1C010FC78
 * Callers:
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C010E2F4 (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiFdoInitializeFdo @ 0x1C010F458 (DpiFdoInitializeFdo.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C0111468 (DpiFdoInitializeGpuVirtualization.c)
 *     DpiFdoStartAdapter @ 0x1C0111538 (DpiFdoStartAdapter.c)
 *     DpiFdoHandleQueryIndirectDispInterface @ 0x1C01C9E10 (DpiFdoHandleQueryIndirectDispInterface.c)
 *     DpiFdoHandleQueryThermalInterface @ 0x1C01CA190 (DpiFdoHandleQueryThermalInterface.c)
 * Callees:
 *     DpiDxgkDdiQueryInterface @ 0x1C010FCF4 (DpiDxgkDdiQueryInterface.c)
 */

__int64 __fastcall DpiQueryMiniportInterface(__int64 a1, __int64 a2, __int16 a3, __int16 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  __int16 v13; // [rsp+28h] [rbp-30h]
  __int16 v14; // [rsp+2Ah] [rbp-2Eh]
  __int64 v15; // [rsp+30h] [rbp-28h]
  __int64 v16; // [rsp+38h] [rbp-20h]
  int v17; // [rsp+40h] [rbp-18h]

  v6 = *(_QWORD *)(a1 + 64);
  LODWORD(v7) = -1073741637;
  if ( *(_QWORD *)(*(_QWORD *)(v6 + 40) + 256LL) )
  {
    v16 = 0LL;
    v13 = a3;
    v15 = a6;
    v12 = a2;
    v14 = a4;
    v17 = -1;
    v8 = DpiDxgkDdiQueryInterface(*(_QWORD *)(v6 + 40), *(_QWORD *)(v6 + 48), &v12);
    v7 = v8;
    if ( v8 < 0 )
    {
      v10 = WdLogNewEntry5_WdEvent(v9);
      *(_QWORD *)(v10 + 24) = v7;
      WdLogEvent5_WdEvent(v10);
    }
  }
  return (unsigned int)v7;
}
