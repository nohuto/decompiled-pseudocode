/*
 * XREFs of ?OnHitTest@CShellEdgyImpl@@QEAA_NKKPEAK0@Z @ 0x18002BFE4
 * Callers:
 *     ?OnHitTest@EdgeGestureComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x18002A330 (-OnHitTest@EdgeGestureComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUI.c)
 *     ?OnHitTest@EdgeGestureComponent@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18002A6A0 (-OnHitTest@EdgeGestureComponent@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorIn.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?HitTest@Edges@@QEAA_NKKPEAPEAX@Z @ 0x18002B2EC (-HitTest@Edges@@QEAA_NKKPEAPEAX@Z.c)
 *     ?Reset@CShellEdgyImpl@@QEAAXXZ @ 0x18002C078 (-Reset@CShellEdgyImpl@@QEAAXXZ.c)
 */

char __fastcall CShellEdgyImpl::OnHitTest(void **this, int a2, int a3, unsigned int *a4, unsigned int *a5)
{
  char v9; // bl
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CShellEdgyImpl::Reset((CShellEdgyImpl *)this);
  v9 = 0;
  if ( Edges::HitTest((Edges *)(this + 11), a2, a3, this) )
  {
    if ( !*this )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xE1,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\edgegesture\\lib\\cshelledgyimpl.cpp",
        v10);
      JUMPOUT(0x18002C074LL);
    }
    if ( a4 )
      *a4 = a2;
    if ( a5 )
      *a5 = a3;
    return 1;
  }
  return v9;
}
