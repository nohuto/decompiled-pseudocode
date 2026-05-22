/*
 * XREFs of ?ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z @ 0x180012B50
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z @ 0x180012970 (-OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CursorNotificationProcessor::ProcessVisibilityChangedNotification(
        CursorNotificationProcessor *this,
        char a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // r9d
  __int64 v9; // rbx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v17[3]; // [rsp+50h] [rbp-21h] BYREF
  _QWORD v18[8]; // [rsp+68h] [rbp-9h] BYREF

  v16[1] = -2LL;
  v16[0] = 0LL;
  memset(v18, 0, sizeof(v18));
  v4 = 0;
  v5 = 0LL;
  v15 = 0LL;
  v17[0] = 0LL;
  if ( *((_QWORD *)this + 2) )
    goto LABEL_14;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)this + 64LL))(*(_QWORD *)this) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 1) + 24LL))(*((_QWORD *)this + 1), &v15);
    v4 = v6;
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, __int64, _QWORD *))(*(_QWORD *)v15 + 24LL))(
             v15,
             L"System\\Input\\CursorManagerEndpoint",
             1LL,
             v17);
      v4 = v6;
      if ( v6 >= 0 )
      {
        *((_QWORD *)this + 2) = v17[0];
        v17[0] = 0LL;
        v4 = 0;
        goto LABEL_11;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v8 = 198;
        goto LABEL_6;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v8 = 193;
LABEL_6:
      McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, v8, v6);
    }
  }
LABEL_11:
  if ( v17[0] )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 144LL))(*((_QWORD *)this + 1));
  v5 = v15;
LABEL_14:
  if ( v5 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v4 >= 0 )
  {
    v9 = *(_QWORD *)this;
    v10 = v16[0];
    if ( v16[0] )
    {
      v16[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    if ( (*(int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v9 + 40LL))(v9, v16) < 0
      || (LOBYTE(v18[0]) = 3,
          *(_OWORD *)&v18[1] = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v16[0] + 40LL))(
                                            v16[0],
                                            v17),
          LOBYTE(v18[3]) = a2,
          v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64))(**((_QWORD **)this + 1) + 160LL))(
                  *((_QWORD *)this + 1),
                  *((_QWORD *)this + 2),
                  v18,
                  64LL),
          v4 = v11,
          v11 >= 0) )
    {
      v4 = 0;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v12, &MinInput_Warning_CheckResult, 0, 237, v11);
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, 226, v4);
  }
  v13 = v16[0];
  if ( v16[0] )
  {
    v16[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return (unsigned int)v4;
}
