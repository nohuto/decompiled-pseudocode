/*
 * XREFs of ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x1800B6DB8
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800B768C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800B7A50 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180009E80 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x18000A978 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180018A18 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180030C18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180030CF0 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x180061852 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800ADB58 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ??$AtlConvAllocMemory@G@ATL@@YAXPEAPEAGHPEAGH@Z @ 0x1800B6B8C (--$AtlConvAllocMemory@G@ATL@@YAXPEAPEAGHPEAGH@Z.c)
 *     ??9ATL@@YA_NPEBDAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z @ 0x1800B6C48 (--9ATL@@YA_NPEBDAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z.c)
 *     ?GetAt@?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x1800B6D98 (-GetAt@-$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800B8014 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppAudioSessionId::Initialize(CAppAudioSessionId *this, char *a2)
{
  CAppAudioSessionId *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // r8
  int v6; // ebx
  char *v7; // rdx
  char *v8; // rcx
  volatile signed __int32 *v9; // rbx
  __int64 v10; // r14
  __int64 v11; // r8
  char *v12; // rdx
  char *v13; // rcx
  volatile signed __int32 *v14; // rbx
  __int64 v15; // r14
  __int64 v16; // r8
  __int64 *v17; // rax
  unsigned __int16 *v18; // rcx
  char v19; // bl
  __int64 v20; // rbx
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // r9
  size_t v24; // r8
  unsigned __int16 *v25; // rcx
  volatile signed __int32 *v26; // rbx
  __int64 v27; // r14
  int *v29; // rbx
  int *v30; // rbx
  int *v31; // rbx
  int v32; // [rsp+20h] [rbp-1A8h] BYREF
  int v33; // [rsp+24h] [rbp-1A4h]
  unsigned __int16 *v34; // [rsp+28h] [rbp-1A0h] BYREF
  void *Src; // [rsp+30h] [rbp-198h] BYREF
  char *v36; // [rsp+38h] [rbp-190h] BYREF
  int v37; // [rsp+40h] [rbp-188h]
  CAppAudioSessionId *v38; // [rsp+48h] [rbp-180h]
  __int64 v39; // [rsp+50h] [rbp-178h] BYREF
  __int64 v40; // [rsp+58h] [rbp-170h] BYREF
  __int64 v41[2]; // [rsp+60h] [rbp-168h] BYREF
  ATL::CAtlException *v42; // [rsp+70h] [rbp-158h] BYREF
  ATL::CAtlException *v43; // [rsp+78h] [rbp-150h] BYREF
  ATL::CAtlException *v44; // [rsp+80h] [rbp-148h] BYREF
  LPCOLESTR lpsz; // [rsp+90h] [rbp-138h] BYREF
  _BYTE v46[264]; // [rsp+98h] [rbp-130h] BYREF

  v41[1] = -2LL;
  v3 = this;
  v38 = this;
  v37 = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v34, (ATL::CAtlStringMgr *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&Src, (ATL::CAtlStringMgr *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v36, (ATL::CAtlStringMgr *)&ATL::g_strmgr);
  try
  {
    if ( a2 )
    {
      v4 = -1LL;
      do
        ++v4;
      while ( *(_WORD *)&a2[2 * v4] );
    }
    else
    {
      LODWORD(v4) = 0;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString((const void **)&v36, a2, (unsigned int)v4);
  }
  catch ( ATL::CAtlException *v42 )
  {
    v29 = (int *)v42;
    if ( *(_DWORD *)v42 == -1073741571 )
      _o__resetstkoflw();
    v33 = *v29;
    v6 = v33;
    if ( v33 < 0 )
      goto LABEL_56;
    v3 = v38;
  }
  *((GUID *)v3 + 1) = GUID_00000000_0000_0000_0000_000000000000;
  v32 = 0;
  v7 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                  (__int64 *)&v36,
                  &v39,
                  v5,
                  &v32);
  v8 = v7 - 24;
  v9 = (volatile signed __int32 *)(v34 - 12);
  if ( v7 - 24 != (char *)(v34 - 12) )
  {
    if ( *((int *)v9 + 4) >= 0 && *(_QWORD *)v8 == *(_QWORD *)v9 )
    {
      v10 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v8);
      if ( _InterlockedExchangeAdd(v9 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v9 + 8LL))(*(_QWORD *)v9, v9);
      v34 = (unsigned __int16 *)(v10 + 24);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((const void **)&v34, v7, *((unsigned int *)v7 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v39 - 24));
  if ( v32 == -1 )
    goto LABEL_17;
  v12 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   (__int64 *)&v36,
                   &v40,
                   v11,
                   &v32);
  v13 = v12 - 24;
  v14 = (volatile signed __int32 *)((char *)Src - 24);
  if ( v12 - 24 != (char *)Src - 24 )
  {
    if ( *((int *)v14 + 4) >= 0 && *(_QWORD *)v13 == *(_QWORD *)v14 )
    {
      v15 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v13);
      if ( _InterlockedExchangeAdd(v14 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v14 + 8LL))(*(_QWORD *)v14, v14);
      Src = (void *)(v15 + 24);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((const void **)&Src, v12, *((unsigned int *)v12 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v40 - 24));
  if ( v32 == -1 )
    goto LABEL_17;
  v17 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          (__int64 *)&v36,
          v41,
          v16,
          &v32);
  v37 = 1;
  if ( ATL::operator!=(v18, v17) || (v19 = 0, v32 != -1) )
    v19 = 1;
  ATL::CStringData::Release((ATL::CStringData *)(v41[0] - 24));
  if ( v19 )
  {
LABEL_17:
    v6 = -2147467259;
    goto LABEL_56;
  }
  if ( *((_DWORD *)v34 - 4) == 1 && (unsigned __int16)ATL::CSimpleStringT<unsigned short,0>::GetAt(&v34) == 35 )
  {
    *((_DWORD *)v3 + 10) = 1;
  }
  else
  {
    try
    {
      CAudioIdentifier::UnescapeIdentifierString(&v34);
    }
    catch ( ATL::CAtlException *v43 )
    {
      v30 = (int *)v43;
      if ( *(_DWORD *)v43 == -1073741571 )
        _o__resetstkoflw();
      v33 = *v30;
      v6 = v33;
      if ( v33 < 0 )
        goto LABEL_56;
      v3 = v38;
    }
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&Src);
  }
  catch ( ATL::CAtlException *v44 )
  {
    v31 = (int *)v44;
    if ( *(_DWORD *)v44 == -1073741571 )
      _o__resetstkoflw();
    v33 = *v31;
    v6 = v33;
    if ( v33 < 0 )
      goto LABEL_56;
    v3 = v38;
  }
  lpsz = (LPCOLESTR)v46;
  if ( Src )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *((_WORD *)Src + v20) );
    v21 = v20 + 1;
    ATL::AtlConvAllocMemory<unsigned short>((void **)&lpsz, v21, v46);
    v24 = 2LL * v21;
    if ( v24 )
    {
      if ( !lpsz )
      {
        *(_DWORD *)_o__errno(0LL, v22, v24, v23) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memcpy_0((void *)lpsz, Src, v24);
    }
  }
  else
  {
    lpsz = 0LL;
  }
  v6 = CLSIDFromString(lpsz, (LPCLSID)v3 + 1);
  if ( lpsz != (LPCOLESTR)v46 )
    free((void *)lpsz);
  if ( v6 < 0 )
    goto LABEL_56;
  v25 = v34 - 12;
  v26 = (volatile signed __int32 *)(*(_QWORD *)v3 - 24LL);
  if ( v34 - 12 != (unsigned __int16 *)v26 )
  {
    if ( *((int *)v26 + 4) >= 0 && *(_QWORD *)v25 == *(_QWORD *)v26 )
    {
      v27 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v25);
      if ( _InterlockedExchangeAdd(v26 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v26 + 8LL))(*(_QWORD *)v26, v26);
      *(_QWORD *)v3 = v27 + 24;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((const void **)v3, (char *)v34, *((unsigned int *)v34 - 4));
    }
  }
  v6 = CAppAudioSessionId::CalculateStaticId((const void **)v3);
  if ( v6 < 0 )
LABEL_56:
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 450, v6);
  ATL::CStringData::Release((ATL::CStringData *)(v36 - 24));
  ATL::CStringData::Release((ATL::CStringData *)((char *)Src - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v34 - 12));
  return (unsigned int)v6;
}
