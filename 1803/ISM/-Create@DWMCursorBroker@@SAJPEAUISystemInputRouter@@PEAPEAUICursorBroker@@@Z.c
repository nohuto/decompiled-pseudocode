/*
 * XREFs of ?Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z @ 0x180089C3C
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18007BDCC (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??0DWMCursorBroker@@IEAA@PEAUISystemInputRouter@@@Z @ 0x18008977C (--0DWMCursorBroker@@IEAA@PEAUISystemInputRouter@@@Z.c)
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180089A14 (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursorBroker::Create(struct ISystemInputRouter *a1, struct ICursorBroker **a2)
{
  int v4; // ebx
  DWMCursorBroker *v5; // rax
  __int64 v6; // rdx
  DWMCursorBroker *v7; // rbx
  DWMCursorBroker *v8; // rdi

  if ( a2 )
  {
    *a2 = 0LL;
    v5 = (DWMCursorBroker *)malloc(0x5D0uLL);
    v7 = v5;
    if ( v5 )
      memset_0(v5, 0, 0x5D0uLL);
    if ( v7 )
      v8 = DWMCursorBroker::DWMCursorBroker(v7, a1);
    else
      v8 = 0LL;
    if ( v8 )
    {
      v4 = DWMCursorBroker::Initialize(v8, v6);
      if ( v4 < 0 )
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v8 + 2) + 24LL))((__int64)v8 + 16, 1LL);
      else
        *a2 = v8;
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v4;
}
