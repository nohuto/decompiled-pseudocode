/*
 * XREFs of ?FindRemoteProxy@LegacyInjectionRawInputProvider@@AEAAJXZ @ 0x180087490
 * Callers:
 *     ?Initialize@LegacyInjectionRawInputProvider@@IEAAJXZ @ 0x1800864BC (-Initialize@LegacyInjectionRawInputProvider@@IEAAJXZ.c)
 *     ?EnableInputInjection@LegacyInjectionRawInputProvider@@UEAAJG_N@Z @ 0x180086810 (-EnableInputInjection@LegacyInjectionRawInputProvider@@UEAAJG_N@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall LegacyInjectionRawInputProvider::FindRemoteProxy(LegacyInjectionRawInputProvider *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // r9d
  __int64 v6; // rbx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, char *); // rcx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, char *); // rdi
  __int64 v9; // rcx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, char *); // rcx
  __int64 v11; // rcx
  unsigned int v13; // [rsp+68h] [rbp+28h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, GUID *, char *); // [rsp+70h] [rbp+30h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  v13 = 0;
  v2 = CoreUIFactoryCreate(&v15);
  v4 = v2;
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_18;
    v5 = 901;
    goto LABEL_17;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, GUID *, unsigned int *))(*(_QWORD *)v15 + 24LL))(
         v15,
         &GUID_b30e303e_7340_4446_bd7b_c37fdee42abc,
         &v13);
  v4 = v2;
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_18;
    v5 = 905;
    goto LABEL_17;
  }
  v6 = v15;
  v7 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v7)[2])(v7);
  }
  v2 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(*(_QWORD *)v6 + 40LL))(
         v6,
         L"System\\RemoteTextInputProcessor",
         v13,
         &v14);
  v4 = v2;
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_18;
    v5 = 910;
    goto LABEL_17;
  }
  v8 = v14;
  v9 = *((_QWORD *)this + 12);
  if ( v9 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v2 = (**v8)(v8, &GUID_b30e303e_7340_4446_bd7b_c37fdee42abc, (char *)this + 96);
  v4 = v2;
  if ( v2 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v5 = 914;
LABEL_17:
    McTemplateU0qqq(v3, &MinInput_Warning_CheckResult, 0, v5, v2);
  }
LABEL_18:
  v10 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v10)[2])(v10);
  }
  v11 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v4;
}
