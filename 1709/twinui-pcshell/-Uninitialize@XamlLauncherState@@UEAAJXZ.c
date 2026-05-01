/*
 * XREFs of ?Uninitialize@XamlLauncherState@@UEAAJXZ @ 0x1801886E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncherState::Uninitialize(XamlLauncherState *this)
{
  int v2; // edi
  __int64 v3; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 14) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 7) + 160LL))(
           *((_QWORD *)this + 7),
           *((_QWORD *)this + 14));
    if ( v2 < 0 )
    {
      v3 = 113LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v3,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v2);
      return (unsigned int)v2;
    }
    *((_QWORD *)this + 14) = 0LL;
  }
  if ( *((_QWORD *)this + 15) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 7) + 176LL))(
           *((_QWORD *)this + 7),
           *((_QWORD *)this + 15));
    if ( v2 < 0 )
    {
      v3 = 119LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 15) = 0LL;
  }
  if ( *((_QWORD *)this + 16) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 7) + 192LL))(
           *((_QWORD *)this + 7),
           *((_QWORD *)this + 16));
    if ( v2 < 0 )
    {
      v3 = 125LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 16) = 0LL;
  }
  if ( *((_QWORD *)this + 17) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 7) + 240LL))(
           *((_QWORD *)this + 7),
           *((_QWORD *)this + 17));
    if ( v2 < 0 )
    {
      v3 = 131LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 17) = 0LL;
  }
  if ( *((_QWORD *)this + 18) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 7) + 256LL))(
           *((_QWORD *)this + 7),
           *((_QWORD *)this + 18));
    if ( v2 < 0 )
    {
      v3 = 137LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 18) = 0LL;
  }
  if ( *((_QWORD *)this + 19) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 7) + 272LL))(
           *((_QWORD *)this + 7),
           *((_QWORD *)this + 19));
    if ( v2 < 0 )
    {
      v3 = 143LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 19) = 0LL;
  }
  if ( *((_QWORD *)this + 20) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 8) + 176LL))(
           *((_QWORD *)this + 8),
           *((_QWORD *)this + 20));
    if ( v2 < 0 )
    {
      v3 = 149LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 20) = 0LL;
  }
  if ( *((_QWORD *)this + 21) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 8) + 192LL))(
           *((_QWORD *)this + 8),
           *((_QWORD *)this + 21));
    if ( v2 < 0 )
    {
      v3 = 155LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 21) = 0LL;
  }
  if ( *((_QWORD *)this + 22) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 8) + 208LL))(
           *((_QWORD *)this + 8),
           *((_QWORD *)this + 22));
    if ( v2 < 0 )
    {
      v3 = 161LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 22) = 0LL;
  }
  if ( *((_QWORD *)this + 23) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 8) + 304LL))(
           *((_QWORD *)this + 8),
           *((_QWORD *)this + 23));
    if ( v2 < 0 )
    {
      v3 = 167LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 23) = 0LL;
  }
  if ( *((_QWORD *)this + 24) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 8) + 256LL))(
           *((_QWORD *)this + 8),
           *((_QWORD *)this + 24));
    if ( v2 < 0 )
    {
      v3 = 173LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 24) = 0LL;
  }
  if ( *((_QWORD *)this + 25) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 8) + 320LL))(
           *((_QWORD *)this + 8),
           *((_QWORD *)this + 25));
    if ( v2 < 0 )
    {
      v3 = 179LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 25) = 0LL;
  }
  if ( *((_QWORD *)this + 26) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 8) + 336LL))(
           *((_QWORD *)this + 8),
           *((_QWORD *)this + 26));
    if ( v2 < 0 )
    {
      v3 = 185LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 26) = 0LL;
  }
  if ( *((_QWORD *)this + 27) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 8) + 352LL))(
           *((_QWORD *)this + 8),
           *((_QWORD *)this + 27));
    if ( v2 < 0 )
    {
      v3 = 191LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 27) = 0LL;
  }
  if ( *((_QWORD *)this + 28) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 8) + 368LL))(
           *((_QWORD *)this + 8),
           *((_QWORD *)this + 28));
    if ( v2 < 0 )
    {
      v3 = 197LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 28) = 0LL;
  }
  if ( *((_QWORD *)this + 29) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 8) + 384LL))(
           *((_QWORD *)this + 8),
           *((_QWORD *)this + 29));
    if ( v2 < 0 )
    {
      v3 = 203LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 29) = 0LL;
  }
  v5 = *((_QWORD *)this + 7);
  if ( v5 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 8);
  if ( v6 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 9);
  if ( v7 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 10);
  if ( v8 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *((_QWORD *)this + 13) = 0LL;
  return 0LL;
}
