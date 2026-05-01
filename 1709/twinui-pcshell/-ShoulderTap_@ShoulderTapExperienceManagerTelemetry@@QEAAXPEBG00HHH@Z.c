/*
 * XREFs of ?ShoulderTap_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG00HHH@Z @ 0x1800B37F4
 * Callers:
 *     ?ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z @ 0x1800B4810 (-ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ShoulderTapExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800B3618 (-Provider@ShoulderTapExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall ShoulderTapExperienceManagerTelemetry::ShoulderTap_(
        ShoulderTapExperienceManagerTelemetry *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        int a5,
        int a6,
        int a7)
{
  const struct _TlgProvider_t *v10; // r10
  const WCHAR *v11; // rcx
  const WCHAR *v12; // rdx
  __int64 v13; // rax
  const WCHAR *v14; // rdx
  int v15; // [rsp+38h] [rbp-61h] BYREF
  int v16; // [rsp+3Ch] [rbp-5Dh] BYREF
  int v17; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-51h] BYREF
  const WCHAR *v19; // [rsp+68h] [rbp-31h]
  int v20; // [rsp+70h] [rbp-29h]
  int v21; // [rsp+74h] [rbp-25h]
  const WCHAR *v22; // [rsp+78h] [rbp-21h]
  int v23; // [rsp+80h] [rbp-19h]
  int v24; // [rsp+84h] [rbp-15h]
  const WCHAR *v25; // [rsp+88h] [rbp-11h]
  int v26; // [rsp+90h] [rbp-9h]
  int v27; // [rsp+94h] [rbp-5h]
  int *v28; // [rsp+98h] [rbp-1h]
  __int64 v29; // [rsp+A0h] [rbp+7h]
  int *v30; // [rsp+A8h] [rbp+Fh]
  __int64 v31; // [rsp+B0h] [rbp+17h]
  int *v32; // [rsp+B8h] [rbp+1Fh]
  __int64 v33; // [rsp+C0h] [rbp+27h]

  v10 = ShoulderTapExperienceManagerLogging::Provider();
  if ( *(_DWORD *)v10 > 5u
    && (*((_QWORD *)v10 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v10 + 3) & 0x400000000000LL) == *((_QWORD *)v10 + 3) )
  {
    v11 = &word_18021F3A8;
    v12 = &word_18021F3A8;
    LODWORD(v13) = 0;
    if ( a2 )
    {
      v12 = a2;
      v13 = -1LL;
      do
        ++v13;
      while ( a2[v13] );
    }
    v19 = v12;
    v20 = 2 * v13 + 2;
    LODWORD(v13) = 0;
    v21 = 0;
    v14 = &word_18021F3A8;
    if ( a3 )
    {
      v14 = a3;
      v13 = -1LL;
      do
        ++v13;
      while ( a3[v13] );
    }
    v22 = v14;
    v23 = 2 * v13 + 2;
    LODWORD(v13) = 0;
    v24 = 0;
    if ( a4 )
    {
      v11 = a4;
      v13 = -1LL;
      do
        ++v13;
      while ( a4[v13] );
    }
    v25 = v11;
    v26 = 2 * v13 + 2;
    v15 = a5;
    v28 = &v15;
    v16 = a6;
    v30 = &v16;
    v17 = a7;
    v32 = &v17;
    v27 = 0;
    v29 = 4LL;
    v31 = 4LL;
    v33 = 4LL;
    TlgWrite(v10, &unk_18025B6FF, 0LL, 0LL, 8u, &pData);
  }
}
