/*
 * XREFs of ?CreateFromINPUTDEST@DWMInputTarget@@SAJAEBUtagINPUTDEST@@PEAPEAUIInputTarget@@@Z @ 0x1800214AC
 * Callers:
 *     ?DeliverMouseInputToInputDest@DWMInputRouter@@UEAAXAEBUtagINPUTDEST@@PEAUInputInfo@@@Z @ 0x18001A9C0 (-DeliverMouseInputToInputDest@DWMInputRouter@@UEAAXAEBUtagINPUTDEST@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0DWMInputTarget@@IEAA@AEBUtagINPUTDEST@@@Z @ 0x1800210C0 (--0DWMInputTarget@@IEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?Initialize@DWMInputTarget@@IEAAJXZ @ 0x18002128C (-Initialize@DWMInputTarget@@IEAAJXZ.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMInputTarget::CreateFromINPUTDEST(const struct tagINPUTDEST *a1, struct IInputTarget **a2)
{
  DWMInputTarget *v4; // rax
  DWMInputTarget *v5; // rbx
  DWMInputTarget *v6; // rdi
  DWMInputTarget *v7; // rbx
  unsigned int v8; // esi
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v4 = (DWMInputTarget *)malloc(0xD8uLL);
  v5 = v4;
  if ( v4 )
    memset(v4, 0, 0xD8uLL);
  if ( v5 )
    v6 = DWMInputTarget::DWMInputTarget(v5, a1);
  else
    v6 = 0LL;
  v7 = v6;
  if ( v6 )
  {
    (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)v6 + 8LL))(v6);
    v9 = DWMInputTarget::Initialize(v6);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v7 = 0LL;
      *a2 = v6;
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xF7,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
        (const char *)(unsigned int)v9);
    }
  }
  else
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      (const char *)0x8007000ELL);
  }
  if ( v7 )
    (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
