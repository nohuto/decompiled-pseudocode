/*
 * XREFs of ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800C5018
 * Callers:
 *     ?Join@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x1800C4D68 (-Join@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgSco.c)
 * Callees:
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x1800DB752 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

_QWORD *__fastcall wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  const wchar_t *v6; // rbx
  __int64 v7; // rbx
  HANDLE ProcessHeap; // rax
  _WORD *v9; // rax
  _WORD *v10; // rdi
  size_t v11; // rbx
  _QWORD *result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9

  v4 = a3;
  v5 = a3;
  v6 = L"System\\CompositionEngineDataProvider";
  if ( a3 >= 0x7FFFFFFF )
    v4 = 0x7FFFFFFFLL;
  for ( ; v4; --v4 )
  {
    if ( !*v6 )
      break;
    ++v6;
  }
  v7 = v6 - L"System\\CompositionEngineDataProvider";
  if ( a3 == -1LL )
    v5 = v7;
  ProcessHeap = GetProcessHeap();
  v9 = HeapAlloc(ProcessHeap, 8u, 2 * v5 + 2);
  v10 = v9;
  if ( v9 )
  {
    v11 = 2 * v7;
    if ( v11 )
    {
      if ( 2 * v5 + 2 < v11 )
      {
        memset_0(v9, 0, 2 * v5 + 2);
        *(_DWORD *)_o__errno(v14, v13, v15, v16) = 34;
        invalid_parameter_noinfo();
      }
      else
      {
        memcpy_0(v9, L"System\\CompositionEngineDataProvider", v11);
      }
    }
    v10[v11 / 2] = 0;
    v10[v5] = 0;
  }
  result = a1;
  *a1 = v10;
  return result;
}
