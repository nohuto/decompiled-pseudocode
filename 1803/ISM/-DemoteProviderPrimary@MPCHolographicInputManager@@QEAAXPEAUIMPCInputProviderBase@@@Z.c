/*
 * XREFs of ?DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18004DDF0
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18003CC50 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x18004DD00 (-SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     ?DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18004EC1C (-DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?erase@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x180050D6C (-erase@-$vector@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMPCIn.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCHolographicInputManager::DemoteProviderPrimary(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2)
{
  struct IMPCInputProviderBase **v2; // rbp
  _QWORD *v3; // r14
  struct IMPCInputProviderBase **i; // rdi
  struct IMPCInputProviderBase *v7; // rbx
  __int64 v8; // r8
  const char *v9; // r9
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct IMPCInputProviderBase **)*((_QWORD *)this + 279);
  v3 = (_QWORD *)((char *)this + 2224);
  for ( i = (struct IMPCInputProviderBase **)*((_QWORD *)this + 278); i != v2; ++i )
  {
    v7 = *i;
    if ( *i )
    {
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v7 + 8LL))(*i);
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( a2 == v7 )
      break;
  }
  if ( i != *((struct IMPCInputProviderBase ***)this + 247) )
  {
    MPCHolographicInputManager::DemotePrimaryProviderInternal(this, a2);
    std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::erase(v3, &v10, i);
    if ( ((v3[1] - *v3) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
      MPCHolographicInputManager::SetProviderPrimary(this, *((struct IMPCInputProviderBase **)this + 250), v8, v9);
  }
}
