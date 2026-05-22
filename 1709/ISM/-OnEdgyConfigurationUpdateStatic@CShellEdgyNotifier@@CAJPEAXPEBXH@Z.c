/*
 * XREFs of ?OnEdgyConfigurationUpdateStatic@CShellEdgyNotifier@@CAJPEAXPEBXH@Z @ 0x18002BF10
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJAEBUEdgyInputSource@@@Z @ 0x18002B084 (-AddOrUpdate@Edges@@QEAAJAEBUEdgyInputSource@@@Z.c)
 *     ?Remove@Edges@@QEAAJAEBUEdgyInputSource@@@Z @ 0x18002B1F0 (-Remove@Edges@@QEAAJAEBUEdgyInputSource@@@Z.c)
 */

__int64 __fastcall CShellEdgyNotifier::OnEdgyConfigurationUpdateStatic(
        char *a1,
        const struct EdgyInputSource *a2,
        int a3)
{
  int v4; // ecx
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 != 56 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x73,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\edgegesture\\lib\\cshelledgyimpl.cpp",
      a1);
    __debugbreak();
  }
  v4 = *((_DWORD *)a2 + 2);
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x8E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\edgegesture\\lib\\cshelledgyimpl.cpp",
        a1);
      __debugbreak();
    }
    Edges::Remove((Edges *)(a1 + 64), a2);
  }
  else if ( (int)Edges::AddOrUpdate((Edges *)(a1 + 64), a2) < 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x84,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\edgegesture\\lib\\cshelledgyimpl.cpp",
      v6);
    JUMPOUT(0x18002BF8CLL);
  }
  return 0LL;
}
