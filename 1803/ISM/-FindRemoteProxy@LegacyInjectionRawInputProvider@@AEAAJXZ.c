/*
 * XREFs of ?FindRemoteProxy@LegacyInjectionRawInputProvider@@AEAAJXZ @ 0x18006BDD0
 * Callers:
 *     ?Initialize@LegacyInjectionRawInputProvider@@IEAAJXZ @ 0x18006B4BC (-Initialize@LegacyInjectionRawInputProvider@@IEAAJXZ.c)
 *     ?EnableInputInjection@LegacyInjectionRawInputProvider@@UEAAJG_N@Z @ 0x18006B750 (-EnableInputInjection@LegacyInjectionRawInputProvider@@UEAAJG_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall LegacyInjectionRawInputProvider::FindRemoteProxy(LegacyInjectionRawInputProvider *this)
{
  int v2; // ebx
  __int64 v3; // rbx
  __int64 (__fastcall ***v4)(_QWORD, GUID *, char *); // rcx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, char *); // rdi
  __int64 v6; // rcx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, char *); // rcx
  __int64 v8; // rcx
  unsigned int v10; // [rsp+68h] [rbp+28h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, GUID *, char *); // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  v10 = 0;
  v2 = CoreUIFactoryCreate(&v12);
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, GUID *, unsigned int *))(*(_QWORD *)v12 + 24LL))(
           v12,
           &GUID_b30e303e_7340_4446_bd7b_c37fdee42abc,
           &v10);
    if ( v2 >= 0 )
    {
      v3 = v12;
      v4 = v11;
      if ( v11 )
      {
        v11 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v4)[2])(v4);
      }
      v2 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(*(_QWORD *)v3 + 40LL))(
             v3,
             L"System\\RemoteTextInputProcessor",
             v10,
             &v11);
      if ( v2 >= 0 )
      {
        v5 = v11;
        v6 = *((_QWORD *)this + 10);
        if ( v6 )
        {
          *((_QWORD *)this + 10) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        }
        v2 = (**v5)(v5, &GUID_b30e303e_7340_4446_bd7b_c37fdee42abc, (char *)this + 80);
      }
    }
  }
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v7)[2])(v7);
  }
  v8 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v2;
}
