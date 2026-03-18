/*
 * XREFs of ?TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z @ 0x180083AC8
 * Callers:
 *     ?Release@CEffectCompilationTask@@UEAAKXZ @ 0x180084970 (-Release@CEffectCompilationTask@@UEAAKXZ.c)
 * Callees:
 *     std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_eb696d0986d67961825d62a9f295508f___ @ 0x18008397C (std--find_if_std--_Deque_iterator_std--_Deque_val_std--_Deque_simple_types_Microsoft--WRL--ComPt.c)
 *     ?pop_front@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x180083F6C (-pop_front@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCE.c)
 *     ?push_back@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@Z @ 0x180084304 (-push_back@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCE.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x1800844E4 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CEffectCompilationService::TryAddDeadTask(
        CEffectCompilationService *this,
        struct CEffectCompilationTask *a2)
{
  char *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rbx
  _QWORD v8[3]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v9[3]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v10[32]; // [rsp+50h] [rbp-20h] BYREF
  struct CEffectCompilationTask *v11; // [rsp+90h] [rbp+20h] BYREF
  struct CEffectCompilationTask *v12; // [rsp+98h] [rbp+28h] BYREF

  v12 = a2;
  if ( *((_BYTE *)this + 72) )
    return 0;
  if ( *((_BYTE *)this + 216) )
    return 0;
  v8[1] = 0LL;
  v3 = (char *)this + 176;
  v4 = *((_QWORD *)this + 25);
  v5 = *((_QWORD *)this + 22);
  v6 = *((_QWORD *)this + 26);
  v9[1] = 0LL;
  v9[2] = v4;
  v8[2] = v4 + v6;
  v8[0] = v5;
  v9[0] = v5;
  if ( *(_QWORD *)(std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_eb696d0986d67961825d62a9f295508f___(
                     (__int64)v10,
                     (__int64)v9,
                     (__int64)v8,
                     &v12)
                 + 16) != v4 + v6 )
    return 0;
  if ( *((_QWORD *)this + 26) > 0x40uLL )
  {
    *((_BYTE *)this + 216) = 1;
    std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::pop_front(v3);
    *((_BYTE *)this + 216) = 0;
  }
  v11 = v12;
  if ( v12 )
    (**(void (__fastcall ***)(struct CEffectCompilationTask *))v12)(v12);
  std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::push_back(v3, &v11);
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v11);
  return 1;
}
