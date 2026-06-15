/*
 * XREFs of ?WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001C590
 * Callers:
 *     <none>
 * Callees:
 *     ?OnNewProcessSubmix@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x180022CF0 (-OnNewProcessSubmix@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     std::_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_::_Do_call @ 0x180045B60 (std--_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_::_Delete_this @ 0x180045C80 (std--_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_--_Delete_this.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSerialWorkQueue::WorkCallback(PTP_CALLBACK_INSTANCE Instance, _QWORD *Context, PTP_WORK Work)
{
  __int64 v5; // rbx
  int v6; // eax
  _QWORD *v7; // rcx
  __int64 (__fastcall *v8)(); // rax
  struct IProcessSubmixProxy *v9; // rdx
  __int64 (__fastcall *v10)(CProcessSubmixManager *__hidden, struct IProcessSubmixProxy *); // rax
  int v11; // eax
  volatile signed __int32 *v12; // rbx
  __int64 (__fastcall *v13)(); // rax
  volatile signed __int32 *v14; // r14
  __int64 (__fastcall *v15)(void *); // rax
  __int64 v16; // rcx
  __int64 (__fastcall *v17)(); // rax
  void *v18; // rcx

  v5 = Context[2];
  v6 = _Mtx_lock((_Mtx_t)(v5 + 88));
  if ( v6 )
    std::_Throw_C_error(v6);
  if ( !*(_BYTE *)(v5 + 80) )
  {
    v7 = *(_QWORD **)(*Context + 56LL);
    if ( !v7 )
    {
      std::_Xbad_function_call();
      JUMPOUT(0x18008009CLL);
    }
    v8 = *(__int64 (__fastcall **)())(*v7 + 16LL);
    if ( v8 == std::_Func_impl_no_alloc__lambda_7ec12844dd892c2137a8dee196d89f16__void_::_Do_call )
    {
      v9 = (struct IProcessSubmixProxy *)v7[1];
      v10 = *(__int64 (__fastcall **)(CProcessSubmixManager *__hidden, struct IProcessSubmixProxy *))(*(_QWORD *)g_ProcessSubmixManager + 64LL);
      if ( v10 == CProcessSubmixManager::OnNewProcessSubmix )
        CProcessSubmixManager::OnNewProcessSubmix(g_ProcessSubmixManager, v9);
      else
        v10(g_ProcessSubmixManager, v9);
    }
    else if ( (char *)v8 == (char *)std::_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_::_Do_call )
    {
      std::_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_::_Do_call(v7);
    }
    else
    {
      ((void (__fastcall *)(_QWORD *))v8)(v7);
    }
  }
  v11 = _Mtx_unlock((_Mtx_t)(v5 + 88));
  if ( v11 )
    std::_Throw_C_error(v11);
  v12 = (volatile signed __int32 *)Context[1];
  if ( v12 && _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
  {
    v13 = **(__int64 (__fastcall ***)())v12;
    if ( v13 == std::_Ref_count_obj<std::function<void (void)>>::_Destroy )
    {
      v14 = (volatile signed __int32 *)*((_QWORD *)v12 + 9);
      if ( v14 )
      {
        v15 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v14 + 32LL);
        if ( v15 == std::_Func_impl_no_alloc__lambda_7ec12844dd892c2137a8dee196d89f16__void_::_Delete_this )
        {
          v16 = *((_QWORD *)v14 + 1);
          if ( v16 )
          {
            *((_QWORD *)v14 + 1) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          }
          if ( v14 != v12 + 4 )
            std::_Deallocate((void *)v14, 1uLL, 0x10uLL);
        }
        else
        {
          v18 = (void *)*((_QWORD *)v12 + 9);
          if ( v15 == std::_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_::_Delete_this )
            std::_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_::_Delete_this(v18);
          else
            ((void (__fastcall *)(void *, bool))v15)(v18, v14 != v12 + 4);
        }
        *((_QWORD *)v12 + 9) = 0LL;
      }
    }
    else
    {
      ((void (__fastcall *)(volatile signed __int32 *))v13)(v12);
    }
    if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
    {
      if ( *(__int64 (__fastcall **)())(*(_QWORD *)v12 + 8LL) == std::_Ref_count_obj<std::function<void (void)>>::_Delete_this )
      {
        v17 = *(__int64 (__fastcall **)())(*(_QWORD *)v12 + 16LL);
        if ( v17 == std::_Ref_count_obj<std::function<void (void)>>::`scalar deleting destructor' )
        {
          *(_QWORD *)v12 = &std::_Ref_count_base::`vftable';
          operator delete((void *)v12, (const struct std::nothrow_t *)0x50);
        }
        else
        {
          ((void (__fastcall *)(volatile signed __int32 *, __int64))v17)(v12, 1LL);
        }
      }
      else
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
    }
  }
  operator delete(Context, (const struct std::nothrow_t *)0x18);
  CloseThreadpoolWork(Work);
}
