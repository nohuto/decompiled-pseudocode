/*
 * XREFs of ?OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z @ 0x180012970
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z @ 0x180012B50 (-ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CursorNotificationProcessor::OnMitMessageReceived(
        CursorNotificationProcessor *this,
        _DWORD *a2,
        int a3)
{
  _DWORD *v3; // rbx
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v13[1] = -2LL;
  v3 = a2;
  if ( a3 == 24 )
  {
    if ( *a2 )
    {
      if ( *a2 == 1 )
      {
        v13[0] = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)this + 40LL))(*(_QWORD *)this, v13) >= 0 )
        {
          v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v13[0] + 24LL))(
                  v13[0],
                  (unsigned int)v3[2],
                  (unsigned int)v3[3]);
          if ( v10 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(v11, &MinInput_Warning_CheckResult, 0, 150, v10);
        }
        v9 = v13[0];
        if ( !v13[0] )
          return 0;
        v13[0] = 0LL;
      }
      else
      {
        if ( *a2 != 2 )
        {
          if ( *a2 == 3 )
          {
            LOBYTE(a2) = a2[2] != 0;
            v5 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD))(**(_QWORD **)this + 56LL))(
                   *(_QWORD *)this,
                   a2,
                   *((_QWORD *)v3 + 2));
            if ( v5 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, 134, v5);
          }
          else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            McTemplateU0qqq((unsigned int)(*a2 - 2), &MinInput_Warning_CheckResult, 0, 118, 87);
          }
          return 0;
        }
        v14 = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)this + 40LL))(*(_QWORD *)this, &v14) >= 0 )
        {
          v7 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v14 + 96LL))(v14, v3 + 2);
          if ( v7 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 0, 169, v7);
        }
        v9 = v14;
        if ( !v14 )
          return 0;
        v14 = 0LL;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    else
    {
      CursorNotificationProcessor::ProcessVisibilityChangedNotification(this, a2[2] != 0);
    }
    return 0;
  }
  v4 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 79, 87);
  return v4;
}
