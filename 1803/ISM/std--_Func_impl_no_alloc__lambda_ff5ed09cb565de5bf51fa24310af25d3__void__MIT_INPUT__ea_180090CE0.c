/*
 * XREFs of std::_Func_impl_no_alloc__lambda_ff5ed09cb565de5bf51fa24310af25d3__void__MIT_INPUT_CONFIG_MESSAGE_const_____ptr64_::_Do_call @ 0x180090CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearConfigs@InputConfigContextProvider@@IEAAXAEAV?$vector@UINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@V?$allocator@UINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@@std@@@std@@@Z @ 0x180090790 (-ClearConfigs@InputConfigContextProvider@@IEAAXAEAV-$vector@UINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@.c)
 *     ??$emplace_back@AEBUINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@@?$vector@UINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@V?$allocator@UINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@@std@@@std@@QEAAAEAUINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@AEBU2@@Z @ 0x1800907DC (--$emplace_back@AEBUINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@@-$vector@UINPUT_SYSTEM_OUTPUT_CONFIG_PA.c)
 *     ??$_Assign_range@PEAUINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@@?$vector@UINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@V?$allocator@UINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@@std@@@std@@AEAAXPEAUINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@0Uforward_iterator_tag@1@@Z @ 0x180090AC0 (--$_Assign_range@PEAUINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@@-$vector@UINPUT_SYSTEM_OUTPUT_CONFIG_P.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E212C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800E3217 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_ff5ed09cb565de5bf51fa24310af25d3__void__MIT_INPUT_CONFIG_MESSAGE_const_____ptr64_::_Do_call(
        __int64 a1,
        unsigned int **a2)
{
  _QWORD *result; // rax
  __int64 v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  bool v8; // zf
  _QWORD *v9; // rbx
  const void *v10; // rbx
  unsigned __int64 v11; // xmm1_8
  __m128i v12; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+30h] [rbp-20h]
  __m128i v14; // [rsp+38h] [rbp-18h] BYREF
  _QWORD *v15; // [rsp+48h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+8h] BYREF

  result = &retaddr;
  v3 = (__int64)*a2;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = **a2;
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 == 1 )
    {
      InputConfigContextProvider::ClearConfigs(v5, (__int64 *)(v4 + 248));
      if ( v4 + 248 != v4 + 224 )
        std::vector<INPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD>::_Assign_range<INPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD *>(
          (void **)(v4 + 248),
          *(char **)(v4 + 224),
          *(_QWORD *)(v4 + 232));
      *(_QWORD *)(v4 + 232) = *(_QWORD *)(v4 + 224);
      v6 = *(_QWORD *)(v4 + 248);
      v7 = *(_QWORD *)(v4 + 256) - v6;
      v12 = (__m128i)1uLL;
      result = *(_QWORD **)(v4 + 32);
      v8 = v6 == *(_QWORD *)(v4 + 256);
      v12.m128i_i64[1] = (unsigned int)(v7 / 24);
      if ( v8 )
        v6 = 0LL;
      v13 = v6;
      v9 = (_QWORD *)*result;
      if ( (_QWORD *)*result != result )
      {
        do
        {
          result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __m128i *))(*(_QWORD *)v9[2] + 24LL))(v9[2], &v12);
          v9 = (_QWORD *)*v9;
        }
        while ( v9 != *(_QWORD **)(v4 + 32) );
      }
    }
  }
  else
  {
    v10 = (const void *)(v3 + 20);
    v12 = (__m128i)*(unsigned __int64 *)(v3 + 4);
    v12.m128i_i64[1] = *(_QWORD *)(v3 + 12);
    v13 = v3 + 20;
    v14 = v12;
    v11 = _mm_srli_si128(v12, 8).m128i_u64[0];
    v15 = (_QWORD *)(v3 + 20);
    if ( HIDWORD(v11) )
    {
      result = operator new[](saturated_mul(HIDWORD(v11), 0x48uLL));
      v15 = result;
      if ( !result )
        return result;
      memcpy_0(result, v10, 72LL * v14.m128i_u32[3]);
    }
    return (_QWORD *)std::vector<INPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD>::emplace_back<INPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD const &>(
                       v4 + 224,
                       (__int64)&v14);
  }
  return result;
}
