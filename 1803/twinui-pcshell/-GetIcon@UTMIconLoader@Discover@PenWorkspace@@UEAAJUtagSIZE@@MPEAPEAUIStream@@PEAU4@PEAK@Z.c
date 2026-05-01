/*
 * XREFs of ?GetIcon@UTMIconLoader@Discover@PenWorkspace@@UEAAJUtagSIZE@@MPEAPEAUIStream@@PEAU4@PEAK@Z @ 0x180199E20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180199BEC (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAUIRandomAccessStream@Streams@Storage@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall PenWorkspace::Discover::UTMIconLoader::GetIcon(
        PenWorkspace::Discover::UTMIconLoader *this,
        struct tagSIZE a2,
        float a3,
        struct IStream **a4,
        struct tagSIZE *a5,
        unsigned int *a6)
{
  struct tagSIZE *v8; // rsi
  unsigned int *v9; // r15
  __int64 v10; // rdi
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rdi
  int v14; // eax
  __m128 v15; // xmm7
  __m128 v16; // xmm6
  __int64 v17; // rdi
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  int v21; // edx
  __int64 v22; // r8
  unsigned int *v23; // rdi
  int StreamOverRandomAccessStream; // eax
  __int64 v25; // rdx
  __int64 v27[4]; // [rsp+30h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v29; // [rsp+A0h] [rbp+30h] BYREF
  struct tagSIZE v30; // [rsp+A8h] [rbp+38h]
  __int64 v31; // [rsp+B8h] [rbp+48h] BYREF

  v30 = a2;
  v27[1] = -2LL;
  *a4 = 0LL;
  v8 = a5;
  a5->cy = 0;
  v8->cx = 0;
  v9 = a6;
  *a6 = 0;
  v29 = 0LL;
  v10 = *((_QWORD *)this + 5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 56LL))(v10, &v29);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v27[0] = 0LL;
    v13 = v29;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v27);
    v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 64LL))(v13, v27);
    v12 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2E,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\iconloader.cpp",
        (const char *)(unsigned int)v14);
LABEL_20:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v27);
      goto LABEL_21;
    }
    v15 = (__m128)COERCE_UNSIGNED_INT((float)a2.cx);
    v15.m128_f32[0] = v15.m128_f32[0] * a3;
    v16 = (__m128)COERCE_UNSIGNED_INT((float)v30.cy);
    v16.m128_f32[0] = v16.m128_f32[0] * a3;
    a6 = 0LL;
    v17 = v27[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a6);
    v19 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, unsigned int **))(*(_QWORD *)v17 + 64LL))(
            v17,
            v18,
            _mm_unpacklo_ps(v15, v16).m128_u64[0],
            &a6);
    v12 = v19;
    if ( v19 < 0 )
    {
      v20 = 53LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\iconloader.cpp",
        (const char *)(unsigned int)v19);
LABEL_19:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a6);
      goto LABEL_20;
    }
    v19 = (*(__int64 (__fastcall **)(__int64, struct tagSIZE **))(*(_QWORD *)v29 + 72LL))(v29, &a5);
    v12 = v19;
    if ( v19 < 0 )
    {
      v20 = 56LL;
      goto LABEL_11;
    }
    *v9 = BYTE1(a5) | (BYTE2(a5) << 8) | ((BYTE3(a5) | ((unsigned __int8)a5 << 8)) << 16);
    v19 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Storage::Streams::IRandomAccessStream *>,Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream *>>(
            (__int64)a6,
            v21,
            v22);
    v12 = v19;
    if ( v19 < 0 )
    {
      v20 = 60LL;
      goto LABEL_11;
    }
    v31 = 0LL;
    v23 = a6;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
    StreamOverRandomAccessStream = (*(__int64 (__fastcall **)(unsigned int *, __int64 *))(*(_QWORD *)v23 + 64LL))(
                                     v23,
                                     &v31);
    v12 = StreamOverRandomAccessStream;
    if ( StreamOverRandomAccessStream >= 0 )
    {
      StreamOverRandomAccessStream = CreateStreamOverRandomAccessStream(
                                       v31,
                                       &GUID_0000000c_0000_0000_c000_000000000046,
                                       a4);
      v12 = StreamOverRandomAccessStream;
      if ( StreamOverRandomAccessStream >= 0 )
      {
        *v8 = a2;
        v12 = 0;
        goto LABEL_18;
      }
      v25 = 65LL;
    }
    else
    {
      v25 = 63LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\iconloader.cpp",
      (const char *)(unsigned int)StreamOverRandomAccessStream);
LABEL_18:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2B,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\iconloader.cpp",
    (const char *)(unsigned int)v11);
LABEL_21:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  return v12;
}
