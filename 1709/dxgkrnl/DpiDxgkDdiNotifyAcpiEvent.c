/*
 * XREFs of DpiDxgkDdiNotifyAcpiEvent @ 0x1C01E988C
 * Callers:
 *     DpiAcpiHandleAcpiEvent @ 0x1C01E6520 (DpiAcpiHandleAcpiEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqqq @ 0x1C0020738 (McTemplateK0pqqqq.c)
 */

__int64 __fastcall DpiDxgkDdiNotifyAcpiEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        _DWORD *a6)
{
  unsigned int v6; // edi
  __int64 v7; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbp
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-38h]
  __int64 v19; // [rsp+28h] [rbp-30h]
  __int64 v20; // [rsp+30h] [rbp-28h]
  __int64 v21; // [rsp+38h] [rbp-20h]

  v6 = a3;
  v7 = a4;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqqqq(a1, &EventEnterDdiNotifyAcpiEvent, a3, a2, a3, a4, 0, 0);
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _DWORD *))(a1 + 232))(
          a2,
          v6,
          (unsigned int)v7,
          a5,
          a6);
  v14 = v10;
  if ( bTracingEnabled )
  {
    v12 = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v21) = v10;
      LODWORD(v20) = *a6;
      LODWORD(v19) = v7;
      LODWORD(v18) = v6;
      McTemplateK0pqqqq((unsigned int)*a6, &EventExitDdiNotifyAcpiEvent, v13, a2, v18, v19, v20, v21);
    }
  }
  v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11);
  v15[4] = v7;
  v15[3] = a1;
  v15[5] = a5;
  v16 = (unsigned int)*a6;
  v15[7] = v14;
  v15[6] = v16;
  return (unsigned int)v14;
}
