/*
 * XREFs of ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18007EBFC
 * Callers:
 *     ?make_cotaskmem_string_nothrow@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG_K@Z @ 0x18007ECB4 (-make_cotaskmem_string_nothrow@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180194E10 (_invalid_parameter_noinfo.c)
 *     memset @ 0x180194E50 (memset.c)
 *     memcpy_0 @ 0x1801976BE (memcpy_0.c)
 */

_QWORD *__fastcall wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
        _QWORD *a1,
        _WORD *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  _WORD *v6; // rax
  _WORD *v7; // rdi
  size_t v8; // r8
  _QWORD *result; // rax

  v3 = a3;
  if ( a3 == -1 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( a2[v3] );
  }
  v6 = CoTaskMemAlloc(2 * v3 + 2);
  v7 = v6;
  if ( v6 )
  {
    if ( a2 )
    {
      v8 = 2 * v3;
      if ( 2 * v3 )
      {
        if ( 2 * v3 + 2 < v8 )
        {
          memset(v6, 0, 2 * v3 + 2);
          *(_DWORD *)_o__errno() = 34;
          invalid_parameter_noinfo();
        }
        else
        {
          memcpy_0(v6, a2, v8);
        }
      }
    }
    else
    {
      *v6 = 0;
    }
    v7[v3] = 0;
  }
  result = a1;
  *a1 = v7;
  return result;
}
