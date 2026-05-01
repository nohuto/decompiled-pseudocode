/*
 * XREFs of ?get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801B8BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18005D360 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 */

__int64 __fastcall VirtualDesktop::get_Name(RTL_SRWLOCK *this, HSTRING *a2)
{
  RTL_SRWLOCK *v2; // rdi
  char *Ptr; // rbx
  int v6; // eax
  WCHAR *v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // rax
  HRESULT String; // eax
  PCNZWCH sourceString; // [rsp+20h] [rbp-28h] BYREF
  UINT32 length[2]; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = this + 33;
  AcquireSRWLockShared(this + 33);
  Ptr = (char *)this[17].Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  sourceString = 0LL;
  *(_QWORD *)length = 0LL;
  v14 = 0LL;
  v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         (__int64)&sourceString,
         (__int64)L"Desktop %Iu",
         Ptr + 1);
  v7 = (WCHAR *)sourceString;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = *(_QWORD *)length;
    if ( *(_QWORD *)length == -1LL )
    {
      if ( sourceString )
      {
        do
          ++v9;
        while ( sourceString[v9] );
      }
      else
      {
        LODWORD(v9) = 0;
      }
    }
    String = WindowsCreateString(sourceString, v9, a2);
    v8 = String;
    if ( String < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x70,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
        (const char *)(unsigned int)String);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x6F,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v6);
  }
  if ( v7 )
    CoTaskMemFree(v7);
  return v8;
}
