/*
 * XREFs of ?RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ @ 0x18000B5E0
 * Callers:
 *     ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x18000B900 (-AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008690 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     _lambda_ce21942885de90a1a6198292e021f395_::operator() @ 0x18002E0BC (_lambda_ce21942885de90a1a6198292e021f395_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDeviceGraphObjectsStore::RemoveStaleObjects(CDeviceGraphObjectsStore *this)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 **v3; // rbx
  volatile signed __int32 **i; // rdi
  volatile signed __int32 **j; // r14
  volatile signed __int32 **v6; // rbp
  volatile signed __int32 **k; // rbx
  void (*v8)(void); // rax
  unsigned int v9; // ebp
  volatile signed __int32 ***v10; // rdi
  volatile signed __int32 **v11; // rbx
  volatile signed __int32 **v12; // rsi
  volatile signed __int32 **m; // r14
  volatile signed __int32 **v14; // r14
  volatile signed __int32 **n; // rbx
  void (*v16)(void); // rax
  volatile signed __int32 **v17; // rdx
  volatile signed __int32 *v18; // rax
  volatile signed __int32 **v19; // rdx
  volatile signed __int32 *v20; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp+8h] BYREF
  char v22; // [rsp+58h] [rbp+10h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock((char *)this + 16, &lpCriticalSection);
  v3 = (volatile signed __int32 **)*((_QWORD *)this + 8);
  for ( i = (volatile signed __int32 **)*((_QWORD *)this + 7); i != v3; ++i )
  {
    if ( (unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(v2, i) )
      break;
  }
  if ( i != v3 )
  {
    for ( j = i + 1; j != v3; ++j )
    {
      if ( !(unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(v2, j) )
      {
        v17 = i++;
        v18 = 0LL;
        if ( &v22 != (char *)j )
        {
          v18 = *j;
          *j = 0LL;
        }
        v2 = *v17;
        *v17 = v18;
        if ( v2 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL))(v2);
      }
    }
  }
  if ( i != *((volatile signed __int32 ***)this + 8) )
  {
    v6 = (volatile signed __int32 **)*((_QWORD *)this + 8);
    for ( k = i; k != v6; ++k )
    {
      v2 = *k;
      if ( *k )
      {
        *k = 0LL;
        v8 = *(void (**)(void))(*(_QWORD *)v2 + 16LL);
        if ( (char *)v8 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v2);
        else
          v8();
      }
    }
    *((_QWORD *)this + 8) = i;
  }
  v9 = 0;
  v10 = (volatile signed __int32 ***)((char *)this + 80);
  do
  {
    v11 = v10[1];
    v12 = *v10;
    if ( *v10 != v11 )
    {
      do
      {
        if ( (unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(v2, v12) )
          break;
        ++v12;
      }
      while ( v12 != v11 );
      if ( v12 != v11 )
      {
        for ( m = v12 + 1; m != v11; ++m )
        {
          if ( !(unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(v2, m) )
          {
            v19 = v12++;
            v20 = 0LL;
            if ( &v22 != (char *)m )
            {
              v20 = *m;
              *m = 0LL;
            }
            v2 = *v19;
            *v19 = v20;
            if ( v2 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL))(v2);
          }
        }
      }
    }
    if ( v12 != v10[1] )
    {
      v14 = v10[1];
      for ( n = v12; n != v14; ++n )
      {
        v2 = *n;
        if ( *n )
        {
          *n = 0LL;
          v16 = *(void (**)(void))(*(_QWORD *)v2 + 16LL);
          if ( (char *)v16 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
            Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v2);
          else
            v16();
        }
      }
      v10[1] = v12;
    }
    ++v9;
    v10 += 3;
  }
  while ( v9 < 4 );
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
}
