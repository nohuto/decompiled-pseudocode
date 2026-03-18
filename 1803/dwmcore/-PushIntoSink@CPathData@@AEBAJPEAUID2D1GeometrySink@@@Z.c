/*
 * XREFs of ?PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z @ 0x180209418
 * Callers:
 *     ?GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x1802091A8 (-GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x180208CB0 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 */

__int64 __fastcall CPathData::PushIntoSink(CPathData *this, struct ID2D1GeometrySink *a2)
{
  char *v2; // rbx
  char *v4; // rdi
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // xmm1_4
  void (__fastcall *v9)(struct ID2D1GeometrySink *, __int128 *); // rax
  void (__fastcall *v10)(struct ID2D1GeometrySink *, __int128 *); // rax
  __int128 v11; // xmm0
  bool v12; // zf
  __int64 v13; // rax
  void (__fastcall *v14)(struct ID2D1GeometrySink *, __int128 *); // rax
  __int64 v15; // rdx
  char *v17; // [rsp+30h] [rbp-40h] BYREF
  __int128 v18; // [rsp+38h] [rbp-38h] BYREF
  int v19; // [rsp+48h] [rbp-28h]
  BOOL v20; // [rsp+4Ch] [rbp-24h]
  BOOL v21; // [rsp+50h] [rbp-20h]
  __int128 v22; // [rsp+58h] [rbp-18h] BYREF

  v2 = (char *)*((_QWORD *)this + 3);
  v4 = (char *)*((_QWORD *)this + 4);
  v5 = 0;
  v17 = v2;
  while ( v2 != v4 )
  {
    if ( v2[1] < 0 )
    {
      v6 = (unsigned __int8)v2[1];
      LODWORD(v6) = v6 & 0xFFFFFF7F;
      (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)a2 + 32LL))(a2, v6);
    }
    if ( *v2 )
    {
      switch ( *v2 )
      {
        case 1:
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, bool))(*(_QWORD *)a2 + 64LL))(a2, v2[2] != 0);
          break;
        case 2:
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD))(*(_QWORD *)a2 + 80LL))(a2, *((_QWORD *)v2 + 1));
          break;
        case 3:
          v11 = *(_OWORD *)(v2 + 8);
          v12 = v2[3] == 0;
          v20 = v2[2] != 0;
          v21 = !v12;
          v13 = *(_QWORD *)a2;
          v18 = v11;
          v14 = *(void (__fastcall **)(struct ID2D1GeometrySink *, __int128 *))(v13 + 112);
          v19 = *((_DWORD *)v2 + 6);
          v14(a2, &v18);
          break;
        case 4:
          v10 = *(void (__fastcall **)(struct ID2D1GeometrySink *, __int128 *))(*(_QWORD *)a2 + 96LL);
          v22 = *(_OWORD *)(v2 + 8);
          v10(a2, &v22);
          break;
        case 5:
          v7 = *(_QWORD *)a2;
          v8 = *((_DWORD *)v2 + 7);
          v18 = *(_OWORD *)(v2 + 8);
          v9 = *(void (__fastcall **)(struct ID2D1GeometrySink *, __int128 *))(v7 + 88);
          v19 = *((_DWORD *)v2 + 6);
          v20 = v8;
          v9(a2, &v18);
          break;
        default:
          v5 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1CCu);
          return v5;
      }
    }
    else
    {
      if ( v2[2] < 0 )
      {
        v15 = (unsigned __int8)v2[2];
        LODWORD(v15) = v15 & 0xFFFFFF7F;
        (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)a2 + 24LL))(a2, v15);
      }
      (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD, bool))(*(_QWORD *)a2 + 40LL))(
        a2,
        *((_QWORD *)v2 + 1),
        v2[3] != 0);
    }
    Path::SegmentCollection::const_iterator::operator++(&v17);
    v2 = v17;
  }
  return v5;
}
