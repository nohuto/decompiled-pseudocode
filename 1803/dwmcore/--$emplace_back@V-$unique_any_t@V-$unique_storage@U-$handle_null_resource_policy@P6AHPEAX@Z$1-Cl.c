/*
 * XREFs of ??$emplace_back@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@Z @ 0x180155728
 * Callers:
 *     ?EnsureResources@CCaptureRenderTarget@@AEAAJXZ @ 0x180155D54 (-EnsureResources@CCaptureRenderTarget@@AEAAJXZ.c)
 *     ?ProcessSetBuffers@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTARGET_SETBUFFERS@@PEBXI@Z @ 0x1801562A4 (-ProcessSetBuffers@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTARGET.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Change_array@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@AEAAXQEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@_K1@Z @ 0x180156BB8 (-_Change_array@-$vector@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEA.c)
 */

__int64 __fastcall std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::emplace_back<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 *v2; // rax
  __int64 *v4; // rbx
  __int64 result; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  _QWORD *v12; // r8
  _QWORD *v13; // r9
  _QWORD *i; // rdx
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (__int64 *)a1[2];
  v4 = (__int64 *)a1[1];
  if ( v2 == v4 )
  {
    v7 = ((__int64)v4 - *a1) >> 3;
    if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v8 = ((__int64)v2 - *a1) >> 3;
    v9 = v8 >> 1;
    if ( v8 <= 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 + 1 )
        v10 = v7 + 1;
    }
    else
    {
      v10 = v7 + 1;
    }
    v11 = std::_Allocate<std::_Default_allocate_traits<1>>(v10, 8uLL);
    v12 = (_QWORD *)v11;
    *(_QWORD *)(v11 + 8 * v7) = *a2;
    *a2 = 0LL;
    v13 = (_QWORD *)a1[1];
    for ( i = (_QWORD *)*a1; i != v13; ++i )
    {
      *v12++ = *i;
      *i = 0LL;
    }
    return std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::_Change_array(
             a1,
             v11,
             v7 + 1,
             v10);
  }
  else
  {
    result = *a2;
    *v4 = *a2;
    *a2 = 0LL;
    a1[1] += 8LL;
  }
  return result;
}
