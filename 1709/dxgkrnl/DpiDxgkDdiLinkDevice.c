/*
 * XREFs of DpiDxgkDdiLinkDevice @ 0x1C0013F2C
 * Callers:
 *     DpiAddDevice @ 0x1C01148E0 (DpiAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqqtq @ 0x1C0033DB0 (McTemplateK0ppqqtq.c)
 */

__int64 __fastcall DpiDxgkDdiLinkDevice(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v4; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r8d
  __int64 v12; // r14
  _QWORD *v13; // rax

  LOBYTE(v4) = 0;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0ppqqtq(a1, (unsigned int)&EventEnterDdiLinkDevice, a3, a2, a3, 0, 0, 0, 0);
  v12 = (*(int (__fastcall **)(__int64, __int64, int *))(a1 + 616))(a2, a3, a4);
  if ( bTracingEnabled )
  {
    v10 = 0LL;
    LOBYTE(v9) = 0;
    if ( a4 )
    {
      v4 = *a4;
      v10 = (unsigned int)a4[1];
      LOBYTE(v9) = *((_BYTE *)a4 + 8);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0ppqqtq(v10, (unsigned int)&EventExitDdiLinkDevice, v11, a2, a3, v4, v10, v9, v12);
  }
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9);
  v13[3] = a2;
  v13[4] = a3;
  v13[5] = (unsigned int)a4[1];
  v13[6] = *((unsigned __int8 *)a4 + 8);
  v13[7] = v12;
  return (unsigned int)v12;
}
