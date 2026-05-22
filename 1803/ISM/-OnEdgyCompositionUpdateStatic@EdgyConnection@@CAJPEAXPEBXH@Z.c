/*
 * XREFs of ?OnEdgyCompositionUpdateStatic@EdgyConnection@@CAJPEAXPEBXH@Z @ 0x180067B80
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnEdgyCompositionUpdate@EdgyConnection@@AEAAXPEBUEdgyCompositionConfigurationUpdate@@@Z @ 0x180067C38 (-OnEdgyCompositionUpdate@EdgyConnection@@AEAAXPEBUEdgyCompositionConfigurationUpdate@@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x18006829C (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1800685F0 (-Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 */

__int64 __fastcall EdgyConnection::OnEdgyCompositionUpdateStatic(
        EdgyConnection *a1,
        const struct EdgyCompositionConfigurationUpdate *a2,
        int a3)
{
  const char *v3; // r9
  const char *v4; // r9
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (const char *)*((unsigned int *)a2 + 2);
  if ( (int)v3 >= 0 )
  {
    if ( (int)v3 <= 1 )
    {
      if ( a3 != 56 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x94,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
          v3);
        JUMPOUT(0x180067C35LL);
      }
      EdgyConnection::OnEdgyCompositionUpdate(a1, a2);
    }
    else if ( (int)v3 <= 3 )
    {
      if ( a3 != 536 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x9F,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
          v3);
        __debugbreak();
      }
      v4 = (const char *)(unsigned int)((_DWORD)v3 - 2);
      if ( (_DWORD)v4 )
      {
        if ( (_DWORD)v4 != 1 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xD4,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
            v4);
          __debugbreak();
        }
        Edges::Remove((EdgyConnection *)((char *)a1 + 72), a2);
      }
      else if ( Edges::AddOrUpdate((EdgyConnection *)((char *)a1 + 72), a2) < 0 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xCA,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
          v5);
        __debugbreak();
      }
    }
  }
  return 0LL;
}
