/*
 * XREFs of ?Initialize@CCustomBlur@@AEAAJPEAUID2D1DeviceContext@@@Z @ 0x1800C0DC8
 * Callers:
 *     ?Create@CCustomBlur@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z @ 0x1800C0CC8 (-Create@CCustomBlur@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x1800C1544 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCustomBlur::Initialize(CCustomBlur *this, struct ID2D1DeviceContext *a2)
{
  __int64 *v2; // r14
  __int64 v4; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  struct ID2D1Effect **v9; // r15
  __int64 v10; // rcx
  int v11; // eax
  struct ID2D1Effect *v12; // rcx
  ID2D1Effect **v13; // r14
  __int64 v14; // rcx
  int v15; // r9d
  ID2D1Effect *v16; // rcx
  int v17; // eax
  ID2D1Effect *v18; // rcx
  ID2D1Effect **v19; // r15
  __int64 v20; // rcx
  int v21; // r9d
  ID2D1Effect *v22; // rcx
  ID2D1Effect **v23; // r14
  __int64 v24; // rcx
  int v25; // r9d
  ID2D1Effect *v26; // rcx
  __int64 v27; // rcx
  unsigned int v29; // [rsp+20h] [rbp-10h]
  int v30; // [rsp+60h] [rbp+30h] BYREF

  v2 = (__int64 *)((char *)this + 40);
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v6 = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, GUID *, __int64 *))(*(_QWORD *)a2 + 504LL))(
         a2,
         &CLSID_D2D1Scale,
         v2);
  v7 = v6;
  if ( v6 < 0 )
  {
    v29 = 56;
    goto LABEL_37;
  }
  v8 = *v2;
  v30 = 1;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, int *, int))(*(_QWORD *)v8 + 72LL))(v8, 3LL, 0LL, &v30, 4);
  v7 = v6;
  if ( v6 < 0 )
  {
    v29 = 57;
    goto LABEL_37;
  }
  v9 = (struct ID2D1Effect **)((char *)this + 24);
  v10 = *((_QWORD *)this + 3);
  if ( v10 )
  {
    *v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, GUID *, char *))(*(_QWORD *)a2 + 504LL))(
          a2,
          &CLSID_D2D1Crop,
          (char *)this + 24);
  v7 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x3Bu);
    return v7;
  }
  v12 = *v9;
  v30 = 1;
  v6 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)v12 + 72LL))(
         v12,
         1LL,
         0LL,
         &v30,
         4);
  v7 = v6;
  if ( v6 < 0 )
  {
    v29 = 60;
    goto LABEL_37;
  }
  v13 = (ID2D1Effect **)((char *)this + 32);
  v14 = *((_QWORD *)this + 4);
  if ( v14 )
  {
    *v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v6 = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, GUID *, char *))(*(_QWORD *)a2 + 504LL))(
         a2,
         &CLSID_D2D1Border,
         (char *)this + 32);
  v7 = v6;
  if ( v6 < 0 )
  {
    v29 = 62;
    goto LABEL_37;
  }
  ID2D1Effect::SetInputEffect(*v13, 0, *v9, v15);
  v16 = *v13;
  v30 = 2;
  v17 = (*(__int64 (__fastcall **)(ID2D1Effect *, _QWORD, _QWORD, int *, int))(*(_QWORD *)v16 + 72LL))(
          v16,
          0LL,
          0LL,
          &v30,
          4);
  v7 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x40u);
    return v7;
  }
  v18 = *v13;
  v30 = 2;
  v6 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)v18 + 72LL))(
         v18,
         1LL,
         0LL,
         &v30,
         4);
  v7 = v6;
  if ( v6 < 0 )
  {
    v29 = 65;
    goto LABEL_37;
  }
  v19 = (ID2D1Effect **)((char *)this + 48);
  v20 = *((_QWORD *)this + 6);
  if ( v20 )
  {
    *v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v6 = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, GUID *, char *))(*(_QWORD *)a2 + 504LL))(
         a2,
         &CLSID_D2D1DirectionalBlurKernel,
         (char *)this + 48);
  v7 = v6;
  if ( v6 < 0 )
  {
    v29 = 67;
    goto LABEL_37;
  }
  ID2D1Effect::SetInputEffect(*v19, 0, *v13, v21);
  v22 = *v19;
  v30 = 0;
  v6 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)v22 + 72LL))(
         v22,
         1LL,
         0LL,
         &v30,
         4);
  v7 = v6;
  if ( v6 < 0 )
  {
    v29 = 71;
    goto LABEL_37;
  }
  v23 = (ID2D1Effect **)((char *)this + 56);
  v24 = *((_QWORD *)this + 7);
  if ( v24 )
  {
    *v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  v6 = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, GUID *, char *))(*(_QWORD *)a2 + 504LL))(
         a2,
         &CLSID_D2D1DirectionalBlurKernel,
         (char *)this + 56);
  v7 = v6;
  if ( v6 < 0 )
  {
    v29 = 73;
    goto LABEL_37;
  }
  ID2D1Effect::SetInputEffect(*v23, 0, *v19, v25);
  v26 = *v23;
  v30 = 1;
  v6 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)v26 + 72LL))(
         v26,
         1LL,
         0LL,
         &v30,
         4);
  v7 = v6;
  if ( v6 < 0 )
  {
    v29 = 77;
LABEL_37:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v29);
    return v7;
  }
  if ( *((struct ID2D1DeviceContext **)this + 2) != a2 )
  {
    (*(void (__fastcall **)(struct ID2D1DeviceContext *))(*(_QWORD *)a2 + 8LL))(a2);
    v27 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = a2;
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  return v7;
}
