/*
 * XREFs of ?RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ @ 0x18000EA38
 * Callers:
 *     ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x18000EDB0 (-AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     _lambda_ce21942885de90a1a6198292e021f395_::operator() @ 0x1800311C4 (_lambda_ce21942885de90a1a6198292e021f395_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDeviceGraphObjectsStore::RemoveStaleObjects(CDeviceGraphObjectsStore *this)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 **v3; // rbx
  volatile signed __int32 **i; // rdi
  volatile signed __int32 **j; // rsi
  unsigned int v6; // r14d
  volatile signed __int32 ***v7; // rbp
  volatile signed __int32 **v8; // rbx
  volatile signed __int32 **m; // rdi
  volatile signed __int32 **v10; // rsi
  volatile signed __int32 **v11; // rsi
  volatile signed __int32 **k; // rbx
  void (*v13)(void); // rax
  volatile signed __int32 **v14; // rbx
  void (*v15)(void); // rax
  volatile signed __int32 **n; // rsi
  volatile signed __int32 *v17; // rax
  volatile signed __int32 *v19; // rax
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+60h] [rbp+8h]
  char v21; // [rsp+68h] [rbp+10h] BYREF

  lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v3 = (volatile signed __int32 **)*((_QWORD *)this + 8);
  for ( i = (volatile signed __int32 **)*((_QWORD *)this + 7);
        i != v3 && !(unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(v2, i);
        ++i )
  {
    ;
  }
  if ( i != v3 )
  {
    for ( j = i + 1; j != v3; ++j )
    {
      if ( !(unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(v2, j) )
      {
        v17 = 0LL;
        if ( &v21 != (char *)j )
        {
          v17 = *j;
          *j = 0LL;
        }
        v2 = *i;
        *i = v17;
        if ( v2 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL))(v2);
        ++i;
      }
    }
  }
  if ( i != *((volatile signed __int32 ***)this + 8) )
  {
    v11 = (volatile signed __int32 **)*((_QWORD *)this + 8);
    for ( k = i; k != v11; ++k )
    {
      v2 = *k;
      if ( *k )
      {
        *k = 0LL;
        v13 = *(void (**)(void))(*(_QWORD *)v2 + 16LL);
        if ( (char *)v13 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(v2);
        else
          v13();
      }
    }
    *((_QWORD *)this + 8) = i;
  }
  v6 = 0;
  v7 = (volatile signed __int32 ***)((char *)this + 80);
  do
  {
    v8 = v7[1];
    for ( m = *v7; m != v8 && !(unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(v2, m); ++m )
      ;
    if ( m != v8 )
    {
      for ( n = m + 1; n != v8; ++n )
      {
        if ( !(unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(v2, n) )
        {
          v19 = 0LL;
          if ( &v21 != (char *)n )
          {
            v19 = *n;
            *n = 0LL;
          }
          v2 = *m;
          *m = v19;
          if ( v2 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL))(v2);
          ++m;
        }
      }
    }
    v10 = v7[1];
    if ( m != v10 )
    {
      v14 = m;
      do
      {
        v2 = *v14;
        if ( *v14 )
        {
          *v14 = 0LL;
          v15 = *(void (**)(void))(*(_QWORD *)v2 + 16LL);
          if ( (char *)v15 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(v2);
          else
            v15();
        }
        ++v14;
      }
      while ( v14 != v10 );
      v7[1] = m;
    }
    ++v6;
    v7 += 3;
  }
  while ( v6 < 4 );
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
}
