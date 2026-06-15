/*
 * XREFs of ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x140013690
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x14000AF40 (-GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000AF50 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000E120 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?IsInputFormatSupported@CAPOWrapperSrv@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x140013900 (-IsInputFormatSupported@CAPOWrapperSrv@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x14001E51D (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x140036120 (_TlgWrite.c)
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
  const GUID *v12; // r8
  const GUID *v13; // r9
  int v14; // r14d
  int v15; // eax
  CAPOWrapperSrv *v16; // rcx
  __int64 v17; // rax
  __int64 (__fastcall *v18)(CAPOWrapperSrv *__hidden, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **); // rax
  struct IAudioMediaType *v19; // rdx
  int IsInputFormatSupported; // eax
  int v21; // r12d
  __int64 (*GetAudioFormat)(void); // rax
  const struct tWAVEFORMATEX *AudioFormat; // rax
  const struct tWAVEFORMATEX *v24; // r14
  __int64 cbSize; // r15
  void *v26; // rax
  void (*Release)(void); // rax
  ULONG (__stdcall *v28)(IAudioMediaType *); // rax
  ULONG (__stdcall *v29)(IAudioMediaType *); // rax
  int v31; // [rsp+30h] [rbp-71h] BYREF
  struct IAudioMediaType *v32; // [rsp+38h] [rbp-69h] BYREF
  struct IAudioMediaType *v33; // [rsp+40h] [rbp-61h] BYREF
  struct IAudioMediaType *v34; // [rsp+48h] [rbp-59h] BYREF
  _QWORD *v35; // [rsp+50h] [rbp-51h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-41h] BYREF
  const char *v37; // [rsp+80h] [rbp-21h]
  int v38; // [rsp+88h] [rbp-19h]
  int v39; // [rsp+8Ch] [rbp-15h]
  struct IAudioMediaType **v40; // [rsp+90h] [rbp-11h]
  int v41; // [rsp+98h] [rbp-9h]
  int v42; // [rsp+9Ch] [rbp-5h]
  int *v43; // [rsp+A0h] [rbp-1h]
  int v44; // [rsp+A8h] [rbp+7h]
  int v45; // [rsp+ACh] [rbp+Bh]

  v31 = 0;
  v5 = 0LL;
  v33 = 0LL;
  v6 = 0LL;
  v32 = 0LL;
  v8 = 0LL;
  v35 = a5;
  v34 = 0LL;
  if ( a3 )
  {
    v11 = CAudioMediaType::Create(a3, (unsigned int)a3->cbSize + 18, &v32, 0.0, 1);
    v5 = v32;
    v14 = v11;
    v31 = v11;
    if ( v11 < 0 )
      goto LABEL_37;
  }
  if ( a4 )
  {
    v15 = CAudioMediaType::Create(a4, (unsigned int)a4->cbSize + 18, &v34, 0.0, 1);
    v6 = v34;
    v14 = v15;
    v31 = v15;
    if ( v15 < 0 )
      goto LABEL_37;
  }
  v16 = (CAPOWrapperSrv *)(a1 + 8);
  v17 = *(_QWORD *)(a1 + 8);
  if ( a2 )
  {
    v18 = *(__int64 (__fastcall **)(CAPOWrapperSrv *__hidden, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **))(v17 + 64);
    v19 = v5;
  }
  else
  {
    v18 = *(__int64 (__fastcall **)(CAPOWrapperSrv *__hidden, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **))(v17 + 56);
    v19 = v5;
    if ( v18 == CAPOWrapperSrv::IsInputFormatSupported )
    {
      IsInputFormatSupported = CAPOWrapperSrv::IsInputFormatSupported(v16, v5, v6, &v33);
      goto LABEL_8;
    }
  }
  IsInputFormatSupported = v18(v16, v19, v6, &v33);
LABEL_8:
  v31 = IsInputFormatSupported;
  v14 = IsInputFormatSupported;
  if ( IsInputFormatSupported < 0 )
    goto LABEL_37;
  v21 = IsInputFormatSupported;
  if ( !v33 )
    goto LABEL_17;
  GetAudioFormat = (__int64 (*)(void))v33->lpVtbl->GetAudioFormat;
  if ( (char *)GetAudioFormat == (char *)CAudioMediaType::GetAudioFormat )
    AudioFormat = CAudioMediaType::GetAudioFormat((CAudioMediaType *)v33);
  else
    AudioFormat = (const struct tWAVEFORMATEX *)GetAudioFormat();
  v24 = AudioFormat;
  if ( !AudioFormat )
  {
    v14 = -2004287480;
    v31 = -2004287480;
    goto LABEL_37;
  }
  cbSize = AudioFormat->cbSize;
  v26 = CoTaskMemAlloc(cbSize + 18);
  v8 = v26;
  if ( v26 )
  {
    memcpy_0(v26, v24, cbSize + 18);
    v14 = 0;
  }
  else
  {
    v14 = -2147024882;
  }
  v31 = v14;
  if ( v14 < 0 )
  {
LABEL_37:
    if ( (unsigned int)hProvider > 2 )
    {
      v39 = 0;
      v42 = 0;
      v45 = 0;
      v37 = "CAPOWrapperSrv::IsAudioFormatSupportedRemote";
      v40 = &v32;
      v43 = &v31;
      v38 = 45;
      LODWORD(v32) = 232;
      v41 = 4;
      v44 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1400725B4, v12, v13, 5u, &pData);
      v14 = v31;
    }
    goto LABEL_20;
  }
  *v35 = v8;
LABEL_17:
  v8 = 0LL;
  if ( v21 )
  {
    v14 = v21;
    v31 = v21;
  }
  if ( v14 < 0 )
    goto LABEL_37;
LABEL_20:
  CoTaskMemFree(v8);
  if ( v33 )
  {
    Release = (void (*)(void))v33->lpVtbl->Release;
    if ( (char *)Release == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v33);
    else
      Release();
  }
  if ( v6 )
  {
    v28 = v6->lpVtbl->Release;
    if ( (char *)v28 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v6);
    else
      ((void (__fastcall *)(struct IAudioMediaType *))v28)(v6);
  }
  if ( v5 )
  {
    v29 = v5->lpVtbl->Release;
    if ( (char *)v29 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v5);
    else
      ((void (__fastcall *)(struct IAudioMediaType *))v29)(v5);
  }
  return (unsigned int)v14;
}
