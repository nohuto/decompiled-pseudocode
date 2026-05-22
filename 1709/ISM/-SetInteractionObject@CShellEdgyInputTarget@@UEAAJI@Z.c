/*
 * XREFs of ?SetInteractionObject@CShellEdgyInputTarget@@UEAAJI@Z @ 0x18002C910
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall CShellEdgyInputTarget::SetInteractionObject(
        CShellEdgyInputTarget *this,
        int a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2C4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\edgegesture\\lib\\cshelledgyimpl.cpp",
      a4);
    JUMPOUT(0x18002C938LL);
  }
  *((_DWORD *)this + 6) = a2;
  return 0LL;
}
