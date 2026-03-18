/*
 * XREFs of ??$_Move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00@Z @ 0x180002994
 * Callers:
 *     ?erase@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x1800056F0 (-erase@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffec.c)
 * Callees:
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180005B40 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompilationTas.c)
 *     ??4?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180005BDC (--4-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??D?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@QEBAAEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@XZ @ 0x1800D2CE0 (--D-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompilationTask@@@WR.c)
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800D2D60 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x1800D2DE4 (--1_Lockit@std@@QEAA@XZ.c)
 */

_QWORD *__fastcall std::_Move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v10; // rax
  __int64 v11; // r9
  _QWORD v12[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v13; // [rsp+30h] [rbp-40h]
  _BYTE v14[16]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v15; // [rsp+48h] [rbp-28h]
  _BYTE v16[16]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v17; // [rsp+60h] [rbp-10h]
  char v18; // [rsp+80h] [rbp+10h] BYREF

  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
    v12,
    a4);
  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
    v14,
    a3);
  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
    v16,
    a2);
  v7 = v13;
  v8 = v15;
  while ( v17 != v8 )
  {
    --v8;
    --v7;
    v15 = v8;
    v13 = v7;
    std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::operator*(v14);
    v10 = std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::operator*(v12);
    Microsoft::WRL::ComPtr<CEffectCompilationTask>::operator=(v10, v11);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v12[0] )
  {
    if ( *(_QWORD *)v12[0] )
    {
      *a1 = **(_QWORD **)v12[0];
    }
    else
    {
      std::_Lockit::_Lockit((std::_Lockit *)&v18, 3);
      std::_Lockit::~_Lockit((std::_Lockit *)&v18);
    }
  }
  a1[2] = v7;
  return a1;
}
