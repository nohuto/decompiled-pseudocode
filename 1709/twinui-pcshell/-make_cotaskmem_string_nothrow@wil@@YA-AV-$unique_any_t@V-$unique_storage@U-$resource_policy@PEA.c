/*
 * XREFs of ?make_cotaskmem_string_nothrow@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG_K@Z @ 0x180081B3C
 * Callers:
 *     ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180081BF4 (-GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?CensorAppID@LoggingUtil@@YAJPEBGPEAPEAG@Z @ 0x1801CA1F8 (-CensorAppID@LoggingUtil@@YAJPEBGPEAPEAG@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x1801E2E30 (_invalid_parameter_noinfo.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     memcpy_0 @ 0x1801E5CBD (memcpy_0.c)
 */

_QWORD *__fastcall wil::make_cotaskmem_string_nothrow(_QWORD *a1, _WORD *a2, __int64 a3)
{
  __int64 v3; // rdi
  _WORD *v6; // rax
  _WORD *v7; // rbx
  size_t v8; // r8
  __int64 v9; // rcx
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
          *(_DWORD *)_o__errno(v9) = 34;
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
