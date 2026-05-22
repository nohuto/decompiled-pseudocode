/*
 * XREFs of ?OnDisconnected@InputAttemptedDeliveryClientProxy@@UEAAJXZ @ 0x180022EA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputAttemptedDeliveryClientProxy::OnDisconnected(InputAttemptedDeliveryClientProxy *this)
{
  __int64 v2; // r15
  InputAttemptedDeliveryClientProxy **v3; // rdi
  InputAttemptedDeliveryClientProxy **i; // rbx
  InputAttemptedDeliveryClientProxy **j; // r14
  InputAttemptedDeliveryClientProxy *v6; // rax
  InputAttemptedDeliveryClientProxy *v7; // rcx
  InputAttemptedDeliveryClientProxy **v8; // rbp
  InputAttemptedDeliveryClientProxy *v9; // rax
  InputAttemptedDeliveryClientProxy *v10; // rcx
  InputAttemptedDeliveryClientProxy **k; // rdi
  InputAttemptedDeliveryClientProxy *v12; // rcx
  __int64 v13; // rcx
  char v15; // [rsp+40h] [rbp+8h] BYREF

  if ( this )
    (**(void (__fastcall ***)(InputAttemptedDeliveryClientProxy *))this)(this);
  v2 = *((_QWORD *)this + 7);
  v3 = *(InputAttemptedDeliveryClientProxy ***)(v2 + 72);
  for ( i = *(InputAttemptedDeliveryClientProxy ***)(v2 + 64); i != v3 && *i != this; ++i )
    ;
  if ( i != v3 )
  {
    for ( j = i + 1; j != v3; ++j )
    {
      v6 = *j;
      if ( *j != this )
      {
        if ( &v15 == (char *)j )
          v6 = 0LL;
        else
          *j = 0LL;
        v7 = *i;
        *i = v6;
        if ( v7 )
          (*(void (__fastcall **)(InputAttemptedDeliveryClientProxy *))(*(_QWORD *)v7 + 8LL))(v7);
        ++i;
      }
    }
    if ( i != v3 )
    {
      v8 = *(InputAttemptedDeliveryClientProxy ***)(v2 + 72);
      if ( v3 != v8 )
      {
        do
        {
          v9 = 0LL;
          if ( &v15 != (char *)v3 )
          {
            v9 = *v3;
            *v3 = 0LL;
          }
          v10 = *i;
          *i = v9;
          if ( v10 )
            (*(void (__fastcall **)(InputAttemptedDeliveryClientProxy *))(*(_QWORD *)v10 + 8LL))(v10);
          ++i;
          ++v3;
        }
        while ( v3 != v8 );
        v8 = *(InputAttemptedDeliveryClientProxy ***)(v2 + 72);
      }
      for ( k = i; k != v8; ++k )
      {
        v12 = *k;
        if ( *k )
        {
          *k = 0LL;
          (*(void (__fastcall **)(InputAttemptedDeliveryClientProxy *))(*(_QWORD *)v12 + 8LL))(v12);
        }
      }
      *(_QWORD *)(v2 + 72) = i;
    }
  }
  (*(void (__fastcall **)(InputAttemptedDeliveryClientProxy *))(*(_QWORD *)this + 8LL))(this);
  v13 = *((_QWORD *)this + 7);
  if ( v13 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  }
  return 0LL;
}
