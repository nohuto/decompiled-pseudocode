/*
 * XREFs of ?ClearConfigs@InputConfigContextProvider@@IEAAXAEAV?$vector@UINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@V?$allocator@UINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@@std@@@std@@@Z @ 0x180090790
 * Callers:
 *     ??1InputConfigContextProvider@@MEAA@XZ @ 0x180090304 (--1InputConfigContextProvider@@MEAA@XZ.c)
 *     std::_Func_impl_no_alloc__lambda_ff5ed09cb565de5bf51fa24310af25d3__void__MIT_INPUT_CONFIG_MESSAGE_const_____ptr64_::_Do_call @ 0x180090CE0 (std--_Func_impl_no_alloc__lambda_ff5ed09cb565de5bf51fa24310af25d3__void__MIT_INPUT__ea_180090CE0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall InputConfigContextProvider::ClearConfigs(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  void *v5; // rcx

  v2 = *a2;
  v4 = a2[1];
  if ( *a2 != v4 )
  {
    do
    {
      v5 = *(void **)(v2 + 16);
      if ( v5 )
        operator delete(v5);
      v2 += 24LL;
    }
    while ( v2 != v4 );
    v2 = *a2;
  }
  a2[1] = v2;
}
