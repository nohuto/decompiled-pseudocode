/*
 * XREFs of ?IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0001@@PEAUIAudioMediaType@@1PEAPEAU3@@Z @ 0x180001E40
 * Callers:
 *     ?IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180001F90 (-IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?IsOutputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x1800D0480 (-IsOutputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180001440 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x18002F500 (-GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOWrapperClient::IsAudioFormatSupported(
        __int64 a1,
        __int64 a2,
        CAudioMediaType *a3,
        CAudioMediaType *a4,
        struct IAudioMediaType **a5)
{
  unsigned int v6; // r15d
  const struct tWAVEFORMATEX *v8; // rdi
  const struct tWAVEFORMATEX *(__fastcall *v9)(CAudioMediaType *__hidden); // rax
  const struct tWAVEFORMATEX *v10; // rax
  const struct tWAVEFORMATEX *v11; // r9
  const struct tWAVEFORMATEX *(__fastcall *v12)(CAudioMediaType *__hidden); // rax
  const struct tWAVEFORMATEX *v13; // rax
  int v14; // eax
  int v15; // ebx
  int v16; // edi
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  int v20; // [rsp+30h] [rbp-71h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-69h] BYREF
  int v22; // [rsp+40h] [rbp-61h] BYREF
  __int64 v23; // [rsp+48h] [rbp-59h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-31h] BYREF
  int *v26; // [rsp+80h] [rbp-21h]
  int v27; // [rsp+88h] [rbp-19h]
  int v28; // [rsp+8Ch] [rbp-15h]
  int *v29; // [rsp+90h] [rbp-11h]
  int v30; // [rsp+98h] [rbp-9h]
  int v31; // [rsp+9Ch] [rbp-5h]

  v23 = -2LL;
  v6 = a2;
  v20 = 0;
  pv = 0LL;
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v15 = -2147024809;
    goto LABEL_16;
  }
  v8 = 0LL;
  if ( a3 )
  {
    v9 = *(const struct tWAVEFORMATEX *(__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)a3 + 40LL);
    v10 = v9 == CAudioMediaType::GetAudioFormat ? CAudioMediaType::GetAudioFormat(a3) : v9(a3);
    v8 = v10;
    if ( !v10 )
      goto LABEL_19;
  }
  v11 = 0LL;
  if ( a4 )
  {
    v12 = *(const struct tWAVEFORMATEX *(__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)a4 + 40LL);
    v13 = v12 == CAudioMediaType::GetAudioFormat
        ? CAudioMediaType::GetAudioFormat(a4)
        : (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(CAudioMediaType *, __int64, CAudioMediaType *, _QWORD))v12)(
                                          a4,
                                          a2,
                                          a3,
                                          0LL);
    v11 = v13;
    if ( !v13 )
      goto LABEL_19;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct tWAVEFORMATEX *, const struct tWAVEFORMATEX *, LPVOID *))(**(_QWORD **)(a1 + 48) + 40LL))(
          *(_QWORD *)(a1 + 48),
          v6,
          v8,
          v11,
          &pv);
  v15 = v14;
  v20 = v14;
  if ( v14 < 0 )
    goto LABEL_21;
  v16 = v14;
  if ( pv )
  {
    v15 = CAudioMediaType::Create(
            (const struct tWAVEFORMATEX *)pv,
            (unsigned int)*((unsigned __int16 *)pv + 8) + 18,
            a5,
            0.0,
            1);
    v20 = v15;
    if ( v15 >= 0 )
    {
      if ( v16 )
        v15 = v16;
      v20 = v15;
      goto LABEL_16;
    }
  }
  else
  {
LABEL_19:
    v15 = -2004287480;
    v20 = -2004287480;
  }
LABEL_21:
  if ( (unsigned int)dword_18012A2A0 > 2 )
  {
    TlgCreateSz(&pDesc, "CAPOWrapperClient::IsAudioFormatSupported");
    v22 = 294;
    v26 = &v22;
    v27 = 4;
    v28 = 0;
    v29 = &v20;
    v30 = 4;
    v31 = 0;
    TlgWrite((TraceLoggingHProvider)&dword_18012A2A0, &unk_1800FBB26, v18, v19, 5u, &pData);
    v15 = v20;
  }
LABEL_16:
  CoTaskMemFree(pv);
  pv = 0LL;
  return (unsigned int)v15;
}
