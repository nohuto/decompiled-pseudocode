/*
 * XREFs of ?Uninitialize@XamlLauncherState@@UEAAJXZ @ 0x180154550
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
      v3 = 109LL;
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
      v3 = 115LL;
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
      v3 = 121LL;
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
      v3 = 127LL;
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
      v3 = 133LL;
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
      v3 = 139LL;
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
      v3 = 145LL;
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
      v3 = 151LL;
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
      v3 = 157LL;
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
      v3 = 163LL;
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
      v3 = 169LL;
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
      v3 = 175LL;
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
      v3 = 181LL;
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
      v3 = 187LL;
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
      v3 = 193LL;
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
      v3 = 199LL;
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
