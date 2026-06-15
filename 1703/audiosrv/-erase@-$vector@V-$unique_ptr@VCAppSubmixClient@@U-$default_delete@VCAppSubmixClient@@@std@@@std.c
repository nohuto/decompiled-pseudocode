/*
 * XREFs of ?erase@?$vector@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1800AFA24
 * Callers:
 *     ?DeleteAppSubmixClient@CProcessSubmixManager@@UEAAXPEAPEAVCAppSubmixClient@@@Z @ 0x1800AF080 (-DeleteAppSubmixClient@CProcessSubmixManager@@UEAAXPEAPEAVCAppSubmixClient@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??4?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AEFB0 (--4-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSubmixClient@@@std@@@std@@QEAAAEAV01@$.c)
 */

__int64 ***__fastcall std::vector<std::unique_ptr<CAppSubmixClient>>::erase(
        __int64 a1,
        __int64 ***a2,
        __int64 **a3,
        __int64 **a4)
{
  __int64 **v4; // rsi
  __int64 **v8; // r15
  __int64 **v9; // rdi
  __int64 **v10; // r12
  __int64 **i; // rsi
  __int64 *v12; // r15
  __int64 ***result; // rax

  v4 = a4;
  if ( a3 != a4 )
  {
    v8 = *(__int64 ***)(a1 + 8);
    v9 = a3;
    if ( a4 != v8 )
    {
      do
        std::unique_ptr<CAppSubmixClient>::operator=(v9++, v4++);
      while ( v4 != v8 );
    }
    v10 = *(__int64 ***)(a1 + 8);
    for ( i = v9; i != v10; ++i )
    {
      v12 = *i;
      if ( *i )
      {
        wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(*i);
        operator delete(v12, (const struct std::nothrow_t *)0x10);
      }
    }
    *(_QWORD *)(a1 + 8) = v9;
  }
  result = a2;
  *a2 = a3;
  return result;
}
