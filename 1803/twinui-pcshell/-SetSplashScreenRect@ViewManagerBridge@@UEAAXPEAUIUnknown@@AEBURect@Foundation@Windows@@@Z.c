/*
 * XREFs of ?SetSplashScreenRect@ViewManagerBridge@@UEAAXPEAUIUnknown@@AEBURect@Foundation@Windows@@@Z @ 0x180056310
 * Callers:
 *     ?SetImageLocation@UAPViewWrapper@@UEAAJURect@Foundation@Windows@@@Z @ 0x18005B4E0 (-SetImageLocation@UAPViewWrapper@@UEAAJURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewManagerBridge::SetSplashScreenRect(
        ViewManagerBridge *this,
        struct IUnknown *a2,
        const struct Windows::Foundation::Rect *a3)
{
  float v3; // xmm0_4
  int v4; // ebx
  float v5; // xmm1_4
  int v6; // edi
  int v7; // esi
  float v8; // xmm1_4
  __int64 v9; // r15
  __int64 v10; // r10
  int v11; // eax
  __int64 v12; // rcx
  int UserDataCount; // [rsp+28h] [rbp-E0h]
  __int64 v14; // [rsp+38h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-C8h] BYREF
  int v16; // [rsp+44h] [rbp-C4h] BYREF
  int v17; // [rsp+48h] [rbp-C0h] BYREF
  int v18; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v19; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v21; // [rsp+68h] [rbp-A0h]
  __int64 v22; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+80h] [rbp-88h] BYREF
  __int64 v24; // [rsp+90h] [rbp-78h]
  __int128 v25; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  void *v27; // [rsp+B8h] [rbp-50h]
  int v28; // [rsp+C0h] [rbp-48h]
  int v29; // [rsp+C4h] [rbp-44h]
  __int64 *v30; // [rsp+C8h] [rbp-40h]
  int v31; // [rsp+D0h] [rbp-38h]
  int v32; // [rsp+D4h] [rbp-34h]
  int *v33; // [rsp+D8h] [rbp-30h]
  int v34; // [rsp+E0h] [rbp-28h]
  int v35; // [rsp+E4h] [rbp-24h]
  int *v36; // [rsp+E8h] [rbp-20h]
  int v37; // [rsp+F0h] [rbp-18h]
  int v38; // [rsp+F4h] [rbp-14h]
  int *v39; // [rsp+F8h] [rbp-10h]
  int v40; // [rsp+100h] [rbp-8h]
  int v41; // [rsp+104h] [rbp-4h]
  __int64 *v42; // [rsp+108h] [rbp+0h]
  int v43; // [rsp+110h] [rbp+8h]
  int v44; // [rsp+114h] [rbp+Ch]
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  v24 = -2LL;
  if ( !*((_BYTE *)this + 145) )
  {
    v3 = *(float *)a3;
    v4 = (int)*(float *)a3;
    LODWORD(v21) = v4;
    v5 = *((float *)a3 + 1);
    v6 = (int)v5;
    DWORD1(v21) = (int)v5;
    v7 = (int)(float)(v3 + *((float *)a3 + 2));
    DWORD2(v21) = v7;
    v8 = v5 + *((float *)a3 + 3);
    HIDWORD(v21) = (int)v8;
    v14 = 0LL;
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
      a2,
      &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
      &v14);
    v9 = v14;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_180438940;
      qword_180438940[0] = &LockScreenServiceLogging::`vftable';
      qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
      InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
    }
    v10 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v10 > 5u )
    {
      v22 = v9;
      v30 = &v22;
      v31 = 8;
      v32 = 0;
      v16 = v4;
      v33 = &v16;
      v34 = 4;
      v35 = 0;
      v17 = v6;
      v36 = &v17;
      v37 = 4;
      v38 = 0;
      v18 = v7;
      v39 = &v18;
      v40 = 4;
      v41 = 0;
      LODWORD(v19) = (int)v8;
      v42 = &v19;
      v43 = 4;
      v44 = 0;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18039495A - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      *(_DWORD *)&EventDescriptor.Level = 5;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(v10 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v27 = &unk_180394965;
      v28 = 63;
      v29 = 1;
      EventWriteTransfer(*(_QWORD *)(v10 + 32), &EventDescriptor, 0LL, 0LL, 7u, &UserData);
    }
    v25 = v21;
    v11 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v14 + 216LL))(v14, &v25);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1EB,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v11,
        UserDataCount);
    v12 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
}
