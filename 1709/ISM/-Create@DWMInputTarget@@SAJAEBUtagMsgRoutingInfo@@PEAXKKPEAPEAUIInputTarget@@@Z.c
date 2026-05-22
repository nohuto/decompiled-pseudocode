/*
 * XREFs of ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@PEAXKKPEAPEAUIInputTarget@@@Z @ 0x180021364
 * Callers:
 *     ?CreateRoutingTarget@GestureTargetingTarget@@AEAAJAEBUtagMsgRoutingInfo@@PEAXPEAPEAUIInputTarget@@@Z @ 0x18001608C (-CreateRoutingTarget@GestureTargetingTarget@@AEAAJAEBUtagMsgRoutingInfo@@PEAXPEAPEAUIInputTarget.c)
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x1800191F0 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJ_KPEAXPEAPEAUIInputTarget@@@Z @ 0x180019CA4 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJ_KPEAXPEAPEAUIInputTarget@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??0DWMInputTarget@@IEAA@AEBUtagMsgRoutingInfo@@PEAXKK@Z @ 0x180020E80 (--0DWMInputTarget@@IEAA@AEBUtagMsgRoutingInfo@@PEAXKK@Z.c)
 *     ?Initialize@DWMInputTarget@@IEAAJXZ @ 0x18002128C (-Initialize@DWMInputTarget@@IEAAJXZ.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputTarget::Create(
        const struct tagMsgRoutingInfo *a1,
        void *a2,
        int a3,
        unsigned int a4,
        struct IInputTarget **a5)
{
  int v9; // ebx
  int v10; // r9d
  DWMInputTarget *v11; // rax
  DWMInputTarget *v12; // rbx
  DWMInputTarget *v13; // rdi
  int v14; // eax
  __int64 v15; // rcx

  if ( a5 )
  {
    *a5 = 0LL;
    v11 = (DWMInputTarget *)malloc(0xD8uLL);
    v12 = v11;
    if ( v11 )
      memset(v11, 0, 0xD8uLL);
    if ( v12 )
      v13 = DWMInputTarget::DWMInputTarget(v12, a1, a2, a3, a4);
    else
      v13 = 0LL;
    if ( !v13 )
    {
      v9 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return (unsigned int)v9;
      v10 = 143;
      goto LABEL_4;
    }
    v14 = DWMInputTarget::Initialize(v13);
    v9 = v14;
    if ( v14 >= 0 )
    {
      *a5 = v13;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v15, &MinInput_Warning_CheckResult, 3, 146, v14);
    }
    if ( v9 < 0 )
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v13 + 6) + 24LL))((__int64)v13 + 48, 1LL);
  }
  else
  {
    v9 = -2147467261;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v10 = 134;
LABEL_4:
      McTemplateU0qqq((__int64)a1, &MinInput_Warning_CheckResult, 3, v10, v9);
    }
  }
  return (unsigned int)v9;
}
