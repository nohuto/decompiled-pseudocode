/*
 * XREFs of DpiDxgkDdiQueryChildStatus @ 0x1C020A7EC
 * Callers:
 *     DpiPdoIsChildConnected @ 0x1C020D164 (DpiPdoIsChildConnected.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pdqttq @ 0x1C0042544 (McTemplateK0pdqttq.c)
 */

__int64 __fastcall DpiDxgkDdiQueryChildStatus(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  unsigned int v4; // ebx
  unsigned int *v6; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-48h]
  int v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+28h] [rbp-40h]
  int v20; // [rsp+28h] [rbp-40h]
  __int64 v21; // [rsp+30h] [rbp-38h]
  int v22; // [rsp+30h] [rbp-38h]
  __int64 v23; // [rsp+38h] [rbp-30h]
  int v24; // [rsp+38h] [rbp-30h]
  __int64 v25; // [rsp+40h] [rbp-28h]
  int v26; // [rsp+40h] [rbp-28h]

  v4 = 0;
  v6 = (unsigned int *)a3;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v26 = 0;
    v24 = a4;
    v22 = 0;
    v20 = 0;
    v18 = 0;
    McTemplateK0pdqttq(a1, &EventEnterDdiQueryChildStatus, a3, a2, v18, v20, v22, v24, v26);
  }
  LOBYTE(a3) = a4;
  v13 = (*(int (__fastcall **)(__int64, unsigned int *, __int64))(a1 + 208))(a2, v6, a3);
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
      LODWORD(v25) = v13;
      LODWORD(v23) = a4;
      LODWORD(v21) = (unsigned __int8)v10;
      LODWORD(v19) = v9;
      LODWORD(v17) = v4;
      McTemplateK0pdqttq((unsigned __int8)v10, &EventExitDdiQueryChildStatus, v11, a2, v17, v19, v21, v23, v25);
    }
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
  v14[3] = a1;
  v14[4] = v6[1];
  v15 = *v6;
  LODWORD(v15) = v15 | 0x80000000;
  if ( a4 != 1 )
    v15 = *v6;
  v14[5] = v15;
  v14[6] = *((unsigned __int8 *)v6 + 8);
  v14[7] = v13;
  return (unsigned int)v13;
}
