/*
 * XREFs of ?IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0001@@PEAUIAudioMediaType@@1PEAPEAU3@@Z @ 0x18001F0C4
 * Callers:
 *     ?IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x18001F200 (-IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?IsOutputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x1800DC4F0 (-IsOutputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180020870 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOWrapperClient::IsAudioFormatSupported(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct IAudioMediaType **a5)
{
  unsigned int v6; // r15d
  __int64 v8; // rdi
  __int64 v9; // r9
  int v10; // eax
  int v11; // ebx
  int v12; // edi
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  int v16; // [rsp+30h] [rbp-61h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-59h] BYREF
  int v18; // [rsp+40h] [rbp-51h] BYREF
  __int64 v19; // [rsp+48h] [rbp-49h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-21h] BYREF
  int *v22; // [rsp+80h] [rbp-11h]
  int v23; // [rsp+88h] [rbp-9h]
  int v24; // [rsp+8Ch] [rbp-5h]
  int *v25; // [rsp+90h] [rbp-1h]
  int v26; // [rsp+98h] [rbp+7h]
  int v27; // [rsp+9Ch] [rbp+Bh]

  v19 = -2LL;
  v6 = a2;
  v16 = 0;
  pv = 0LL;
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v11 = -2147024809;
    goto LABEL_12;
  }
  v8 = 0LL;
  if ( a3 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 40LL))(a3);
    if ( !v8 )
      goto LABEL_14;
  }
  v9 = 0LL;
  if ( a4 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 40LL))(a4, a2, a3, 0LL);
    if ( !v9 )
      goto LABEL_14;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, LPVOID *))(**(_QWORD **)(a1 + 48) + 40LL))(
          *(_QWORD *)(a1 + 48),
          v6,
          v8,
          v9,
          &pv);
  v11 = v10;
  v16 = v10;
  if ( v10 < 0 )
    goto LABEL_15;
  v12 = v10;
  if ( pv )
  {
    v11 = CAudioMediaType::Create(
            (const struct tWAVEFORMATEX *)pv,
            (unsigned int)*((unsigned __int16 *)pv + 8) + 18,
            a5,
            0.0,
            1);
    v16 = v11;
    if ( v11 >= 0 )
    {
      if ( v12 )
        v11 = v12;
      v16 = v11;
      goto LABEL_12;
    }
  }
  else
  {
LABEL_14:
    v11 = -2004287480;
    v16 = -2004287480;
  }
LABEL_15:
  if ( (unsigned int)dword_18014A3F0 > 2 )
  {
    TlgCreateSz(&pDesc, "CAPOWrapperClient::IsAudioFormatSupported");
    v18 = 294;
    v22 = &v18;
    v23 = 4;
    v24 = 0;
    v25 = &v16;
    v26 = 4;
    v27 = 0;
    TlgWrite((TraceLoggingHProvider)&dword_18014A3F0, &unk_1801122EC, v14, v15, 5u, &pData);
    v11 = v16;
  }
LABEL_12:
  CoTaskMemFree(pv);
  pv = 0LL;
  return (unsigned int)v11;
}
