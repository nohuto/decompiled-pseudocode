/*
 * XREFs of ?Initialize@CDXGIAdapterLimited@@AEAAJXZ @ 0x1800CB108
 * Callers:
 *     ?Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x1800CA6B8 (-Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetKMTDriverVersion@CDXGIAdapterLimited@@AEAAJXZ @ 0x1800CAF48 (-GetKMTDriverVersion@CDXGIAdapterLimited@@AEAAJXZ.c)
 *     ?GetKMTAdapterType@CDXGIAdapterLimited@@AEAAJXZ @ 0x1800CB028 (-GetKMTAdapterType@CDXGIAdapterLimited@@AEAAJXZ.c)
 *     ?EnumerateDWMOutputs@CDXGIAdapterLimited@@AEAAJXZ @ 0x1800CB314 (-EnumerateDWMOutputs@CDXGIAdapterLimited@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDXGIAdapterLimited::Initialize(CDXGIAdapterLimited *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  _OWORD *v5; // rax
  _OWORD *v6; // rcx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  int v16; // eax
  bool v17; // cl
  int KMTDriverVersion; // eax
  int KMTAdapterType; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v25; // eax
  __int64 v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v28[304]; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+170h] [rbp+70h]

  v27 = 0LL;
  v26 = 0LL;
  if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 3))(
         *((_QWORD *)this + 3),
         &GUID_0aa1ae0a_fa0e_4b84_8644_e05ff8e5acb5,
         &v27) < 0 )
  {
    v25 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 3) + 64LL))(
            *((_QWORD *)this + 3),
            (char *)this + 40);
    v3 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x87u);
      goto LABEL_14;
    }
  }
  else
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v27 + 88LL))(v27, v28);
    v3 = v2;
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x7Fu);
      goto LABEL_14;
    }
    v4 = 2LL;
    v5 = (_OWORD *)((char *)this + 40);
    v6 = v28;
    do
    {
      v7 = v6[1];
      *v5 = *v6;
      v8 = v6[2];
      v5[1] = v7;
      v9 = v6[3];
      v5[2] = v8;
      v10 = v6[4];
      v5[3] = v9;
      v11 = v6[5];
      v5[4] = v10;
      v12 = v6[6];
      v5[5] = v11;
      v13 = v6[7];
      v6 += 8;
      v5[6] = v12;
      v5 += 8;
      *(v5 - 1) = v13;
      --v4;
    }
    while ( v4 );
    v14 = v6[1];
    *v5 = *v6;
    v15 = v6[2];
    v5[1] = v14;
    v5[2] = v15;
  }
  if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 3))(
         *((_QWORD *)this + 3),
         &GUID_3c8d99d1_4fbf_4181_a82c_af66bf7bd24e,
         &v26) >= 0 )
  {
    v16 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v26 + 144LL))(v26, v28);
    v3 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x8Eu);
      goto LABEL_14;
    }
    v17 = (v29 & 0x10) != 0;
    *((_BYTE *)this + 344) = (v29 & 8) != 0;
    *((_BYTE *)this + 345) = v17;
  }
  KMTDriverVersion = CDXGIAdapterLimited::GetKMTDriverVersion(this);
  v3 = KMTDriverVersion;
  if ( KMTDriverVersion < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, KMTDriverVersion, 0x94u);
  }
  else
  {
    KMTAdapterType = CDXGIAdapterLimited::GetKMTAdapterType(this);
    v3 = KMTAdapterType;
    if ( KMTAdapterType < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, KMTAdapterType, 0x95u);
    }
    else
    {
      v20 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 3))(
              *((_QWORD *)this + 3),
              &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2,
              (char *)this + 32);
      v3 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x97u);
      }
      else
      {
        v21 = CDXGIAdapterLimited::EnumerateDWMOutputs(this);
        v3 = v21;
        if ( v21 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x9Eu);
      }
    }
  }
LABEL_14:
  v22 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return v3;
}
