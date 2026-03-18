/*
 * XREFs of ?TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z @ 0x180083A38
 * Callers:
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x180083CC8 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 * Callees:
 *     std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_eb696d0986d67961825d62a9f295508f___ @ 0x18008397C (std--find_if_std--_Deque_iterator_std--_Deque_val_std--_Deque_simple_types_Microsoft--WRL--ComPt.c)
 *     ?erase@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x1800843DC (-erase@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$C_ea_1800843DC.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18008444C (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompilationTas.c)
 */

void __fastcall CEffectCompilationService::TryReviveDeadTask(
        CEffectCompilationService *this,
        const struct CEffectCompilationTask *a2)
{
  char *v2; // rbx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v8[3]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v9[16]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v10; // [rsp+60h] [rbp-10h]
  const struct CEffectCompilationTask *v11; // [rsp+88h] [rbp+18h] BYREF

  v11 = a2;
  v7[1] = 0LL;
  v2 = (char *)this + 176;
  v3 = *((_QWORD *)this + 25);
  v4 = *((_QWORD *)this + 22);
  v5 = *((_QWORD *)this + 26);
  v8[1] = 0LL;
  v7[2] = v3 + v5;
  v7[0] = v4;
  v8[0] = v4;
  v8[2] = v3;
  std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_eb696d0986d67961825d62a9f295508f___(
    (__int64)v9,
    (__int64)v8,
    (__int64)v7,
    &v11);
  if ( v10 != *((_QWORD *)v2 + 3) + *((_QWORD *)v2 + 4) )
  {
    v6 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
           v8,
           v9);
    std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::erase(v2, v9, v6);
  }
}
