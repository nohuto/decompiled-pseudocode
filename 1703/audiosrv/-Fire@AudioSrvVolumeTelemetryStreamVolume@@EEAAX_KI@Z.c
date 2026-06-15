/*
 * XREFs of ?Fire@AudioSrvVolumeTelemetryStreamVolume@@EEAAX_KI@Z @ 0x18002CC40
 * Callers:
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x180018220 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 *     ??1CAudioStream@@MEAA@XZ @ 0x180019880 (--1CAudioStream@@MEAA@XZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180038800 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     atexit @ 0x18004925C (atexit.c)
 */

void __fastcall AudioSrvVolumeTelemetryStreamVolume::Fire(
        AudioSrvVolumeTelemetryStreamVolume *this,
        __int64 a2,
        unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // r10
  const CHAR *v6; // rcx
  const CHAR *v7; // rdx
  __int64 v8; // rax
  const WCHAR *v9; // rcx
  bool v10; // cf
  const WCHAR *v11; // r8
  __int64 v12; // rax
  const WCHAR *v13; // rdx
  const WCHAR *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v20[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h]
  unsigned __int16 *v22; // [rsp+60h] [rbp-A0h]
  int v23; // [rsp+68h] [rbp-98h]
  int v24; // [rsp+6Ch] [rbp-94h]
  void *v25; // [rsp+70h] [rbp-90h]
  int v26; // [rsp+78h] [rbp-88h]
  int v27; // [rsp+7Ch] [rbp-84h]
  const CHAR *v28; // [rsp+80h] [rbp-80h]
  int v29; // [rsp+88h] [rbp-78h]
  int v30; // [rsp+8Ch] [rbp-74h]
  const WCHAR *v31; // [rsp+90h] [rbp-70h]
  int v32; // [rsp+98h] [rbp-68h]
  int v33; // [rsp+9Ch] [rbp-64h]
  char *v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  const WCHAR *v36; // [rsp+B0h] [rbp-50h]
  int v37; // [rsp+B8h] [rbp-48h]
  int v38; // [rsp+BCh] [rbp-44h]
  char *v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  char *v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+D8h] [rbp-28h]
  __int64 *v43; // [rsp+E0h] [rbp-20h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  __int64 *v45; // [rsp+F0h] [rbp-10h]
  __int64 v46; // [rsp+F8h] [rbp-8h]
  __int64 v47; // [rsp+138h] [rbp+38h] BYREF

  v47 = a2;
  v3 = a3;
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    qword_18012BF30[0] = &AudioSrvTelemetryProvider::`vftable';
    Context = qword_18012BF30;
    qword_18012BF48 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18012BF30, qword_18012BF48);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18012BF30);
  }
  v5 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 4u
    && (*(_QWORD *)(v5 + 16) & 0x400000000000LL) != 0
    && (*(_QWORD *)(v5 + 24) & 0x400000000000LL) == *(_QWORD *)(v5 + 24) )
  {
    v6 = (char *)this + 72;
    if ( *((_QWORD *)this + 12) >= 0x10uLL )
      v6 = *(const CHAR **)v6;
    v7 = MultiByteStr;
    LODWORD(v8) = 0;
    if ( v6 )
    {
      v7 = v6;
      v8 = -1LL;
      do
        ++v8;
      while ( v6[v8] );
    }
    v28 = v7;
    v29 = v8 + 1;
    v9 = (const WCHAR *)((char *)this + 104);
    v10 = *((_QWORD *)this + 16) < 8uLL;
    v30 = 0;
    if ( !v10 )
      v9 = *(const WCHAR **)v9;
    v11 = &word_1800EAD74;
    LODWORD(v12) = 0;
    v13 = &word_1800EAD74;
    if ( v9 )
    {
      v13 = v9;
      v12 = -1LL;
      do
        ++v12;
      while ( v9[v12] );
    }
    v31 = v13;
    v32 = 2 * v12 + 2;
    v14 = (const WCHAR *)((char *)this + 144);
    v10 = *((_QWORD *)this + 21) < 8uLL;
    v34 = (char *)this + 136;
    v33 = 0;
    v35 = 8LL;
    if ( !v10 )
      v14 = *(const WCHAR **)v14;
    LODWORD(v15) = 0;
    if ( v14 )
    {
      v11 = v14;
      v15 = -1LL;
      do
        ++v15;
      while ( v14[v15] );
    }
    v36 = v11;
    v37 = 2 * v15 + 2;
    v39 = (char *)this + 176;
    v41 = (char *)this + 180;
    v43 = &v19;
    v45 = &v47;
    v38 = 0;
    v40 = 4LL;
    v42 = 4LL;
    v19 = v3;
    v44 = 8LL;
    v46 = 8LL;
    v20[1] = 4;
    v22 = *(unsigned __int16 **)(v5 + 8);
    v20[0] = ((unsigned int)&unk_1800F883A - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v16 = *(_QWORD *)(v5 + 32);
    v21 = 0x400000000000LL;
    v23 = *v22;
    v25 = &unk_1800F8845;
    v24 = 2;
    v26 = 170;
    v27 = 1;
    EtwEventWriteTransfer(v16, v20, 0LL, 0LL);
  }
}
