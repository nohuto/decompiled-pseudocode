/*
 * XREFs of DpiDxgkDdiQueryDeviceDescriptor @ 0x1C020A910
 * Callers:
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C01F8580 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiGetMonitorDescriptor @ 0x1C020B2A4 (DpiGetMonitorDescriptor.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1C020C0EC (DpiPdoGetDeviceDescriptor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqbpqqp @ 0x1C0042960 (McTemplateK0qqbpqqp.c)
 */

__int64 __fastcall DpiDxgkDdiQueryDeviceDescriptor(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  int v4; // ebx
  __int64 v5; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  _QWORD *v14; // rax

  v4 = 0;
  v5 = (unsigned int)a3;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0qqbpqqp(a1, &EventEnterDdiQueryDeviceDescriptor, a3, 0, 0, 0LL, a2, a3, 0, 0);
  v13 = (*(int (__fastcall **)(__int64, _QWORD, unsigned int *))(a1 + 216))(a2, (unsigned int)v5, a4);
  if ( bTracingEnabled )
  {
    v9 = 0LL;
    v10 = 0LL;
    if ( a4 )
    {
      v4 = *a4;
      v9 = a4[1];
      v10 = *((_QWORD *)a4 + 1);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqbpqqp(v10, &EventExitDdiQueryDeviceDescriptor, v11, v4, v9, v10, a2, v5, v13, v10);
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
  v14[4] = v5;
  v14[3] = a1;
  v14[5] = *a4;
  v14[6] = a4[1];
  v14[7] = v13;
  return (unsigned int)v13;
}
