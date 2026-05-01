/*
 * XREFs of ?GetAppUserModelID@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18008F980
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TaskbarLayoutItem::GetAppUserModelID(TaskbarLayoutItem *this, HSTRING *a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx
  const WCHAR *v7; // rcx
  HRESULT String; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  if ( !*((_QWORD *)this + 2) )
  {
    v3 = -2147319767;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutitem.cpp",
      (const char *)0x80028029LL);
    return v3;
  }
  v5 = -1LL;
  if ( *((_QWORD *)this + 3) == -1LL )
  {
    v6 = *((_QWORD *)this + 2);
    if ( v6 )
    {
      do
        ++v5;
      while ( *(_WORD *)(v6 + 2 * v5) );
    }
    else
    {
      v5 = 0LL;
    }
    *((_QWORD *)this + 3) = v5;
  }
  v7 = &word_18021F3A8;
  if ( *((_QWORD *)this + 2) )
    v7 = (const WCHAR *)*((_QWORD *)this + 2);
  String = WindowsCreateString(v7, *((_DWORD *)this + 6), a2);
  v3 = String;
  if ( String < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x20,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutitem.cpp",
      (const char *)(unsigned int)String);
    return v3;
  }
  return 0LL;
}
