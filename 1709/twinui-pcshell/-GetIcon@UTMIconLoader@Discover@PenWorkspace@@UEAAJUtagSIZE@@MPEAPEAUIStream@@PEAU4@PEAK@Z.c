/*
 * XREFs of ?GetIcon@UTMIconLoader@Discover@PenWorkspace@@UEAAJUtagSIZE@@MPEAPEAUIStream@@PEAU4@PEAK@Z @ 0x1800EE640
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1800EE894 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAUIRandomAccessStream@Streams@Storage@.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  struct tagSIZE *v9; // rsi
  unsigned int *v10; // r15
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // rdx
  __m128 v15; // xmm0
  __m128 v16; // xmm2
  int v17; // eax
  __int64 v18; // rdx
  int StreamOverRandomAccessStream; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  _QWORD v26[2]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v28; // [rsp+90h] [rbp+40h] BYREF
  struct tagSIZE v29; // [rsp+98h] [rbp+48h]
  __int64 v30; // [rsp+A8h] [rbp+58h] BYREF

  v29 = a2;
  v26[1] = -2LL;
  *a4 = 0LL;
  v9 = a5;
  *a5 = 0LL;
  v10 = a6;
  *a6 = 0;
  v28 = 0LL;
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 6) + 56LL))(*((_QWORD *)this + 6), &v28);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2B,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\iconloader.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_24;
  }
  v26[0] = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v28 + 64LL))(v28, v26);
  v12 = v13;
  if ( v13 >= 0 )
  {
    v15 = (__m128)COERCE_UNSIGNED_INT((float)a2.cx);
    v16 = (__m128)COERCE_UNSIGNED_INT((float)v29.cy);
    v16.m128_f32[0] = v16.m128_f32[0] * a3;
    a6 = 0LL;
    v15.m128_f32[0] = v15.m128_f32[0] * a3;
    v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, unsigned int **))(*(_QWORD *)v26[0] + 64LL))(
            v26[0],
            v14,
            _mm_unpacklo_ps(v15, v16).m128_u64[0],
            &a6);
    v12 = v17;
    if ( v17 < 0 )
    {
      v18 = 53LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\iconloader.cpp",
        (const char *)(unsigned int)v17);
LABEL_20:
      v22 = a6;
      if ( a6 )
      {
        a6 = 0LL;
        (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v22 + 16LL))(v22);
      }
      goto LABEL_22;
    }
    v17 = (*(__int64 (__fastcall **)(__int64, struct tagSIZE **))(*(_QWORD *)v28 + 72LL))(v28, &a5);
    v12 = v17;
    if ( v17 < 0 )
    {
      v18 = 56LL;
      goto LABEL_11;
    }
    *v10 = BYTE1(a5) | (BYTE2(a5) << 8) | ((BYTE3(a5) | ((unsigned __int8)a5 << 8)) << 16);
    v17 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Storage::Streams::IRandomAccessStream *>,Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream *>>(a6);
    v12 = v17;
    if ( v17 < 0 )
    {
      v18 = 60LL;
      goto LABEL_11;
    }
    v30 = 0LL;
    StreamOverRandomAccessStream = (*(__int64 (__fastcall **)(unsigned int *, __int64 *))(*(_QWORD *)a6 + 64LL))(
                                     a6,
                                     &v30);
    v12 = StreamOverRandomAccessStream;
    if ( StreamOverRandomAccessStream >= 0 )
    {
      StreamOverRandomAccessStream = CreateStreamOverRandomAccessStream(
                                       v30,
                                       &GUID_0000000c_0000_0000_c000_000000000046,
                                       a4);
      v12 = StreamOverRandomAccessStream;
      if ( StreamOverRandomAccessStream >= 0 )
      {
        *v9 = a2;
        v12 = 0;
LABEL_18:
        v21 = v30;
        if ( v30 )
        {
          v30 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
        goto LABEL_20;
      }
      v20 = 65LL;
    }
    else
    {
      v20 = 63LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v20,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\iconloader.cpp",
      (const char *)(unsigned int)StreamOverRandomAccessStream);
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x2E,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\iconloader.cpp",
    (const char *)(unsigned int)v13);
LABEL_22:
  v23 = v26[0];
  if ( v26[0] )
  {
    v26[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
LABEL_24:
  v24 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  return v12;
}
