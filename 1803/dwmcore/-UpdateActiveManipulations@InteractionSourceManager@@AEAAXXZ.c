/*
 * XREFs of ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x1801CAADC
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180048000 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180035544 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompilationTas.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x180196ED0 (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x180196F30 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 *     ??A?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x1801C9790 (--A-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_pt.c)
 *     ??H?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEBA?AV01@_J@Z @ 0x1801C97FC (--H-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCManipulation@@Uerr_retu.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@AEBAPEAVCManipulation@@XZ @ 0x1801CAAA8 (-TryGetActiveManipulation@InteractionSourceManager@@AEBAPEAVCManipulation@@XZ.c)
 *     ?erase@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1801CB264 (-erase@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$al_ea_1801CB264.c)
 *     ?push_front@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXAEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801CB440 (-push_front@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@_ea_1801CB440.c)
 */

void __fastcall InteractionSourceManager::UpdateActiveManipulations(InteractionSourceManager *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  bool v4; // zf
  __int64 v5; // rdi
  __int64 v6; // rax
  _QWORD *v7; // rax
  CInteractionTracker *v8; // rbx
  struct CManipulation *ActiveManipulation; // rax
  int v10; // ecx
  int v11; // eax
  _QWORD v12[3]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v13[4]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v14; // [rsp+90h] [rbp+20h] BYREF

  if ( *((_QWORD *)this + 14) > 1uLL )
  {
    v2 = 0LL;
    v3 = 0LL;
    v14 = 0LL;
    if ( !*((_QWORD *)this + 14) )
      goto LABEL_8;
    while ( *(_DWORD *)(*(_QWORD *)std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::operator[](
                                     (_QWORD *)this + 10,
                                     v3)
                      + 412LL) != 2 )
    {
      if ( (unsigned __int64)++v3 >= *((_QWORD *)this + 14) )
        goto LABEL_8;
    }
    v2 = *(_QWORD *)std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::operator[](
                      (_QWORD *)this + 10,
                      v3);
    v14 = v2;
    if ( v2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      v4 = v2 == 0;
    }
    else
    {
LABEL_8:
      v5 = 0LL;
      if ( *((_QWORD *)this + 14) )
      {
        while ( (unsigned int)(*(_DWORD *)(*(_QWORD *)std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::operator[](
                                                        (_QWORD *)this + 10,
                                                        v5)
                                         + 412LL)
                             - 2) > 2 )
        {
          if ( (unsigned __int64)++v5 >= *((_QWORD *)this + 14) )
            goto LABEL_14;
        }
        v2 = *(_QWORD *)std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::operator[](
                          (_QWORD *)this + 10,
                          v5);
        v14 = v2;
        if ( v2 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      }
LABEL_14:
      v4 = v2 == 0;
    }
    if ( !v4 )
    {
      v12[1] = 0LL;
      v12[2] = *((_QWORD *)this + 13);
      v12[0] = *((_QWORD *)this + 10);
      v6 = std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>::operator+((__int64)v12);
      v7 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
             v13,
             v6);
      std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::erase((char *)this + 80, v12, v7);
      std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::push_front((char *)this + 80, &v14);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v14);
  }
  v8 = *(CInteractionTracker **)(*((_QWORD *)this + 1) + 8LL);
  ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation((__int64 **)this);
  if ( !ActiveManipulation )
  {
    if ( *((_DWORD *)v8 + 38) == 2 )
      goto LABEL_28;
LABEL_27:
    CInteractionTracker::TransitionToInertia(v8);
    goto LABEL_28;
  }
  v10 = *((_DWORD *)ActiveManipulation + 103);
  if ( (unsigned int)(v10 - 2) <= 2 && *((_DWORD *)v8 + 38) != 1 )
  {
    CInteractionTracker::TransitionToInContact(v8);
    goto LABEL_28;
  }
  if ( (unsigned int)(v10 - 2) > 2 )
  {
    v11 = *((_DWORD *)v8 + 38);
    if ( v11 != 2 )
    {
      if ( !v11 )
        CInteractionTracker::TransitionToInContact(v8);
      goto LABEL_27;
    }
  }
LABEL_28:
  *((_BYTE *)this + 120) = 0;
}
