/*
 * XREFs of ?Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z @ 0x18002508C
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001789C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??0DWMCursorBroker@@IEAA@PEAUISystemInputRouter@@@Z @ 0x180024B0C (--0DWMCursorBroker@@IEAA@PEAUISystemInputRouter@@@Z.c)
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180024DBC (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursorBroker::Create(struct ISystemInputRouter *a1, struct ICursorBroker **a2)
{
  int v4; // ebx
  int v5; // r9d
  DWMCursorBroker *v6; // rax
  DWMCursorBroker *v7; // rbx
  DWMCursorBroker *v8; // rdi
  int v9; // eax
  __int64 v10; // rcx

  if ( a2 )
  {
    *a2 = 0LL;
    v6 = (DWMCursorBroker *)malloc(0x5D8uLL);
    v7 = v6;
    if ( v6 )
      memset(v6, 0, 0x5D8uLL);
    if ( v7 )
      v8 = DWMCursorBroker::DWMCursorBroker(v7, a1);
    else
      v8 = 0LL;
    if ( !v8 )
    {
      v4 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return (unsigned int)v4;
      v5 = 122;
      goto LABEL_4;
    }
    v9 = DWMCursorBroker::Initialize(v8);
    v4 = v9;
    if ( v9 >= 0 )
    {
      *a2 = v8;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, 125, v9);
    }
    if ( v4 < 0 )
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v8 + 3) + 24LL))((__int64)v8 + 24, 1LL);
  }
  else
  {
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v5 = 113;
LABEL_4:
      McTemplateU0qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, v5, v4);
    }
  }
  return (unsigned int)v4;
}
