/*
 * XREFs of DpiDxgkDdiQueryChildRelations @ 0x1C020A6C8
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1C01F415C (DpiFdoEnumChildDevices.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0hbpqx @ 0x1C0042498 (McTemplateK0hbpqx.c)
 */

__int64 __fastcall DpiDxgkDdiQueryChildRelations(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v5; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax

  v5 = a4;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0hbpqx(a4, &EventEnterDdiQueryChildRelations, a3, a4, a3, a2, 0, a4 / 0x1C);
  v10 = (*(int (__fastcall **)(__int64, __int64, _QWORD))(a1 + 200))(a2, a3, (unsigned int)v5);
  if ( bTracingEnabled )
  {
    v9 = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    v11 = v5;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0hbpqx(
        (unsigned int)Microsoft_Windows_DxgKrnlEnableBits,
        &EventExitDdiQueryChildRelations,
        v5,
        v5,
        a3,
        a2,
        v10,
        v5 / 0x1C);
  }
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v11, v12);
  v13[5] = v10;
  v13[3] = a1;
  v13[4] = a3;
  v13[6] = 0LL;
  v13[7] = 0LL;
  return (unsigned int)v10;
}
