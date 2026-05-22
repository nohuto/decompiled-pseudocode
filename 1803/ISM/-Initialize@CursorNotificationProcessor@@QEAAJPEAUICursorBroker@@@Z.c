/*
 * XREFs of ?Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z @ 0x180016EBC
 * Callers:
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x180013860 (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CursorNotificationProcessor::Initialize(struct ICursorBroker **this, struct ICursorBroker *a2)
{
  int v4; // ebx
  struct ICursorBroker *v5; // rbx
  struct ICursorBroker *v6; // rcx
  int v7; // eax
  struct ICursorBroker *v8; // rcx
  struct ICursorBroker *v9; // rdx
  struct ICursorBroker *v10; // rcx
  struct ICursorBroker *v11; // rbx
  struct ICursorBroker *v12; // rbx
  struct ICursorBroker *v13; // rdx
  __int64 v14; // rdx
  struct ICursorBroker *v15; // rcx
  struct ICursorBroker *v17; // [rsp+30h] [rbp-50h] BYREF
  struct ICursorBroker *v18; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v20[40]; // [rsp+50h] [rbp-30h] BYREF

  v19[1] = -2LL;
  v18 = 0LL;
  v19[0] = 0LL;
  v17 = 0LL;
  v4 = CoreUICreate(&v17);
  if ( v4 < 0 )
    goto LABEL_24;
  v5 = v17;
  v6 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v4 = (*(__int64 (__fastcall **)(struct ICursorBroker *, const wchar_t *, struct ICursorBroker **))(*(_QWORD *)v5 + 64LL))(
         v5,
         L"Kernel\\MIT\\InputPort",
         &v18);
  if ( v4 < 0
    || (v4 = (*(__int64 (__fastcall **)(struct ICursorBroker *, __int64 (__fastcall *)(CursorNotificationProcessor *, const void *, int), struct ICursorBroker **, struct ICursorBroker *, _QWORD *))(*(_QWORD *)v17 + 80LL))(
               v17,
               CursorNotificationProcessor::OnMitMessageReceived,
               this,
               v18,
               v19),
        v4 < 0)
    || (v4 = (*(__int64 (__fastcall **)(struct ICursorBroker *, _QWORD, _BYTE *))(*(_QWORD *)v17 + 112LL))(
               v17,
               v19[0],
               v20),
        v4 < 0)
    || (v7 = MITCoreMsgKOpenConnectionTo(1LL, v20), v4 = v7 | 0x10000000, v7 < 0) )
  {
LABEL_24:
    v14 = v19[0];
    v10 = v17;
  }
  else
  {
    v8 = *this;
    if ( *this != a2 )
    {
      if ( a2 )
      {
        (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)a2 + 8LL))(a2);
        v8 = *this;
      }
      *this = a2;
      if ( v8 )
        (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = this[1];
    v10 = v17;
    if ( v9 != v17 )
    {
      v11 = v17;
      if ( v17 )
      {
        (*(void (**)(void))(*(_QWORD *)v17 + 8LL))();
        v9 = this[1];
        v10 = v17;
      }
      this[1] = v11;
      if ( v9 )
      {
        (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v9 + 16LL))(v9);
        v10 = v17;
      }
    }
    v12 = v18;
    v18 = 0LL;
    v13 = this[3];
    if ( v13 != v12 )
    {
      if ( v12 )
      {
        (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v12 + 8LL))(v12);
        v13 = this[3];
        v10 = v17;
      }
      this[3] = v12;
      if ( v13 )
      {
        (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v13 + 16LL))(v13);
        v10 = v17;
      }
    }
    this[4] = (struct ICursorBroker *)v19[0];
    v14 = 0LL;
    v19[0] = 0LL;
    v4 = 0;
  }
  if ( v14 )
  {
    (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v10 + 144LL))(v10);
    v10 = v17;
  }
  if ( v10 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v15 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return (unsigned int)v4;
}
