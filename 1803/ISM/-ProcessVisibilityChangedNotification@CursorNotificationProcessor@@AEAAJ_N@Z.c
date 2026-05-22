/*
 * XREFs of ?ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z @ 0x18001736C
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z @ 0x1800171D0 (-OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CursorNotificationProcessor::ProcessVisibilityChangedNotification(
        CursorNotificationProcessor *this,
        char a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v13[3]; // [rsp+50h] [rbp-21h] BYREF
  char v14[8]; // [rsp+68h] [rbp-9h] BYREF
  __int128 v15; // [rsp+70h] [rbp-1h]
  char v16; // [rsp+80h] [rbp+Fh]

  v12[1] = -2LL;
  v12[0] = 0LL;
  memset_0(v14, 0, 0x40uLL);
  v4 = 0;
  v11 = 0LL;
  v13[0] = 0LL;
  if ( !*((_QWORD *)this + 2) )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)this + 64LL))(*(_QWORD *)this)
      && (v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 1) + 24LL))(
                 *((_QWORD *)this + 1),
                 &v11),
          v4 >= 0)
      && (v4 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, __int64, _QWORD *))(*(_QWORD *)v11 + 24LL))(
                 v11,
                 L"System\\Input\\CursorManagerEndpoint",
                 1LL,
                 v13),
          v4 >= 0) )
    {
      *((_QWORD *)this + 2) = v13[0];
      v5 = 0LL;
      v13[0] = 0LL;
      v4 = 0;
    }
    else
    {
      v5 = v13[0];
    }
    if ( v5 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 144LL))(*((_QWORD *)this + 1));
  }
  v6 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v4 >= 0 )
  {
    v7 = *(_QWORD *)this;
    v8 = v12[0];
    if ( v12[0] )
    {
      v12[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( (*(int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v7 + 40LL))(v7, v12) < 0
      || (v14[0] = 3,
          v15 = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v12[0] + 40LL))(v12[0], v13),
          v16 = a2,
          v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, __int64))(**((_QWORD **)this + 1) + 160LL))(
                 *((_QWORD *)this + 1),
                 *((_QWORD *)this + 2),
                 v14,
                 64LL),
          v4 >= 0) )
    {
      v4 = 0;
    }
  }
  v9 = v12[0];
  if ( v12[0] )
  {
    v12[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)v4;
}
