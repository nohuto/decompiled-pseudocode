/*
 * XREFs of ?PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ @ 0x18000DB18
 * Callers:
 *     ?PruneInactiveProcessSubmixes@CBaseStreamGroupProxy@@UEAAXXZ @ 0x18000D7A0 (-PruneInactiveProcessSubmixes@CBaseStreamGroupProxy@@UEAAXXZ.c)
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x18000D8A0 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 *     ?EnumerateProcessSubmixes@CBaseStreamGroupProxy@@UEAAJAEAV?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800933A0 (-EnumerateProcessSubmixes@CBaseStreamGroupProxy@@UEAAJAEAV-$vector@V-$ComPtr@UIProcessSubmixProx.c)
 * Callees:
 *     _lambda_6721409c6d8d6be39a12e154768b61d2_::operator() @ 0x18000C73C (_lambda_6721409c6d8d6be39a12e154768b61d2_--operator().c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBaseStreamGroupProxy::PruneStaleProcessSubmixes(CBaseStreamGroupProxy *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // r14
  Microsoft::WRL::Details::WeakReferenceImpl *v3; // rcx
  Microsoft::WRL::Details::WeakReferenceImpl **v4; // rbx
  Microsoft::WRL::Details::WeakReferenceImpl **i; // rdi
  volatile signed __int32 **v6; // rsi
  volatile signed __int32 **v7; // rbx
  volatile signed __int32 *v8; // rcx
  void (*v9)(void); // rax
  Microsoft::WRL::Details::WeakReferenceImpl **j; // rsi
  Microsoft::WRL::Details::WeakReferenceImpl *v12; // rax
  char v13; // [rsp+40h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v4 = (Microsoft::WRL::Details::WeakReferenceImpl **)*((_QWORD *)this + 28);
  for ( i = (Microsoft::WRL::Details::WeakReferenceImpl **)*((_QWORD *)this + 27);
        i != v4 && !lambda_6721409c6d8d6be39a12e154768b61d2_::operator()((__int64)v3, i);
        ++i )
  {
    ;
  }
  if ( i != v4 )
  {
    for ( j = i + 1; j != v4; ++j )
    {
      if ( !lambda_6721409c6d8d6be39a12e154768b61d2_::operator()((__int64)v3, j) )
      {
        v12 = 0LL;
        if ( &v13 != (char *)j )
        {
          v12 = *j;
          *j = 0LL;
        }
        v3 = *i;
        *i = v12;
        if ( v3 )
          (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v3 + 16LL))(v3);
        ++i;
      }
    }
  }
  if ( i != *((Microsoft::WRL::Details::WeakReferenceImpl ***)this + 28) )
  {
    v6 = (volatile signed __int32 **)*((_QWORD *)this + 28);
    v7 = (volatile signed __int32 **)i;
    if ( i != (Microsoft::WRL::Details::WeakReferenceImpl **)v6 )
    {
      do
      {
        v8 = *v7;
        if ( *v7 )
        {
          *v7 = 0LL;
          v9 = *(void (**)(void))(*(_QWORD *)v8 + 16LL);
          if ( (char *)v9 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(v8);
          else
            v9();
        }
        ++v7;
      }
      while ( v7 != v6 );
    }
    *((_QWORD *)this + 28) = i;
  }
  if ( v1 )
    LeaveCriticalSection(v1);
}
