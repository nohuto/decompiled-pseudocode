/*
 * XREFs of DpiDxgkDdiNotifySurpriseRemoval @ 0x1C020A518
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C01F05A0 (DpiFdoHandleDevicePower.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C01F60B0 (DpiFdoHandleSurpriseRemoval.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq @ 0x1C002783C (McTemplateK0pqq.c)
 */

__int64 __fastcall DpiDxgkDdiNotifySurpriseRemoval(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v4; // al
  __int64 v6; // rsi
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, _QWORD); // r8
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax
  __int64 v17; // [rsp+20h] [rbp-18h]
  __int64 v18; // [rsp+28h] [rbp-10h]

  v4 = *(_BYTE *)(a3 + 3736);
  v6 = a4;
  LODWORD(v8) = -1073741637;
  if ( (v4 & 0x18) != 0
    && *(_DWORD *)(a1 + 136) >= 0x300Du
    && (v9 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 792)) != 0LL )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0pqq(a1, &EventEnterDdiNotifySurpriseRemoval, (__int64)v9, a2, a4, 0);
      v9 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 792);
    }
    v10 = v9(a2, (unsigned int)v6);
    v8 = v10;
    if ( bTracingEnabled )
    {
      v12 = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v18) = v10;
        LODWORD(v17) = v6;
        McTemplateK0pqq(
          (unsigned int)Microsoft_Windows_DxgKrnlEnableBits,
          &EventExitDdiNotifySurpriseRemoval,
          v13,
          a2,
          v17,
          v18);
      }
    }
    v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
    v15[3] = a1;
    v15[4] = v6;
    v15[5] = v8;
    v15[6] = 0LL;
    v15[7] = 0LL;
  }
  else if ( (v4 & 0x10) != 0 )
  {
    LODWORD(v8) = *(_QWORD *)(a1 + 792) != 0LL ? 0xC00000BB : 0;
  }
  return (unsigned int)v8;
}
