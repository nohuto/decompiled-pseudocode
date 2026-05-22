/*
 * XREFs of ?Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z @ 0x1800125FC
 * Callers:
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x18000EED8 (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CursorNotificationProcessor::Initialize(struct ICursorBroker **this, struct ICursorBroker *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // r9d
  struct ICursorBroker *v8; // rbx
  struct ICursorBroker *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  struct ICursorBroker *v12; // rcx
  struct ICursorBroker *v13; // rdi
  struct ICursorBroker *v14; // rcx
  struct ICursorBroker *v15; // rbx
  struct ICursorBroker *v16; // rcx
  struct ICursorBroker *v17; // rdi
  struct ICursorBroker *v18; // rcx
  struct ICursorBroker *v20; // [rsp+30h] [rbp-50h] BYREF
  struct ICursorBroker *v21; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v23[40]; // [rsp+50h] [rbp-30h] BYREF

  v22[1] = -2LL;
  v21 = 0LL;
  v22[0] = 0LL;
  v20 = 0LL;
  v4 = CoreUICreate(&v20);
  v6 = v4;
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_36;
    v7 = 17;
LABEL_4:
    McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, v7, v4);
    goto LABEL_36;
  }
  v8 = v20;
  v9 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v4 = (*(__int64 (__fastcall **)(struct ICursorBroker *, const wchar_t *, struct ICursorBroker **))(*(_QWORD *)v8 + 64LL))(
         v8,
         L"Kernel\\MIT\\InputPort",
         &v21);
  v6 = v4;
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_36;
    v7 = 20;
    goto LABEL_4;
  }
  v4 = (*(__int64 (__fastcall **)(struct ICursorBroker *, __int64 (__fastcall *)(CursorNotificationProcessor *, const void *, int), struct ICursorBroker **, struct ICursorBroker *, _QWORD *))(*(_QWORD *)v20 + 80LL))(
         v20,
         CursorNotificationProcessor::OnMitMessageReceived,
         this,
         v21,
         v22);
  v6 = v4;
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_36;
    v7 = 27;
    goto LABEL_4;
  }
  v4 = (*(__int64 (__fastcall **)(struct ICursorBroker *, _QWORD, _BYTE *))(*(_QWORD *)v20 + 112LL))(v20, v22[0], v23);
  v6 = v4;
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_36;
    v7 = 31;
    goto LABEL_4;
  }
  v10 = MITCoreMsgKOpenConnectionTo(0LL, v23);
  v6 = v10 | 0x10000000;
  if ( v10 >= 0 )
  {
    if ( *this != a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)a2 + 8LL))(a2);
      v12 = *this;
      *this = a2;
      if ( v12 )
        (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = v20;
    if ( this[1] != v20 )
    {
      if ( v20 )
        (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v20 + 8LL))(v20);
      v14 = this[1];
      this[1] = v13;
      if ( v14 )
        (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v15 = v21;
    v21 = 0LL;
    if ( this[3] != v15 )
    {
      if ( v15 )
        (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v15 + 8LL))(v15);
      v16 = this[3];
      this[3] = v15;
      if ( v16 )
        (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    this[4] = (struct ICursorBroker *)v22[0];
    v22[0] = 0LL;
    v6 = 0;
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    McTemplateU0qqq(v11, &MinInput_Warning_CheckResult, 0, 35, v10);
  }
LABEL_36:
  if ( v22[0] )
    (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v20 + 144LL))(v20);
  v17 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return v6;
}
