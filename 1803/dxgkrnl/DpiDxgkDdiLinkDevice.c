/*
 * XREFs of DpiDxgkDdiLinkDevice @ 0x1C00421AC
 * Callers:
 *     DpiAddDevice @ 0x1C0203030 (DpiAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqqtq @ 0x1C004267C (McTemplateK0ppqqtq.c)
 */

__int64 __fastcall DpiDxgkDdiLinkDevice(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v4; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  _QWORD *v14; // rax

  LOBYTE(v4) = 0;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0ppqqtq(a1, (unsigned int)&EventEnterDdiLinkDevice, a3, a2, a3, 0, 0, 0, 0);
  v13 = (*(int (__fastcall **)(__int64, __int64, int *))(a1 + 616))(a2, a3, a4);
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
      McTemplateK0ppqqtq(v10, (unsigned int)&EventExitDdiLinkDevice, v11, a2, a3, v4, v10, v9, v13);
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
  v14[3] = a2;
  v14[4] = a3;
  v14[5] = (unsigned int)a4[1];
  v14[6] = *((unsigned __int8 *)a4 + 8);
  v14[7] = v13;
  return (unsigned int)v13;
}
