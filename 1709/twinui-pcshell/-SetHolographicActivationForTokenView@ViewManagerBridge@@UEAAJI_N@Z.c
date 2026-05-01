/*
 * XREFs of ?SetHolographicActivationForTokenView@ViewManagerBridge@@UEAAJI_N@Z @ 0x1801339E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewManagerBridge::SetHolographicActivationForTokenView(ViewManagerBridge *this, int a2, char a3)
{
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  int v10; // esi
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 (__fastcall ***v19)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v21; // [rsp+20h] [rbp-20h] BYREF
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-18h] BYREF
  __int64 v23; // [rsp+30h] [rbp-10h]
  __int64 v24; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v26; // [rsp+70h] [rbp+30h] BYREF
  int v27; // [rsp+88h] [rbp+48h] BYREF

  v24 = -2LL;
  v6 = 0LL;
  v23 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 16) + 48LL))(*((_QWORD *)this + 16), &v26);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 384LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_30;
  }
  v10 = 0;
  if ( v26 <= 0 )
    goto LABEL_29;
  do
  {
    v22 = 0LL;
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 16) + 56LL))(
            *((_QWORD *)this + 16),
            (unsigned int)v10,
            &v22);
    v8 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x185,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v11);
LABEL_27:
      v19 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v19)[2])(v19);
      }
      goto LABEL_30;
    }
    v21 = 0LL;
    v12 = (**v22)(v22, &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e, &v21);
    v8 = v12;
    if ( v12 < 0 )
    {
      v17 = 391LL;
LABEL_24:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v12);
      v18 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      goto LABEL_27;
    }
    v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 152LL))(v21, &v27);
    v8 = v12;
    if ( v12 < 0 )
    {
      v17 = 394LL;
      goto LABEL_24;
    }
    v13 = v21;
    if ( v27 == a2 && v6 != v21 )
    {
      v14 = v21;
      if ( v21 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
        v13 = v21;
      }
      v15 = v6;
      v6 = v14;
      v23 = v14;
      if ( v15 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 16LL))(v15, v13);
        v13 = v21;
      }
    }
    if ( v13 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v16 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v16)[2])(v16);
    }
    ++v10;
  }
  while ( v10 < v26 );
  if ( v6 )
  {
    LOBYTE(v13) = a3;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 768LL))(v6, v13);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 405LL;
      goto LABEL_3;
    }
  }
LABEL_29:
  v8 = 0;
LABEL_30:
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v8;
}
