/*
 * XREFs of ?OnViewRemoved@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x18007212C
 * Callers:
 *     ?_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z @ 0x18005B4AC (-_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSplashScreen::OnViewRemoved(CSplashScreen *this, struct ITaskWindow *a2, __int64 a3, const char *a4)
{
  struct ITaskWindow **v6; // rbx
  struct ITaskWindow **v7; // r14
  struct ITaskWindow *v8; // rsi
  char v9; // r12
  int v10; // esi
  struct ITaskWindow **v11; // rsi
  struct ITaskWindow **i; // rbx
  struct ITaskWindow *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct ITaskWindow *v18; // [rsp+70h] [rbp+8h] BYREF
  __int64 v19; // [rsp+78h] [rbp+10h] BYREF
  __int64 v20; // [rsp+80h] [rbp+18h] BYREF
  struct ITaskWindow **v21; // [rsp+88h] [rbp+20h]

  v6 = (struct ITaskWindow **)*((_QWORD *)this + 14);
  v7 = (struct ITaskWindow **)*((_QWORD *)this + 13);
  if ( v7 != v6 )
  {
    v21 = &v18;
    do
    {
      v8 = *v7;
      v18 = v8;
      if ( v8 )
      {
        (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v8 + 8LL))(v8);
        v8 = v18;
      }
      if ( a2 && v8 )
      {
        if ( a2 == v8 )
        {
          v9 = 1;
        }
        else
        {
          v20 = 0LL;
          v19 = 0LL;
          if ( (**(int (__fastcall ***)(struct ITaskWindow *, GUID *, __int64 *))a2)(
                 a2,
                 &GUID_00000000_0000_0000_c000_000000000046,
                 &v20) < 0 )
            goto LABEL_15;
          v10 = (**(__int64 (__fastcall ***)(struct ITaskWindow *, GUID *, __int64 *))v8)(
                  v8,
                  &GUID_00000000_0000_0000_c000_000000000046,
                  &v19);
          if ( v10 >= 0 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          if ( v10 >= 0 && v20 == v19 )
            v9 = 1;
          else
LABEL_15:
            v9 = 0;
          v8 = v18;
        }
      }
      else
      {
        v9 = 0;
      }
      if ( v8 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v8 + 16LL))(v8);
      }
      if ( v9 )
        break;
      ++v7;
    }
    while ( v7 != v6 );
  }
  try
  {
    v11 = (struct ITaskWindow **)*((_QWORD *)this + 14);
    for ( i = v7 + 1; i != v11; ++i )
    {
      v13 = 0LL;
      if ( &v18 != i )
      {
        v13 = *i;
        *i = 0LL;
      }
      v14 = (__int64)*(i - 1);
      *(i - 1) = v13;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v15 = *((_QWORD *)this + 14);
    v16 = *(_QWORD *)(v15 - 8);
    if ( v16 )
    {
      *(_QWORD *)(v15 - 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    *((_QWORD *)this + 14) -= 8LL;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x4C,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\splashscreen.cpp",
      a4);
  }
}
