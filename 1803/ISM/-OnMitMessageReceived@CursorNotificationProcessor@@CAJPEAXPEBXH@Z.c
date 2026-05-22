/*
 * XREFs of ?OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z @ 0x1800171D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z @ 0x18001736C (-ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z.c)
 *     ??1?$vector@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180017550 (--1-$vector@V-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMessageProxy@@@WR.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CursorNotificationProcessor::OnMitMessageReceived(
        CursorNotificationProcessor *this,
        _DWORD *a2,
        int a3)
{
  _DWORD *v3; // rdi
  unsigned int v5; // ebx
  _QWORD *v6; // rsi
  _QWORD *v7; // r14
  __int64 v8; // rcx
  _QWORD *v9; // rsi
  _QWORD *v10; // r14
  _QWORD v12[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v13[3]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v14[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v15; // [rsp+98h] [rbp+38h] BYREF

  v12[1] = -2LL;
  v3 = a2;
  if ( a3 != 24 )
    return (unsigned int)-2147024809;
  v5 = 0;
  if ( !*a2 )
  {
    CursorNotificationProcessor::ProcessVisibilityChangedNotification(this, a2[2] != 0);
    return v5;
  }
  if ( *a2 == 1 )
  {
    v12[0] = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)this + 40LL))(*(_QWORD *)this, v12) >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)this + 72LL))(*(_QWORD *)this, v14);
      v9 = (_QWORD *)v14[0];
      v10 = (_QWORD *)v14[1];
      while ( v9 != v10
           && (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v9 + 24LL))(
                *v9,
                (unsigned int)v3[2],
                (unsigned int)v3[3]) >= 0 )
        ++v9;
      std::vector<Microsoft::WRL::ComPtr<IMessageProxy>>::~vector<Microsoft::WRL::ComPtr<IMessageProxy>>(v14);
    }
    v8 = v12[0];
    if ( v12[0] )
    {
      v12[0] = 0LL;
      goto LABEL_24;
    }
  }
  else
  {
    if ( *a2 != 2 )
    {
      if ( *a2 == 3 )
      {
        LOBYTE(a2) = a2[2] != 0;
        (*(void (__fastcall **)(_QWORD, _DWORD *, _QWORD))(**(_QWORD **)this + 56LL))(
          *(_QWORD *)this,
          a2,
          *((_QWORD *)v3 + 2));
      }
      return v5;
    }
    v15 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)this + 40LL))(*(_QWORD *)this, &v15) >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)this + 72LL))(*(_QWORD *)this, v13);
      v6 = (_QWORD *)v13[0];
      v7 = (_QWORD *)v13[1];
      while ( v6 != v7 && (*(int (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)*v6 + 80LL))(*v6, v3 + 2) >= 0 )
        ++v6;
      std::vector<Microsoft::WRL::ComPtr<IMessageProxy>>::~vector<Microsoft::WRL::ComPtr<IMessageProxy>>(v13);
    }
    v8 = v15;
    if ( v15 )
    {
      v15 = 0LL;
LABEL_24:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  return v5;
}
