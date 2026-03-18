/*
 * XREFs of DpiDxgkDdiQueryDeviceDescriptor @ 0x1C01080C0
 * Callers:
 *     DpiPdoGetDeviceDescriptor @ 0x1C0107E68 (DpiPdoGetDeviceDescriptor.c)
 *     DpiGetMonitorDescriptor @ 0x1C0107FEC (DpiGetMonitorDescriptor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqbpqqp @ 0x1C0033FEC (McTemplateK0qqbpqqp.c)
 */

__int64 __fastcall DpiDxgkDdiQueryDeviceDescriptor(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  int v4; // ebx
  __int64 v5; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r14
  _QWORD *v13; // rax

  v4 = 0;
  v5 = (unsigned int)a3;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0qqbpqqp(a1, &EventEnterDdiQueryDeviceDescriptor, a3, 0, 0, 0LL, a2, a3, 0, 0);
  v12 = (*(int (__fastcall **)(__int64, _QWORD, unsigned int *))(a1 + 216))(a2, (unsigned int)v5, a4);
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
      McTemplateK0qqbpqqp(v10, &EventExitDdiQueryDeviceDescriptor, v11, v4, v9, v10, a2, v5, v12, v10);
  }
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9);
  v13[4] = v5;
  v13[3] = a1;
  v13[5] = *a4;
  v13[6] = a4[1];
  v13[7] = v12;
  return (unsigned int)v12;
}
