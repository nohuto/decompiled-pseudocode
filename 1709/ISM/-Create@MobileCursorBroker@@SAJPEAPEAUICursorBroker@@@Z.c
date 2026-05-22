/*
 * XREFs of ?Create@MobileCursorBroker@@SAJPEAPEAUICursorBroker@@@Z @ 0x18002F504
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001789C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??0MobileCursorBroker@@IEAA@XZ @ 0x18002EF5C (--0MobileCursorBroker@@IEAA@XZ.c)
 *     ?Initialize@MobileCursorBroker@@QEAAJXZ @ 0x18002F1CC (-Initialize@MobileCursorBroker@@QEAAJXZ.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MobileCursorBroker::Create(struct ICursorBroker **a1)
{
  MobileCursorBroker *v2; // rax
  __int64 v3; // rcx
  MobileCursorBroker *v4; // rbx
  MobileCursorBroker *v5; // rdi
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx

  *a1 = 0LL;
  v2 = (MobileCursorBroker *)malloc(0x560uLL);
  v4 = v2;
  if ( v2 )
    memset(v2, 0, 0x560uLL);
  if ( v4 )
    v5 = MobileCursorBroker::MobileCursorBroker(v4);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v7 = MobileCursorBroker::Initialize(v5);
    v6 = v7;
    if ( v7 >= 0 )
    {
      *a1 = v5;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 0, 125, v7);
    }
    if ( v6 < 0 )
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v5 + 4) + 24LL))((__int64)v5 + 32, 1LL);
  }
  else
  {
    v6 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v3, &MinInput_Warning_CheckResult, 0, 123, 14);
  }
  return (unsigned int)v6;
}
