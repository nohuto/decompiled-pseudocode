/*
 * XREFs of ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x1800CEC60
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180001440 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x180001540 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180098DD8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall CAPOWrapperSrv::IsAudioFormatSupportedRemote(
        __int64 a1,
        int a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX *a4,
        struct tWAVEFORMATEX **a5)
{
  CAudioMediaType *v5; // rbx
  CAudioMediaType *v6; // rdi
  struct tWAVEFORMATEX *v7; // rsi
  int v11; // eax
  int v12; // r14d
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  int v17; // r15d
  const struct tWAVEFORMATEX *v18; // rax
  LPCGUID v19; // r8
  LPCGUID v20; // r9
  void (*v21)(void); // rax
  __int64 (__fastcall *v22)(CAudioMediaType *); // rax
  __int64 (__fastcall *v23)(CAudioMediaType *); // rax
  int v25; // [rsp+30h] [rbp-81h] BYREF
  struct IAudioMediaType *v26; // [rsp+38h] [rbp-79h] BYREF
  CAudioMediaType *v27; // [rsp+40h] [rbp-71h] BYREF
  struct IAudioMediaType *v28; // [rsp+48h] [rbp-69h] BYREF
  struct tWAVEFORMATEX *v29; // [rsp+50h] [rbp-61h] BYREF
  struct tWAVEFORMATEX **v30; // [rsp+58h] [rbp-59h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-31h] BYREF
  struct IAudioMediaType **v33; // [rsp+90h] [rbp-21h]
  int v34; // [rsp+98h] [rbp-19h]
  int v35; // [rsp+9Ch] [rbp-15h]
  int *v36; // [rsp+A0h] [rbp-11h]
  int v37; // [rsp+A8h] [rbp-9h]
  int v38; // [rsp+ACh] [rbp-5h]

  v25 = 0;
  v5 = 0LL;
  v27 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v26 = 0LL;
  v28 = 0LL;
  v30 = a5;
  v29 = 0LL;
  if ( a3 )
  {
    v11 = CAudioMediaType::Create(a3, (unsigned int)a3->cbSize + 18, &v26, 0.0, 1);
    v5 = (CAudioMediaType *)v26;
    v12 = v11;
    v25 = v11;
    if ( v11 < 0 )
      goto LABEL_17;
  }
  if ( a4 )
  {
    v13 = CAudioMediaType::Create(a4, (unsigned int)a4->cbSize + 18, &v28, 0.0, 1);
    v6 = (CAudioMediaType *)v28;
    v12 = v13;
    v25 = v13;
    if ( v13 < 0 )
      goto LABEL_17;
  }
  v14 = a1 + 8;
  v15 = *(_QWORD *)(a1 + 8);
  v16 = a2
      ? (*(__int64 (__fastcall **)(__int64, CAudioMediaType *, CAudioMediaType *, CAudioMediaType **))(v15 + 64))(
          v14,
          v5,
          v6,
          &v27)
      : (*(unsigned __int64 (__fastcall **)(__int64, CAudioMediaType *, CAudioMediaType *, CAudioMediaType **))(v15 + 56))(
          v14,
          v5,
          v6,
          &v27);
  v25 = v16;
  v12 = v16;
  if ( v16 < 0 )
  {
LABEL_17:
    if ( (unsigned int)dword_18012A2A0 > 2 )
    {
      TlgCreateSz(&pDesc, "CAPOWrapperSrv::IsAudioFormatSupportedRemote");
      v35 = 0;
      v38 = 0;
      v33 = &v26;
      v36 = &v25;
      LODWORD(v26) = 232;
      v34 = 4;
      v37 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_18012A2A0, &unk_1800FBB26, v19, v20, 5u, &pData);
      v12 = v25;
    }
    goto LABEL_19;
  }
  v17 = v16;
  if ( !v27 )
    goto LABEL_14;
  v18 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v27 + 40LL))(v27);
  if ( !v18 )
  {
    v12 = -2004287480;
    v25 = -2004287480;
    goto LABEL_17;
  }
  v25 = CloneWaveFormat(v18, &v29);
  v12 = v25;
  if ( v25 < 0 )
  {
    v7 = v29;
    goto LABEL_17;
  }
  *v30 = v29;
LABEL_14:
  if ( v17 )
    v12 = v17;
  v25 = v12;
  if ( v12 < 0 )
    goto LABEL_17;
LABEL_19:
  CoTaskMemFree(v7);
  if ( v27 )
  {
    v21 = *(void (**)(void))(*(_QWORD *)v27 + 16LL);
    if ( (char *)v21 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release(v27);
    else
      v21();
  }
  if ( v6 )
  {
    v22 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v6 + 16LL);
    if ( v22 == CAudioMediaType::Release )
      CAudioMediaType::Release(v6);
    else
      v22(v6);
  }
  if ( v5 )
  {
    v23 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v5 + 16LL);
    if ( v23 == CAudioMediaType::Release )
      CAudioMediaType::Release(v5);
    else
      v23(v5);
  }
  return (unsigned int)v12;
}
