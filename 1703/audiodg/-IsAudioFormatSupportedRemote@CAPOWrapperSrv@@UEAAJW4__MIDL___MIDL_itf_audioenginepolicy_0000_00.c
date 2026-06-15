/*
 * XREFs of ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x140015910
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000DCB0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000E610 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?IsInputFormatSupported@CAPOWrapperSrv@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x1400153D0 (-IsInputFormatSupported@CAPOWrapperSrv@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?IsOutputFormatSupported@CAPOWrapperSrv@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x1400154E0 (-IsOutputFormatSupported@CAPOWrapperSrv@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x14001B9A0 (-GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     memcpy_0 @ 0x14001E75E (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateSz @ 0x1400365A0 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x140036628 (_TlgWrite.c)
 */

__int64 __fastcall CAPOWrapperSrv::IsAudioFormatSupportedRemote(
        __int64 a1,
        int a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX *a4,
        _QWORD *a5)
{
  struct IAudioMediaType *v5; // rbx
  struct IAudioMediaType *v6; // rdi
  void *v8; // rsi
  int v11; // eax
  int v12; // r14d
  int v13; // eax
  CAPOWrapperSrv *v14; // rcx
  __int64 v15; // rax
  __int64 (__fastcall *v16)(CAPOWrapperSrv *, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **); // rax
  struct IAudioMediaType *v17; // rdx
  int IsOutputFormatSupported; // eax
  int v19; // r12d
  __int64 (*GetAudioFormat)(void); // rax
  const struct tWAVEFORMATEX *AudioFormat; // rax
  const struct tWAVEFORMATEX *v22; // r14
  __int64 cbSize; // r15
  void *v24; // rax
  void (*Release)(void); // rax
  ULONG (__stdcall *v26)(IAudioMediaType *); // rax
  ULONG (__stdcall *v27)(IAudioMediaType *); // rax
  LPCGUID v29; // r8
  LPCGUID v30; // r9
  int v31; // [rsp+30h] [rbp-81h] BYREF
  struct IAudioMediaType *v32; // [rsp+38h] [rbp-79h] BYREF
  struct IAudioMediaType *v33; // [rsp+40h] [rbp-71h] BYREF
  struct IAudioMediaType *v34; // [rsp+48h] [rbp-69h] BYREF
  _QWORD *v35; // [rsp+50h] [rbp-61h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-31h] BYREF
  struct IAudioMediaType **v38; // [rsp+90h] [rbp-21h]
  int v39; // [rsp+98h] [rbp-19h]
  int v40; // [rsp+9Ch] [rbp-15h]
  int *v41; // [rsp+A0h] [rbp-11h]
  int v42; // [rsp+A8h] [rbp-9h]
  int v43; // [rsp+ACh] [rbp-5h]

  v31 = 0;
  v5 = 0LL;
  v32 = 0LL;
  v6 = 0LL;
  v33 = 0LL;
  v8 = 0LL;
  v35 = a5;
  v34 = 0LL;
  if ( a3 )
  {
    v11 = CAudioMediaType::Create(a3, (unsigned int)a3->cbSize + 18, &v33, 0.0, 1);
    v5 = v33;
    v12 = v11;
    v31 = v11;
    if ( v11 < 0 )
      goto LABEL_38;
  }
  if ( a4 )
  {
    v13 = CAudioMediaType::Create(a4, (unsigned int)a4->cbSize + 18, &v34, 0.0, 1);
    v6 = v34;
    v12 = v13;
    v31 = v13;
    if ( v13 < 0 )
      goto LABEL_38;
  }
  v14 = (CAPOWrapperSrv *)(a1 + 8);
  v15 = *(_QWORD *)(a1 + 8);
  if ( a2 )
  {
    v16 = *(__int64 (__fastcall **)(CAPOWrapperSrv *, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **))(v15 + 64);
    v17 = v5;
    if ( v16 == CAPOWrapperSrv::IsOutputFormatSupported )
    {
      IsOutputFormatSupported = CAPOWrapperSrv::IsOutputFormatSupported(v14, v5, v6, &v32);
      goto LABEL_8;
    }
  }
  else
  {
    v16 = *(__int64 (__fastcall **)(CAPOWrapperSrv *, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **))(v15 + 56);
    v17 = v5;
    if ( v16 == CAPOWrapperSrv::IsInputFormatSupported )
    {
      IsOutputFormatSupported = CAPOWrapperSrv::IsInputFormatSupported(v14, v5, v6, &v32);
      goto LABEL_8;
    }
  }
  IsOutputFormatSupported = v16(v14, v17, v6, &v32);
LABEL_8:
  v31 = IsOutputFormatSupported;
  v12 = IsOutputFormatSupported;
  if ( IsOutputFormatSupported < 0 )
    goto LABEL_38;
  v19 = IsOutputFormatSupported;
  if ( !v32 )
    goto LABEL_17;
  GetAudioFormat = (__int64 (*)(void))v32->lpVtbl->GetAudioFormat;
  if ( (char *)GetAudioFormat == (char *)CAudioMediaType::GetAudioFormat )
    AudioFormat = CAudioMediaType::GetAudioFormat((CAudioMediaType *)v32);
  else
    AudioFormat = (const struct tWAVEFORMATEX *)GetAudioFormat();
  v22 = AudioFormat;
  if ( !AudioFormat )
  {
    v12 = -2004287480;
    v31 = -2004287480;
    goto LABEL_38;
  }
  cbSize = AudioFormat->cbSize;
  v24 = CoTaskMemAlloc(cbSize + 18);
  v8 = v24;
  if ( v24 )
  {
    memcpy_0(v24, v22, cbSize + 18);
    v12 = 0;
  }
  else
  {
    v12 = -2147024882;
  }
  v31 = v12;
  if ( v12 < 0 )
  {
LABEL_38:
    if ( (unsigned int)hProvider > 2 )
    {
      TlgCreateSz(&pDesc, "CAPOWrapperSrv::IsAudioFormatSupportedRemote");
      v40 = 0;
      v43 = 0;
      v38 = &v33;
      v41 = &v31;
      LODWORD(v33) = 232;
      v39 = 4;
      v42 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_14006F553, v29, v30, 5u, &pData);
      v12 = v31;
    }
    goto LABEL_20;
  }
  *v35 = v8;
LABEL_17:
  v8 = 0LL;
  if ( v19 )
  {
    v12 = v19;
    v31 = v19;
  }
  if ( v12 < 0 )
    goto LABEL_38;
LABEL_20:
  CoTaskMemFree(v8);
  if ( v32 )
  {
    Release = (void (*)(void))v32->lpVtbl->Release;
    if ( (char *)Release == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v32);
    else
      Release();
  }
  if ( v6 )
  {
    v26 = v6->lpVtbl->Release;
    if ( (char *)v26 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v6);
    else
      ((void (__fastcall *)(struct IAudioMediaType *))v26)(v6);
  }
  if ( v5 )
  {
    v27 = v5->lpVtbl->Release;
    if ( (char *)v27 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v5);
    else
      ((void (__fastcall *)(struct IAudioMediaType *))v27)(v5);
  }
  return (unsigned int)v12;
}
