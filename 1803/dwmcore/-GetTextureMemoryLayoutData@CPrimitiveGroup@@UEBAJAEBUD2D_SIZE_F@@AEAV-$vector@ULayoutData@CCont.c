/*
 * XREFs of ?GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x18019F100
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$03$0A@@@@Z @ 0x18007D9BC (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@UtagRECT.c)
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x180097C3C (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x18017B704 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 *     ??$emplace_back@AEBULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAXAEBULayoutData@CContent@@@Z @ 0x180198700 (--$emplace_back@AEBULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutDat.c)
 */

__int64 __fastcall CPrimitiveGroup::GetTextureMemoryLayoutData(CComposition **a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  int v6; // eax
  unsigned int v7; // ebx
  FastRegion::CRegion *ContentRegion; // rax
  int appended; // eax
  unsigned int i; // edi
  __int64 v11; // rax
  __int64 j; // rcx
  unsigned __int64 v13; // xmm0_8
  float v15; // [rsp+38h] [rbp-79h]
  float v16; // [rsp+3Ch] [rbp-75h]
  int v17; // [rsp+40h] [rbp-71h]
  int v18; // [rsp+44h] [rbp-6Dh]
  __int128 v19; // [rsp+48h] [rbp-69h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-59h]
  float v21; // [rsp+60h] [rbp-51h]
  float v22; // [rsp+64h] [rbp-4Dh]
  int v23; // [rsp+68h] [rbp-49h]
  int v24; // [rsp+6Ch] [rbp-45h]
  _QWORD v25[2]; // [rsp+78h] [rbp-39h] BYREF
  int v26; // [rsp+88h] [rbp-29h]
  int v27; // [rsp+8Ch] [rbp-25h]
  unsigned int v28; // [rsp+90h] [rbp-21h]
  _BYTE v29[64]; // [rsp+98h] [rbp-19h] BYREF

  v3 = *a3;
  v28 = 0;
  a3[1] = v3;
  v25[0] = v29;
  v25[1] = v29;
  v26 = 4;
  v27 = 4;
  v6 = CPrimitiveGroup::EnsureDrawListGenerator(a1);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x25Eu);
  }
  else
  {
    ContentRegion = CPrimitiveGroupDrawListGenerator::GetContentRegion(a1[20]);
    v28 = 0;
    appended = CRegion::AppendAllRectangles<DynArrayIA<tagRECT,4,0>>(ContentRegion, (__int64)v25);
    v7 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x261u);
    }
    else
    {
      for ( i = 0; i < v28; ++i )
      {
        v11 = v25[0] + 16LL * i;
        for ( j = 0LL; j < 4; ++j )
          *(&v15 + j) = (float)*(int *)(v11 + 4 * j);
        v21 = v15;
        v22 = v16;
        v23 = v17;
        v24 = v18;
        if ( v15 == 0.0 && v16 == 0.0 )
        {
          v19 = _xmm;
          v13 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        }
        else
        {
          v19 = _xmm;
          v13 = _mm_unpacklo_ps((__m128)LODWORD(v15), (__m128)LODWORD(v16)).m128_u64[0];
        }
        v20 = v13;
        std::vector<CContent::LayoutData>::emplace_back<CContent::LayoutData const &>((__int64)a3, (__int64)&v19);
      }
    }
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v25);
  return v7;
}
