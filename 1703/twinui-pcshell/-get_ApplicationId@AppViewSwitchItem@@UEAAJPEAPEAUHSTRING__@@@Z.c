/*
 * XREFs of ?get_ApplicationId@AppViewSwitchItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180163DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AppViewSwitchItem::get_ApplicationId(AppViewSwitchItem *this, HSTRING *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rax
  HRESULT String; // eax
  PCNZWCH sourceString; // [rsp+28h] [rbp-20h] BYREF
  UINT32 length[2]; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  sourceString = 0LL;
  v3 = *((_QWORD *)this + 23);
  *(_QWORD *)length = -1LL;
  v11 = -1LL;
  v4 = (*(__int64 (__fastcall **)(__int64, PCNZWCH *))(*(_QWORD *)v3 + 112LL))(v3, &sourceString);
  v5 = v4;
  if ( v4 >= 0 )
  {
    LODWORD(v6) = length[0];
    if ( *(_QWORD *)length == -1LL )
    {
      if ( sourceString )
      {
        v6 = -1LL;
        do
          ++v6;
        while ( sourceString[v6] );
      }
      else
      {
        v6 = 0LL;
      }
      *(_QWORD *)length = v6;
    }
    String = WindowsCreateString(sourceString, v6, a2);
    v5 = String;
    if ( String < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x48,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitem.cpp",
        (const char *)(unsigned int)String);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x46,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitem.cpp",
      (const char *)(unsigned int)v4);
  }
  if ( sourceString )
    CoTaskMemFree((LPVOID)sourceString);
  return v5;
}
