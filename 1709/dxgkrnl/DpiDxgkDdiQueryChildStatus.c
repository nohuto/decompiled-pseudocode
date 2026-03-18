/*
 * XREFs of DpiDxgkDdiQueryChildStatus @ 0x1C01193F8
 * Callers:
 *     DpiPdoIsChildConnected @ 0x1C01191D4 (DpiPdoIsChildConnected.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pdqttq @ 0x1C0033C78 (McTemplateK0pdqttq.c)
 */

__int64 __fastcall DpiDxgkDdiQueryChildStatus(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  unsigned int v4; // ebx
  unsigned int *v6; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // r8
  _QWORD *v13; // rdx
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // [rsp+20h] [rbp-48h]
  __int64 v17; // [rsp+28h] [rbp-40h]
  __int64 v18; // [rsp+30h] [rbp-38h]
  __int64 v19; // [rsp+38h] [rbp-30h]
  __int64 v20; // [rsp+40h] [rbp-28h]

  v4 = 0;
  v6 = (unsigned int *)a3;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pdqttq(a1, &EventEnterDdiQueryChildStatus, a3, a2, 0, 0, 0, a4, 0);
  LOBYTE(a3) = a4;
  v11 = (*(int (__fastcall **)(__int64, unsigned int *, __int64))(a1 + 208))(a2, v6, a3);
  if ( bTracingEnabled )
  {
    v9 = 0LL;
    LOBYTE(v10) = 0;
    if ( v6 )
    {
      v4 = *v6;
      v9 = v6[1];
      LOBYTE(v10) = *((_BYTE *)v6 + 8);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v20) = v11;
      LODWORD(v19) = a4;
      LODWORD(v18) = (unsigned __int8)v10;
      LODWORD(v17) = v9;
      LODWORD(v16) = v4;
      McTemplateK0pdqttq((unsigned __int8)v10, &EventExitDdiQueryChildStatus, v12, a2, v16, v17, v18, v19, v20);
    }
  }
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9);
  v13[3] = a1;
  v13[4] = v6[1];
  v14 = *v6;
  if ( a4 == 1 )
    LODWORD(v14) = v14 | 0x80000000;
  v13[5] = v14;
  v13[6] = *((unsigned __int8 *)v6 + 8);
  result = (unsigned int)v11;
  v13[7] = v11;
  return result;
}
