/*
 * XREFs of ?TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z @ 0x180034E24
 * Callers:
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x180035184 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 * Callees:
 *     ?erase@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x180019CE4 (-erase@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffec.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180035544 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompilationTas.c)
 *     ??$_Unchecked@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@AEBV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@@Z @ 0x180035570 (--$_Unchecked@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompilationTask@@@WRL@Micro.c)
 */

void __fastcall CEffectCompilationService::TryReviveDeadTask(
        CEffectCompilationService *this,
        const struct CEffectCompilationTask *a2)
{
  unsigned __int64 *v2; // r10
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // r11
  unsigned __int64 i; // r8
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 *v12; // r10
  __int128 v13; // [rsp+20h] [rbp-39h] BYREF
  unsigned __int64 v14; // [rsp+30h] [rbp-29h]
  __int128 v15; // [rsp+40h] [rbp-19h] BYREF
  unsigned __int64 v16; // [rsp+50h] [rbp-9h]
  __int128 v17; // [rsp+60h] [rbp+7h] BYREF
  _BYTE v18[24]; // [rsp+80h] [rbp+27h] BYREF
  _BYTE v19[24]; // [rsp+98h] [rbp+3Fh] BYREF

  *((_QWORD *)&v15 + 1) = 0LL;
  v2 = (unsigned __int64 *)((char *)this + 176);
  v3 = *((_QWORD *)this + 25);
  v4 = 0LL;
  v5 = v3 + *((_QWORD *)this + 26);
  v14 = v3;
  v16 = v5;
  if ( v2 )
    v4 = *v2;
  *(_QWORD *)&v15 = *v2;
  v13 = v4;
  v15 = *(_OWORD *)std::_Unchecked<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(v19);
  v17 = *(_OWORD *)std::_Unchecked<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(v18);
  for ( i = *((_QWORD *)&v17 + 1);
        i != *((_QWORD *)&v15 + 1)
     && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 8 * ((i >> 1) & (*(_QWORD *)(v17 + 16) - 1LL))) + 8 * (i & 1)) != v6;
        ++i )
  {
    ;
  }
  v14 = i;
  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
    &v15,
    &v13);
  if ( v16 != *(_QWORD *)(v8 + 24) + *(_QWORD *)(v8 + 32) )
  {
    v9 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
           v19,
           &v15);
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
      &v13,
      v9);
    ++v14;
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
      v18,
      &v13);
    v11 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
            &v17,
            v10);
    std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::erase(v12, (__int64)&v13, v11);
  }
}
