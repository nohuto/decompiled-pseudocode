/*
 * XREFs of ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x1400133C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x14000CD30 (-GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000CE10 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x140010370 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?IsInputFormatSupported@CAPOWrapperSrv@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x140013010 (-IsInputFormatSupported@CAPOWrapperSrv@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     memcpy_0 @ 0x14001D6ED (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x140034DB0 (_TlgWrite.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAPOWrapperSrv::IsAudioFormatSupportedRemote(
        __int64 a1,
        int a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX *a4,
        _QWORD *a5)
{
  struct IAudioMediaType *v8; // rbx
  struct IAudioMediaType *v9; // rdi
  void *v10; // rsi
  const GUID *v11; // r9
  int v12; // r14d
  CAPOWrapperSrv *v13; // rcx
  __int64 v14; // rax
  __int64 (__fastcall *v15)(CAPOWrapperSrv *, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **); // rax
  struct IAudioMediaType *v16; // rdx
  int IsInputFormatSupported; // eax
  int v18; // r15d
  __int64 (*GetAudioFormat)(void); // rax
  const struct tWAVEFORMATEX *AudioFormat; // rax
  const struct tWAVEFORMATEX *v21; // r14
  __int64 cbSize; // r12
  void *v23; // rax
  void (*Release)(void); // rax
  ULONG (__stdcall *v25)(IAudioMediaType *); // rax
  ULONG (__stdcall *v26)(IAudioMediaType *); // rax
  int v28; // [rsp+38h] [rbp-71h] BYREF
  struct IAudioMediaType *v29; // [rsp+40h] [rbp-69h] BYREF
  struct IAudioMediaType *v30; // [rsp+48h] [rbp-61h] BYREF
  struct IAudioMediaType *v31; // [rsp+50h] [rbp-59h] BYREF
  _QWORD *v32; // [rsp+58h] [rbp-51h]
  __int64 v33; // [rsp+60h] [rbp-49h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-41h] BYREF
  const char *v35; // [rsp+88h] [rbp-21h]
  int v36; // [rsp+90h] [rbp-19h]
  int v37; // [rsp+94h] [rbp-15h]
  struct IAudioMediaType **v38; // [rsp+98h] [rbp-11h]
  int v39; // [rsp+A0h] [rbp-9h]
  int v40; // [rsp+A4h] [rbp-5h]
  int *v41; // [rsp+A8h] [rbp-1h]
  int v42; // [rsp+B0h] [rbp+7h]
  int v43; // [rsp+B4h] [rbp+Bh]

  v33 = -2LL;
  v32 = a5;
  v28 = 0;
  v8 = 0LL;
  v29 = 0LL;
  v9 = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  v10 = 0LL;
  if ( a3 )
  {
    v12 = CAudioMediaType::Create(a3, (unsigned int)a3->cbSize + 18, &v29, 0.0, 1);
    v28 = v12;
    v8 = v29;
    if ( v12 < 0 )
      goto LABEL_37;
  }
  if ( a4 )
  {
    v12 = CAudioMediaType::Create(a4, (unsigned int)a4->cbSize + 18, &v31, 0.0, 1);
    v28 = v12;
    v9 = v31;
    if ( v12 < 0 )
      goto LABEL_37;
  }
  v13 = (CAPOWrapperSrv *)(a1 + 8);
  v14 = *(_QWORD *)(a1 + 8);
  if ( a2 )
  {
    v16 = v8;
    v15 = *(__int64 (__fastcall **)(CAPOWrapperSrv *, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **))(v14 + 64);
  }
  else
  {
    v15 = *(__int64 (__fastcall **)(CAPOWrapperSrv *, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **))(v14 + 56);
    v16 = v8;
    if ( v15 == CAPOWrapperSrv::IsInputFormatSupported )
    {
      IsInputFormatSupported = CAPOWrapperSrv::IsInputFormatSupported(v13, v8, v9, &v30);
      goto LABEL_8;
    }
  }
  IsInputFormatSupported = v15(v13, v16, v9, &v30);
LABEL_8:
  v12 = IsInputFormatSupported;
  v28 = IsInputFormatSupported;
  if ( IsInputFormatSupported < 0 )
    goto LABEL_37;
  v18 = IsInputFormatSupported;
  if ( !v30 )
    goto LABEL_17;
  GetAudioFormat = (__int64 (*)(void))v30->lpVtbl->GetAudioFormat;
  if ( (char *)GetAudioFormat == (char *)CAudioMediaType::GetAudioFormat )
    AudioFormat = CAudioMediaType::GetAudioFormat((CAudioMediaType *)v30);
  else
    AudioFormat = (const struct tWAVEFORMATEX *)GetAudioFormat();
  v21 = AudioFormat;
  if ( !AudioFormat )
  {
    v12 = -2004287480;
    v28 = -2004287480;
    goto LABEL_37;
  }
  cbSize = AudioFormat->cbSize;
  v23 = CoTaskMemAlloc(cbSize + 18);
  v10 = v23;
  if ( v23 )
  {
    memcpy_0(v23, v21, cbSize + 18);
    v12 = 0;
  }
  else
  {
    v12 = -2147024882;
  }
  IsInputFormatSupported = v12;
  v28 = v12;
  if ( v12 < 0 )
  {
LABEL_37:
    if ( (unsigned int)hProvider > 2 )
    {
      v35 = "CAPOWrapperSrv::IsAudioFormatSupportedRemote";
      v36 = 45;
      v37 = 0;
      LODWORD(v29) = 224;
      v38 = &v29;
      v39 = 4;
      v40 = 0;
      v41 = &v28;
      v42 = 4;
      v43 = 0;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_140070019, 0LL, v11, 5u, &pData);
      v12 = v28;
    }
    goto LABEL_20;
  }
  *v32 = v10;
LABEL_17:
  v10 = 0LL;
  if ( v18 )
  {
    v12 = v18;
    v28 = v18;
    IsInputFormatSupported = v18;
  }
  if ( IsInputFormatSupported < 0 )
    goto LABEL_37;
LABEL_20:
  CoTaskMemFree(v10);
  if ( v30 )
  {
    Release = (void (*)(void))v30->lpVtbl->Release;
    if ( (char *)Release == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v30);
    else
      Release();
  }
  if ( v9 )
  {
    v25 = v9->lpVtbl->Release;
    if ( (char *)v25 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v9);
    else
      ((void (__fastcall *)(struct IAudioMediaType *))v25)(v9);
  }
  if ( v8 )
  {
    v26 = v8->lpVtbl->Release;
    if ( (char *)v26 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v8);
    else
      ((void (__fastcall *)(struct IAudioMediaType *))v26)(v8);
  }
  return (unsigned int)v12;
}
