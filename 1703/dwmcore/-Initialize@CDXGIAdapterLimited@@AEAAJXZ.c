/*
 * XREFs of ?Initialize@CDXGIAdapterLimited@@AEAAJXZ @ 0x1800B5828
 * Callers:
 *     ?Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x1800B52F4 (-Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetKMTDriverVersion@CDXGIAdapterLimited@@AEAAJXZ @ 0x1800B5540 (-GetKMTDriverVersion@CDXGIAdapterLimited@@AEAAJXZ.c)
 *     ?GetKMTAdapterType@CDXGIAdapterLimited@@AEAAJXZ @ 0x1800B5620 (-GetKMTAdapterType@CDXGIAdapterLimited@@AEAAJXZ.c)
 *     ?EnumerateDWMOutputs@CDXGIAdapterLimited@@AEAAJXZ @ 0x1800B5700 (-EnumerateDWMOutputs@CDXGIAdapterLimited@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
  int KMTDriverVersion; // eax
  int KMTAdapterType; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  int v22; // eax
  __int64 v23; // [rsp+30h] [rbp-168h] BYREF
  _BYTE v24[320]; // [rsp+40h] [rbp-158h] BYREF

  v23 = 0LL;
  if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 3))(
         *((_QWORD *)this + 3),
         &GUID_0aa1ae0a_fa0e_4b84_8644_e05ff8e5acb5,
         &v23) < 0 )
  {
    v22 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 3) + 64LL))(
            *((_QWORD *)this + 3),
            (char *)this + 40);
    v3 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x84u);
      goto LABEL_11;
    }
  }
  else
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v23 + 88LL))(v23, v24);
    v3 = v2;
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x7Cu);
      goto LABEL_11;
    }
    v4 = 2LL;
    v5 = (_OWORD *)((char *)this + 40);
    v6 = v24;
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
  KMTDriverVersion = CDXGIAdapterLimited::GetKMTDriverVersion(this);
  v3 = KMTDriverVersion;
  if ( KMTDriverVersion < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, KMTDriverVersion, 0x87u);
  }
  else
  {
    KMTAdapterType = CDXGIAdapterLimited::GetKMTAdapterType(this);
    v3 = KMTAdapterType;
    if ( KMTAdapterType < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, KMTAdapterType, 0x88u);
    }
    else
    {
      v18 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 3))(
              *((_QWORD *)this + 3),
              &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2,
              (char *)this + 32);
      v3 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x8Au);
      }
      else
      {
        v19 = CDXGIAdapterLimited::EnumerateDWMOutputs(this);
        v3 = v19;
        if ( v19 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x91u);
      }
    }
  }
LABEL_11:
  v20 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return v3;
}
