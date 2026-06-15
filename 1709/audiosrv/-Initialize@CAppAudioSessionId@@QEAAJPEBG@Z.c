/*
 * XREFs of ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x18007DFC4
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x18007E6CC (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18007E9E0 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x1800142B0 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800146FC (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x1800147BC (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001827C (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x180033A26 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18005B588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800768B4 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ??$AtlConvAllocMemory@G@ATL@@YAXPEAPEAGHPEAGH@Z @ 0x18007DCC4 (--$AtlConvAllocMemory@G@ATL@@YAXPEAPEAGHPEAGH@Z.c)
 *     ??9ATL@@YA_NPEBDAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z @ 0x18007DD7C (--9ATL@@YA_NPEBDAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z.c)
 *     ?GetAt@?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x18007DF64 (-GetAt@-$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18007F1C8 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppAudioSessionId::Initialize(CAppAudioSessionId *this, char *a2)
{
  CAppAudioSessionId *v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r8
  int v7; // ebx
  __int64 *v8; // rax
  __int64 v9; // r8
  __int64 *v10; // rax
  __int64 v11; // r8
  __int64 *v12; // rax
  unsigned __int16 *v13; // rcx
  char v14; // r14
  int v15; // ebx
  __int64 v16; // rdx
  int *v18; // rbx
  int *v19; // rbx
  int *v20; // rbx
  int v21; // [rsp+20h] [rbp-198h] BYREF
  void *Src; // [rsp+28h] [rbp-190h] BYREF
  unsigned __int16 *v23; // [rsp+30h] [rbp-188h] BYREF
  __int64 v24; // [rsp+38h] [rbp-180h] BYREF
  __int64 v25; // [rsp+40h] [rbp-178h] BYREF
  CAppAudioSessionId *v26; // [rsp+48h] [rbp-170h]
  __int64 v27[2]; // [rsp+50h] [rbp-168h] BYREF
  ATL::CAtlException *v28; // [rsp+60h] [rbp-158h] BYREF
  ATL::CAtlException *v29; // [rsp+68h] [rbp-150h] BYREF
  ATL::CAtlException *v30; // [rsp+70h] [rbp-148h] BYREF
  LPCOLESTR lpsz; // [rsp+80h] [rbp-138h] BYREF
  _BYTE v32[264]; // [rsp+88h] [rbp-130h] BYREF

  v27[1] = -2LL;
  v3 = this;
  v26 = this;
  LODWORD(v24) = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v23, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&Src, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v25, (__int64)&ATL::g_strmgr);
  try
  {
    v4 = -1LL;
    if ( a2 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( *(_WORD *)&a2[2 * v5] );
    }
    else
    {
      LODWORD(v5) = 0;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v25, a2, v5);
  }
  catch ( ATL::CAtlException *v28 )
  {
    v18 = (int *)v28;
    if ( *(_DWORD *)v28 == -1073741571 )
      _o__resetstkoflw();
    v21 = *v18;
    v7 = v21;
    if ( v21 < 0 )
      goto LABEL_34;
    v4 = -1LL;
    v3 = v26;
  }
  *((GUID *)v3 + 1) = GUID_00000000_0000_0000_0000_000000000000;
  v21 = 0;
  v8 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
         &v25,
         &v24,
         v6,
         &v21);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v23, v8);
  ATL::CStringData::Release((ATL::CStringData *)(v24 - 24));
  if ( v21 == -1 )
    goto LABEL_10;
  v10 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v25,
          &v24,
          v9,
          &v21);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&Src, v10);
  ATL::CStringData::Release((ATL::CStringData *)(v24 - 24));
  if ( v21 == -1 )
    goto LABEL_10;
  v12 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v25,
          v27,
          v11,
          &v21);
  LODWORD(v24) = 1;
  if ( ATL::operator!=(v13, v12) || (v14 = 0, v21 != -1) )
    v14 = 1;
  ATL::CStringData::Release((ATL::CStringData *)(v27[0] - 24));
  if ( v14 )
  {
LABEL_10:
    v7 = -2147467259;
    goto LABEL_34;
  }
  if ( *((_DWORD *)v23 - 4) == 1 && (unsigned __int16)ATL::CSimpleStringT<unsigned short,0>::GetAt(&v23) == 35 )
  {
    *((_DWORD *)v3 + 10) = 1;
  }
  else
  {
    try
    {
      CAudioIdentifier::UnescapeIdentifierString(&v23);
    }
    catch ( ATL::CAtlException *v29 )
    {
      v19 = (int *)v29;
      if ( *(_DWORD *)v29 == -1073741571 )
        _o__resetstkoflw();
      v21 = *v19;
      v7 = v21;
      if ( v21 < 0 )
        goto LABEL_34;
      v4 = -1LL;
      v3 = v26;
    }
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&Src);
  }
  catch ( ATL::CAtlException *v30 )
  {
    v20 = (int *)v30;
    if ( *(_DWORD *)v30 == -1073741571 )
      _o__resetstkoflw();
    v21 = *v20;
    v7 = v21;
    if ( v21 < 0 )
      goto LABEL_34;
    v4 = -1LL;
    v3 = v26;
  }
  lpsz = (LPCOLESTR)v32;
  if ( Src )
  {
    do
      ++v4;
    while ( *((_WORD *)Src + v4) );
    v15 = v4 + 1;
    ATL::AtlConvAllocMemory<unsigned short>((void **)&lpsz, v15, v32);
    if ( 2LL * v15 )
    {
      if ( !lpsz )
      {
        *(_DWORD *)_o__errno(0LL, v16) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memcpy_0((void *)lpsz, Src, 2LL * v15);
    }
  }
  else
  {
    lpsz = 0LL;
  }
  v7 = CLSIDFromString(lpsz, (LPCLSID)v3 + 1);
  if ( lpsz != (LPCOLESTR)v32 )
    free((void *)lpsz);
  if ( v7 < 0
    || (ATL::CSimpleStringT<unsigned short,0>::operator=(v3, &v23),
        v7 = CAppAudioSessionId::CalculateStaticId((const GUID *)v3),
        v7 < 0) )
  {
LABEL_34:
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 450, v7);
  }
  ATL::CStringData::Release((ATL::CStringData *)(v25 - 24));
  ATL::CStringData::Release((ATL::CStringData *)((char *)Src - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v23 - 12));
  return (unsigned int)v7;
}
