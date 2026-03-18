/*
 * XREFs of ?TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z @ 0x180034F50
 * Callers:
 *     ?Release@CEffectCompilationTask@@UEAAKXZ @ 0x1800375E0 (-Release@CEffectCompilationTask@@UEAAKXZ.c)
 * Callees:
 *     ?pop_front@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x180019EA8 (-pop_front@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCE.c)
 *     ?push_back@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@Z @ 0x18003569C (-push_back@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCE.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800357C4 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_0ed9790c2b8c28f4d2acaca19c8b17ac___ @ 0x1800C7C8C (std--find_if_std--_Deque_iterator_std--_Deque_val_std--_Deque_simple_types_Microsoft--WRL--ComPt.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CEffectCompilationService::TryAddDeadTask(
        CEffectCompilationService *this,
        struct CEffectCompilationTask *a2)
{
  struct CEffectCompilationTask *v2; // rbx
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // r14
  __int128 v8; // [rsp+20h] [rbp-50h] BYREF
  __int64 v9; // [rsp+30h] [rbp-40h]
  __int128 v10; // [rsp+38h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-28h]
  _BYTE v12[32]; // [rsp+50h] [rbp-20h] BYREF
  struct CEffectCompilationTask *v13; // [rsp+90h] [rbp+20h] BYREF
  struct CEffectCompilationTask *v14; // [rsp+98h] [rbp+28h] BYREF

  v14 = a2;
  v2 = a2;
  if ( *((_BYTE *)this + 72) || *((_BYTE *)this + 216) )
    return 0;
  v4 = (_QWORD *)((char *)this + 176);
  v5 = *((_QWORD *)this + 25);
  v6 = v5 + v4[4];
  v9 = v6;
  v8 = 0LL;
  if ( v4 )
    *(_QWORD *)&v8 = *v4;
  v11 = v5;
  v10 = 0LL;
  if ( v4 )
    *(_QWORD *)&v10 = *v4;
  if ( *(_QWORD *)(((__int64 (__fastcall *)(_BYTE *, __int128 *, __int128 *, struct CEffectCompilationTask **))std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_0ed9790c2b8c28f4d2acaca19c8b17ac___)(
                     v12,
                     &v10,
                     &v8,
                     &v14)
                 + 16) != v6 )
    return 0;
  if ( *((_QWORD *)this + 26) > 0x40uLL )
  {
    *((_BYTE *)this + 216) = 1;
    std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::pop_front(v4);
    v2 = v14;
    *((_BYTE *)this + 216) = 0;
  }
  v13 = v2;
  if ( v2 )
    (**(void (__fastcall ***)(struct CEffectCompilationTask *))v2)(v2);
  std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::push_back(v4, &v13);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v13);
  return 1;
}
